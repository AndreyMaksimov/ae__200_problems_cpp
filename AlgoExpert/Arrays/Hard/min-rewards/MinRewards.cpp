// https://www.algoexpert.io/questions/min-rewards
//
// #Arrays
// #Hard

#include <algorithm>
#include <numeric>
#include "MinRewards.h"

namespace algoExpert::arrays {
    using std::max, std::accumulate;
    int minRewards_my(vector<int>& scores) {
        if (scores.empty()) return 0;
        const int size = scores.size();
        if (size == 1) return 1;

        // Find all local mins & maxs
        vector<int> local_mins;
        vector<int> local_maxs;
        bool first_is_min = false, last_is_min = false;
        if (scores[0] < scores[1]) {
            local_mins.push_back(0);
            first_is_min = true;
        }
        else local_maxs.push_back(0);
        for (auto i=1; i<(size-1);++i) {
            if (scores[i] < scores[i-1] && scores[i] < scores[i+1]) {
                local_mins.push_back(i);
            }
            if (scores[i] > scores[i-1] && scores[i] > scores[i+1]) {
                local_maxs.push_back(i);
            }
        }
        if (scores[size-1] < scores[size-2]) {
            local_mins.push_back(size-1);
            last_is_min = true;
        }
        else local_maxs.push_back(size-1);

        vector<int> rewards(size, 0);
        int i_local_min = 0, i_local_max = 0;

        if (first_is_min) {
            // from 0 up to 1-st max
            int a = 1;
            for (int i=0; i<=local_maxs[0]; i++) {
                rewards[i] = a++;
            }
            i_local_min++;
        }
        for (int im=0; im<local_maxs.size()-1; im++) {
            // from min to left up to (im) max
            int istart = local_mins[i_local_min];
            int iend = local_maxs[im] + 1;
            int a = 1;
            for(auto i=istart; i>=iend; i--) {
                rewards[i] = a++;
            }
            rewards[iend-1] = max(a, rewards[iend-1]);

            // from min to right up to (im+1) max
            istart = local_mins[i_local_min] + 1;
            iend = local_maxs[im+1];
            a = 2;
            for(auto i=istart; i<=iend; i++) {
                rewards[i] = a++;
            }
            i_local_min++;
        }

        if (last_is_min) {
            // from last one up to last max
            int istart = size-1;
            int iend = local_maxs[local_maxs.size()-1]+1;
            int a = 1;
            for(auto i=istart; i>=iend; i--) {
                rewards[i] = a++;
            }
            rewards[iend-1] = max(a, rewards[iend-1]);

        }

        return accumulate(rewards.begin(), rewards.end(), 0);
    }
    int minRewards(vector<int> scores) {
        return minRewards_my(scores);
    }

}
