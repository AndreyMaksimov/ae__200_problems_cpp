// https://www.algoexpert.io/questions/merge-overlapping-intervals
//
// #Arrays
// #Medium
// #std::sort with custom comparator

#include <algorithm>
#include "MergeOverlappingIntervals.h"

namespace algoExpert::arrays {
    using std::sort, std::max;
    vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> intervals) {
        if (intervals.size() < 2) return intervals;

        struct
        {
            bool operator()(vector<int>& a, vector<int>& b) const {
                return (a[0] < b[0]) ||
                ((a[0] == b[0]) && (a[1] < b[1])); }
        } customLess;
        sort(intervals.begin(), intervals.end(), customLess);

        vector<vector<int>> result;

        auto pos = intervals.begin();
        auto i0 = *pos++;
        while (pos != intervals.end()) {
            auto i1 = *pos++;
            if (i1[0] <= i0[1]) { // extend current interval
                i0[1] = max(i0[1],i1[1]);
            }
            else {
                result.push_back(i0);
                i0 = i1;
            }
        }
        result.push_back(i0);
        return result;
    }
}
