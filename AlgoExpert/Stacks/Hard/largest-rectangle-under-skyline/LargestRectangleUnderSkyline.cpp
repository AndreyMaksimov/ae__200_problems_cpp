// https://www.algoexpert.io/questions/largest-rectangle-under-skyline
//
// #Stacks
// #Hard

#include <algorithm>
#include "LargestRectangleUnderSkyline.h"

namespace algoExpert::stacks {
    using std::max;
    int largestRectangleUnderSkyline(vector<int> buildings) {
        vector<int> pillarIndices;
        int maxArea = 0;

        vector <int> extendedBuildings(buildings);
        extendedBuildings.push_back(0);

        for(int idx = 0; idx < extendedBuildings.size(); idx++) {
            const int height = extendedBuildings[idx];
            while (!pillarIndices.empty() && extendedBuildings[pillarIndices.back()] >= height) {
                const int pillarHeight = extendedBuildings[pillarIndices.back()];
                pillarIndices.pop_back();
                const int width = pillarIndices.empty() ? idx : idx - pillarIndices.back() - 1;
                maxArea = max(width * pillarHeight, maxArea);
            }
            pillarIndices.push_back(idx);
        }
        return maxArea;
    }
}
