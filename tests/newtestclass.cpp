/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newtestclass.cpp
 * Author: teri
 *
 * Created on Jan 7, 2016, 3:06:59 AM
 */

#include "newtestclass.h"
#include "BSTstructure.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass);

newtestclass::newtestclass() {
}

newtestclass::~newtestclass() {
}

void newtestclass::setUp() {
}

void newtestclass::tearDown() {
}

void newtestclass::testBSTstructure() {
    BSTstructure bSTstructure();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass::testBSTstructure2() {
    int& _key;
    BSTstructure bSTstructure(_key);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass::testAccept() {
    TreeIterator<class>& visitor;
    BSTstructure bSTstructure;
    bSTstructure.Accept(visitor);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass::testInsert() {
    const T& data;
    BSTstructure bSTstructure;
    bool result = bSTstructure.Insert(data);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass::testRemove() {
    const T& data;
    BSTstructure bSTstructure;
    bool result = bSTstructure.Remove(data);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass::testContains() {
    const T& data;
    BSTstructure bSTstructure;
    bool result = bSTstructure.Contains(data);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

