// https://www.algoexpert.io/questions/semordnilap
//
// #Strings
// #Easy

// TODO: improve with std::unordered_set<string>, std::reverse

#include <algorithm>
#include "Semordnilap.h"

namespace algoExpert::strings {

    bool is_semordnilap(const string& s1, const string& s2) {
        if (s1.length() != s2.length()) return false;
        auto it1 = s1.begin();
        auto it2 = s2.rbegin();
        while (it1 != s1.end() && it2 != s2.rend()) {
            if (*it1++ != *it2++) return false;
        }
        return true;
    }
    vector<vector<string>> semordnilap(vector<string> words) {
        vector<vector<string>> result;
        for (auto word = words.begin(); word != words.end(); ++word) {
            auto next = word + 1;
            while (next != words.end()) {
                if (is_semordnilap(*word, *next)) {
                    vector sv({*word, *next});
                    std::sort(sv.begin(), sv.end());
                    result.push_back(sv);
                    // TODO: accurately erase 'next' here?
                    break;
                }
                ++next;
            }
        }
        return result;
    }
}
