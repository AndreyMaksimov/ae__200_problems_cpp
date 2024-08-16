// https://www.algoexpert.io/questions/maximize-expression
//
// #DynamicProgramming
// #Hard

#include <algorithm>
#include <limits>
#include "MaximizeExpression.h"

namespace algoExpert::dynamicProgramming {
    using std::max, std::numeric_limits;
    int maximizeExpression(vector<int> array) {
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
}
