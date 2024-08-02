// https://www.algoexpert.io/questions/min-number-of-coins-for-change
//
// #DynamicProgramming
// #Medium
//
// Hint: useful to learn: set breakpoint and see how the mem[] content is changed

#include <algorithm>
#include "MinNumberOfCoinsForChange.h"

namespace algoExpert::dynamicProgramming {
    using std::min, std::sort;

    int minNumberOfCoinsForChange(int n, vector<int> denoms) {
        if (n == 0 ) return 0;
        sort(denoms.begin(), denoms.end());
        vector<int> mem(n+1,-1);
        mem[0] = 0;
        for (const auto d: denoms) {
            for (int i = d; i<=n ; ++i) {
                if (mem[i-d] != -1) {
                    if (mem[i] == -1 && i % d == 0) {
                        mem[i] = i/d;
                    }
                    else {
                        mem[i] = min(mem[i], mem[i-d]+1);
                    }
                }
            }
            int k = 42;
        }
        return mem[n];
    }
}
