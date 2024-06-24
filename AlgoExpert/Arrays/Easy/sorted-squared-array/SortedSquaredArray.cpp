// https://www.algoexpert.io/questions/sorted-squared-array
//
// #arrays
// #easy
// #std::vector
// #std::reverse_iterator


#include "SortedSquaredArray.h"

namespace algoExpert::arrays {

    //
    // 1) Find the point where '-' switches to '+'
    // 2) Apply iterators:
    //   2.1) forward for '+' part
    //   2.1) reverse for '-' part
    //
    std::vector<int> sortedSquaredArray(std::vector<int> array) {
        const auto size = array.size();
        std::vector<int> array_result(size);
        auto pos_result = array_result.begin();

        auto i0 = 0;  // Find the point where '-' switches to '+'
        while (array[i0] < 0) {
            i0++;
        }

        auto iter_r = array.rbegin() + size - i0;
        auto iter_f = array.begin() + i0;

        while ( iter_r != array.rend() || iter_f != array.end()) {
            int r;
            if (iter_r != array.rend() && iter_f != array.end()) {
                const auto a_neg = -(*iter_r);
                const auto a_pos = *iter_f;
                if (a_pos > a_neg) {
                    r = a_neg;
                    ++iter_r;
                }
                else {
                    r = a_pos;
                    ++iter_f;
                }
            }
            else if (iter_r != array.rend()) {
                r = -(*iter_r++);
            }
            else {
                r = *iter_f++;
            }
            *pos_result++ = r*r;
        }
        return array_result;
    }
};
