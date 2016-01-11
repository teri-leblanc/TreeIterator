/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   InOrder_Test.cpp
 * Author: Terianne Bolding
 *
 * Created on January 11, 2016, 10:50 AM
 */

#include <stdlib.h>
#include <iostream>
#include "InOrder.h"
#include "BSTstructure.h"
#include "ThreeAry.h"
#include <exception>

/*
 * Simple C++ Test Suite
 */

void testTraverseTree() {
    const BSTstructure<int> Twotree;
    InOrder<int> inOrder;
    try{
    inOrder.TraverseTree(Twotree);
    }
    catch (std::exception e)
     {
        std::cout << "%TEST_FAILED% time=0 testname=testTraverseTree (newsimpletest1) message=error message sample" << std::endl;
    }
}

void testTraverseTree2() {
    ThreeAry<int> Threetree;
    InOrder<int> inOrder;
    try{
        inOrder.TraverseTree(Threetree);
    }
    catch(std::exception e){
        std::cout << "%TEST_FAILED% time=0 testname=testTraverseTree2 (newsimpletest1) message=error message sample" << std::endl;

    }
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% InOrder_Test" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testTraverseTree (InOrder_Test)" << std::endl;
    testTraverseTree();
    std::cout << "%TEST_FINISHED% time=0 testTraverseTree (InOrder_Test)" << std::endl;

    std::cout << "%TEST_STARTED% testTraverseTree2 (InOrder_Test)" << std::endl;
    testTraverseTree2();
    std::cout << "%TEST_FINISHED% time=0 testTraverseTree2 (InOrder_Test)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

