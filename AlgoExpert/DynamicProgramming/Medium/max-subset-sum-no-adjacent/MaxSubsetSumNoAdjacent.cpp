// https://www.algoexpert.io/questions/max-subset-sum-no-adjacent
//
// #DynamicProgramming
// #Easy

#include <algorithm>
#include "MaxSubsetSumNoAdjacent.h"

namespace algoExpert::dynamicProgramming {
    using std::max;
    int maxSubsetSumNoAdjacent(vector<int> array) {
        if (array.empty()) return 0;
        const auto size = array.size();
        if (size == 1) return array[0];
        if (size == 2) return array[0] >= array[1] ? array[0] : array[1];

        auto a0 = array[0];
        auto a1 = array[1];
        auto a2 = array[2] + a0;
        for (int i=3; i<size; ++i) {
            auto am = max(a0, a1);
            a0 = a1;
            a1 = a2;
            a2 = array[i] + am;

        }
        return max (a1 , a2);
    }
}
