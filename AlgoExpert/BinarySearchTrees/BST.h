#pragma once
#include <string>
#include <vector>

namespace algoExpert::binarySearchTrees {
    /**
     * Helper class
     * 1) Parses test cases
     * 2) Fill in BST structure to pass it to a problem solving function
     */
    class BST {
    public:
        int value;
        BST* left = nullptr;
        BST* right = nullptr;

        explicit BST(int val);
        BST& insert(int val);

        ~BST() {
            delete left;
            delete right;
        }

        static BST* CreateBST(int root, const std::vector<std::string>& bst_data);
    };
}
