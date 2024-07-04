// https://www.algoexpert.io/questions/zero-sum-subarray
//
// #Arrays
// #Medium
#include <unordered_set>
#include "ZeroSumSubarray.h"

namespace algoExpert::arrays {
    using std::unordered_set;
    bool zeroSumSubarray(vector<int> nums) {
        if (nums.empty()) return false;

        unordered_set<int> set_a;
        int sum = 0;
        for (auto n: nums) {
            sum += n;
            if (sum == 0) return true;
            auto r = set_a.insert(sum);
            if (!r.second) return true;
        }
        return false;
    }
}
