

/* 
 * File:   PreOrder.h
 * Author: Terianne Bolding
 *

 */

#ifndef PREORDER_H
#define PREORDER_H
#include "TreeIterator.h"
#include <iostream>
#include <memory>

template <class T>
class PreOrder : public TreeIterator<T>
{
public:
    PreOrder():TreeIterator<T>(){}
    virtual ~PreOrder(){}
    virtual void TraverseTree(TwoAry<T> &tree){
        std::cout<<"\nTraversing 2-Ary Tree in PreOrder";
        TraverseRecurs(tree.GetRoot());
    }
    virtual void TraverseTree(ThreeAry<T> &tree){
        std::cout<<"\nTraversing 3-Ary Tree in PreOrder";
        TraverseRecurs(tree.GetRoot());
    }
private:
    virtual void TraverseRecurs(const std::unique_ptr<TwoTreeNode<T>> &root){
        if(!root)return;
        std::cout<<"\n"<<root->key;
        TraverseRecurs(root->leftChild);
        TraverseRecurs(root->rightChild);
    }
    virtual void TraverseRecurs(const std::unique_ptr<ThreeTreeNode<T> > &root){
        if(!root)return;
        std::cout<<"\n"<<root->key;
        TraverseRecurs(root->leftChild);
        TraverseRecurs(root->middleChild);
        TraverseRecurs(root->rightChild);
    }
};

#endif /* PREORDER_H */

