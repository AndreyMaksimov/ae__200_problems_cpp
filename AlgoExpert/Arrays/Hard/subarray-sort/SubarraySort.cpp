// https://www.algoexpert.io/questions/subarray-sort
//
// #Arrays
// #Hard
// #std::numeric_limits

#include <numeric>
#include <limits>
#include <algorithm>
#include "SubarraySort.h"

namespace algoExpert::arrays {
    using std::numeric_limits, std::max, std::min;

    vector<int> subarraySort(vector<int> array) {
        const int size = array.size();
        if (size < 2) return {-1, -1};
        int left=-1, right=-1;

        auto a_min = numeric_limits<int>::max();
        int i_min = 0;
        for (auto i=1; i<size; ++i) {
            if (array[i] < array[i-1]) {
                i_min = i;
                a_min = min(array[i_min], a_min);
            }
        }
        // find max in range [0, i_min]
        auto max_in_unsorted_range = numeric_limits<int>::min();
        for (auto i=0; i < i_min; ++i) {
            max_in_unsorted_range = max(max_in_unsorted_range, array[i]);
        }

        for (auto i = (size - 1); i >= i_min; --i) {
            if (array[i] < max_in_unsorted_range) {
                right = i;
                break;
            }
        }

        for (int i=0; i<size; ++i) {
            if (a_min < array[i]) {
                left = i;
                break;
            }
        }

        return {left, right};
    }
}
