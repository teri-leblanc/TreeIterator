/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ThreeAry_Test.cpp
 * Author: teri
 *
 * Created on January 11, 2016, 10:59 AM
 */

#include <stdlib.h>
#include <iostream>
#include "ThreeAry.h"

/*
 * Simple C++ Test Suite
 */

void testThreeAry() {
    ThreeAry<int> threeAry;
    if (threeAry.root) {
        std::cout << "%TEST_FAILED% time=0 testname=testThreeAry (ThreeAry_Test) message=Root is not null but should be" << std::endl;
    }
}

void testThreeAry2() {
    const int& _key = 5;
    ThreeAry<int> threeAry(_key);
    if (!threeAry.root->key == _key) {
        std::cout << "%TEST_FAILED% time=0 testname=testThreeAry2 (ThreeAry_Test) message=error message sample" << std::endl;
    }
}

void testInsert() {
    ThreeAry<int> threeAry;
    if (!threeAry.Insert(10)) {
        std::cout << "%TEST_FAILED% time=0 testname=testInsert (ThreeAry_Test) message=Insert on 10 failed" << std::endl;
    }
    else if (!threeAry.Contains(10)) {
        std::cout << "%TEST_FAILED% time=0 testname=testInsert (ThreeAry_Test) message=10 not in the tree but insert passed" << std::endl;
    }
    if (!threeAry.Insert(20)) {
        std::cout << "%TEST_FAILED% time=0 testname=testInsert (ThreeAry_Test) message=Insert on 20 failed" << std::endl;
    }
    else if (!threeAry.Contains(20)) {
        std::cout << "%TEST_FAILED% time=0 testname=testInsert (ThreeAry_Test) message=20 not in the tree but insert passed" << std::endl;
    }
    if (!threeAry.Insert(30)) {
        std::cout << "%TEST_FAILED% time=0 testname=testInsert (ThreeAry_Test) message=Insert on 30 failed" << std::endl;
    }
    else if (!threeAry.Contains(30)) {
        std::cout << "%TEST_FAILED% time=0 testname=testInsert (ThreeAry_Test) message=30 not in the tree but insert passed" << std::endl;
    }
    if (!threeAry.Insert(40)) {
        std::cout << "%TEST_FAILED% time=0 testname=testInsert (ThreeAry_Test) message=Insert on 40 failed" << std::endl;
    }
    else if (!threeAry.Contains(40)) {
        std::cout << "%TEST_FAILED% time=0 testname=testInsert (ThreeAry_Test) message=40 not in the tree but insert passed" << std::endl;
    }
    if (threeAry.Insert(40)) {
        std::cout << "%TEST_FAILED% time=0 testname=testInsert (ThreeAry_Test) message=Insert on 40 duplicate passed" << std::endl;
    }

}

void testRemove() {

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
    if(!threetree.Remove(20)){
        std::cout << "%TEST_FAILED% time=0 testname=testRemove (ThreeAry_Test) message=20 not removed" << std::endl;
    }
    if(!threetree.Remove(10)){
        std::cout << "%TEST_FAILED% time=0 testname=testRemove (ThreeAry_Test) message=10 not removed" << std::endl;
    }
    if(!threetree.Remove(19)){
        std::cout << "%TEST_FAILED% time=0 testname=testRemove (ThreeAry_Test) message=19 not removed" << std::endl;
    }
    if(!threetree.Remove(12)){
        std::cout << "%TEST_FAILED% time=0 testname=testRemove (ThreeAry_Test) message=12 not removed" << std::endl;
    }
    if(!threetree.Remove(1)){
        std::cout << "%TEST_FAILED% time=0 testname=testRemove (ThreeAry_Test) message=1 not removed" << std::endl;
    }
    if(!threetree.Remove(2)){
        std::cout << "%TEST_FAILED% time=0 testname=testRemove (ThreeAry_Test) message=2 not removed" << std::endl;
    }
    if(!threetree.Remove(3)){
        std::cout << "%TEST_FAILED% time=0 testname=testRemove (ThreeAry_Test) message=3 not removed" << std::endl;
    }
    if(!threetree.Remove(4)){
        std::cout << "%TEST_FAILED% time=0 testname=testRemove (ThreeAry_Test) message=4 not removed" << std::endl;
    }
    if(!threetree.Remove(5)){
        std::cout << "%TEST_FAILED% time=0 testname=testRemove (ThreeAry_Test) message=5 not removed" << std::endl;
    }
    if(!threetree.Remove(6)){
        std::cout << "%TEST_FAILED% time=0 testname=testRemove (ThreeAry_Test) message=6 not removed" << std::endl;
    }
    if(!threetree.Remove(7)){
        std::cout << "%TEST_FAILED% time=0 testname=testRemove (ThreeAry_Test) message=7 not removed" << std::endl;
    }
    if(!threetree.Remove(8)){
        std::cout << "%TEST_FAILED% time=0 testname=testRemove (ThreeAry_Test) message=8 not removed" << std::endl;
    }
    if(!threetree.Remove(9)){
        std::cout << "%TEST_FAILED% time=0 testname=testRemove (ThreeAry_Test) message=9 not removed" << std::endl;
    }
    if(!threetree.Remove(13)){
        std::cout << "%TEST_FAILED% time=0 testname=testRemove (ThreeAry_Test) message=13 not removed" << std::endl;
    }
    if(!threetree.Remove(14)){
        std::cout << "%TEST_FAILED% time=0 testname=testRemove (ThreeAry_Test) message=14 not removed" << std::endl;
    }
    if(!threetree.Remove(15)){
        std::cout << "%TEST_FAILED% time=0 testname=testRemove (ThreeAry_Test) message=15 not removed" << std::endl;
    }
}

