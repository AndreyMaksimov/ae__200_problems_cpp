// https://www.algoexpert.io/questions/pattern-matcher
//
// #Strings
// #Hard
// #myscore (complexity & interesting) 8 of 10

#include <utility>
#include "PatternMatcher.h"

#include <vector>

namespace algoExpert::strings {
    using std::pair;
    using str_len_t = string::size_type; // length of x/y pattern
    using xy_len_pair_t = pair<str_len_t, str_len_t>; // valid combination of 'x' and 'y' length
    using vector_xy_len_pair_t = vector<xy_len_pair_t>; // vector with valid combinations of 'x' and 'y' length

    int count_char(const string& str, const char ch) {
        int count = 0;
        for (const auto& c : str) {
            if (c == ch) ++count;
        }
        return count;
    }

    vector_xy_len_pair_t find_valid_pairs(const int nX, const int nY, const str_len_t total_length) {
        if (nX == 0 && nY == 0) return {};

        vector_xy_len_pair_t pairs;
        if (nX == 0) {
            if (total_length % nY == 0) {
                pairs.emplace_back(0, total_length / nY);
            }
            return pairs;
        }
        if (nY == 0) {
            if (total_length % nX == 0) {
                pairs.emplace_back(total_length / nX, 0);
            }
            return pairs;
        }

        const auto nxMax = total_length - nY;
        str_len_t x_len = 1;
        auto x_len_total = x_len * nX;
        while (x_len_total <= nxMax) {
            const auto y_len_total = total_length - x_len_total;
            if ( y_len_total > 0 && y_len_total % nY == 0 ) {
                const auto y_len = y_len_total / nY;
                pairs.emplace_back(x_len, y_len);
            }
            x_len_total = ++x_len * nX;
        }
        return pairs;
    }

    string find_x_pattern(const xy_len_pair_t& xy_len_pair, const string& pattern, const string& str) {
        if (xy_len_pair.first == 0) return "";
        const auto x_pos = pattern.find('x');
        const auto x_pattern_pos = x_pos * xy_len_pair.second;
        const auto x_pattern = str.substr(x_pattern_pos, xy_len_pair.first);
        return x_pattern;
    }

    string find_y_pattern(const xy_len_pair_t& xy_len_pair, const string& pattern, const string& str) {
        if (xy_len_pair.second == 0) return "";
        const auto y_pos = pattern.find('y');
        const auto y_pattern_pos = y_pos * xy_len_pair.first;
        const auto y_pattern = str.substr(y_pattern_pos, xy_len_pair.second);
        return y_pattern;
    }

    string build_string(const string& pattern, const string& x_pattern, const string& y_pattern) {
        string result;
        for (const auto& c : pattern) {
            switch (c) {
                case 'x':
                    result.append(x_pattern);
                break;
                case 'y':
                    result.append(y_pattern);
                break;
                default:
                    ;
            }
        }
        return result;
    }

    vector<string> patternMatcher(string pattern, string str) {
        const auto nX = count_char(pattern, 'x');
        const auto nY = pattern.length() - nX;

        const auto str_length = str.length();
        const auto valid_pairs = find_valid_pairs(nX, nY, str_length);
        for (const auto& valid_pair : valid_pairs) {
            const auto x_pattern = find_x_pattern(valid_pair, pattern, str);
            const auto y_pattern = find_y_pattern(valid_pair, pattern, str);
            const auto composed_str = build_string(pattern, x_pattern, y_pattern);
            if (composed_str == str) return {x_pattern, y_pattern};
        }
        return {};
    }
}
