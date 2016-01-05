/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PostOrder.h
 * Author: teri
 *
 * Created on January 4, 2016, 4:47 PM
 */

#ifndef POSTORDER_H
#define POSTORDER_H
#include "TreeIterator.h"

template <typename T>
class PostOrder : public TreeIterator<T>
{
//2ary Tree

//virtual void TraverseTree(long &threeAry){} //3ary Tree

public:
    PostOrder(){}
    virtual ~PostOrder(){}
    virtual void TraverseTree(const TwoAry<T> &tree)const{
        std::cout<<"\nTraversing 2Ary Tree in PostOrder";
        TraverseRecurs(tree.root);
    } 
private:
    virtual void TraverseRecurs(const std::unique_ptr<TwoTreeNode<T> > &root)const{
        if(!root)return;
        TraverseRecurs(root->leftChild);
        TraverseRecurs(root->rightChild);
        std::cout<<"\n"<<root->key;
    }
};

#endif /* POSTORDER_H */

