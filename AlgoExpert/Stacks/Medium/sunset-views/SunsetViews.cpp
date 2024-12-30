// https://www.algoexpert.io/questions/sunset-views
//
// #Stacks
// #Medium

#include <algorithm>
#include "SunsetViews.h"

namespace algoExpert::stacks {
    vector<int> sunsetViews(vector<int> buildings, string direction) {
        if (buildings.empty()) return {};
        const auto reverse  = direction== "EAST";
        const int i_last= static_cast<int>(buildings.size()) - 1;
        const auto i_begin = reverse ? i_last : 0;
        auto i_valid = [&](const int& i){
            if (reverse) return i >= 0;
            else return i <= i_last;
        };
        const auto i_step = reverse ? -1 : 1;

        vector<int> result;
        int h_max = 0;
        for (int i=i_begin; i_valid(i); i += i_step) {
            if (buildings[i] > h_max) {
                h_max = buildings[i];
                result.push_back(i);
            }
        }
        if (reverse) std::reverse(result.begin(), result.end());
        return result;
    }
}
