
/* 
 * File:   InOrder.h
 * Author: Terianne Bolding
 *
 */

#ifndef INORDER_H
#define INORDER_H
#include "TreeIterator.h"
#include "TwoAry.h"
#include <iostream>
#include <memory>
using std::cout;
using std::unique_ptr;

template <class T>
class InOrder : public TreeIterator<T>
{

public:
    InOrder(){}
    virtual ~InOrder(){}
    virtual void TraverseTree(TwoAry<T> &tree){
        cout<<"\nTraversing 2-Ary Tree in InOrder";
        TraverseRecurs(tree.GetRoot());
    } 
    virtual void TraverseTree(ThreeAry<T> &tree){
        cout<<"No InOrder Operation available for this tree\n";
    }
private:
    virtual void TraverseRecurs(const unique_ptr<TwoTreeNode<T>> &root){
        if(!root)return;
        TraverseRecurs(root->leftChild);
        std::cout<<"\n"<<root->key;
        TraverseRecurs(root->rightChild);
    }
    virtual void TraverseRecurs(const unique_ptr<ThreeTreeNode<T>> &root){
        std::cout<<"No InOrder Operation available for this tree\n";
    }
};

#endif /* INORDER_H */

