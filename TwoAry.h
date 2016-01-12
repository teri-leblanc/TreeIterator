

/* 
 * File:   TwoAry.h
 * Author: Terianne Bolding

*/
#ifndef TWOARY_H
#define TWOARY_H
#include "TwoTreeNode.h"
#include "TreeIterator.h"
#include <memory>
using std::unique_ptr;

template <class T>
class TwoAry{
    protected:
    unique_ptr<TwoTreeNode<T>> root;
    public:
    TwoAry(){}
    TwoAry(const T &_key):root(new TwoTreeNode<T>(_key)){}
    virtual bool Insert(const T &data)=0;
    virtual bool Remove(const T &data)=0;
    virtual bool Contains(const T &data)=0;
    virtual void Accept(TreeIterator<T> &visitor) = 0;
    const unique_ptr<TwoTreeNode<T>>& GetRoot(){return root;}
};
#endif /* TWOARY_H */

