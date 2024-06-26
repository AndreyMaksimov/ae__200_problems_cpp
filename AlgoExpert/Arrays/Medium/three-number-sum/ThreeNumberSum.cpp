// https://www.algoexpert.io/questions/three-number-sum
//
// #Arrays
// #Easy
// #std::sort

#include <algorithm>
#include <set>
#include "ThreeNumberSum.h"

namespace algoExpert::arrays {
    using std::sort, std::set;
    vector<vector<int>> threeNumberSum_n3(vector<int>& array, int targetSum) {
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
    vector<vector<int>> threeNumberSum_n2(vector<int>& array, int targetSum) {
        const auto size = array.size();
        if (size < 3) return {};

        sort(array.begin(), array.end());
        vector<vector<int>> result;

        for (int i=0; i<(size-2); ++i) {
            int j = i + 1;
            int k = static_cast<int>(size) - 1;
            while (j != k) {
                const int n1 = array[i];
                const int n2 = array[j];
                const int n3 = array[k];
                const int sum = n1 + n2 + n3;
                if (sum == targetSum) {
                    result.push_back({n1, n2, n3});
                    ++j; // or --k; // doesn't matter
                }
                else if (sum > targetSum) --k;
                else ++j;
            }
        }

        return result;
    }
    vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
//        return threeNumberSum_n3(array, targetSum);
        return threeNumberSum_n2(array, targetSum);
    }
}
