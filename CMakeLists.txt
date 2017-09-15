cmake_minimum_required(VERSION 3.8)
project(SortAlgorithms)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp DataStructures/Node.cpp DataStructures/Node.h DataStructures/LinkedList.cpp DataStructures/LinkedList.h Sorts/SortAlgorithms.cpp Sorts/SortAlgorithms.h)
add_executable(SortAlgorithms ${SOURCE_FILES})