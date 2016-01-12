
/* 
 * File:   TreeIterator.h
 * Author: Terianne Bolding
 *

 */

#ifndef TREEITERATOR_H
#define TREEITERATOR_H
#include "TwoTreeNode.h"
#include "ThreeTreeNode.h"
#include <memory>
template <class T>
class TwoAry;
template <class T>
class ThreeAry;
template <class T>
class TreeIterator{
public:
    TreeIterator(){}
    virtual ~TreeIterator(){}
    virtual void TraverseTree(TwoAry<T> &tree)=0;
    virtual void TraverseTree(ThreeAry<T> &tree)=0;
private:
    virtual void TraverseRecurs(const std::unique_ptr<TwoTreeNode<T>> &root)=0;
    virtual void TraverseRecurs(const std::unique_ptr<ThreeTreeNode<T>> &root)=0;
};

#endif /* TREEITERATOR_H*/

