cmake_minimum_required(VERSION 3.20)
project(project4)

set(CMAKE_CXX_STANDARD 98)

add_executable(project4 proj4.cpp LinkedNodeClass.cpp LinkedNodeClass.h SortedListClass.cpp SortedListClass.h FIFOQueueClass.cpp FIFOQueueClass.h LIFOStackClass.cpp LIFOStackClass.h)
