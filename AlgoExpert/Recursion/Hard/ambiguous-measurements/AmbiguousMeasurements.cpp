// https://www.algoexpert.io/questions/ambiguous-measurements
//
// #Recursion
// #Hard

// TODO: investigate "knapsack" approach (see attached screenshot)

#include <utility>
#include "AmbiguousMeasurements.h"

namespace algoExpert::recursion {
    using std::pair, std::make_pair;
    using lh_t = pair<int, int>; // "low-high" type
    using cup_iter_t = vector<vector<int>>::iterator;
    bool am_helper (
        const cup_iter_t cup_iter,
        const cup_iter_t& cups_end,
        lh_t current,
        const lh_t& target)
    {
        if (cup_iter == cups_end) return false;
        while (true) {
            if (current.first >= target.first && current.second <= target.second) return true;
            if ((current.second - current.first) > (target.second - target.first)) return false;
            if (current.second > target.second) return false;
            if (am_helper(
                cup_iter + 1, // deep to the next cup
                cups_end,
                current,
                target)) return true;

            // add one more current cup
            const auto& cup = *cup_iter;
            current.first += cup[0];
            current.second += cup[1];
        }
    }
    bool ambiguousMeasurements(vector<vector<int>> measuringCups, int low, int high) {
        return am_helper(
            measuringCups.begin(),
            measuringCups.end(),
            make_pair(0, 0),
            make_pair(low, high));
    }
}
