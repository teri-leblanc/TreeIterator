
/* 
 * File:   PostOrder.h
 * Author:Terianne Bolding
 *
 */

#ifndef POSTORDER_H
#define POSTORDER_H
#include "TreeIterator.h"
#include <iostream>
#include <memory>
using std::cout;
using std::unique_ptr;

template <typename T>
class PostOrder : public TreeIterator<T>
{
public:
    PostOrder(){}
    virtual ~PostOrder(){}
    virtual void TraverseTree(TwoAry<T> &tree){
        cout<<"\nTraversing 2-Ary Tree in PostOrder";
        TraverseRecurs(tree.GetRoot());
    } 
    virtual void TraverseTree(ThreeAry<T> &tree){
        cout<<"\nTraversing 3-Ary Tree in PostOrder";
        TraverseRecurs(tree.GetRoot());
    }
private:
    virtual void TraverseRecurs(const unique_ptr<TwoTreeNode<T> > &root){
        if(!root)return;
        TraverseRecurs(root->leftChild);
        TraverseRecurs(root->rightChild);
        cout<<"\n"<<root->key;
    }
    virtual void TraverseRecurs(const unique_ptr<ThreeTreeNode<T> > &root){
        if(!root)return;
        TraverseRecurs(root->leftChild);
        TraverseRecurs(root->middleChild);
        TraverseRecurs(root->rightChild);
        cout<<"\n"<<root->key;
    }
};

#endif /* POSTORDER_H */

