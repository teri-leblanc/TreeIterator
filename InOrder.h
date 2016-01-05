
/* 
 * File:   InOrder.h
 * Author: Terianne Bolding
 *
 */

#ifndef INORDER_H
#define INORDER_H
#include "TreeIterator.h"
template <class T>
class InOrder : public TreeIterator<T>
{

public:
    InOrder(){}
    virtual ~InOrder(){}
    virtual void TraverseTree(const TwoAry<T> &tree)const{
        std::cout<<"\nTraversing 2Ary Tree in InOrder";
        TraverseRecurs(tree.root);
    } //2ary Tree
//   virtual void TraverseTree(long &threeAry){} //3ary Tree
private:
    virtual void TraverseRecurs(const std::unique_ptr<TwoTreeNode<T>> &root)const{
            if(!root)return;
        TraverseRecurs(root->leftChild);
        std::cout<<"\n"<<root->key;
        TraverseRecurs(root->rightChild);

    }
};

#endif /* INORDER_H */

