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
        BSTnode(const T &_key, BSTnode *_leftChild, BSTnode *_rightChild) : leftChild(_leftChild),rightChild(_rightChild),key(_key){}
    };
private:
    std::shared_ptr<BSTnode> root;
public:
    BST():root(nullptr){}
    BST(const T &_key):root(new BSTnode(_key,nullptr,nullptr)){}
    BST(const BST& orig):root(new BSTnode(orig.root.get()->key,orig.root.get()->leftChild,orig.root.get()->rightChild)){}
    virtual ~BST(){
    }
    bool Insert(const T &data){
        if(root == nullptr){
            root.reset(new BSTnode(data,nullptr,nullptr));
            return true;
        }
        else if(Contains(data))return false;
        BSTnode * comparible =root.get();
        while(comparible != nullptr){
            if(comparible->key > data){
                if(comparible->leftChild == nullptr){ 
                    comparible->leftChild = std::unique_ptr<BSTnode>(new BSTnode(data,nullptr,nullptr));
                    return true;
                }
                else comparible = comparible->leftChild.get();
            }
            else if(comparible->key < data){
                if(comparible->rightChild ==nullptr){ 
                    comparible->rightChild =  std::unique_ptr<BSTnode>(new BSTnode(data,nullptr,nullptr));
                    return true;
                }
                else comparible = comparible->rightChild.get();
            }
        }
        return false;
    }
    bool Contains(const T &data){
        BSTnode *comparible = root.get();
        while(comparible != NULL){
             if(comparible->key > data){
                 comparible = comparible->leftChild.get();
             
             }
             else if(comparible->key < data){
                 comparible = comparible->rightChild.get();
             }
             else if(comparible->key == data) return true;
        }
        return false;
    }
    T *BSTSearch(const T &data){}
    


};

#endif	/* BST_H */

