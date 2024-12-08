// https://www.algoexpert.io/questions/valid-ip-addresses
//
// #Strings
// #Medium

#include <unordered_set>
#include <algorithm>
#include "ValidIpAddresses.h"

namespace algoExpert::strings {
    using valid_str_t = std::unordered_set<std::string>;
    using std::to_string, std::min;
    valid_str_t create_lookup_valid_str() {
        valid_str_t str2valid;
        for (int i = 0; i <= 255; i++) {
            str2valid.insert(to_string(i));
        }
        return str2valid;
    }
    vector<string> validIPAddresses(string str) {
        if (str.length() < 4) return {};
        vector<string> result;
        auto valid_ip_str = create_lookup_valid_str();
        const size_t sub_len = 3;
        const auto len = str.size();
        for (size_t i1 = 1; i1 <= sub_len; i1++) {
            const auto tail1 = len - i1;
            if (tail1 > 9) continue;
            if (tail1 < 3) break;
            const auto start1 = 0;
            const auto str1 = str.substr(start1, i1);
            if (valid_ip_str.find(str1) == valid_ip_str.end()) continue;
            for (size_t i2 = 1; i2 <= min(sub_len, tail1); i2++) {
                const auto tail2 = tail1 - i2;
                if (tail2 > 6) continue;
                if (tail2 < 2) break;
                const auto start2 = start1 + i1;
                const auto str2 = str.substr(start2 , i2);
                if (valid_ip_str.find(str2) == valid_ip_str.end()) continue;
                for (size_t i3 = 1; i3 <= min(sub_len, tail2-1); i3++) {
                    const auto tail3 = tail2 - i3;
                    const auto start3 = start2 + i2;
                    const auto str3 = str.substr(start3 , i3);
                    if (valid_ip_str.find(str3) == valid_ip_str.end()) continue;
                    const auto start4 = start3 + i3;
                    const auto str4 = str.substr(start4 , tail3);
                    if (valid_ip_str.find(str4) == valid_ip_str.end()) continue;
                    auto valid_ip = str1 + "." + str2 + "." + str3 + "." + str4;
                    result.push_back(valid_ip);
                }
            }
        }
        return result;
    }
}
