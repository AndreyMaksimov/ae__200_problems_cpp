// https://www.algoexpert.io/questions/move-element-to-end
//
// #Arrays
// #Medium
// #std::swap

#include <algorithm>
#include "MoveElementToEnd.h"

namespace algoExpert::arrays {
    using std::swap;
    vector<int> moveElementToEnd(vector<int> array, int toMove) {
        if (array.empty()) return {};
        auto j = array.size() - 1;
        decltype(j) i = 0;
        while (true) {
            while (array[i] != toMove && (i != j)) ++i;
            while (array[j] == toMove && (i != j)) --j;
            if (i == j) break;
            else swap(array[i], array[j]);
        }
        return array;
    }
}
