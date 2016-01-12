
/* 
 * File:   TwoTreeNode.h
 * Author: Terianne Bolding
 *
 * Note: This is a 2-Ary tree node
 */

#ifndef TWOTREENODE_H
#define TWOTREENODE_H
#include <memory>
using std::unique_ptr;

template <class T>
class TwoTreeNode {
    public:
    unique_ptr<TwoTreeNode> leftChild;
    unique_ptr<TwoTreeNode> rightChild;
    const T &key;
    TwoTreeNode(const T &_key, TwoTreeNode  *_leftChild, TwoTreeNode *_rightChild) : leftChild(_leftChild),rightChild(_rightChild),key(_key){}
    TwoTreeNode(const T &_key): key(_key){}
};
#endif /* TWOTREENODE_H */

