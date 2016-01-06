
/* 
 * File:   PostOrder.h
 * Author:Terianne Bolding
 *
 */

#ifndef POSTORDER_H
#define POSTORDER_H
#include "TreeIterator.h"

template <typename T>
class PostOrder : public TreeIterator<T>
{
public:
    PostOrder(){}
    virtual ~PostOrder(){}
    virtual void TraverseTree(const TwoAry<T> &tree)const{
        std::cout<<"\nTraversing 2-Ary Tree in PostOrder";
        TraverseRecurs(tree.root);
    } 
    virtual void TraverseTree(const ThreeAry<T> &tree){
        std::cout<<"\nTraversing 3-Ary Tree in PostOrder";
        TraverseRecurs(tree.root);
    }
private:
    virtual void TraverseRecurs(const std::unique_ptr<TwoTreeNode<T> > &root)const{
        if(!root)return;
        TraverseRecurs(root->leftChild);
        TraverseRecurs(root->rightChild);
        std::cout<<"\n"<<root->key;
    }
    virtual void TraverseRecurs(const std::unique_ptr<ThreeTreeNode<T> > &root)const{
        if(!root)return;
        TraverseRecurs(root->leftChild);
        TraverseRecurs(root->middleChild);
        TraverseRecurs(root->rightChild);
        std::cout<<"\n"<<root->key;
    }
};

#endif /* POSTORDER_H */

