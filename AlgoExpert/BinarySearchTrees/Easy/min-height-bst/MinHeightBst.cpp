// https://www.algoexpert.io/questions/min-height-bst
//
// #BinarySearchTrees
// #Easy

#include "MinHeightBst.h"

namespace algoExpert::binarySearchTrees {
    class BST {
    public:
        int value;
        BST* left;
        BST* right;

        BST(int value) {
            this->value = value;
            left = nullptr;
            right = nullptr;
        }

        void insert(int value) {
            if (value < this->value) {
                if (left == nullptr) {
                    left = new BST(value);
                } else {
                    left->insert(value);
                }
            } else {
                if (right == nullptr) {
                    right = new BST(value);
                } else {
                    right->insert(value);
                }
            }
        }


    };

    void insert2(BST*& pbst, vector<int> array, int istart, int iend){
        if (istart == iend) {
            if (pbst) pbst->insert(array[istart]);
            else pbst = new BST(array[istart]);
            return;
        }
        int di = iend - istart + 1;
        int imid = istart + (di)/2;

        if (pbst) pbst->insert(array[imid]);
        else pbst = new BST(array[imid]);
        if (imid > istart) insert2(pbst, array, istart, imid-1);
        if (iend > imid) insert2(pbst, array, imid+1, iend);
    }

    BST* minHeightBst(vector<int> array) {
        if (array.empty()) return nullptr;
        if (array.size() == 1) return new BST(array[0]);

        BST* pbst = nullptr;
        insert2(pbst, array, 0, array.size()-1);

        // Write your code here.
        return pbst;
    }
}
