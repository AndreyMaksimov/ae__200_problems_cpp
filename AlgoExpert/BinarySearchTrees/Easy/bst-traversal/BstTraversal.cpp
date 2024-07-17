// https://www.algoexpert.io/questions/bst-traversal
//
// #BinarySearchTrees
// #Easy

#include "BstTraversal.h"

namespace algoExpert::binarySearchTrees {
    void inOrderTraverse(BST* tree, vector<int>& array) {
        if (!tree) return;
        inOrderTraverse(tree->left, array);
        array.push_back(tree->value);
        inOrderTraverse(tree->right, array);
    }

    void preOrderTraverse(BST* tree, vector<int>& array) {
        if (!tree) return;
        array.push_back(tree->value);
        preOrderTraverse(tree->left, array);
        preOrderTraverse(tree->right, array);
    }

    void postOrderTraverse(BST* tree, vector<int>& array) {
        if (!tree) return;
        postOrderTraverse(tree->left, array);
        postOrderTraverse(tree->right, array);
        array.push_back(tree->value);
    }
}
