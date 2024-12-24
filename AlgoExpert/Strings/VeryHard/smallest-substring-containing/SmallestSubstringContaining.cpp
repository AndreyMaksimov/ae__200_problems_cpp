// https://www.algoexpert.io/questions/smallest-substring-containing
//
// #Strings
// #VeryHard

#include <unordered_map>
#include "SmallestSubstringContaining.h"

namespace algoExpert::strings {
    using char_count_t = std::unordered_map<char, int>; // chars counter in a string
    using str_idx_t = string::size_type;                // char position in a string

    bool smallIsSubsetOfBig(const char_count_t& smallMap, const char_count_t& bigMap) {
        for (auto itSmall = smallMap.begin(); itSmall != smallMap.end(); ++itSmall) {
            const auto& c = itSmall->first;
            const auto& itBig = bigMap.find(c);
            if (itBig == bigMap.end()) return false; // all chars from Small substr should present in a Big one
            const auto& smallCount = itSmall->second;
            const auto& bigCount = itBig->second;
            if (bigCount < smallCount) return false; // their number in Big can not be less than in Small
        }
        return true;
    }

    bool moveRightUntilGetCompleteSmall (
        const string& bigString,
        char_count_t rangeMap,
        str_idx_t& idx_to)
    {
        const auto& big_len = bigString.size();
        while (true) {
            const auto& c = bigString[idx_to];
            const auto& itRange = rangeMap.find(c);
            if (itRange != rangeMap.end()) {
                auto& c_count = itRange->second;
                if (--c_count == 0) rangeMap.erase(itRange);
                if (rangeMap.empty()) return true;
            }
            ++idx_to;
            if (idx_to == big_len) return false; // bigString exhausted
        }
    }

    void moveLeftToNextCharFromSmall(
        const string& bigString,
        const char_count_t& smallMap,
        str_idx_t& idx_from)
    {
        while (true) {
            const auto& c = bigString[idx_from];
            if (smallMap.find(c) != smallMap.end()) return;
            ++idx_from;
        }
    }

    bool removeCharFromBigMap(const char& c, char_count_t& bigMap, const char_count_t& smallMap ) {
        const auto itBig = bigMap.find(c);
        if (itBig == bigMap.end()) return false;
        const auto itSmall = smallMap.find(c);
        if (itBig->second == itSmall->second) return false; // number of 'c' in bigMap becomes less than in smallMap
        itBig->second--;
        return true;
    }

    string smallestSubstringContaining(string bigString, string smallString) {
        char_count_t bigMap, smallMap;
        for (const auto &c : smallString) smallMap[c]++;
        for (const auto &c : bigString) {
            if (smallMap.find(c) == smallMap.end()) continue;
            bigMap[c]++;
        }

        // Step1: check if smallMap is a subset of bigMap
        if ( ! smallIsSubsetOfBig(smallMap, bigMap) ) return "";

        // Step 2
        string substr = bigString;
        str_idx_t idx_from = 0;
        str_idx_t idx_from_min = 0;
        str_idx_t idx_to_min = bigString.size() - 1;
        while (true) {
            // TODO 1) avoid double pass of intersected ranges
            moveLeftToNextCharFromSmall(bigString, smallMap, idx_from);
            auto idx_to = idx_from;
            if (! moveRightUntilGetCompleteSmall(bigString, smallMap, idx_to)) break;
            if ((idx_to - idx_from) < (idx_to_min - idx_from_min)) {
                idx_to_min = idx_to;
                idx_from_min = idx_from;
            }
            if (! removeCharFromBigMap(bigString[idx_from], bigMap, smallMap)) break; // bigMap becomes smaller than smallMap
            ++idx_from;
        }
        substr = bigString.substr(idx_from_min, idx_to_min - idx_from_min + 1);
        return substr;
    }
}
