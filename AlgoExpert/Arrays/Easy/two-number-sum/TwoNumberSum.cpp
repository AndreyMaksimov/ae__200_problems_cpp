// https://www.algoexpert.io/questions/two-number-sum
//
// #arrays
// #easy

#include <vector>
#include <unordered_set>
#include "TwoNumberSum.h"

namespace algoExpert::arrays {

    using std::vector, std::unordered_set;

    // O(N) time / O(1) memory
    vector<int> twoNumberSum(const vector<int> array, const int targetSum) {
        unordered_set<int> hash;
        for (const auto& i: array) {
            const auto di = targetSum - i;
            if (hash.find(di) != hash.end()) return {i, di};
            hash.insert(i);
        }
        return {};
    }
}
