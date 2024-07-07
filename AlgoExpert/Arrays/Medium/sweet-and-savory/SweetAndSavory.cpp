// https://www.algoexpert.io/questions/sweet-and-savory
//
// #Arrays
// #Medium
// #std::copy_if
// #std::back_inserter

#include <algorithm>
#include <iostream>
#include <limits>
#include "SweetAndSavory.h"

namespace algoExpert::arrays {
    using std::sort, std::abs, std::copy_if, std::back_inserter;
    using std::cout, std::endl;
    vector<int> sweetAndSavory(vector<int> dishes, int target) {
        vector<int> empty_result = {0, 0};
        if (dishes.size() < 2) return empty_result;

        vector<int> sweets;
        vector<int> savories;

        // Create separate containers for sweets & savories
        copy_if(dishes.begin(), dishes.end(),
                back_inserter(sweets), [](int x){return (x < 0);});
        if (sweets.empty()) return empty_result;
        copy_if(dishes.begin(), dishes.end(),
                back_inserter(savories), [](int x){return (x > 0);});
        if (savories.empty()) return empty_result;

        // Sort sweets & savories
        sort(sweets.begin(), sweets.end(), std::greater<>());
        sort(savories.begin(), savories.end());

        vector<int> result = empty_result;

        auto pos_sweet = sweets.begin();
        auto pos_savory = savories.begin();

        int sweet, savory;
        int min_distance_to_target = std::numeric_limits<int>::max();

        while (pos_sweet != sweets.end() && pos_savory != savories.end()) {
            sweet = *pos_sweet;
            savory = *pos_savory;
            const auto sum_taste = sweet + savory;
            if (sum_taste <= target) {
                const auto distance_to_target = target - sum_taste;
                if (min_distance_to_target > distance_to_target) {
                    min_distance_to_target = distance_to_target;
                    result = {sweet, savory};
                }
                ++pos_savory;
            }
            else {
                ++pos_sweet;
            }
        }
        return result;
    }
}
