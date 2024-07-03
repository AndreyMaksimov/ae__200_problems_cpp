// https://www.algoexpert.io/questions/array-of-products
//
// #Arrays
// #Medium

#include "ArrayOfProducts.h"

namespace algoExpert::arrays {
    vector<int> arrayOfProducts(vector<int> array) {
        if (array.size() < 2) return array;

        const auto size = array.size();
        vector<int> left(size);
        vector<int> right(size);
        vector<int> result(size);

        auto left_pos = left.begin();
        auto right_pos = right.rbegin();
        auto pos = array.begin();
        auto rpos = array.rbegin();
        int af = 1;
        int ar = 1;
        while (pos != array.end()) {
            af = af * *pos++;
            ar = ar * *rpos++;
            *left_pos++ = af;
            *right_pos++ = ar;
        }
        result[0] = right[1];
        result[size-1] = left[size-2];
        for (auto i = 1; i < size-1; ++i) {
            result[i] = left[i-1] * right[i+1];
        }
        return result;
    }
}
