// https://www.algoexpert.io/questions/monotonic-array
//
// #Arrays
// #Medium

#include "MonotonicArray.h"

namespace algoExpert::arrays {
    bool isMonotonic(vector<int> array) {
        if (array.empty() || array.size() == 1) return true;

        auto pos = array.begin();
        auto a_prev = *pos++;
        int d_monotonic = 0;
        while (pos != array.end()) {
            auto a = *pos;
            const auto d = a - a_prev;
            if (d_monotonic == 0 && d !=0) {
                d_monotonic = d;
            }
            else if (d_monotonic*d < 0) return false;
            a_prev = a;
            ++pos;
        }
        return true;
    }
}
