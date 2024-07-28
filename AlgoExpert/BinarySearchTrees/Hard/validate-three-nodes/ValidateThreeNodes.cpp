// https://www.algoexpert.io/questions/validate-three-nodes
//
// #BinarySearchTrees
// #Hard

#include "ValidateThreeNodes.h"

namespace algoExpert::binarySearchTrees {

    bool findInBST(const BST* const node, const int value) {
        if (node == nullptr) return false;
        if (value == node->value) return true;
        if (value < node->value) {
            if (node->left) return findInBST(node->left, value);
        }
        else {
            if (node->right) return findInBST(node->right, value);
        }
        return false;
    }
    bool validateThreeNodes(BST* nodeOne, BST* nodeTwo, BST* nodeThree) {
        const auto value = nodeTwo->value;
        return findInBST(nodeOne,value) && findInBST(nodeTwo,nodeThree->value) ||
            (findInBST(nodeThree,value) && findInBST(nodeTwo,nodeOne->value));
    }
}
