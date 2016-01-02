/* 
 * File:   main.cpp
 * Author: Teri
 *
 * Created on January 2, 2016, 9:42 AM
 */

#include <cstdlib>
#include "BST.h"
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {


    
    BST<int> *tree = new BST<int>();
    cout<< "HEY";
    tree->Insert(2);
    tree->Insert(3);
    cout<< tree->Contains(1);
    delete tree;
        return 0;
}

