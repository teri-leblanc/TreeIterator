

/* 
 * File:   ThreeAry.h
 * Author: teri
 *

 */

#ifndef THREEARY_H
#define THREEARY_H
#include "ThreeTreeNode.h"
template <class T>
class TreeIterator;
template <class T>
class ThreeAry{
    private:    

        void Insert(std::unique_ptr<ThreeTreeNode<T>> &node, T const &data){
            if(!node)node.reset(new ThreeTreeNode<T>(data));
            else if(!node->leftChild) Insert(node->leftChild,data);
            else if(!node->middleChild) Insert(node->middleChild,data);
            else if (!node->rightChild) Insert(node->rightChild,data);
        }
    public:
        std::unique_ptr<ThreeTreeNode<T>> root;
    ThreeAry(){}
    ThreeAry(const int &_key):root(new ThreeTreeNode<T>(_key)){}
    virtual ~ThreeAry(){}
    virtual void Insert(const T &data){
         if(!this->root){this->root.reset(new ThreeTreeNode<T> (data));}
         else Insert(root,data);
    }
    virtual bool Remove(const T &data){}
    virtual bool Contains(const T &data){}
    virtual void Accept(TreeIterator<T> &visitor){
        visitor.TraverseTree(*this);
    
    }
};


#endif /* THREEARY_H */

