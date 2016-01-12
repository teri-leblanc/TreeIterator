

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
using std::cout;
using std::unique_ptr;

template <class T>
class PreOrder : public TreeIterator<T>
{
public:
    PreOrder():TreeIterator<T>(){}
    virtual ~PreOrder(){}
    virtual void TraverseTree(TwoAry<T> &tree){
        cout<<"\nTraversing 2-Ary Tree in PreOrder";
        TraverseRecurs(tree.GetRoot());
    }
    virtual void TraverseTree(ThreeAry<T> &tree){
        cout<<"\nTraversing 3-Ary Tree in PreOrder";
        TraverseRecurs(tree.GetRoot());
    }
private:
    virtual void TraverseRecurs(const unique_ptr<TwoTreeNode<T>> &root){
        if(!root)return;
        cout<<"\n"<<root->key;
        TraverseRecurs(root->leftChild);
        TraverseRecurs(root->rightChild);
    }
    virtual void TraverseRecurs(const unique_ptr<ThreeTreeNode<T> > &root){
        if(!root)return;
        cout<<"\n"<<root->key;
        TraverseRecurs(root->leftChild);
        TraverseRecurs(root->middleChild);
        TraverseRecurs(root->rightChild);
    }
};

#endif /* PREORDER_H */

