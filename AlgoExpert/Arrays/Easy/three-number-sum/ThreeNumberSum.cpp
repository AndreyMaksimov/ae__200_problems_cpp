// https://www.algoexpert.io/questions/three-number-sum
//
// #Arrays
// #Easy

#include <algorithm>
#include <set>
#include "ThreeNumberSum.h"

namespace algoExpert::arrays {
    using std::sort, std::set;
    vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
        const auto size = array.size();
        if (size < 3) return {};

        sort(array.begin(), array.end());
        vector<vector<int>> result;

        for (int i=0; i<(size-2); ++i) {
            const int n1 = array[i];
            if ((n1 + n1 + n1 + 2) > targetSum) break;
            for(int j=(i+1); j<(size-1); ++j) {
                const int n2 = array[j];
                if ((n1 + n2 + 1) > targetSum) break;
                for (int k=(j+1); k<size; ++k) {
                    const int n3 = array[k];
                    if ( (n1+n2+n3) == targetSum ) {
                        result.push_back({n1, n2, n3});
                    }
                    if ((n1+n2+n3) >= targetSum) break;
                }
            }
        }

        return result;
    }
}
