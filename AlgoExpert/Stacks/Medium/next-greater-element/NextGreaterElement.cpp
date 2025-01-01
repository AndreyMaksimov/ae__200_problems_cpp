// https://www.algoexpert.io/questions/next-greater-element
//
// #Stacks
// #Medium

#include <iostream>
#include <stack>
#include <algorithm>
#include "NextGreaterElement.h"

#include <array>

namespace algoExpert::stacks {
    using std::cout, std::endl;

    vector<int> nextGreaterElement(vector<int> array) {
        if (array.empty()) return {};
        const auto size = array.size();
        vector<int> result(size);
        auto a_max = *std::max_element(array.begin(), array.end());

        for (auto i = 0; i < size; i++) {
            const auto element = array[i];
            if (element == a_max) {
                result[i] = -1;
                continue;
            }
            auto i_next = i + 1;
            if (i_next >= size) i_next = 0;
            while (element >= array[i_next]) {
                if (++i_next >= size) i_next = 0;
            }
            result[i] = array[i_next];
        }

        return result;
    }
}
