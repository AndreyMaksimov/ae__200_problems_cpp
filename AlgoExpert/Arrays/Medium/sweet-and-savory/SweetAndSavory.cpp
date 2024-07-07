// https://www.algoexpert.io/questions/sweet-and-savory
//
// #Arrays
// #Medium

#include <algorithm>
#include <iostream>
#include <iterator>
#include <functional>
#include "SweetAndSavory.h"

namespace algoExpert::arrays {
    using std::sort, std::abs, std::copy_if, std::back_inserter;
    using std::cout, std::endl;
    vector<int> sweetAndSavory(vector<int> dishes, int target) {
        const auto size = dishes.size();
        vector<int> empty_result = {0, 0};
        if (size < 2) return empty_result;

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
        auto pos_savory = sweets.begin();


        return result;
    }
}
