// https://www.algoexpert.io/questions/binary-search
//
// #Searching
// #Easy

#include "BinarySearch.h"

namespace algoExpert::searching {
    int binarySearch(vector<int> array, int target) {
        if (array.empty()) return -1;
        const auto size = static_cast<int>(array.size());
        if (array.size() == 1) return array[0] == target ? 0 : -1;
        if (target < array[0] || target > array[size - 1]) return -1;
        auto i_end = size - 1;
        decltype(i_end) i_begin = 0;
        while (true) {
            if (i_end - i_begin <= 1) {
                if (array[i_begin] == target) return i_begin;
                if (array[i_end] == target) return i_end;
                return -1;
            }
            const auto i_half = (i_begin + i_end) / 2;
            if (array[i_half] == target) return i_half;
            if (array[i_half] < target) i_begin = i_half;
            else i_end = i_half;
        }
    }
}
