// https://www.algoexpert.io/questions/group-anagrams
//
// #Strings
// #Medium

#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include "GroupAnagrams.h"

namespace algoExpert::strings {
    // we assume that all strings are different
    using strlen2vector_of_strings_t = std::unordered_map<size_t, std::unordered_set<string>>;
    using char2count_t = std::unordered_map<char, int>;
    // is_anagram cna be implemented by 2 approaches
    // 1) sort s1, s2. Compare them then
    // 2) Create map-chars-counter for one string. Use it for 2-nd
    // #2 is implemented below
    bool is_anagram(const string s1, const string s2) {
        char2count_t char_count_s1;
        // create a map from 1-st string char -> count of occurrences
        for (const auto c1 : s1) {
            char_count_s1[c1] += 1;
        }
        for (const auto& c2 : s2) {
            if (char_count_s1[c2] == 0) {
                return false; // no such char anymore in 1-st string
            }
            char_count_s1[c2] -= 1;
        }
        return true;
    }
    void process_set_of_same_len_str(std::unordered_set<string>& strings_set, vector<vector<string>>& groups) {
        while (!strings_set.empty()) {
            // get first element
            auto it = strings_set.begin();
            const auto head_str = *it;
            vector<string> group;
            group.push_back(head_str); // create new group with current head
            it = strings_set.erase(it); // remove it from the set

            // loop over remain strings
            while (it != strings_set.end()) {
                auto next_str = *it;
                if (is_anagram(head_str, next_str)) {
                    group.push_back(*it);
                    it = strings_set.erase(it);
                }
                else ++it;
            }
            std::sort(group.begin(), group.end()); // comply with the test cases
            groups.push_back(group);
        }
    }
    vector<vector<string>> groupAnagrams(vector<string> words) {
        if (words.empty()) return {};
        vector<vector<string>> groups;
        strlen2vector_of_strings_t same_len_str;
        // 1) sort out strings to sets with same string length
        for (const auto word : words) {
            const auto len = word.length();
            same_len_str[len].insert(word);
        }

        // 2) loop over sets
        for (auto&  sls : same_len_str) {
            auto& strings = sls.second;
            process_set_of_same_len_str(strings, groups);
        }

        std::sort(groups.begin(), groups.end(),
            [](const auto& a, const auto& b) {
                if (a.size() == b.size()) return a[0] < b[0];
                return a.size() < b.size();
            }); // comply with the test cases
        return groups;
    }
}
