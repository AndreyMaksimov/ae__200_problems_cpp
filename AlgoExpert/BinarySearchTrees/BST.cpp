#include "BST.h"

namespace algoExpert::binarySearchTrees {
    BST::BST(int val) : left(nullptr), right(nullptr), value(val){
    }

    BST& BST::insert(int val) {
        if (val > value) {
            if (right) return right->insert(val);
            right = new BST(val);
            return *right;
        }
        else {
            if (left) return left->insert(val);
            left = new BST(val);
            return *left;
        }
    }

    BST* BST::CreateBST(const int root, std::vector<std::string>& bst_data) {
        const auto pbst = new BST(root);
        return pbst;
    }

}
