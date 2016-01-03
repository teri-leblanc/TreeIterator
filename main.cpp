/* 
 * File:   main.cpp
 * Author: Teri
 *
 * Created on January 2, 2016, 9:42 AM
 */

#include <cstdlib>
#include "BST.h"
#include <iostream>
 #include <stdio.h>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {


    
    BST<int> tree(5);
    cout<< "HEY";
    tree.Insert(2);
    tree.Insert(4);
    tree.Insert(1);
    tree.Remove(2);
   cout<< tree.Contains(2);
        return 0;
}

