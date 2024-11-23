// https://www.algoexpert.io/questions/generate-document
//
// #Strings
// #Easy

#include <unordered_map>
#include "GenerateDocument.h"

namespace algoExpert::strings {
    using char_n_t = std::unordered_map<char, int>;
    bool generateDocument(string characters, string document) {
        char_n_t char_collection;
        for (const auto& ch : characters) {
            char_collection[ch] += 1;
        }
        for (const auto& ch : document) {
            const auto it = char_collection.find(ch);
            if (it == char_collection.end()) return false;
            it->second -= 1;
            if (it->second == 0) char_collection.erase(it);
        }
        return true;
    }
}
