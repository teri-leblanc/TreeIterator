/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TreeIterator.h
 * Author: teri
 *
 */

#ifndef TREEITERATOR_H
#define TREEITERATOR_H
template <class T>
class TreeIterator {
public:
    TreeIterator();
    TreeIterator(const TreeIterator& orig);
    virtual ~TreeIterator();
    bool HasNext(){}
    T Next(){}
private:

};

#endif /* TREEITERATOR_H */

