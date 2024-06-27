// https://www.algoexpert.io/questions/smallest-difference
//
// #Arrays
// #Medium
// #std::numeric_limits

#include <algorithm>
#include <limits>
#include "SmallestDifference.h"

namespace algoExpert::arrays {
    using std::sort, std::abs, std::max;
    vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) {
        sort(arrayOne.begin(), arrayOne.end());
        sort(arrayTwo.begin(), arrayTwo.end());
        const auto sizeOne= arrayOne.size();
        const auto sizeTwo= arrayTwo.size();

        const auto max_distance = std::numeric_limits<int>::max();
        auto distance = max_distance;
        int i2_from = 0;
        vector<int> result;
        for(int i1=0; i1<sizeOne; ++i1) {
            auto d12 = max_distance;
            for (int i2 = i2_from; i2 < sizeTwo; ++i2) {
                const auto a1 = arrayOne[i1];
                const auto a2 = arrayTwo[i2];
                auto d = abs(a1 - a2);
                if (d < distance) {
                    distance = d;
                    result = {a1, a2};
                }
                if (d < d12) {
                    d12 = d;
                }
                else {
                    i2_from = i2-1;
                    break;
                }
            }
        }
        return result;
    }
}
