// https://www.algoexpert.io/questions/common-characters
//
// #Strings
// #Easy

#include <unordered_set>
#include <limits>
#include <algorithm>
#include "CommonCharacters.h"

// general idea is to convert strings to set of chars

namespace algoExpert::strings {
    using chars_set = std::unordered_set<char>;
    vector<string> commonCharacters(vector<string> strings) {
        if (strings.empty()) return {};
        auto min_size = std::numeric_limits<size_t>::max();
        vector<chars_set> uniq_sets;

        auto it_strings = strings.begin();
        const auto it_strings_end = strings.end();
        const auto& first_string = *it_strings++;
        auto first_ch_set = chars_set(first_string.begin(), first_string.end());
        auto& min_set = first_ch_set;
        // transform each input string to unordered_set of chars
        for (auto it_str = strings.begin(); it_str != it_strings_end; ++it_str) {
            const auto& str = *it_str;
            auto ch_set = chars_set(str.begin(), str.end());
            const auto size = ch_set.size();
            if (size < min_size) { // keep the shortest set of chars in the separate variable
                uniq_sets.push_back(min_set);
                min_size = size;
                min_set = ch_set;
            }
            else {
                uniq_sets.push_back(ch_set);
            }
        }

        // exclude
        for (const auto& ch_set : uniq_sets) { // loop over all "long" sets
            for (auto first = min_set.begin(), last = min_set.end(); first != last;) {
                if (ch_set.find(*first) == ch_set.end()) {
                    first = min_set.erase(first); // exclude min_set's chars that do not exist in the current set
                }
                else {
                    ++first;
                }
            }
        }
        vector<string> result;
        // convert set of chars to vector of strings
        for (const auto& ch : min_set) {
            string s_ch;
            s_ch += ch;
            result.push_back(s_ch);
        }
        std::sort(result.begin(), result.end());
        return result;
    }

}
