/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PreOrder_Test.cpp
 * Author: teri
 *
 * Created on January 11, 2016, 12:46 PM
 */

#include <stdlib.h>
#include <iostream>
#include "PreOrder.h"
#include "BSTstructure.h"
#include "ThreeAry.h"

/*
 * Simple C++ Test Suite
 */

void testTraverseTree() {
    BSTstructure<int> Twotree;
    PreOrder<int> preOrder;
    try{
    preOrder.TraverseTree(Twotree);
    }
    catch (std::exception e)
     {
        std::cout << "%TEST_FAILED% time=0 testname=testTraverseTree (PreOrder_Test) message=error message sample" << std::endl;
    }
}

void testTraverseTree2() {
    ThreeAry<int> Threetree;
    PreOrder<int> preOrder;
    try{
        preOrder.TraverseTree(Threetree);
    }
    catch(std::exception e){
        std::cout << "%TEST_FAILED% time=0 testname=testTraverseTree2 (PreOrder_Test) message=error message sample" << std::endl;

    }
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% PreOrder_Test" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testTraverseTree (PreOrder_Test)" << std::endl;
    testTraverseTree();
    std::cout << "%TEST_FINISHED% time=0 testTraverseTree (PreOrder_Test)" << std::endl;

    std::cout << "%TEST_STARTED% testTraverseTree2 (PreOrder_Test)" << std::endl;
    testTraverseTree2();
    std::cout << "%TEST_FINISHED% time=0 testTraverseTree2 (PreOrder_Test)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

