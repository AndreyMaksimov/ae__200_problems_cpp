// https://www.algoexpert.io/questions/longest-balanced-substring
//
// #Strings
// #VeryHard

#include "LongestBalancedSubstring.h"

namespace algoExpert::strings {
    /**
     * Replaces all unmatched parenthesis by '.'
     * Parameters below depend on forward or reverse direction
     * @tparam It
     * @param begin - forward or reverse iterator
     * @param end - forward or reverse iterator
     * @param open_parenthesis - '(' - for forward; ')' - for reverse
     * @param close_parenthesis - ')' - for forward; '(' - for reverse
     */
    template <typename It>
    void pointUnmatchedParenthesis(const It& begin, const It& end, const char open_parenthesis, const char close_parenthesis) {
        constexpr auto point_char = '.';
        auto iter = begin;
        auto point_unpaired_close_parenthesis = [&]() {
            while (*iter == close_parenthesis) {
                *iter = point_char;
                if (++iter == end) break;
            }
        };
        while (iter != end) {
            point_unpaired_close_parenthesis();
            int balance_count = 0;
            while (iter != end) {
                if (*iter != point_char) {
                    if (*iter == open_parenthesis) ++balance_count;
                    else if (*iter == close_parenthesis) --balance_count;
                    if (balance_count < 0) break;
                }
                else balance_count = 0;
                if (++iter == end) break;
            }
        }
    }
    void pointUnmatchedParenthesis(string& str, const bool reverse) {
        if (reverse) {
            pointUnmatchedParenthesis(str.rbegin(), str.rend(), ')', '(');
        }
        else {
            pointUnmatchedParenthesis(str.begin(), str.end(), '(', ')');
        }
    }

    int longestBalancedSubstring(string str) {

        // Example how pointUnmatchedParenthesis works (test case #36)
        // reverse = false : we go from left to right
        // reverse = true  : we go from right to left
        // Original string : ()()))))(())((()(()(
        // reverse = false : ()()....(())((()(()(
        // reverse = true  : ()()))))(())..().().
        // false, then true: ()()....(())..().().

        pointUnmatchedParenthesis(str, false);
        pointUnmatchedParenthesis(str, true);

        // So the only thing left to do is find the longest range between points
        // Actually it can be done together with 2-nd pass of pointUnmatchedParenthesis
        int max_balance_len = 0;
        int len = 0;
        for (const auto& c : str) {
            if (c != '.') len++;
            else {
                if (len > max_balance_len) max_balance_len = len;
                len = 0;
            }
        }
        if (len > max_balance_len) max_balance_len = len;
        return max_balance_len;
    }
}
