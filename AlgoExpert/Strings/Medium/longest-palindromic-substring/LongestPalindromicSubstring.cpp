// https://www.algoexpert.io/questions/longest-palindromic-substring
//
// #Strings
// #Medium

#include <algorithm>
#include "LongestPalindromicSubstring.h"

namespace algoExpert::strings {
    using str_iter_t = std::string::iterator;
    bool is_palindrome(const string& str) {
        auto reverse_string = str;
        std::reverse(reverse_string.begin(), reverse_string.end());
        return str == reverse_string;
    }
    string same_head(str_iter_t it1, str_iter_t end1, str_iter_t it2, str_iter_t end2) {
        str_iter_t begin1 = it1;
        // try to find out the longest contiguous segment with equal chars from the head of both strings
        while (it1 != end1 && it2 != end2 && *it1 == *it2 ) {
            ++it1; ++it2;
        }
        return {begin1, it1};
    }
    string longestPalindromicSubstring(string str) {
        auto reverse_str = str;
        std::reverse(reverse_str.begin(), reverse_str.end());
        auto end1 = str.end();
        auto end2 = reverse_str.end();
        string result;
        for (auto it1 = str.begin(); it1 != end1; ++it1) {
            for (auto it2 = reverse_str.begin(); it2 != end2; ++it2) {
                if (*it1 == *it2) { // possible start of palindrome
                    const auto str = same_head(it1, end1, it2, end2);
                    if (str.size() > result.size() && is_palindrome(str)) {
                        result = str;
                    }
                    // let's skip a segment that we just passed:
                    it2 += str.size() - 1; // that improves CPU from O(n**3) to O(n**2)
                }
            }
        }
        return result;
    }
}
