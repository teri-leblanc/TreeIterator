

/* 
 * File:   TwoAry.h
 * Author: Terianne Bolding

*/
#ifndef TWOARY_H
#define TWOARY_H
#include "TwoTreeNode.h"
#include <iostream>
#include <cstdlib>
template <class T>
class TreeIterator;
template <class T>
class TwoAry{
    public:
    std::unique_ptr<TwoTreeNode<T>> root;
    TwoAry() :root(nullptr){}
    TwoAry(const int &_key):root(new TwoTreeNode<T>(_key)){}
    virtual bool Insert(const T &data)=0;
    virtual bool Remove(const T &data)=0;
    virtual bool Contains(const T &data)=0;
    virtual void Accept(TreeIterator<T> &visitor) = 0;
    

};


#endif /* TWOARY_H */

