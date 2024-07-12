// https://www.algoexpert.io/questions/longest-subarray-with-sum
//
// #Arrays
// #Hard

#include <algorithm>
#include "LongestSubarrayWithSum.h"

namespace algoExpert::arrays {
    using std::max;
    vector<int> longestSubarrayWithSum(vector<int> array, int targetSum) {
        auto size = static_cast<int>(array.size());
        if (size == 1) {
            if (array[0] == targetSum) return {0, 0};
            else return {};
        }

        vector<int> ans;
        auto max_range = 0;
        auto i0 = 0;
        while (i0 < size) {
            auto sum = 0;
            for (int i=i0;  i<size; ++i) {
                sum += array[i];
                if (sum == targetSum) {
                    auto range = i-i0+1;
                    if (max_range < range) {
                        max_range = range;
                        ans = {i0, i};
                    }
                }
                if (sum > targetSum) break;
            }
            ++i0;
        }
        return ans;
    }
}
