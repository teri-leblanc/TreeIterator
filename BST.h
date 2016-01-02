/* 
 * File:   BST.h
 * Author: Terianne Bolding
 *
 * Created on January 2, 2016, 9:56 AM
 */

#ifndef BST_H
#define	BST_H
 #include <stdio.h>
template <class T>
class  BST {
    struct BSTnode
    {
        BSTnode *leftChild;
        BSTnode *rightChild;
        BSTnode *myParent;
        T key;
        BSTnode(const T &_key, BSTnode *_leftChild, BSTnode *_rightChild, BSTnode *_myParent) : leftChild(_leftChild),rightChild(_rightChild),myParent(_myParent),key(_key){}
    };
private:
    BSTnode *root;
public:
    BST():root(new BSTnode(NULL,NULL,NULL,NULL)){}
    BST(const T &_key):root(new BSTnode(_key,NULL,NULL,NULL)){}
    BST(const BST& orig):root(new BSTnode(orig.root.key,orig.root.leftChild,orig.root.rightChild,orig.root)){}
    virtual ~BST(){}
    bool Insert(const T &data){
        BSTnode *comparible = root;
        while(comparible != NULL){
            if(comparible->key > data){
                if(comparible->leftChild ==NULL){ 
                    comparible->leftChild = new BSTnode(data,NULL,NULL,comparible);
                    return true;
                }
                else comparible = comparible->leftChild;
                
            }
            else if(comparible->key < data){
                if(comparible->rightChild ==NULL){ 
                    comparible->rightChild = new BSTnode(data,NULL,NULL,comparible);
                    return true;
                }
                else comparible = comparible->rightChild;
            }
            else if(comparible->key == data){return false;} //Return false if duplicate
        
       }
        return false;
    }
    bool Contains(const T &data){
        BSTnode *comparible = root;
        while(comparible != NULL){
             if(comparible->key > data){
                 comparible = comparible->leftChild;
             
             }
             else if(comparible->key < data){
                 comparible = comparible->rightChild;
             }
             else if(comparible->key == data) return true;
        }
        return false;
    }
    T *BSTNodeSearch(const T &data){}
    


};

#endif	/* BST_H */

