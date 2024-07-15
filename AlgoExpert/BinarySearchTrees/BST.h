#pragma once
#include <string>
#include <vector>

namespace algoExpert::binarySearchTrees {
    class BST {
    public:
        int value;
        BST* left;
        BST* right;

        BST(int val);
        BST& insert(int val);

        static BST& CreateBST(std::vector<std::string>& bst_string);
    };
}
