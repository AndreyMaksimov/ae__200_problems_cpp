// https://www.algoexpert.io/questions/same-bsts
//
// #BinarySearchTrees
// #Hard
// TODO: implement Hint4

#include "SameBsts.h"

namespace algoExpert::binarySearchTrees {

    vector<int> left_nodes(const vector<int>& array) {
        vector<int> result;
        const auto a_root = array[0];
        for(auto i=1; i<array.size(); ++i) {
            const auto a = array[i];
            if (a < a_root) {
                result.push_back(a);
            }
        }
        return result;
    }
    vector<int> right_nodes(const vector<int>& array) {
        vector<int> result;
        const auto a_root = array[0];
        for(auto i=1; i<array.size(); ++i) {
            const auto a = array[i];
            if (a >= a_root) {
                result.push_back(a);
            }
        }
        return result;
    }
    bool same_nodes(vector<int> array1, vector<int> array2) {
        if (array1.size() < 3) return array1 == array2;
        bool ans = array1[0] == array2[0] && array1.size() == array2.size();
        if (!ans) return false;
        return same_nodes(left_nodes(array1), left_nodes(array2)) &&
            same_nodes(right_nodes(array1), right_nodes(array2));
    }
    bool sameBsts(vector<int> arrayOne, vector<int> arrayTwo) {
        const int size = arrayOne.size();
        if (size != arrayTwo.size()) return false;
        if (size < 3 ) return (arrayOne == arrayTwo);

        return same_nodes(arrayOne, arrayTwo);
    }
}
