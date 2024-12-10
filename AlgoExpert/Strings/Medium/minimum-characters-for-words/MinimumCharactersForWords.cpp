// https://www.algoexpert.io/questions/minimum-characters-for-words
//
// #Strings
// #Medium

#include <unordered_map>
#include <algorithm>
#include "MinimumCharactersForWords.h"

namespace algoExpert::strings {
    using char2count_t = std::unordered_map<char, int>;
    void merge_counters(const char2count_t& src, char2count_t& dst) {
        // here we choose max count of the char occurrence between we already have in (dst) and new word (src)
        for (auto key : src) {
            const auto ch = key.first;
            const auto& src_count = key.second;
            const auto& dst_count = dst[ch];
            auto& count_max = std::max(dst_count, src_count);
            dst[ch] = count_max;
        }
    }
    char2count_t count_chars(const string& word) {
        // count number of occurrence per each char in the word
        char2count_t result;
        for (const auto& c : word) {
            result[c] += 1;
        }
        return result;
    }
    vector<char> minimumCharactersForWords(vector<string> words) {
        vector<char> result;
        char2count_t sum_dictionary;
        for (const auto& word : words) {
            const auto word_dictionary = count_chars(word);
            merge_counters(word_dictionary, sum_dictionary);
        }
        for (const auto& key : sum_dictionary) {
            const auto& ch = key.first;
            const auto& count = key.second;
            for (auto i = 0 ; i < count; i++) {
                result.push_back(ch);
            }
        }
        std::sort(result.begin(), result.end());
        return result;
    }
}
