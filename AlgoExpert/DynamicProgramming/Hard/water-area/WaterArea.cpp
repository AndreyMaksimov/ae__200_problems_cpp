// https://www.algoexpert.io/questions/water-area
//
// #DynamicProgramming
// #Hard

// We move from the groung (height = 1) to max height (at least 2 pillars)
// and calculate water - cells with heights greater than
// pillar underneath water level (current height)

#include "WaterArea.h"

namespace algoExpert::dynamicProgramming {
    int waterArea(vector<int> heights) {
        const auto size = static_cast<int>(heights.size());
        if (size < 2) return 0;

        auto i_left = 0;
        auto i_right = size - 1;
        auto sum = 0;
        auto height = 1;
        while (true) {
            while ((heights[i_left] < height) && (i_left != i_right+1)) ++i_left;
            while ((heights[i_right] < height) && (i_left != i_right+1)) --i_right;
            if (i_left == i_right+1) break;
            for (auto i=i_left+1; i<i_right; ++i) {
                if (heights[i] < height) ++sum;
            }
            ++height;
        }

        return sum;
    }
}
