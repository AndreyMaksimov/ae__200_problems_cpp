// https://www.algoexpert.io/questions/repair-bst
//
// #BinarySearchTrees
// #Hard

#include <utility>
#include "RepairBst.h"

namespace algoExpert::binarySearchTrees {
    using std::pair, std::swap;

    typedef pair<BST*, BST*> bst_pair_t;

    void inOrderTraverse(BST* node, BST*& prev_node, bst_pair_t& wrong_pair) {
        if (node == nullptr || wrong_pair.second != nullptr) return;
        inOrderTraverse(node->left, prev_node, wrong_pair);
        if (prev_node != nullptr) {
            if (wrong_pair.first == nullptr) {
                if (node->value < prev_node->value) {
                    wrong_pair.first = prev_node;
                }
            }
            else if (wrong_pair.first && wrong_pair.second == nullptr){
                if (node->value < prev_node->value) {
                    wrong_pair.second = node;
                }
            }
        }
        prev_node = node;
        inOrderTraverse(node->right, prev_node, wrong_pair);
    }

    BST* repairBst(BST* tree) {
        pair<BST*, BST*> wrong_pair = {nullptr, nullptr};
        BST* prev_node = nullptr;
        inOrderTraverse(tree, prev_node, wrong_pair);

        if (wrong_pair.second == nullptr) {
            // case when a swaped pair is at the end
            // so lets take left or right (which one exists) from first
            wrong_pair.second = wrong_pair.first->left != nullptr ?
                wrong_pair.first->left : wrong_pair.first->right;
        }
        swap(wrong_pair.first->value, wrong_pair.second->value);
        return tree;
    }
}
