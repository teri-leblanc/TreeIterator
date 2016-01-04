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
    cout<<"Building an integer Tree with root node of 5\n";
    tree.Insert(2);
    cout<<"Inserting 2\n";
    tree.Insert(4);
     cout<<"Inserting 4\n";   
    tree.Insert(1);
        cout<<"Inserting 1\n";
    tree.Remove(2);
        cout<<"Removing 2\n";
        cout<<"Looking for 2\n";
   if(tree.Contains(2))cout<<"Found 2\n";
   else cout<<"Did not find 2\n";
   cout<<"Looking for 4\n";
   if(tree.Contains(4))cout<<"Found 4\n";
   else cout<<"Did not find 4\n";
   cout<<"Looking for 1\n";
   if(tree.Contains(1))cout<<"Found 1\n";
   else cout<<"Did not find 1\n";
   
        return 0;
}

