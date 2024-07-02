// https://www.algoexpert.io/questions/longest-peak
//
// #Arrays
// #Medium

#include <algorithm>
#include "LongestPeak.h"

namespace algoExpert::arrays {
    using std::max;
    int longestPeak(vector<int> array) {
        if (array.size() < 3) return 0;
        auto pos = array.begin();
        auto a0 = *pos++;
        auto a1 = *pos++;
        int max_count = 0;
        int count = 0;
        bool found = false;
        while (pos != array.end()) {
            auto a2 = *pos;
            auto d1 = a1 - a0;
            auto d2 = a2 - a1;

            if (!found) {
                if (d1 > 0) {
                    if (count == 0) count = 2;
                    else ++count;
                }
                else {
                    count = 0;
                }
            }
            if (found) {
                if (d2 < 0) {
                    ++count;
                    max_count = max(max_count, count);
                }
                else {
                    max_count = max(max_count, count);
                    found = false;
                    count = 0;
                }
            }
            if (!found) {
                if (d1 > 0 && d2 < 0 ) {
                    found = true;
                    ++count;
                    max_count = max(max_count, count);
                }
            }

            a0 = a1;
            a1 = a2;
            ++pos;
        }
        return max_count;
    }
}
