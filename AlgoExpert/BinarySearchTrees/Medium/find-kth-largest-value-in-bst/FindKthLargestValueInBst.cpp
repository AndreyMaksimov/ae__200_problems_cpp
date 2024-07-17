// https://www.algoexpert.io/questions/find-kth-largest-value-in-bst
//
// #BinarySearchTrees
// #Medium

#include "FindKthLargestValueInBst.h"

namespace algoExpert::binarySearchTrees {
    class BST {
    public:
        int value;
        BST* left = nullptr;
        BST* right = nullptr;
        static int k;
        static int answ;
        static bool found;
        static int count;

        BST(int value) { this->value = value; }

        // let's go from right to left
        static void  ReverseOrderTraverse(BST* tree) {
            if (found || !tree) return;
            ReverseOrderTraverse(tree->right);
            if (++count == BST::k)  {
                BST::answ = tree->value;
                found = true;
                return;
            }
            ReverseOrderTraverse(tree->left);
        }
    };

    int BST::k = 0;
    int BST::answ = -1;
    bool BST::found = false;
    int BST::count = 0;

    int findKthLargestValueInBst(BST* tree, int k) {
        // Write your code here.
        BST::k = k;
        BST::answ = -1;
        BST::found = false;
        BST::count = 0;

        BST::ReverseOrderTraverse(tree);
        return BST::answ ;
    }
}
