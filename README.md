# TreeIterator
Collection of tree data structures and iterators for each.

#TwoAry.h
This is a template interface to use when implementing tree data structures where each node in the tree can have 0 to 2 children.

#TwoTreeNode.h
This is the structre of a node in a tree that can have 0 to 2 children

#ThreeAry.h
This is a class that creates a basic tree data structure where each node in the tree can have 0 to 3 children. The tree is set up in such
a way that attempts to keep the tree as balanced as possible. No other ordering is implemented.

#ThreeTreeNode.h
This is the structure of a node in a tree that can have 0 to 3 children

#TreeIterator
This is a template interface that is mimicking an abstract visitor class meant to use when wanting to traverse a tree structure. Currently
it is setup to take any TwoAry or ThreeAry tree.

#PostOrder.h
This is a concrete implementation of the TreeIterator interface meant to traverse an entire tree in postorder and print it out as it goes.

#PreOrder.h
This is a concrete implementation of the TreeIterator interface meant to traverse an entire tree in preorder and print it out as it goes.

#InOrder.h
This is a concrete implementation of the TreeIterator interface meant to traverse an entire tree in order and print it out as it goes.

A file is included called TreeIteratorDiagram that contains a basic UML Diagram that shows the srtucture of the project.
