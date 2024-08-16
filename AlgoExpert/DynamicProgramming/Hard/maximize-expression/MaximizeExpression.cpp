// https://www.algoexpert.io/questions/maximize-expression
//
// #DynamicProgramming
// #Hard

#include <algorithm>
#include <limits>
#include <functional>
#include "MaximizeExpression.h"

namespace algoExpert::dynamicProgramming {
    using std::max, std::numeric_limits;
    using std::function;

    int mySolution(vector<int> array) {
        const auto size = static_cast<int>(array.size());
        if (size < 4) return 0;

        // "+a"
        decltype(array) a_max(size, numeric_limits<int>::min());
        auto am  = array[0];
        for (auto i = 0; i < size; i++) {
            am = max(am, array[i]);
            a_max[i] = am;
        }

        // "+a-b"
        decltype(array) ab_max(size, numeric_limits<int>::min());
        auto abm  = a_max[0] - array[1];
        for (auto i = 1; i < size; i++) {
            const auto d_ab = a_max[i-1] - array[i];
            abm = max(abm, d_ab);
            ab_max[i] = abm;
        }

        // "+a-b+c"
        decltype(array) abc_max(size, numeric_limits<int>::min());
        auto abcm  = ab_max[1] + array[2];
        for (auto i = 2; i < size; i++) {
            const auto d_abc = ab_max[i-1] + array[i];
            abcm = max(abcm, d_abc);
            abc_max[i] = abcm;
        }

        // "+a-b+c-d"
        decltype(array) abcd_max(size, numeric_limits<int>::min());
        auto abcdm  = abc_max[2] - array[3];
        for (auto i = 3; i < size; i++) {
            const auto d_abcd = abc_max[i-1] - array[i];
            abcdm = max(abcdm, d_abcd);
            abcd_max[i] = abcdm;
        }

        return abcd_max[size-1];
    }

    // O(kn) Generalized Solution (k = 4)
    // shared by Adeeb H.S on June 23, 2022
    // Explanation
    // Solution for array[x1] - array[x2] + array[x3] - .... +/- array[xk] where x1 < x2 < x3 < ... < xk.
    // Time complexity - O(n.k)
    // Space complexity - O(n)

    void helper(const vector<int>& array,
        vector<int>& dp,
        const vector<int>& prev,
        const int i,
        const int n,
        const function<int(int, int)>& fn) {
        if (i==0) dp[i] = array[i];
        else dp[i] = fn(prev[i - 1], array[i]);

        for(int j = i + 1; j < n; ++j)
            dp[i] = max(dp[j - 1], fn(prev[j - 1], array[j]));
    }
    // TODO: make it works (pass tests) (see screenshot in the dir)
    int veryNiceSolution(vector<int> array) {
        int n = array.size(), k = 4;
        if (n < k) return 0;
        vector<int> dp(n), prev;
        vector<function<int(int, int)>> fns = {
            [](int a, int b) {return a + b; },
            [](int a, int b) {return a - b; }
        };
        for(int i = 0; i < k; ++i) {
            prev = dp;
            helper(array, dp, prev, i, n, fns[i % 2]);
        }
        return dp[n - 1];
    }
    int maximizeExpression(vector<int> array) {
        return mySolution(array);
        // return veryNiceSolution(array);
    }
}
