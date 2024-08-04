// https://www.algoexpert.io/questions/number-of-ways-to-traverse-graph
//
// #DynamicProgramming
// #Medium
//
// TODO: Update to O(1) space. (currently is O(width * height))

#include "NumberOfWaysToTraverseGraph.h"

namespace algoExpert::dynamicProgramming {
    int numberOfWaysToTraverseGraph(int width, int height) {
        vector<vector<int>> dp(height+1, vector<int>((width+1),0));
        // fill in 0-th column
        for (auto i=0; i<=height; ++i) {
            dp[i][1] = 1;
        }
        // fill in 0-th row
        for (auto j=0; j<=width; ++j) {
            dp[1][j] = 1;
        }
        for(auto i=2; i<=height; ++i) {
            for(auto j=2; j<=width;++j) {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[height][width];
    }
}
