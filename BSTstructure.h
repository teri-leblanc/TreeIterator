
/* 
 * File:   BSTstructure.h
 * Author: Terianne Bolding
 *
 */

#ifndef BSTSTRUCTURE_H
#define BSTSTRUCTURE_H
#include "TwoAry.h"

template <class T>
class BSTstructure : public TwoAry<T>{
public:
    BSTstructure():TwoAry<T>(){}
    BSTstructure(const int &_key):TwoAry<T>(_key){}
    virtual void Accept(TreeIterator<T> &visitor){
        visitor.TraverseTree(*this);
    }
    
    virtual bool Insert(const T &data){
        if(!this->root){this->root.reset(new TwoTreeNode<T> (data));} // Add root node
        else if(Contains(data))return false;    // Don't allow duplicates                               // Node already exists
        else Insert(this->root,data);           // Add node using recursive private function
        return true;
    }

    virtual bool Remove(const T &data){
        if(Contains(data)){
            std::unique_ptr<TwoTreeNode<T>> &deleteNode = Find(this->root,data);
            Remove(deleteNode);
            return true;
        }
        return false;
    }
    
    virtual bool Contains(const T &data){
        TwoTreeNode<T> *comparable = TwoAry<T>::root.get();
        while(comparable != nullptr){
             if(comparable->key > data) comparable = comparable->leftChild.get();
             else if(comparable->key < data) comparable = comparable->rightChild.get();
             else if(comparable->key == data) return true;
        }
        return false;
    }
    
private:
    virtual void Insert(std::unique_ptr<TwoTreeNode<T>> &node, const T &data){
        if(!node)node.reset(new TwoTreeNode<T>(data));
        else if(node->key < data)Insert(node->rightChild,data);
        else if(node->key > data)Insert(node->leftChild,data);
    
    }
//Finds the left most node (or minimum most node) in tree starting at the passed root.
    std::unique_ptr<TwoTreeNode<T>> &FindMin(std::unique_ptr<TwoTreeNode<T>> &node){
        if(node->leftChild) return FindMin(node->leftChild);
        else return node;
    
    }
// The following function is an internal helper that deletes the unique_ptr before its scope is up.
    void Remove(std::unique_ptr<TwoTreeNode<T> > &deleteNode){
        
        if(deleteNode->leftChild == nullptr && deleteNode->rightChild == nullptr){
            deleteNode.reset(nullptr);
        }  // Remove Leaf
        else if(deleteNode->leftChild == nullptr){                                                            
            // Remove node with 1 child
            deleteNode.reset(deleteNode->rightChild.release());
        }
        else if(deleteNode->rightChild == nullptr){
            deleteNode.reset(deleteNode->leftChild.release());
        }
        else{
            std::unique_ptr<TwoTreeNode<T>> &minNode = FindMin(deleteNode->rightChild);
            if(minNode->key == deleteNode->rightChild->key) deleteNode.reset(new TwoTreeNode<T> (minNode->key,deleteNode->leftChild.release(),nullptr));
            else deleteNode.reset(new TwoTreeNode<T> (minNode->key,deleteNode->leftChild.release(),deleteNode->rightChild.release()));
        }                                                                                                    // Remove node with 2 children
    }
// The following function is an internal helper that returns a pointer to the node with specific data
// This was implemented in order to get access to the unique pointer so that it may be deleted before the end of its scope
// A reference to the unique_ptr that owns the node is returned
    std::unique_ptr<TwoTreeNode<T>> &Find(std::unique_ptr<TwoTreeNode<T>> &node,const T &data){
        if(node->key == data) return node;
        else if(node->key > data) return Find(node->leftChild,data);
        else return Find(node->rightChild,data);
    }
};

#endif /* BSTSTRUCTURE_H */

