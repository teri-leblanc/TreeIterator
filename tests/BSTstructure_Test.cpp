/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BSTstructure_test.cpp
 * Author: teri
 *
 * Created on January 7, 2016, 3:08 AM
 */

#include <stdlib.h>
#include <iostream>
#include "BSTstructure.h"
#include "InOrder.h"
#include "PostOrder.h"
#include "PreOrder.h"

/*
 * Simple C++ Test Suite
 */

void testBSTstructure() {
    BSTstructure<int> bSTstructure;
    if (bSTstructure.GetRoot()) {
        std::cout << "%TEST_FAILED% time=0 testname=testBSTstructure (BSTstructure_Test) message=Int constructor failed" << std::endl;
    }
    BSTstructure<std::string> bSTstructureS;
    if (bSTstructureS.GetRoot()) {
        std::cout << "%TEST_FAILED% time=0 testname=testBSTstructure (BSTstructure_Test) message=String constructor failed" << std::endl;
    }
}

void testBSTstructure2() {
    int _key=0;
    BSTstructure<int> bSTstructure(_key);
    if (!bSTstructure.GetRoot()) {
        std::cout << "%TEST_FAILED% time=0 testname=testBSTstructure2 (BSTstructure_Test) message=Int Root is empty" << std::endl;
    }
    if (bSTstructure.GetRoot()->key != _key) {
        std::cout << "%TEST_FAILED% time=0 testname=testBSTstructure2 (BSTstructure_Test) message=Int Key not in root of tree" << std::endl;
    }
    BSTstructure<char> bSTstructureS('k');
    if (!bSTstructureS.GetRoot()) {
        std::cout << "%TEST_FAILED% time=0 testname=testBSTstructure2 (BSTstructure_Test) message=String Root is empty" << std::endl;
    }
    if (bSTstructureS.GetRoot()->key != 'k') {
        std::cout << "%TEST_FAILED% time=0 testname=testBSTstructure2 (BSTstructure_Test) message=String Key not in root of tree" << std::endl;
    }
}

void testAccept() {
    InOrder<int> visitor;
    BSTstructure<int> bSTstructure;
    bSTstructure.Accept(visitor);
    if (false /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testAccept (BSTstructure_Test) message=error message sample" << std::endl;
    }
}

void testInsert() {
    BSTstructure<int> bSTstructure;
    if (!bSTstructure.Insert(10)) {
        std::cout << "%TEST_FAILED% time=0 testname=testInsert (BSTstructure_Test) message=1st Insert Failed" << std::endl;
    }
    else if(!bSTstructure.Contains(10)){
        std::cout << "%TEST_FAILED% time=0 testname=testInsert (BSTstructure_Test) message=Tree Does not contain 10 after successful insert" << std::endl;
    
    }
    if (!bSTstructure.Insert(20)) {
        std::cout << "%TEST_FAILED% time=0 testname=testInsert (BSTstructure_Test) message=2nd Insert Failed" << std::endl;
    }
    else if(!bSTstructure.Contains(20)){
        std::cout << "%TEST_FAILED% time=0 testname=testInsert (BSTstructure_Test) message=Tree Does not contain 20 after successful insert" << std::endl;
    }

    if (!bSTstructure.Insert(5)){
        std::cout << "%TEST_FAILED% time=0 testname=testInsert (BSTstructure_Test) message=3rd Insert Failed" << std::endl;
    }
    else if(!bSTstructure.Contains(5)){
        std::cout << "%TEST_FAILED% time=0 testname=testInsert (BSTstructure_Test) message=Tree Does not contain 30 after successful insert" << std::endl;
    
    }
    if (!bSTstructure.Insert(40)) {
        std::cout << "%TEST_FAILED% time=0 testname=testInsert (BSTstructure_Test) message=4th Insert Failed" << std::endl;
    }
    else if(!bSTstructure.Contains(40)){
        std::cout << "%TEST_FAILED% time=0 testname=testInsert (BSTstructure_Test) message=Tree Does not contain 40 after successful insert" << std::endl;
    
    }
        if (bSTstructure.Insert(40)) {
        std::cout << "%TEST_FAILED% time=0 testname=testInsert (BSTstructure_Test) message=Duplicate Insert did not fail" << std::endl;
    }

}

