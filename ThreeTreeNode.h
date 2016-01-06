/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ThreeTreeNode.h
 * Author: teri
 *
 * Created on January 6, 2016, 2:29 PM
 */

#ifndef THREETREENODE_H
#define THREETREENODE_H
#include <memory>
template <class T>
class ThreeTreeNode {
    public:   
    std::unique_ptr<ThreeTreeNode> leftChild;
    std::unique_ptr<ThreeTreeNode>middleChild;
    std::unique_ptr<ThreeTreeNode> rightChild;
    const T &key;
    ThreeTreeNode(const T &_key, ThreeTreeNode  *_leftChild,ThreeTreeNode *_middleChild, ThreeTreeNode *_rightChild) : leftChild(_leftChild),middleChild(_middleChild),rightChild(_rightChild),key(_key){}
    ThreeTreeNode(const T &_key): key(_key){
        
       leftChild.reset(nullptr);
       middleChild.reset(nullptr);
         rightChild.reset(nullptr);

}
};


#endif /* THREETREENODE_H */

