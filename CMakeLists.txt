cmake_minimum_required(VERSION 3.8)
project(SortAlgorithms)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp DataStructures/Node.cpp DataStructures/Node.h DataStructures/LinkedList.cpp DataStructures/LinkedList.h Sorts/SortAlgorithms.cpp Sorts/SortAlgorithms.h DataStructures/BinarySearchTree.cpp DataStructures/BinarySearchTree.h DataStructures/BinaryTreeNode.cpp DataStructures/BinaryTreeNode.h DataStructures/AVLNode.cpp DataStructures/AVLNode.h DataStructures/AVLTree.cpp DataStructures/AVLTree.h)
add_executable(SortAlgorithms ${SOURCE_FILES})