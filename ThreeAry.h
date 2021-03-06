

/* 
 * File:   ThreeAry.h
 * Author: Terianne Bolding
 *
 * NOTES: The way this tree is structured is upon node insertion, the tree will
 * always fill up from left to right. So in this case, a node will always be deleted
 * from right to left. This will allow for the tree to remain balanced, for the most part,
 * at any given time. No other ordering is applied to the tree.
 */

#ifndef THREEARY_H
#define THREEARY_H
#include "ThreeTreeNode.h"
#include "TreeIterator.h"
#include <memory>
using std::unique_ptr;

template <class T>
class ThreeAry{
private:
     unique_ptr<ThreeTreeNode<T>> root;
    //Internal recursive function called by the public Insert()
    //Recursively searches through the tree until it finds the next open spot in the tree
    //The tree is filled from left to right.
    void Insert(unique_ptr<ThreeTreeNode<T>> &node, T const &data){
        if(!node)node.reset(new ThreeTreeNode<T>(data));
        else if(node->rightChild){ //If the branch is full - check lower layers
            if(node->rightChild->rightChild)Insert(node->leftChild,data); // If next branch full - send to first element of left branch
            else if(node->middleChild->rightChild)Insert(node->rightChild,data);
            else if(node->middleChild->leftChild)Insert(node->middleChild,data);
            else if(node->leftChild->rightChild)Insert(node->middleChild,data);
            else Insert(node->leftChild,data);
        }
        else if(node->middleChild)Insert(node->rightChild,data);
        else if(node->leftChild)Insert(node->middleChild,data);
        else Insert(node->leftChild,data);
    }
    //Internal recursive remove function. Called by the public Remove() function.)
    void Remove(unique_ptr<ThreeTreeNode<T>> &node){
        // leaf Node
        // NOTE: Because of the nature of the tree being self balancing, a leaf node
        //       cannot just be deleted, it must be replaced by the outer most leaf to
        //       keep the tree balanced.
        unique_ptr<ThreeTreeNode<T>> &leaf = FindLeaf(root);
        if(!node->leftChild){
            if(node->key != leaf->key) node.reset(leaf.release());
            else node.reset();
        }
        // One Child
        else if(!node->middleChild)node.reset(node->leftChild.release());
        // Two Children
        else if(!node->rightChild){
                node->middleChild->leftChild.reset(node->leftChild.release());
                node.reset(node->middleChild.release());
        }
        // Three Children
        else{
            if(leaf != node->leftChild)leaf->leftChild.reset(node->leftChild.release());
            if(leaf != node->middleChild)leaf->middleChild.reset(node->middleChild.release());
            if(leaf != node->rightChild) leaf->rightChild.reset(node->rightChild.release());
            node.reset(leaf.release());
        }
    }
    //Find the farthest leaf node in the tree. This will be the leaf node farthest right. Returns the node 
    unique_ptr<ThreeTreeNode<T>> & FindLeaf(unique_ptr<ThreeTreeNode<T>> &node){
        if(!node->leftChild)return node;
        else if(node->rightChild){
            if(node->rightChild->leftChild && !node->rightChild->rightChild) FindLeaf(node->rightChild);
            else if(node->middleChild->leftChild && !node->middleChild->leftChild) FindLeaf(node->middleChild);
            else if(!node->leftChild->leftChild) FindLeaf(node->rightChild);
            else FindLeaf(node->leftChild);
        }
        else if(node->middleChild)FindLeaf(node->middleChild);
        else FindLeaf(node->leftChild);   
    }
    //Find the node in the tree that contains the data and return that node
    unique_ptr<ThreeTreeNode<T>> &Find(unique_ptr<ThreeTreeNode<T>> &parent,const T &data){
        if(parent->key == data) return parent;
        else{
            if(Contains(parent->leftChild,data))return Find(parent->leftChild,data);
            if(Contains(parent->middleChild,data))return Find(parent->middleChild,data);
            if(Contains(parent->rightChild,data))return Find(parent->rightChild,data);
        }
    }
    //Return true if a node exists with the data and false otherwise    
    bool Contains(unique_ptr<ThreeTreeNode<T>> &parent,const T &data){
        if(!parent)return false;
        else if(parent->key == data)return true;
        else{
            if(Contains(parent->leftChild,data))return true;
            if(Contains(parent->middleChild,data))return true;
            if(Contains(parent->rightChild,data))return true;
            return false;
        }
    }
public:

    ThreeAry(){}
    ThreeAry(const T &_key):root(new ThreeTreeNode<T>(_key)){}

    //Return true if inserted into the tree, false otherwise
    virtual bool Insert(const T &data){
         if(!this->root) this->root.reset(new ThreeTreeNode<T> (data));
         else if(Contains(data)) return false;
         else Insert(root,data);
         return true;
    }
    //Return true if removed from the tree, false otherwise
    virtual bool Remove(const T &data){
        if(!Contains(data))return false; //Return if data not in tree
        if(!root) return false;          //Return if root is corrupt
        Remove(Find(root,data));
        return true;
    }
    //Return true if in the tree, false otherwise
    virtual bool Contains(const T &data){
        return Contains(root,data);
    }
    //This function calls the passed concrete iterator visitor
    virtual void Accept(TreeIterator<T> &visitor){
        visitor.TraverseTree(*this);
    }
    const unique_ptr<ThreeTreeNode<T>> &GetRoot(){return root;}
};


#endif /* THREEARY_H */

