/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newtestclass.h
 * Author: teri
 *
 * Created on Jan 7, 2016, 3:06:58 AM
 */

#ifndef NEWTESTCLASS_H
#define NEWTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class newtestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass);

    CPPUNIT_TEST(testBSTstructure);
    CPPUNIT_TEST(testBSTstructure2);
    CPPUNIT_TEST(testAccept);
    CPPUNIT_TEST(testInsert);
    CPPUNIT_TEST(testRemove);
    CPPUNIT_TEST(testContains);

    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass();
    virtual ~newtestclass();
    void setUp();
    void tearDown();

private:
    void testBSTstructure();
    void testBSTstructure2();
    void testAccept();
    void testInsert();
    void testRemove();
    void testContains();

};

#endif /* NEWTESTCLASS_H */

