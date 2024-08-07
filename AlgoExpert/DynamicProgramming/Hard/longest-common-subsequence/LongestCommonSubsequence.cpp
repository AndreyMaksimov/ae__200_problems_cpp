// https://www.algoexpert.io/questions/longest-common-subsequence
//
// #DynamicProgramming
// #Hard
//
// TODO: we get get some space benefit if copy pointers across the matrix. Instead of strings.

#include "LongestCommonSubsequence.h"

namespace algoExpert::dynamicProgramming {
    using std::back_inserter;
    vector<char> longestCommonSubsequence(string str1, string str2) {
        vector<char> answ;
        if (str1.empty() || str2.empty()) return answ;
        vector<char> chars1(str1.begin(), str1.end());
        vector<char> chars2(str2.begin(), str2.end());

        vector<vector<string>> dp(chars1.size(),vector<string>(chars2.size()));

        // fill in left top corner
        if (chars1[0] == chars2[0]) dp[0][0].push_back(chars1[0]);

        // fill in 1-st row
        for(auto j=1 ; j<str2.length(); ++j) {
            const auto left_cell = dp[0][j-1];
            if (!left_cell.empty()) {
                dp[0][j] = left_cell;
            }
            else if (chars1[0] == chars2[j]) {
                dp[0][j].push_back(chars2[j]);
            }
        }
        // fill in 1-st column
        for(auto i=1 ; i<str1.length(); ++i) {
            const auto up_cell = dp[i-1][0];
            if (!up_cell.empty()) {
                dp[i][0] = up_cell;
            }
            else if (chars2[0] == chars1[i]) {
                dp[i][0].push_back(chars1[i]);
            }
        }
        // fill in rest of dp
        for(auto i=1; i<str1.length(); ++i) {
            for (auto j=1; j<str2.length(); ++j) {
                if (chars1[i] == chars2[j]) { // append new char to previous diagonal values
                    dp[i][j] = dp[i-1][j-1];
                    dp[i][j].push_back(chars1[i]);
                }
                else { // copy max between up and left
                    const auto left_cell = dp[i][j-1];
                    const auto up_cell = dp[i-1][j];
                    if (left_cell.length() > up_cell.length()) {
                        dp[i][j] = left_cell;
                    }
                    else {
                        dp[i][j] = up_cell;
                    }
                }
            }
        }
        auto answ_string = dp[chars1.size()-1][chars2.size()-1];
        return {answ_string.begin(), answ_string.end()};
    }
}
