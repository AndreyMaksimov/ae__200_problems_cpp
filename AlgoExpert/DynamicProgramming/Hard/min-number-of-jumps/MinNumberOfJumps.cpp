// https://www.algoexpert.io/questions/min-number-of-jumps
//
// #DynamicProgramming
// #Hard

#include <algorithm>
#include "MinNumberOfJumps.h"

// 1) We move index by index (call it "step")
// 2) until current jump (starting from array[0]) is not exhausted
// 3) at each step we update maxReach - for next jump
// 4) When 2) occures we take value from 3) then

namespace algoExpert::dynamicProgramming {
    using std::max;
    int minNumberOfJumps(vector<int> array) {
        // If array size is 1, no jumps are needed
        if (array.size() == 1) {
            return 0;
        }
        auto jumps = 1;  // Start with one jump, as we need at least one to move from the first element
        auto maxReach = array[0];  // The farthest we can reach initially
        auto steps = array[0];  // Steps we can still take within the current jump
        for (auto i=1; i<array.size(); ++i) {
            if (i == array.size() - 1) {  // If we've reached the end of the array
                return jumps;
            }
            maxReach = max(maxReach, i + array[i]);  // Update the maximum reach
            --steps;  // Use a step to move to the next index

            if (steps == 0) {  // If no more steps left
                ++jumps;  // We need to make another jump
                steps = maxReach - i;  // Calculate new steps we can take from current index
            }
        }
        return jumps;
    }
}
