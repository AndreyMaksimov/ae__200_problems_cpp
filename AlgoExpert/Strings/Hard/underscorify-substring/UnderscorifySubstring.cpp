// https://www.algoexpert.io/questions/underscorify-substring
//
// #Strings
// #Hard

#include "UnderscorifySubstring.h"

namespace algoExpert::strings {
    using str_pos_t = string::size_type;
    using str_iterator_t = std::string::const_iterator;

    str_pos_t find_nested_substr(const string& str, str_pos_t from_pos, const string& subStr) {

        // new substring where we look for nested. It is good trick in case of original string is very long
        // So we just part double length of pattern minus 1
        // And start to search from position "plus 1" relative to previously found pattern start
        const auto str2 = str.substr(from_pos+1, subStr.size()*2 - 1);
        const auto pos = str2.find(subStr);
        if (pos == string::npos) return 0; // no more nested pattern
        const auto next_from_pos = pos + 1 + from_pos;
        return pos + 1 + find_nested_substr(str, next_from_pos, subStr);
    }
    string::size_type len_of_contiguous_substrings(const string& str, str_pos_t from_pos, const string& subStr) {
        // here we dive to recursion to parse possible neste construction
        return from_pos + subStr.size() + find_nested_substr(str, from_pos, subStr);
    }
    string underscorifySubstring(string str, string subStr) {

        // Here (1 & 2) we use standard method "find" to find a start of possible complex (nested) construction
        auto pos = str.find(subStr); // 1)
        while (pos != std::string::npos) {
            const auto pos2 = len_of_contiguous_substrings(str, pos, subStr);
            // TODO: here is a potential place to improve the algorithm
            // Just do not insert each time "_", but collect their positions
            // At final stage make insertions (create new string) by one go through
            str.insert(pos, "_");
            str.insert(pos2+1, "_");
            pos = str.find(subStr, pos2+2); // 2)
        }
        return str;
    }
}
