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
        // The idea is to create a map to keep track previous position of the char
        char2pos_t char2pos;
        int pos = 0;
        int from_pos_max = 0;
        int max_len = 0;
        int from_pos_current = 0;
        int current_len = 0;
        for (const auto &c : str) {
            const auto& it = char2pos.find(c);
            if (it != char2pos.end()) {
                const auto& prev_pos = it->second;
                if (prev_pos >= from_pos_current) {
                    from_pos_current = it->second + 1;
                    current_len = pos - from_pos_current;
                }
            }
            ++current_len;
            if (current_len >= max_len) {
                from_pos_max = from_pos_current;
                max_len = current_len;
            }
            char2pos[c] = pos++;
        }
        return str.substr(from_pos_max, max_len);
    }
}
