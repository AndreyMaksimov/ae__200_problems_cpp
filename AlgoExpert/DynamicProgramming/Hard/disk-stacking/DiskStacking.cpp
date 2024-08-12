// https://www.algoexpert.io/questions/disk-stacking
//
// #DynamicProgramming
// #Hard

#include <algorithm>
#include <limits>
#include "DiskStacking.h"

namespace algoExpert::dynamicProgramming {
    using std::sort, std::numeric_limits;
    vector<vector<int>> diskStacking(vector<vector<int>> disks) {
        const auto size = static_cast<int>(disks.size());
        if (size < 2) return disks;

        // sort disks by height
        sort(disks.begin(), disks.end(), [](const vector<int>& d1,  const vector<int>& d2) {
            return d1[2] < d2[2];
        });

        // helper lambdas
        auto stackable = [&disks](const int top_i, const int bottom_i) {
            const auto& top = disks[top_i];
            const auto& bottom = disks[bottom_i];
            return (top[0] < bottom[0]) && (top[1] < bottom[1]) && (top[2] < bottom[2]);
        };
        const auto& disk_height = [&disks](const int i) {
          return disks[i][2];
        };

        // stack_indexes[i] will point to next-up in a stack
        vector<int> stack_indexes(size, -1);
        auto stack_height = [&disk_height, &stack_indexes](int i) {
            auto sum = 0;
            while (stack_indexes[i] != -1) {
                sum += disk_height(i);
                i = stack_indexes[i];
            }
            sum += disk_height(i);
            return sum;
        };

        // global values
        auto answ_index = size-1;
        auto answ_max_height = disk_height(answ_index);

        for (auto i=1; i<size; ++i) {
            auto max_height = numeric_limits<int>::min();
            auto j_max_height = -1;
            for (auto j=0; j<i; ++j) { // looking for tallest stack from interval [0, i-1]
                if (stackable(j, i)) {
                    const auto j_height = stack_height(j);
                    if (max_height < j_height) {
                        max_height = j_height;
                        j_max_height = j;
                    }
                }
            }
            if (j_max_height != -1) {
                stack_indexes[i] = j_max_height; // put tallest stack from interval [0, i-1] on top of [i]
                const auto stack_height_at_i = max_height + disk_height(i);
                if (stack_height_at_i > answ_max_height) {
                    answ_max_height = stack_height_at_i;
                    answ_index = i;
                }
            }
        }

        vector<vector<int>> answ;
        auto i_d = answ_index;
        while (stack_indexes[i_d] != -1) {
            answ.push_back(disks[i_d]);
            i_d = stack_indexes[i_d];
        }
        answ.push_back(disks[i_d]);
        return {answ.rbegin(), answ.rend()};
    }
}