void testRemove() {

    BSTstructure<int> bSTstructure;
    if ( bSTstructure.Remove(10)) {
        std::cout << "%TEST_FAILED% time=0 testname=testRemove (BSTstructure_Test) message=data removed but data did not exist in tree" << std::endl;
    }
    bSTstructure.Insert(20);
    bSTstructure.Insert(15);
    bSTstructure.Insert(30);
    bSTstructure.Insert(5);
    bSTstructure.Insert(6);
    bSTstructure.Insert(25);
   if ( !bSTstructure.Remove(20)) {
        std::cout << "%TEST_FAILED% time=0 testname=testRemove (newsimpletest) message=20 not removed" << std::endl;
   }
    if ( !bSTstructure.Remove(15)) {
        std::cout << "%TEST_FAILED% time=0 testname=testRemove (newsimpletest) message=20 not removed" << std::endl;
    }
    if ( !bSTstructure.Remove(30)) {
        std::cout << "%TEST_FAILED% time=0 testname=testRemove (newsimpletest) message=20 not removed" << std::endl;
    }
    if ( !bSTstructure.Remove(5)) {
        std::cout << "%TEST_FAILED% time=0 testname=testRemove (newsimpletest) message=20 not removed" << std::endl;
    }
    if ( !bSTstructure.Remove(6)) {
        std::cout << "%TEST_FAILED% time=0 testname=testRemove (newsimpletest) message=20 not removed" << std::endl;
    }
    if ( !bSTstructure.Remove(25)) {
        std::cout << "%TEST_FAILED% time=0 testname=testRemove (newsimpletest) message=20 not removed" << std::endl;
    } 
}

void testContains() {
    BSTstructure<int> bSTstructure;
    if(bSTstructure.Contains(10)) {
        std::cout << "%TEST_FAILED% time=0 testname=testContains (newsimpletest) message=Data found on empty tree" << std::endl;
    }    
    bSTstructure.Insert(20);
    bSTstructure.Insert(15);
    bSTstructure.Insert(30);
    bSTstructure.Insert(5);
    bSTstructure.Insert(6);
    bSTstructure.Insert(25);
    if(!bSTstructure.Contains(20)) {
        std::cout << "%TEST_FAILED% time=0 testname=testContains (newsimpletest) message=20 not found" << std::endl;
    } 
    if(!bSTstructure.Contains(15)) {
        std::cout << "%TEST_FAILED% time=0 testname=testContains (newsimpletest) message=15 not found" << std::endl;
    } 
    if(!bSTstructure.Contains(30)) {
        std::cout << "%TEST_FAILED% time=0 testname=testContains (newsimpletest) message=30 not found" << std::endl;
    } 
    if(!bSTstructure.Contains(5)) {
        std::cout << "%TEST_FAILED% time=0 testname=testContains (newsimpletest) message=5 not found" << std::endl;
    } 
    if(!bSTstructure.Contains(6)) {
        std::cout << "%TEST_FAILED% time=0 testname=testContains (newsimpletest) message=6 not found" << std::endl;
    }
    if(!bSTstructure.Contains(25)) {
        std::cout << "%TEST_FAILED% time=0 testname=testContains (newsimpletest) message=25 not found" << std::endl;
    } 
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% BSTstructure_Test" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testBSTstructure (BSTstructure_Test)" << std::endl;
    testBSTstructure();
    std::cout << "%TEST_FINISHED% time=0 testBSTstructure (BSTstructure_Test)" << std::endl;

    std::cout << "%TEST_STARTED% testBSTstructure2 (BSTstructure_Test)" << std::endl;
    testBSTstructure2();
    std::cout << "%TEST_FINISHED% time=0 testBSTstructure2 (BSTstructure_Test)" << std::endl;

    std::cout << "%TEST_STARTED% testAccept (BSTstructure_Test)" << std::endl;
    testAccept();
    std::cout << "%TEST_FINISHED% time=0 testAccept (BSTstructure_Test)" << std::endl;

    std::cout << "%TEST_STARTED% testInsert (BSTstructure_Test)" << std::endl;
    testInsert();
    std::cout << "%TEST_FINISHED% time=0 testInsert (BSTstructure_Test)" << std::endl;

    std::cout << "%TEST_STARTED% testRemove (BSTstructure_Test)" << std::endl;
    testRemove();
    std::cout << "%TEST_FINISHED% time=0 testRemove (BSTstructure_Test)" << std::endl;

    std::cout << "%TEST_STARTED% testContains (BSTstructure_Test)" << std::endl;
    testContains();
    std::cout << "%TEST_FINISHED% time=0 testContains (BSTstructure_Test)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

