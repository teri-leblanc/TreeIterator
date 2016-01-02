cmake_minimum_required(VERSION 3.3)
project(TreeIterator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    BST.cpp
    BST.h
    main.cpp)

add_executable(TreeIterator ${SOURCE_FILES})