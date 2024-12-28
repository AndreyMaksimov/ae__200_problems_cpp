// https://www.algoexpert.io/questions/longest-balanced-substring
//
// #Strings
// #VeryHard

#include "LongestBalancedSubstring.h"

namespace algoExpert::strings {
    using size_str_t = std::string::size_type;
    int longestBalancedSubstring(string str) {
        const auto len = str.size();
        if (len < 2) return 0;

        size_str_t i_start = 0, i_end = len - 1;
        auto skip_close_parenthesis = [&](size_str_t from_idx)
        {
            while (str[from_idx] == ')') {
                if (++from_idx == len - 1) break;
            }
            return from_idx;
        };
        i_start = skip_close_parenthesis(0);
        while (str[i_end] == '(') {
            if (--i_end == 0) break;
        }
        if (i_end - i_start < 1) return 0;

        size_str_t max_balance_len = 0;
        while (i_start < i_end)
        {
            int balance_count = 0;
            auto i = i_start;
            while (true) {
                if (str[i] == '(') ++balance_count;
                else --balance_count;
                if (balance_count < 0) {
                    ++balance_count;
                    --i;
                    break;
                }
                if (i == i_end) break;
                ++i;
            }
            if (balance_count == 0) {
                const auto balance_len = i - i_start + 1;
                if (balance_len > max_balance_len) max_balance_len = balance_len;
            }
            else if (i == i_end) {
                const auto balance_len = i - i_start + 1 - balance_count;
                if (balance_len > max_balance_len) max_balance_len = balance_len;
                break;
            }
            i_start = skip_close_parenthesis(i+1);
        }

        return max_balance_len;
    }
}
