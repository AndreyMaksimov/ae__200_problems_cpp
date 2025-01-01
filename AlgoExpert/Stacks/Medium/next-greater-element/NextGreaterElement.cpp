// https://www.algoexpert.io/questions/next-greater-element
//
// #Stacks
// #Medium

#include <stack>
#include "NextGreaterElement.h"

#include <array>

namespace algoExpert::stacks {
    vector<int> nextGreaterElement(vector<int> array) {
        if (array.empty()) return {};
        const auto size = array.size();
        vector<int> result(size, -1);
        std::stack<size_t> cache;
        for (auto i2 = 0; i2 < size*2; ++i2) { // double pass because of cyclic array
            const auto i = i2 % size;
            while (! cache.empty() && array[i] > array[cache.top()]) {
                const auto j = cache.top();
                result[j] = array[i];
                cache.pop();
            }
            cache.push(i);
        }
        return result;
    }
}
