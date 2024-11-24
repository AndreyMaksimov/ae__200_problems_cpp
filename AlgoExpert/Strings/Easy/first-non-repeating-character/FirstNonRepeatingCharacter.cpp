// https://www.algoexpert.io/questions/first-non-repeating-character
//
// #Strings
// #Easy

#include <limits>
#include "FirstNonRepeatingCharacter.h"

namespace algoExpert::strings {
    // Complexity:
    // O(n) time . 1 pass
    // O(1) - space
    int firstNonRepeatingCharacter(string string) {
        const char a_hex_code = 0x61;
        const int az_len = 26;
        int az[az_len] = {0};

        for (auto i = 0; i < string.length(); i++) {
            const auto ich = string[i] - a_hex_code;
            // store char position or INT_MAX in case of 2+ hit
            az[ich] = (az[ich] == 0) ? (i + 1) : std::numeric_limits<int>::max();
        }
        int i_result = -1;
        int amin = std::numeric_limits<int>::max();
        for (const int i : az) { // loop over 26 chars
            if (i < amin && i != 0) {
                amin = i;
                i_result = i - 1;
            }
        }
        return i_result;
    }
}
