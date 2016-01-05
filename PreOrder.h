/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PreOrder.h
 * Author: Terianne Bolding
 *
 * Created on January 4, 2016, 5:41 PM
 */

#ifndef PREORDER_H
#define PREORDER_H
#include "TreeIterator.h"


template <class T>
class PreOrder : public TreeIterator<T>
{

public:
    PreOrder():TreeIterator<T>(){}
    virtual ~PreOrder(){}
    virtual void TraverseTree(const TwoAry<T> &tree)const{
        std::cout<<"\nTraversing 2Ary Tree in Pre Order";
        TraverseRecurs(tree.root);
    }
//    virtual void TraverseTree(long &threeAry){}
private:
    virtual void TraverseRecurs(const std::unique_ptr<TwoTreeNode<T>> &root)const{
        if(!root)return;
        std::cout<<"\n"<<root->key;
        TraverseRecurs(root->leftChild);
        TraverseRecurs(root->rightChild);
    }


};

#endif /* PREORDER_H */

