

/* 
 * File:   ThreeTreeNode.h
 * Author: Terianne Bolding

 *Notes: This is a 3-Ary tree node. 
 */

#ifndef THREETREENODE_H
#define THREETREENODE_H
#include <memory>
template <class T>
class ThreeTreeNode {
    public:   
    std::unique_ptr<ThreeTreeNode> leftChild;
    std::unique_ptr<ThreeTreeNode> middleChild;
    std::unique_ptr<ThreeTreeNode> rightChild;
    const T &key;
    ThreeTreeNode(const T &_key, ThreeTreeNode  *_leftChild, ThreeTreeNode *_middleChild, ThreeTreeNode *_rightChild) : leftChild(_leftChild),middleChild(_middleChild),rightChild(_rightChild),key(_key){}
    ThreeTreeNode(const T &_key): key(_key){}
};
#endif /* THREETREENODE_H */

