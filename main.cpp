/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Terianne Bolding
 *
 * Created on January 4, 2016, 4:44 PM
 */

#include <cstdlib>
#include <iostream>
#include "BSTstructure.h"
#include "ThreeAry.h"
#include "PreOrder.h"
#include "PostOrder.h"
#include "InOrder.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    TreeIterator<int> *inorder = new InOrder<int>();
    TreeIterator<int> *postorder = new PostOrder<int>();
    TreeIterator<int> *preorder = new PreOrder<int>();
    TwoAry<int> *twotree = new BSTstructure<int>();
    twotree->Insert(10);
    twotree->Insert(8);
    twotree->Insert(9);
    twotree->Insert(7);
    twotree->Insert(12);
    twotree->Insert(11);
    twotree->Insert(13);
    twotree->Accept(*inorder);
    twotree->Accept(*postorder);
    twotree->Accept(*preorder);

    ThreeAry<int> *threetree= new ThreeAry<int>();
    threetree->Insert(20);
    threetree->Insert(10);
    threetree->Insert(19);
    threetree->Insert(12);
    
    
    delete inorder;
    delete postorder;
    delete preorder;
    delete twotree;
    return 0;
}

