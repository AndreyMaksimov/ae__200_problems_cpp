// https://www.algoexpert.io/questions/same-bsts
//
// #BinarySearchTrees
// #Hard

#include <limits>
#include <unordered_map>
#include <utility>
#include <iostream>
#include "SameBsts.h"

namespace algoExpert::binarySearchTrees {
    using std::unordered_multimap, std::numeric_limits, std::pair, std::make_pair;
    using std::cout, std::endl;
    bool sameBsts(vector<int> arrayOne, vector<int> arrayTwo) {
        if (arrayOne.empty()) return false;
        const int size = arrayOne.size();
        if (size != arrayTwo.size()) return false;

        int a = arrayOne[0];
        if (a != arrayTwo[0]) return false;

        unordered_multimap<int, pair<int, int>> value_lefr_right;

        for (int i = 0; i<size-1; ++i) {
            auto left_right_pair = make_pair(numeric_limits<int>::min(), numeric_limits<int>::max());
            auto left = false, right = false;
            for(int j=i+1; j<size && !(left&&right); ++j) {
                if (arrayOne[j] < arrayOne[i] && !left) {
                    left_right_pair.first = arrayOne[j];
                    left = true;
                }
                if (arrayOne[j] >= arrayOne[i] && !right) {
                    left_right_pair.second = arrayOne[j];
                    right = true;
                }
            }
            cout << "insert: value = " << arrayOne[i] << "\tleft = " << left_right_pair.first << "\tright = "
            << left_right_pair.second << endl;
            value_lefr_right.insert({arrayOne[i], left_right_pair});
        }

        for (int i = 0; i<size-1; ++i) {
            auto left_right_pair = make_pair(numeric_limits<int>::min(), numeric_limits<int>::max());
            auto left = false, right = false;
            for(int j=i+1; j<size && !(left&&right); ++j) {
                if (arrayTwo[j] < arrayTwo[i] && !left) {
                    left_right_pair.first = arrayTwo[j];
                    left = true;
                }
                if (arrayTwo[j] >= arrayTwo[i] && !right) {
                    left_right_pair.second = arrayTwo[j];
                    right = true;
                }
            }
            cout << "find: value = " << arrayTwo[i] << "\tleft = " << left_right_pair.first << "\tright = "
            << left_right_pair.second << endl;
            const auto res = value_lefr_right.find(arrayTwo[i]);
            if (res == value_lefr_right.end()) return false;
            for(auto pos=res; pos != value_lefr_right.end(); ++pos) {
                auto p = pos->second;
                if (p == left_right_pair) {
                    value_lefr_right.erase(pos);
                    break;
                }
                return false;
            }
        }
        return true;

    }
}
