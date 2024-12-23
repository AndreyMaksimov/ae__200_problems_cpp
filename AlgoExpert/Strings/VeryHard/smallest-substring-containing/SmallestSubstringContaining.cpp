// https://www.algoexpert.io/questions/smallest-substring-containing
//
// #Strings
// #VeryHard

#include <unordered_map>
#include "SmallestSubstringContaining.h"

namespace algoExpert::strings {
    using char_count_t = std::unordered_map<char, int>; // chars counter in a string

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
        return "";
    }
}
