// https://www.algoexpert.io/questions/min-number-of-coins-for-change
//
// #DynamicProgramming
// #Medium

#include <algorithm>
#include <deque>
#include <iostream>
#include <limits>
#include "MinNumberOfCoinsForChange.h"

namespace algoExpert::dynamicProgramming {
    // using std::sort, std::greater, std::back_inserter, std::deque, std::numeric_limits,
    using std::min, std::sort;
    using std::cout, std::endl;

    int minNumberOfCoinsForChange(int n, vector<int> denoms) {
        if (n == 0 ) return 0;
        sort(denoms.begin(), denoms.end());
        vector<int> mem(n+1,-1);
        mem[0] = 0;
        for (const auto d: denoms) {
            for (int i = 1; i<=n ; ++i) {
                auto ncoins = i / d;
                if (ncoins == 0) continue;
                auto rem = i % d;
                if (mem[rem] == -1) continue;
                ncoins += mem[rem];
                if (mem[i] == -1) {
                    mem[i] = ncoins;
                }
                else {
                    mem[i] = min(mem[i], ncoins);
                }
            }
            int dummy = 42;
        }
        return mem[n];
    }
}
