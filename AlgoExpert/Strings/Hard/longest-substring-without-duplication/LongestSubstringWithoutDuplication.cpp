// https://www.algoexpert.io/questions/longest-substring-without-duplication
//
// #Strings
// #Hard

#include <unordered_map>
#include <algorithm>
#include <iostream>
#include "LongestSubstringWithoutDuplication.h"

namespace algoExpert::strings {
    using std::cout, std::endl;
    using char2pos_t = std::unordered_map<char, int>;
    string longestSubstringWithoutDuplication(string str) {
        char2pos_t char2pos;
        int pos = 0;
        int from_pos = 0;
        int max_len_from_pos = 0;
        int prev_pos = 0;
        int max_len = 0;
        int current_len = 0;
        for (const auto &c : str) {
            const auto& it = char2pos.find(c);
            if (it != char2pos.end()) {
                prev_pos = it->second;
                if (prev_pos >= from_pos) {
                    from_pos = it->second + 1;
                    current_len = pos - from_pos;
                }
            }
            ++current_len;
            if (current_len >= max_len) {
                max_len_from_pos = from_pos;
                max_len = current_len;
            }
            cout << pos << "  from = " << max_len_from_pos << "  max_len = " << max_len << endl;
            char2pos[c] = pos;
            ++pos;
        }
        return str.substr(max_len_from_pos, max_len);
    }
}
