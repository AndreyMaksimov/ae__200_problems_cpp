// https://www.algoexpert.io/questions/kadanes-algorithm
//
// #FamousAlgorithms
// #Medium

// https://en.wikipedia.org/wiki/Maximum_subarray_problem

#include <algorithm>
#include "KadanesAlgorithm.h"

namespace algoExpert::famousAlgorithms {
    using std::max;
    int kadanesAlgorithm(vector<int> array) {
        if (array.empty()) return 0;

        auto pos = array.begin();
        auto max_current = *pos++;
        auto max_answ = max_current;
        while (pos != array.end()) {
            const auto a = *pos++;
            max_current = max(a, (a + max_current));
            max_answ = max(max_answ, max_current);
        }
        return max_answ;
    }
}
