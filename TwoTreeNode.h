/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TwoTreeNode.h
 * Author: Terianne Bolding
 *
 * Created on January 5, 2016, 3:42 AM
 */

#ifndef TWOTREENODE_H
#define TWOTREENODE_H
#include <memory>
template <class T>
class TwoTreeNode {
    public:
    std::unique_ptr<TwoTreeNode> leftChild;
    std::unique_ptr<TwoTreeNode> rightChild;
    const T &key;
    TwoTreeNode(const T &_key, TwoTreeNode  *_leftChild, TwoTreeNode *_rightChild) : leftChild(_leftChild),rightChild(_rightChild),key(_key){}
    TwoTreeNode(const T &_key): key(_key){
       leftChild.reset(nullptr);
         rightChild.reset(nullptr);

}
};


#endif /* TWOTREENODE_H */

