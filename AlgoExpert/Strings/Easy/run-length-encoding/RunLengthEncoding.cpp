// https://www.algoexpert.io/questions/run-length-encoding
//
// #Strings
// #Easy

#include "RunLengthEncoding.h"

namespace algoExpert::strings {
    string runLengthEncoding(string str) {
        // Interesting point:
        // Benefits of vector<char> over string?
        // https://stackoverflow.com/questions/11358879/benefits-of-vectorchar-over-string
        string result; // So probably vector<char> would be better?
        auto iter = str.begin();
        auto a_prev = *iter++;
        int n_prev = 1;
        while (iter != str.end()) {
            const auto& a = *iter++;
            if (a != a_prev) {
                if (n_prev != 0) {  // n_prev = 0 in case when len of previous chain is exactly = 9
                    result.push_back(n_prev + 0x30); // '0' = 0x30, '1' - 0x31 ...
                    result.push_back(a_prev);
                }
                a_prev = a;
                n_prev = 0;
            }
            ++n_prev;
            if (n_prev == 9) {
                result.push_back('9');
                result.push_back(a_prev);
                n_prev = 0;
            }
        }
        if (n_prev > 0) {
            result.push_back(n_prev + 0x30);
            result.push_back(a_prev);
        }
        return result;
    }
}
