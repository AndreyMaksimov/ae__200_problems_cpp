// https://www.algoexpert.io/questions/number-of-ways-to-make-change
//
// #DynamicProgramming
// #Easy
// https://sicp.sourceacademy.org/chapters/1.2.2.html

#include "NumberOfWaysToMakeChange.h"

namespace algoExpert::dynamicProgramming {
    // https://sicp.sourceacademy.org/chapters/1.2.2.html
    // search for "Example: Counting change"
    int numberOfWaysToMakeChange(int n, vector<int> denoms) {
        if (n==0)
            return 1;
        else if ( n<0 || denoms.empty())
            return 0;

        int denom = denoms.front();
        vector<int> denoms_without_first(denoms.begin() + 1, denoms.end());
        return numberOfWaysToMakeChange(n-denom, denoms) + numberOfWaysToMakeChange(n, denoms_without_first);
    }
}
