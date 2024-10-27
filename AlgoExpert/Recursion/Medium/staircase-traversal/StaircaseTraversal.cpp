// https://www.algoexpert.io/questions/staircase-traversal
//
// #Recursion
// #Medium

// TODO: Check also various approaches in the Readme

#include "StaircaseTraversal.h"

namespace algoExpert::recursion {

    void staircaseTraversal_helper(
        const int& height,
        const int& maxSteps,
        const int prev_height,
        int& result) {
        for (auto step = 1; step <= maxSteps; ++step) { // loop over all possible steps value on each step
            const auto current_height = prev_height + step;
            if (current_height < height) { // we go recursively deeper until we less than our goal = "height"
                staircaseTraversal_helper(height, maxSteps, current_height, result);
            }
            else { // current_height >= height
                if (current_height == height) ++result;
                return;
            }
        }
    }

    int staircaseTraversal(int height, int maxSteps) {
        int result = 0;
        staircaseTraversal_helper(
            height,
            maxSteps,
            0,
            result);
        return result;
    }
}
