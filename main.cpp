

/* 
 * File:   main.cpp
 * Author: Terianne Bolding
 *

 */

#include <cstdlib>
#include <iostream>
#include "BSTstructure.h"
#include "ThreeAry.h"
#include "PreOrder.h"
#include "PostOrder.h"
#include "InOrder.h"
using namespace std;

int main(int argc, char** argv) {
    // Create Concrete Visitor Objects
    InOrder<int> inorder;
    PostOrder<int> postorder;
    PreOrder<int> preorder;
    // Create Binary Search Tree object
    BSTstructure<int> twotree;
    twotree.Insert(10);
    twotree.Insert(8);
    twotree.Insert(9);
    twotree.Insert(7);
    twotree.Insert(12);
    twotree.Insert(11);
    twotree.Insert(13);
    // Traverse the BST inorder, postorder, preorder
    twotree.Accept(inorder);
    twotree.Accept(postorder);
    twotree.Accept(preorder);
    //Create a 3-ary tree object
    ThreeAry<int> threetree;
    threetree.Insert(20);
    threetree.Insert(10);
    threetree.Insert(19);
    threetree.Insert(12);
    threetree.Insert(1);
    threetree.Insert(2);
    threetree.Insert(3);
    threetree.Insert(4);
    threetree.Insert(5);
    threetree.Insert(6);
    threetree.Insert(7);
    threetree.Insert(8);
    threetree.Insert(9);
    threetree.Insert(13);
    threetree.Insert(14);
    threetree.Insert(15);
    threetree.Remove(20);
    threetree.Remove(13);
    threetree.Remove(6);
    //Traverse the tree inorder, postorder,preorder
    cout<<"\nStarting 3-Ary section\n";
    threetree.Accept(inorder);
    threetree.Accept(postorder);
    threetree.Accept(preorder);

    return 0;
}

