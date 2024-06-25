// https://www.algoexpert.io/questions/sorted-squared-array
//
// #arrays
// #easy
// #std::vector
// #std::reverse_iterator
// #std::remove_reference

#include <type_traits>
#include <cstdlib>
#include "SortedSquaredArray.h"

namespace algoExpert::arrays {

    // My first guess/idea
    // 1) Find the point where '-' switches to '+'
    // 2) Apply iterators:
    //   2.1) reverse for '-' part
    //   2.2) forward for '+' part
    //
    std::vector<int> sortedSquaredArray_my(std::vector<int>& array) {
        const auto size = array.size();
        std::remove_reference<decltype(array)>::type array_result(size);
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

    // Most nice solution
    // Implementation according to Hint 4
    // #shared on https://www.algoexpert.io/questions/sorted-squared-array
    std::vector<int> sortedSquaredArray_hint4(std::vector<int>& array) {
        const auto size = array.size();
        std::remove_reference<decltype(array)>::type array_result(size);

        auto iter_forward = array.begin();
        auto iter_reverse = array.rbegin();
        auto iter_result = array_result.rbegin();

        while (iter_result != array_result.rend()) {
            const auto af_abs = std::abs(*iter_forward);
            const auto ar_abs = std::abs(*iter_reverse);
            std::remove_const<decltype(af_abs)>::type a;
            if (af_abs > ar_abs) {
                a = af_abs;
                ++iter_forward;
            }
            else {
                a = ar_abs;
                ++iter_reverse;
            }
            *iter_result++ = a*a;
        }
        return array_result;
    }

    std::vector<int> sortedSquaredArray(std::vector<int> array) {
//        return sortedSquaredArray_my(array);
        return sortedSquaredArray_hint4(array);
    }

};
