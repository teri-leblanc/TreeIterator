/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TreeIterator.h
 * Author: teri
 *
 * Created on January 4, 2016, 4:45 PM
 */

#ifndef TREEITERATOR_H
#define TREEITERATOR_H
#include "TwoAry.h"

template <class T>
class TreeIterator{
public:
    TreeIterator(){}
    virtual ~TreeIterator(){}
    virtual void TraverseTree(const TwoAry<T> &tree)const=0;
   // virtual void TraverseTree(long &threeAry)=0;
private:
    virtual void TraverseRecurs(const std::unique_ptr<TwoTreeNode<T>> &root)const =0;

};

#endif /* TREEITERATOR_H*/

