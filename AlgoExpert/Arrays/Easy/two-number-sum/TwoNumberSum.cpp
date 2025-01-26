// https://www.algoexpert.io/questions/two-number-sum
//
// #arrays
// #easy
// #std::vector
// #std::count
//


#include <vector>
#include <unordered_set>
#include "TwoNumberSum.h"

namespace algoExpert::arrays {

    using std::vector, std::unordered_set;

    vector<int> twoNumberSum(const vector<int> array, const int targetSum) {
        std::unordered_set<int> hash;
        for (const auto i: array) {
            if ( (i+i) == targetSum) continue; // skip same value
            hash.insert(i);
        }
        for (const auto i: array) {
            const auto di = targetSum - i;
            if (hash.find(di) == hash.end()) continue;
            return {i, di};
        }
        return {};
    }
}
