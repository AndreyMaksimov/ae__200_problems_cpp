// https://www.algoexpert.io/questions/non-constructible-change
//
// #std::sort

#include <algorithm>
#include "NonConstructibleChange.h"

namespace algoExpert::arrays {
    using std::vector, std::sort;

    int nonConstructibleChange(vector<int> coins) {
        if(coins.empty()) return 1;
        const auto size = coins.size();
        if (size == 1) return coins[0] > 1 ? 1 : 2;

        sort(coins.begin(), coins.end());
        if (coins[0] > 1) return 1;

        int sum = 0;
        for(int i = 0; i < (size-1); ++i) {
            sum += coins[i];
            if ((sum+1) < coins[i+1]) return (sum+1);
        }

        return sum + coins[size-1] + 1;
    }
};
