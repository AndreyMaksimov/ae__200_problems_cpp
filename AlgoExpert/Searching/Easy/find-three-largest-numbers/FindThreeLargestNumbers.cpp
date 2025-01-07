// https://www.algoexpert.io/questions/find-three-largest-numbers
//
// #Searching
// #Easy

#include <limits>
#include "FindThreeLargestNumbers.h"

namespace algoExpert::searching {
    vector<int> findThreeLargestNumbers(vector<int> array) {
        constexpr auto a_min = std::numeric_limits<int>::min();
        auto a1 = a_min, a2 = a_min, a3 = a_min;
        for (const auto& a : array) {
            if (a1 <= a) {
                a3 = a2;
                a2 = a1;
                a1 = a;
            }
            if (a < a1 && a2 <= a) {
                a3 = a2;
                a2 = a;
            }
            if (a < a2 && a3 <= a) {
                a3 = a;
            }
        }
        return {a3, a2, a1};
    }
}
