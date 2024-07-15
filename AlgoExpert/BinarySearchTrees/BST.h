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

        ~BST() {
            if (left) delete left;
            if (right) delete right;
        }

        static BST* CreateBST(int root, std::vector<std::string>& bst_data);
    };
}
