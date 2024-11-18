// https://www.algoexpert.io/questions/palindrome-check
//
// #Strings
// #Easy


#include "PalindromeCheck.h"

namespace algoExpert::strings {
    bool isPalindrome(string str) {
        auto l_iter = str.begin();
        auto r_iter = str.end() - 1;
        while (l_iter < r_iter) {
            if (*l_iter != *r_iter) return false;
            ++l_iter;
            --r_iter;
        }
        return true;
    }
}
