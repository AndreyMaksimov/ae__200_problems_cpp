// https://www.algoexpert.io/questions/powerset
//
// #Recursion
// #Medium

#include <algorithm>
#include <vector>
#include "Powerset.h"

namespace algoExpert::recursion {
    using std::vector, std::copy_if;
    using vit_t = std::vector<int>::iterator ;
    void powerset_helper(vit_t& iter, const vit_t& end, vector<vector<int>>& result) {
        if (iter == end) return;
        vector<vector<int>> to_append;
        const auto& a = *iter;
        for (auto r : result) { // make copy for each existing vector in result
            r.push_back(a); // add new item from array to each new copy
            to_append.push_back(r);
        }
        // append new vectors to result
        result.insert(result.end(), to_append.begin(), to_append.end());
        powerset_helper(++iter, end, result);
    }
    vector<vector<int>> powerset(vector<int> array) {
        vector<vector<int>>result = {{}};
        auto iter = array.begin();
        const auto& end = array.end();
        powerset_helper(iter, end, result);
        return result;
    }
}
