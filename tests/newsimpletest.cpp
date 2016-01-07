/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newsimpletest.cpp
 * Author: teri
 *
 * Created on January 7, 2016, 3:08 AM
 */

#include <stdlib.h>
#include <iostream>
#include "BSTstructure.h"

/*
 * Simple C++ Test Suite
 */

void testBSTstructure() {
    BSTstructure bSTstructure();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testBSTstructure (newsimpletest) message=error message sample" << std::endl;
    }
}

void testBSTstructure2() {
    int& _key;
    BSTstructure bSTstructure(_key);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testBSTstructure2 (newsimpletest) message=error message sample" << std::endl;
    }
}

void testAccept() {
    TreeIterator<class>& visitor;
    BSTstructure bSTstructure;
    bSTstructure.Accept(visitor);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testAccept (newsimpletest) message=error message sample" << std::endl;
    }
}

void testInsert() {
    const T& data;
    BSTstructure bSTstructure;
    bool result = bSTstructure.Insert(data);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testInsert (newsimpletest) message=error message sample" << std::endl;
    }
}

void testRemove() {
    const T& data;
    BSTstructure bSTstructure;
    bool result = bSTstructure.Remove(data);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testRemove (newsimpletest) message=error message sample" << std::endl;
    }
}

void testContains() {
    const T& data;
    BSTstructure bSTstructure;
    bool result = bSTstructure.Contains(data);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testContains (newsimpletest) message=error message sample" << std::endl;
    }
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% newsimpletest" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testBSTstructure (newsimpletest)" << std::endl;
    testBSTstructure();
    std::cout << "%TEST_FINISHED% time=0 testBSTstructure (newsimpletest)" << std::endl;

    std::cout << "%TEST_STARTED% testBSTstructure2 (newsimpletest)" << std::endl;
    testBSTstructure2();
    std::cout << "%TEST_FINISHED% time=0 testBSTstructure2 (newsimpletest)" << std::endl;

    std::cout << "%TEST_STARTED% testAccept (newsimpletest)" << std::endl;
    testAccept();
    std::cout << "%TEST_FINISHED% time=0 testAccept (newsimpletest)" << std::endl;

    std::cout << "%TEST_STARTED% testInsert (newsimpletest)" << std::endl;
    testInsert();
    std::cout << "%TEST_FINISHED% time=0 testInsert (newsimpletest)" << std::endl;

    std::cout << "%TEST_STARTED% testRemove (newsimpletest)" << std::endl;
    testRemove();
    std::cout << "%TEST_FINISHED% time=0 testRemove (newsimpletest)" << std::endl;

    std::cout << "%TEST_STARTED% testContains (newsimpletest)" << std::endl;
    testContains();
    std::cout << "%TEST_FINISHED% time=0 testContains (newsimpletest)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

