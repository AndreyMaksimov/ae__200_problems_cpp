// https://www.algoexpert.io/questions/max-sum-increasing-subsequence
//
// #DynamicProgramming
// #Hard

#include <limits>
#include <algorithm>
#include <utility>
#include "MaxSumIncreasingSubsequence.h"

namespace algoExpert::dynamicProgramming {
    using std::numeric_limits, std::max_element, std::pair;
    vector<vector<int>> maxSumIncreasingSubsequence(vector<int> array) {
        const auto size = static_cast<int>(array.size());

        if (size == 0) return {{0}, {0}};
        if (size == 1) return  {{array[0]},{array[0]}};

        // storage for max increasing subsequences per each index

        vector<int> sum_subseq(size);

        sum_subseq[0] = array[0];

        for (auto i=1; i<size; ++i) {
            const auto& ai = array[i];
            auto max_sum_subseq = numeric_limits<int>::min();
            for(auto j=0; j<i; ++j) {
                const auto& aj = array[j];
                if (aj < ai) {
                    if (max_sum_subseq < sum_subseq[j]) {
                        max_sum_subseq = sum_subseq[j];
                    }
                }
            }
            if (max_sum_subseq != numeric_limits<int>::min()) {
                sum_subseq[i] = ai + max_sum_subseq;
            }
            else {
                sum_subseq[i] = ai;
            }
        }

        const auto max_sum_pos = max_element(sum_subseq.begin(), sum_subseq.end());
        // Write your code here.
        return {
        {*max_sum_pos},  // Sum of sequence.
        {},   // Elements of the sequence.
      };
    }
}
