// https://www.algoexpert.io/questions/four-number-sum
//
// #Arrays
// #Hard
// #std::accumulate
// #std::unordered_multimap
// #std::pair
// #std::make_pair,
// #std::unordered_set#
// #std::sort
// #std::hash

//
// The idea is to create hash for pairs sums
//

#include <unordered_map>
#include <unordered_set>
#include <numeric>
#include <utility>
#include <algorithm>
#include "FourNumberSum.h"

namespace algoExpert::arrays {
    using std::accumulate, std::unordered_multimap, std::pair, std::make_pair,
    std::unordered_set, std::sort;
    vector<vector<int>> fourNumberSum(vector<int> array, int targetSum) {
        vector<vector<int>> result;
        const auto size = array.size();
        if (size < 4) return result;
        if (size == 4) {
            if (accumulate(array.begin(), array.end(), 0) == targetSum) {
                result.push_back(array);
            }
            return result;
        }

        unordered_multimap<int, pair<int, int>> sum_pair_map;
        for(int i=0; i<size; ++i) {
            for(auto j=i+1; j<size; ++j) {
                const auto ai = array[i];
                const auto aj = array[j];
                auto sum = ai + aj;
                sum_pair_map.insert(make_pair(sum,make_pair(ai, aj)));
            }
        }

        struct hashFunctionSorted
        {
            // https://www.geeksforgeeks.org/unordered-set-of-vectors-in-c-with-examples/
            size_t operator()(const vector<int> &myVector) const
            {
                std::hash<int> hasher;
                size_t answer = 0;
                for (int i : myVector) {
                    answer ^= hasher(i) + 0x9e3779b9 +
                              (answer << 6) + (answer >> 2);
                }
                return answer;
            }
        };
        unordered_set<vector<int>, hashFunctionSorted> resultVectors;
        for (const auto sum_pair: sum_pair_map ) {

            const auto other_sum_pair = targetSum - sum_pair.first;
            const auto pos_range = sum_pair_map.equal_range(other_sum_pair);

            for (auto pos = pos_range.first; pos != pos_range.second; ++pos) {
                const auto& pair1 = sum_pair.second;
                const auto& pair2 = pos->second;
                if (pair1.first == pair2.first || pair1.first == pair2.second || pair1.second == pair2.first || pair1.second == pair2.second ) continue;
                vector<int> v = {pair1.first, pair1.second, pair2.first, pair2.second};
                sort(v.begin(), v.end());
                resultVectors.insert(v);
            }
        }
        for (const auto& v: resultVectors) {
            result.push_back(v);
        }
        return result;
    }
}
