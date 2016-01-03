/* 
 * File:   BST.h
 * Author: Terianne Bolding
 *
 * Created on January 2, 2016, 9:56 AM
 */

#ifndef BST_H
#define	BST_H
#include <stdio.h>
#include <cstdlib>
#include <memory>
#include <iostream>
template <class T>
class  BST {
    struct BSTnode
    {
        std::unique_ptr<BSTnode> leftChild;
        std::unique_ptr<BSTnode> rightChild;
        const T &key;
        BSTnode(const T &_key, BSTnode  *_leftChild, BSTnode *_rightChild) : leftChild(_leftChild),rightChild(_rightChild),key(_key){}
        BSTnode(const T &_key): key(_key){
            leftChild.reset(nullptr);
            rightChild.reset(nullptr);
        
        }
    };
private:
    std::unique_ptr<BSTnode> root;
public:
    BST():root(nullptr){}
    BST(const T &_key):root(new BSTnode(_key)){}
    BST(const BST& orig):root(new BSTnode(orig.root.get()->key,orig.root.get()->leftChild,orig.root.get()->rightChild)){}
    virtual ~BST(){
    }
    bool Insert(const T &data){
        if(root == nullptr){                                                    // If tree is empty
            root.reset(new BSTnode(data));
            return true;
        }
        else if(Contains(data))return false;                                   // Node already exists
        BSTnode * comparible =root.get();
        while(comparible != nullptr){                                          // Traverse tree and find spot to place
            if(comparible->key > data){
                if(comparible->leftChild == nullptr){ 
                    comparible->leftChild = std::unique_ptr<BSTnode>(new BSTnode(data));
                    return true;
                }
                else comparible = comparible->leftChild.get();
            }
            else if(comparible->key < data){
                if(comparible->rightChild ==nullptr){ 
                    comparible->rightChild =  std::unique_ptr<BSTnode>(new BSTnode(data));
                    return true;
                }
                else comparible = comparible->rightChild.get();
            }
        }
        return false;
    }
    bool Remove(const T &data) {
        BSTnode *parentNode = FindParent(data);
        if (parentNode == nullptr) return false;
        if (parentNode->leftChild.get()) {
            if(parentNode->leftChild.get()->key == data)
                Remove(parentNode->leftChild,parentNode,0);
                return true;
        }
        if(parentNode->rightChild.get()){
            if(parentNode->rightChild.get()->key == data)
                Remove(parentNode->rightChild,parentNode,1);
                return true;
        }
        return true;
    }
    
    bool Contains(const T &data) const{
        BSTnode *comparible = root.get();
        while(comparible != NULL){
             if(comparible->key > data) comparible = comparible->leftChild.get();
             else if(comparible->key < data) comparible = comparible->rightChild.get();
             else if(comparible->key == data) return true;
        }
        return false;
    }
    
private:
    T FindMin(std::unique_ptr<BSTnode> &parent){
        if(parent.get()->leftChild)FindMin(parent.get()->leftChild);
        else return parent.get()->key;


    }
// The following function is an internal helper that deletes the unique_ptr before its scope is up.
// side = 0 // This means that the node to be deleted is the left child of the parent
// side = 1 // This means that the node to be deleted is the right child of the parent
    void Remove(std::unique_ptr<BSTnode> &deleteNode, BSTnode * parentNode,bool side){
        if(deleteNode.get()->leftChild == nullptr && deleteNode.get()->rightChild == nullptr)deleteNode.release();  // Remove Leaf
        else if(deleteNode.get()->leftChild == nullptr){                                                            // Remove node with 1 child
            if(side) parentNode->rightChild = std::move(deleteNode.get()->rightChild);
            else parentNode->leftChild = std::move(deleteNode.get()->rightChild);
        }
        else if(deleteNode.get()->rightChild == nullptr){
            if(side) parentNode->rightChild = std::move(deleteNode.get()->leftChild);
            else parentNode->leftChild = std::move(deleteNode.get()->leftChild);
        }
        else{
            BSTnode * minParent = FindParent(FindMin(deleteNode.get()->rightChild));
            deleteNode.reset(new BSTnode(minParent->leftChild.get()->key,nullptr,deleteNode.get()->rightChild.release()));
            //delete minParent->leftChild.release();
        }                                                                                                      // Remove node with 2 children
    }
// The following function is an internal helper that returns a pointer to the parent node of a specific node
// This was implemented in order to get access to the unique pointer so that it may be deleted before the end of its scope
// NOTE: This does seem to be dangerous and I am currently looking for better ways of handling this.    
    BSTnode  *FindParent(const T &data) const{
       BSTnode *comparible = root.get();
       BSTnode *comparibleParent = nullptr;
       while(comparible !=nullptr){
           if(comparible->key == data) return comparibleParent;
           else if(comparible->key > data){ 
               comparibleParent = comparible;
               comparible = comparible->leftChild.get();}
           else{ 
               comparibleParent = comparible;
               comparible = comparible->rightChild.get();}
        }
        return nullptr;
    }
};

#endif	/* BST_H */

