// https://www.algoexpert.io/questions/find-closest-value-in-bst
//
// #BinarySearchTrees
// #Easy

#include <cmath>
#include <limits>
#include "FindClosestValueInBst.h"

namespace algoExpert::binarySearchTrees {
    using std::abs;
    int findClosestValueInBst(int target, BST* tree) {
        int result = tree->value;
        int min_diff = abs(result - target);
        while (tree != nullptr) {
            if (abs(tree->value - target) < min_diff) {
                min_diff = abs(tree->value - target);
                result = tree->value;
            }
            if (target >= tree->value) tree = tree->right;
            else tree = tree->left;
        }
        return result;
    }
}
