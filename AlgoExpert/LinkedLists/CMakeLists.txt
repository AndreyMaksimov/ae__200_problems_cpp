# AlgoExpert/LinkedLists/CMakeLists.txt

add_library(LinkedList LinkedList.cpp LinkedList.h)
set(BST_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR})
option(AE_LL "Add Linked List Library" ON)

add_subdirectory(Easy)
add_subdirectory(Medium)
