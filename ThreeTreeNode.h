

/* 
 * File:   ThreeTreeNode.h
 * Author: Terianne Bolding

 *Notes: This is a 3-Ary tree node. 
 */

#ifndef THREETREENODE_H
#define THREETREENODE_H
#include <memory>
using std::unique_ptr;

template <class T>
class ThreeTreeNode {
    public:   
    unique_ptr<ThreeTreeNode> leftChild;
    unique_ptr<ThreeTreeNode> middleChild;
    unique_ptr<ThreeTreeNode> rightChild;
    const T &key;
    ThreeTreeNode(const T &_key, ThreeTreeNode  *_leftChild, ThreeTreeNode *_middleChild, ThreeTreeNode *_rightChild) : leftChild(_leftChild),middleChild(_middleChild),rightChild(_rightChild),key(_key){}
    ThreeTreeNode(const T &_key): key(_key){}
};
#endif /* THREETREENODE_H */

