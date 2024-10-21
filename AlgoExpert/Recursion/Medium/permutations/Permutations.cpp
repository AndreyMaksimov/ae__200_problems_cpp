// https://www.algoexpert.io/questions/permutations
//
// #Recursion
// #Medium

#include <vector>
#include <algorithm>
#include "Permutations.h"

#include <iterator>

namespace algoExpert::recursion {
    using std::vector, std::copy_if;
    void do_permutations(vector<int> v_src, vector<vector<int>>& result, vector<int> current) {
        if (v_src.size() > 1) {
            for(int i = 0; i < v_src.size(); i++) {
                auto current_new = current; // fork existing vector (its head)
                const auto a = v_src[i];
                current_new.push_back(a);
                vector<int> v_new;
                copy_if(v_src.begin(), v_src.end(), back_inserter(v_new),
                    [&v_src, &a](int item){return item != a;});
                do_permutations(v_new, result, current_new);
            }
        }
        else {
            current.push_back({v_src[0]});
            result.push_back(current);
        }
    }
    vector<vector<int>> getPermutations(vector<int> array) {
        if (array.empty()) return {};
        vector<vector<int>>result;
        vector<int> current;
        do_permutations(array, result, current);
        return result;
    }
}
