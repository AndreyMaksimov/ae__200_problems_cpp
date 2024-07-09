// https://www.algoexpert.io/questions/largest-range
//
// #Arrays
// #Hard
// #std::unordered_set
// #std::pair
// #std::make_pair

#include <unordered_set>
#include <utility>
#include "LargestRange.h"

namespace algoExpert::arrays {
    using std::unordered_set, std::pair, std::make_pair;
    vector<int> largestRange(vector<int> array) {
        if (array.empty()) return {-1, -1};
        if (array.size() == 1) return {array[0], array[0]};
        unordered_set<int> values;
        for(const auto a: array) {
            values.insert(a);
        }

        auto max_range = 0;
        auto range_left = -1;
        auto range_right = -1;

        for(int i=0; i<array.size() && !values.empty(); ++i) {
            const auto a = array[i];
            int al = a;
            int ar = a;
#if __cplusplus >= 202002L
            // C++20 (and later) code
            while(values.contains(al-1)) {
                --al;
                values.erase(al);
            }
            while(values.contains(ar+1)) {
                ++ar;
                values.erase(ar);
            }
#else
            while(const auto pos = values.find(al-1) != values.end()) {
                --al;
                values.erase(pos);
            }
            while(const auto pos = values.find(ar+1) != values.end()) {
                ++ar;
                values.erase(pos);
            }
#endif
            if (al != a || ar != a) {
                auto range = ar - al;
                if (max_range < range) {
                    max_range = range;
                    range_left = al;
                    range_right = ar;
                }
            }
        }
        return {range_left, range_right};
    }
}
