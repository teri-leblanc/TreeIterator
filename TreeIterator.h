
/* 
 * File:   TreeIterator.h
 * Author: teri
 *

 */

#ifndef TREEITERATOR_H
#define TREEITERATOR_H
#include "TwoAry.h"
#include "ThreeAry.h"

template <class T>
class TreeIterator{
public:
    TreeIterator(){}
    virtual ~TreeIterator(){}
    virtual void TraverseTree(const TwoAry<T> &tree)const=0;
    virtual void TraverseTree(const ThreeAry<T> &tree)=0;
private:
    virtual void TraverseRecurs(const std::unique_ptr<TwoTreeNode<T>> &root)const =0;
    virtual void TraverseRecurs(const std::unique_ptr<ThreeTreeNode<T>> &root)const =0;

};

#endif /* TREEITERATOR_H*/