void testContains() {
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
    if(!threetree.Contains(20)){
        std::cout << "%TEST_FAILED% time=0 testname=testContains (ThreeAry_Test) message=20 not found" << std::endl;
    }
    if(!threetree.Contains(10)){
        std::cout << "%TEST_FAILED% time=0 testname=testContains (ThreeAry_Test) message=10 not found" << std::endl;
    }
    if(!threetree.Contains(19)){
        std::cout << "%TEST_FAILED% time=0 testname=testContains (ThreeAry_Test) message=19 not found" << std::endl;
    }
    if(!threetree.Contains(12)){
        std::cout << "%TEST_FAILED% time=0 testname=testContains (ThreeAry_Test) message=12 not found" << std::endl;
    }
    if(!threetree.Contains(1)){
        std::cout << "%TEST_FAILED% time=0 testname=testContains (ThreeAry_Test) message=1 not found" << std::endl;
    }
    if(!threetree.Contains(2)){
        std::cout << "%TEST_FAILED% time=0 testname=testContains (ThreeAry_Test) message=2 not found" << std::endl;
    }
    if(!threetree.Contains(3)){
        std::cout << "%TEST_FAILED% time=0 testname=testContains (ThreeAry_Test) message=3 not found" << std::endl;
    }
    if(!threetree.Contains(4)){
        std::cout << "%TEST_FAILED% time=0 testname=testContains (ThreeAry_Test) message=4 not found" << std::endl;
    }
    if(!threetree.Contains(5)){
        std::cout << "%TEST_FAILED% time=0 testname=testContains (ThreeAry_Test) message=5 not found" << std::endl;
    }
    if(!threetree.Contains(6)){
        std::cout << "%TEST_FAILED% time=0 testname=testContains (ThreeAry_Test) message=6 not found" << std::endl;
    }
    if(!threetree.Contains(7)){
        std::cout << "%TEST_FAILED% time=0 testname=testContains (ThreeAry_Test) message=7 not found" << std::endl;
    }
    if(!threetree.Contains(8)){
        std::cout << "%TEST_FAILED% time=0 testname=testContains (ThreeAry_Test) message=8 not found" << std::endl;
    }
    if(!threetree.Contains(9)){
        std::cout << "%TEST_FAILED% time=0 testname=testContains (ThreeAry_Test) message=9 not found" << std::endl;
    }
    if(!threetree.Contains(13)){
        std::cout << "%TEST_FAILED% time=0 testname=testContains (ThreeAry_Test) message=13 not found" << std::endl;
    }
    if(!threetree.Contains(14)){
        std::cout << "%TEST_FAILED% time=0 testname=testContains (ThreeAry_Test) message=14 not found" << std::endl;
    }
    if(!threetree.Contains(15)){
        std::cout << "%TEST_FAILED% time=0 testname=testContains (ThreeAry_Test) message=15 not found" << std::endl;
    }
}

void testAccept() {
/*    TreeIterator<class>& visitor;
    ThreeAry threeAry;
    threeAry.Accept(visitor);
    if (true /*check result) {
        std::cout << "%TEST_FAILED% time=0 testname=testAccept (ThreeAry_Test) message=error message sample" << std::endl;
    }*/
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% ThreeAry_Test" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testThreeAry (ThreeAry_Test)" << std::endl;
    testThreeAry();
    std::cout << "%TEST_FINISHED% time=0 testThreeAry (ThreeAry_Test)" << std::endl;

    std::cout << "%TEST_STARTED% testThreeAry2 (ThreeAry_Test)" << std::endl;
    testThreeAry2();
    std::cout << "%TEST_FINISHED% time=0 testThreeAry2 (ThreeAry_Test)" << std::endl;

    std::cout << "%TEST_STARTED% testInsert (ThreeAry_Test)" << std::endl;
    testInsert();
    std::cout << "%TEST_FINISHED% time=0 testInsert (ThreeAry_Test)" << std::endl;

    std::cout << "%TEST_STARTED% testRemove (ThreeAry_Test)" << std::endl;
    testRemove();
    std::cout << "%TEST_FINISHED% time=0 testRemove (ThreeAry_Test)" << std::endl;

    std::cout << "%TEST_STARTED% testContains (ThreeAry_Test)" << std::endl;
    testContains();
    std::cout << "%TEST_FINISHED% time=0 testContains (ThreeAry_Test)" << std::endl;

    std::cout << "%TEST_STARTED% testAccept (ThreeAry_Test)" << std::endl;
    testAccept();
    std::cout << "%TEST_FINISHED% time=0 testAccept (ThreeAry_Test)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

