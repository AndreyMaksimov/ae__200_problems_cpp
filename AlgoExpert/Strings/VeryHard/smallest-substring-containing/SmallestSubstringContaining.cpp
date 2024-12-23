// https://www.algoexpert.io/questions/smallest-substring-containing
//
// #Strings
// #VeryHard

#include <unordered_map>
#include "SmallestSubstringContaining.h"

namespace algoExpert::strings {
    using char_count_t = std::unordered_map<char, int>; // chars counter in a string
    using str_idx_t = string::size_type;                // char position in a string

    string smallestSubstringContaining(string bigString, string smallString) {
        char_count_t bigMap, smallMap;
        for (const auto &c : smallString) smallMap[c]++;
        for (const auto &c : bigString) bigMap[c]++;

        // Step1: check if smallMap is a subset of bigMap
        for (auto itSmall = smallMap.begin(); itSmall != smallMap.end(); ++itSmall) {
            const auto& c = itSmall->first;
            const auto& itBig = bigMap.find(c);
            if (itBig == bigMap.end()) return "";
            const auto& smallCount = itSmall->second;
            const auto& bigCount = itBig->second;
            if (bigCount < smallCount) return "";
        }
        // Step 2
        auto rangeMap = smallMap; //
        str_idx_t idx_from = 0, idx_to = 0;
        const str_idx_t big_len = bigString.size();
        auto move_to_right = [&]() {
            while (true) {
                const auto& c = bigString[idx_to];
                const auto& itRange = rangeMap.find(c);
                if (itRange != rangeMap.end()) {
                    auto& c_count = itRange->second;
                    if (--c_count == 0) rangeMap.erase(itRange);
                    if (rangeMap.empty()) return true;
                }
                ++idx_to;
                if (idx_from == big_len) return false;
            }
        };
        move_to_right();
        return "";
    }
}
