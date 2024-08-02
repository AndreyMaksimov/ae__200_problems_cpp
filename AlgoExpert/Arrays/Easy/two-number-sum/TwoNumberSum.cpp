// https://www.algoexpert.io/questions/two-number-sum
//
// #arrays
// #easy
// #std::vector
// #std::count
//
// https://www.youtube.com/watch?v=veJCKqtusK8
//

#include <vector>
#include <unordered_set>
#include "TwoNumberSum.h"

namespace algoExpert::arrays {

    using namespace std;

    // cpu: O(N**2), memory: O(1)
    vector<int> twoNumberSum_n2(vector<int>& array, int targetSum) {
        vector<int> result;
        const auto arraySize = array.size();
        for(int i=0; i<arraySize; ++i) {
            for(int j=i+1; j<arraySize; ++j) {
                const auto ai = array[i];
                const auto aj = array[j];
                if ((ai+aj) == targetSum) {
                    return {ai, aj};
                }
            }
        }
        return {};
    }

    vector<int> twoNumberSum_n1(const vector<int>& array, const int targetSum) {
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

    vector<int> twoNumberSum(vector<int> array, int targetSum) {
        // return twoNumberSum_n2(array, targetSum);
        return twoNumberSum_n1(array, targetSum);
    }
}
