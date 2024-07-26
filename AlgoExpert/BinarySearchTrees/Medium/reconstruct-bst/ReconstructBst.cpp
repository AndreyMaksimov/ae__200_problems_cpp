// https://www.algoexpert.io/questions/reconstruct-bst
//
// #BinarySearchTrees
// #Medium

#include "ReconstructBst.h"

namespace algoExpert::binarySearchTrees {

    std::vector<int> preOrderTraversalValues = {10, 4, 2, 1, 5, 17, 19, 18};

    class BST {
    public:
        int value;
        BST* left = nullptr;
        BST* right = nullptr;

        BST(int value) { this->value = value; }
    };

    void add_left(BST* node, vector<int>::iterator& pos, const vector<int>::iterator& pos_end);

    void add_right(BST* node, vector<int>::iterator& pos, const vector<int>::iterator& pos_end) {
        while (node->right != nullptr) node = node->right;
        node->right = new BST(*pos);
        node = node->right;

        if (++pos == pos_end) return;

        if (*pos < node->value) {
            add_left(node, pos, pos_end);
        }
    }

    void add_left(BST* node, vector<int>::iterator& pos, const vector<int>::iterator& pos_end) {
        auto node_parent = node;
        if (node == nullptr) {
            node = new BST(*pos);
        }
        else {
            node->left = new BST(*pos);
            node = node->left;
        }

        if(++pos == pos_end) return;

        if (*pos < node->value) {
            add_left(node, pos, pos_end);
        }

        while ( (pos != pos_end) && (*pos < node_parent->value) ) {
            add_right(node, pos, pos_end);
        }
    }

    BST* reconstructBst(vector<int> preOrderTraversalValues) {
        if (preOrderTraversalValues.empty()) return nullptr;
        auto pos = preOrderTraversalValues.begin();
        auto pos_end = preOrderTraversalValues.end();

        auto node = new BST(*pos);
        if(++pos == pos_end) return node;

        if (*pos < node->value) add_left(node, pos, pos_end);
        while (pos != pos_end) add_right(node, pos, pos_end);
        return node;
    }
}
