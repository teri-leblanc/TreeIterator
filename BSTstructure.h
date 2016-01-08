
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

    virtual bool Remove(const T &data) override {
        TwoTreeNode<T>  *parentNode = FindParent(data);
        if (!parentNode) return false;
        else if (parentNode->leftChild) {
            if(parentNode->leftChild->key == data)
                Remove(parentNode->leftChild,*parentNode,0);
                return true;
        }
        else if(parentNode->rightChild.get()){
            if(parentNode->rightChild.get()->key == data)
                Remove(parentNode->rightChild,*parentNode,1);
                return true;
        }
        return true;
    }
    
    virtual bool Contains(const T &data) override{
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
    T FindMin(std::unique_ptr<TwoTreeNode<T>> &parent){
        if(parent.get()->leftChild)FindMin(parent.get()->leftChild);
        else return parent.get()->key;
    }
// The following function is an internal helper that deletes the unique_ptr before its scope is up.
// side = 0 // This means that the node to be deleted is the left child of the parent
// side = 1 // This means that the node to be deleted is the right child of the parent
    void Remove(std::unique_ptr<TwoTreeNode<T> > &deleteNode, TwoTreeNode<T>  &parentNode,bool side){
        if(deleteNode->leftChild == nullptr && deleteNode->rightChild == nullptr){
            if(side) parentNode.rightChild = nullptr;
            else parentNode.leftChild = nullptr;
        
        }  // Remove Leaf
        else if(deleteNode->leftChild == nullptr){                                                            // Remove node with 1 child
            if(side) parentNode.rightChild = std::move(deleteNode->rightChild);
            else parentNode.leftChild = std::move(deleteNode->rightChild);
        }
        else if(deleteNode->rightChild == nullptr){
            if(side) parentNode.rightChild = std::move(deleteNode->leftChild);
            else parentNode.leftChild = std::move(deleteNode->leftChild);
        }
        else{
            TwoTreeNode<T>  * minParent = FindParent(FindMin(deleteNode->rightChild));
            deleteNode.reset(new TwoTreeNode<T> (minParent->leftChild->key,nullptr,deleteNode->rightChild.release()));
        }                                                                                                      // Remove node with 2 children
    }
// The following function is an internal helper that returns a pointer to the parent node of a specific node
// This was implemented in order to get access to the unique pointer so that it may be deleted before the end of its scope
// NOTE: This does seem to be dangerous and I am currently looking for better ways of handling this.    
    TwoTreeNode<T>   *FindParent(const T &data) const{
        TwoTreeNode<T>  *comparible = TwoAry<T>::root.get();
        TwoTreeNode<T>  *comparibleParent = nullptr;
        while(comparible !=nullptr){
            if(comparible->key == data) return comparibleParent;
            else if(comparible->key > data){ 
               comparibleParent = comparible;
               comparible = comparible->leftChild.get();
            }
           else{ 
               comparibleParent = comparible;
               comparible = comparible->rightChild.get();
           }
        }
        return nullptr;
    }
};

#endif /* BSTSTRUCTURE_H */

