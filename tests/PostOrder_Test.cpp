/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PostOrder_Test.cpp
 * Author: teri
 *
 * Created on January 11, 2016, 12:42 PM
 */

#include <stdlib.h>
#include <iostream>
#include "BSTstructure.h"
#include "ThreeAry.h"
#include "PostOrder.h"

/*
 * Simple C++ Test Suite
 */

void testTraverseTree() {
    BSTstructure<int> Twotree;
    PostOrder<int> postOrder;
    try{
    postOrder.TraverseTree(Twotree);
    }
    catch (std::exception e)
     {
        std::cout << "%TEST_FAILED% time=0 testname=testTraverseTree (PostOrder_Test) message=error message sample" << std::endl;
    }
}

void testTraverseTree2() {
    ThreeAry<int> Threetree;
    PostOrder<int> postOrder;
    try{
        postOrder.TraverseTree(Threetree);
    }
    catch(std::exception e){
        std::cout << "%TEST_FAILED% time=0 testname=testTraverseTree2 (PostOrder_Test) message=error message sample" << std::endl;

    }
}
int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% PostOrder_Test" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% test1 (PostOrder_Test)" << std::endl;
    testTraverseTree();
    std::cout << "%TEST_FINISHED% time=0 test1 (PostOrder_Test)" << std::endl;

    std::cout << "%TEST_STARTED% test2 (PostOrder_Test)\n" << std::endl;
    testTraverseTree2();
    std::cout << "%TEST_FINISHED% time=0 test2 (PostOrder_Test)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

