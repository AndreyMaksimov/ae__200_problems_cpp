// https://www.algoexpert.io/questions/longest-substring-without-duplication
//
// #Strings
// #Hard

#include <unordered_map>
#include <algorithm>
#include "LongestSubstringWithoutDuplication.h"

namespace algoExpert::strings {
    using char2pos_t = std::unordered_map<char, int>;
    string longestSubstringWithoutDuplication(string str) {
        char2pos_t char2pos;
        int pos = 0;
        int first_pos = 0;
        int max_len_from_pos = 0;
        int prev_pos = 0;
        int max_len = 0;
        for (const auto &c : str) {
            const auto& it = char2pos.find(c);
            if (it != char2pos.end()) {
                prev_pos = it->second;
                if (prev_pos >  first_pos) {
                    const auto len = pos - first_pos;
                    if (len > max_len) {
                        max_len = len;
                        max_len_from_pos = first_pos;
                        first_pos = prev_pos + 1;
                    }
                }
                int ii = 42;
            }
            char2pos[c] = pos;
            ++pos;
        }
        if ((pos - first_pos) > max_len) {
            max_len = pos - first_pos;
        }
        return str.substr(max_len_from_pos, max_len);
    }
}
