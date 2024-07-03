// https://www.algoexpert.io/questions/first-duplicate-value
//
// #Arrays
// #Medium

#include <algorithm>
#include "FirstDuplicateValue.h"

namespace algoExpert::arrays {
    int firstDuplicateValue(vector<int> array) {
        auto n = array.size();
        for(auto i=0; i<array.size(); ++i) {
            auto j =  std::abs(array[i]);
            --j;
            if (array[j] < 0) return j+1;
            array[j] *= -1;
        }
        return -1;
    }
}
