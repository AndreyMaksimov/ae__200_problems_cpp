// https://www.algoexpert.io/questions/phone-number-mnemonics
//
// #Recursion
// #Medium

#include <unordered_map>
#include <algorithm>
#include "PhoneNumberMnemonics.h"

namespace algoExpert::recursion {
    using std::unordered_map;
    using std::copy;
    using mnemo_hash_t = std::unordered_map<char, vector<char>>;
    static mnemo_hash_t mnemo_hash = {
        {'1', {'1'}},
        {'2', {'a', 'b', 'c'}},
        {'3', {'d', 'e', 'f'}},
        {'4', {'g', 'h', 'i'}},
        {'5', {'j', 'k', 'l'}},
        {'6', {'m', 'n', 'o'}},
        {'7', {'p', 'q', 'r', 's'}},
        {'8', {'t', 'u', 'v'}},
        {'9', {'w', 'x', 'y', 'z'}},
        {'0', {'0'}}
    };
    void phoneNumber_helper(string::iterator& it_digit, string::iterator& it_end, vector<string>& result) {
        if (it_digit == it_end) return;
        const auto& chars = mnemo_hash[*it_digit];
        vector<string> to_append;
        for (auto& r : result) {
            auto it_char = chars.begin();
            const auto c = *it_char++;
            while (it_char != chars.end()) {
                auto r_new = r;
                r_new.push_back(*it_char++);
                to_append.push_back(r_new);
            }
            r.push_back(c);
        }
        result.insert(result.end(), to_append.begin(), to_append.end());
        phoneNumber_helper(++it_digit, it_end, result);
    }
    vector<string> phoneNumberMnemonics(string phoneNumber) {
        if (phoneNumber.empty()) return {};
        vector<string> result = {""};
        auto it_digit = phoneNumber.begin();
        auto it_end = phoneNumber.end();
        phoneNumber_helper(it_digit, it_end, result);
        std::sort(result.begin(), result.end());  // to satisfy Test cases
        return result;
    }
}
