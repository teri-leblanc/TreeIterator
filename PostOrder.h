
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

template <typename T>
class PostOrder : public TreeIterator<T>
{
public:
    PostOrder(){}
    virtual ~PostOrder(){}
    virtual void TraverseTree(TwoAry<T> &tree){
        std::cout<<"\nTraversing 2-Ary Tree in PostOrder";
        TraverseRecurs(tree.GetRoot());
    } 
    virtual void TraverseTree(ThreeAry<T> &tree){
        std::cout<<"\nTraversing 3-Ary Tree in PostOrder";
        TraverseRecurs(tree.GetRoot());
    }
private:
    virtual void TraverseRecurs(const std::unique_ptr<TwoTreeNode<T> > &root){
        if(!root)return;
        TraverseRecurs(root->leftChild);
        TraverseRecurs(root->rightChild);
        std::cout<<"\n"<<root->key;
    }
    virtual void TraverseRecurs(const std::unique_ptr<ThreeTreeNode<T> > &root){
        if(!root)return;
        TraverseRecurs(root->leftChild);
        TraverseRecurs(root->middleChild);
        TraverseRecurs(root->rightChild);
        std::cout<<"\n"<<root->key;
    }
};

#endif /* POSTORDER_H */

