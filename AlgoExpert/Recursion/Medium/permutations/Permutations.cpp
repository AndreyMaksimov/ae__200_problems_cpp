// https://www.algoexpert.io/questions/permutations
//
// #Recursion
// #Medium

// #std::copy_if

#include <vector>
#include <algorithm>
#include "Permutations.h"

namespace algoExpert::recursion {
    using std::vector, std::copy_if;
    void do_permutations(const vector<int>& v_src, const vector<int>& v_tag, vector<vector<int>>& result) {
        for(const auto a_src : v_src) {
            auto v_tag_new = v_tag; // fork existing tag vector (its head)
            v_tag_new.push_back(a_src);
            if (v_src.size() > 1) {
                vector<int> v_src_new; // copy v_src -> v_src_new except a_src
                copy_if(v_src.begin(), v_src.end(), back_inserter(v_src_new),
                        [&v_src, &a_src](const int item){return item != a_src;});
                do_permutations(v_src_new, v_tag_new, result);
            } else {
                result.push_back(v_tag_new);
            }
        }
    }
    vector<vector<int>> getPermutations(vector<int> array) {
        if (array.empty()) return {};
        vector<vector<int>>result;
        do_permutations(array, {}, result);
        return result;
    }
}
