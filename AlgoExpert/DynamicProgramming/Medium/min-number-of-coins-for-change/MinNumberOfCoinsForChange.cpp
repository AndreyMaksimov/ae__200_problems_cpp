// https://www.algoexpert.io/questions/min-number-of-coins-for-change
//
// #DynamicProgramming
// #Medium

#include <algorithm>
#include <deque>
#include "MinNumberOfCoinsForChange.h"

namespace algoExpert::dynamicProgramming {
    using std::sort, std::greater, std::back_inserter, std::deque;

    int change(int n, deque<int> denoms, int ncoins) {
        if (n == 0) return ncoins;
        if (denoms.empty()) return 0;
        deque<int> valid_denoms;
        std::copy_if(denoms.begin(), denoms.end(),
                     back_inserter(valid_denoms),
                     [&n](const int x) { return x <= n; });
        if (valid_denoms.empty()) return -1;
        for (auto pos = valid_denoms.begin(); pos != valid_denoms.end(); ++pos) {
            auto n_next = change(n-*pos, valid_denoms, ncoins+1);
            if (n_next != -1) return n_next;
        }
        return -1;
    }

    int minNumberOfCoinsForChange(int n, vector<int> denoms) {
        deque<int> valid_denoms;

        std::copy_if(denoms.begin(), denoms.end(),
                     back_inserter(valid_denoms),
                     [&n](const int x) { return x <= n; });
        if (valid_denoms.empty()) return -1;

        sort(valid_denoms.begin(), valid_denoms.end(), greater<>());
        vector<int> denom_coins;

        return change(n, valid_denoms, 0);
    }
}
