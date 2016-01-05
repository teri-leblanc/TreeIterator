/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TwoAryTree.h
 * Author: teri
 *
 * Created on January 4, 2016, 4:45 PM
 */

#ifndef TWOARYTREE_H
#define TWOARYTREE_H

class TwoAryTree {
public:
    TwoAryTree();
    TwoAryTree(const TwoAryTree& orig);
    virtual ~TwoAryTree();
    virtual void TraverseTree()=0;
private:

};

#endif /* TWOARYTREE_H */

