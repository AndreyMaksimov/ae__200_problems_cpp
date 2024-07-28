# AlgoExpert/BinarySearchTrees/CMakeLists.txt

add_library(BinarySearchTrees BST.cpp BST.h)
set(BST_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR})
option(AE_BST "Add Binary Search Library" ON)

add_subdirectory(Easy)
add_subdirectory(Medium)
add_subdirectory(Hard)
add_subdirectory(VeryHard)
