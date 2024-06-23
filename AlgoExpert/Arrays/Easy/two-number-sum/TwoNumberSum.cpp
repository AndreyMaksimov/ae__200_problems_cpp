// https://www.algoexpert.io/questions/two-number-sum
//
// #arrays
// #easy
// #std::vector
// #std::count

#include <vector>
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

    vector<int> twoNumberSum(vector<int> array, int targetSum) {
        return twoNumberSum_n2(array, targetSum);
    }
}
