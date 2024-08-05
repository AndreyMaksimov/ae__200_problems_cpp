// https://www.algoexpert.io/questions/max-sum-increasing-subsequence
//
// #DynamicProgramming
// #Hard

#include <limits>
#include <utility>
#include "MaxSumIncreasingSubsequence.h"

namespace algoExpert::dynamicProgramming {
    using std::numeric_limits, std::pair;
    vector<vector<int>> maxSumIncreasingSubsequence(vector<int> array) {
        const auto size = static_cast<int>(array.size());

        if (size == 0) return {{0}, {0}};
        if (size == 1) return  {{array[0]},{array[0]}};

        // storage for max increasing subsequences
        // first - is max increasing subsequences sum per each index
        // second - reference to previous index. We need that to produce result vector with values of max sequence
        vector<pair<int,int>> sum_subseq(size);

        sum_subseq[0] = pair(array[0], -1);

        for (auto i=1; i<size; ++i) {
            const auto ai = array[i];
            auto max_sum_subseq = numeric_limits<int>::min();
            auto i_max = -1;
            for(auto j=0; j<i; ++j) {
                const auto aj = array[j];
                if (aj > 0 && aj < ai) {
                    if (max_sum_subseq < sum_subseq[j].first) {
                        max_sum_subseq = sum_subseq[j].first;
                        i_max = j;
                    }
                }
            }
            if (max_sum_subseq != numeric_limits<int>::min()) {
                sum_subseq[i] = pair(ai + max_sum_subseq, i_max);
            }
            else {
                sum_subseq[i] = pair(ai, i_max);
            }
        }

        auto max_sum = numeric_limits<int>::min();
        int i_max = -1;
        int first_value = 0;
        for (auto i=0; i<size; ++i) {
            if (max_sum < sum_subseq[i].first) {
                max_sum = sum_subseq[i].first;
                i_max = sum_subseq[i].second;
                first_value = array[i];
            }
        }
        vector<int> values {first_value};
        while(i_max != -1) {
            values.push_back(array[i_max]);
            i_max = sum_subseq[i_max].second;
        }

        return {
        {max_sum},  // Sum of sequence.
        {values.rbegin(), values.rend()},   // Elements of the sequence.
      };
    }
}
