// https://www.algoexpert.io/questions/one-edit
//
// #Strings
// #Medium

#include "OneEdit.h"

namespace algoExpert::strings {
    bool sameLenCase(const string& stringOne, const string& stringTwo) {
        int diff_count = 0;
        for (auto c1 = stringOne.begin(), c2 = stringTwo.begin(); c1 != stringOne.end(); ++c1, ++c2) {
            if (*c1 != *c2) diff_count++;
            if (diff_count > 1) return false;
        }
        return true;
    }
    bool diffLenCase(const string& stringSmall, const string& stringBig) {
        // Check case when only 1 char in length difference
        bool oneRemoveDone = false;
        for (auto c1 = stringSmall.begin(), c2 = stringBig.begin(); c1 != stringSmall.end(); ++c1, ++c2 ) {
            if (*c1 != *c2) {
                if (oneRemoveDone) return false;
                oneRemoveDone = true;
                ++c2; // move once long string
                if (*c1 != *c2) return false;
            }
        }
        return true;
    }
    bool oneEdit(string stringOne, string stringTwo) {
        const auto oneLen = stringOne.length();
        const auto twoLen = stringTwo.length();
        if (oneLen == twoLen) {
            if (oneLen == 1) return true;
            return sameLenCase(stringOne, stringTwo);
        }
        const auto diffLen = static_cast<int>(oneLen) - static_cast<int>(twoLen);
        switch (diffLen) {
            case 1:
                return diffLenCase(stringTwo, stringOne);
            case -1:
                return diffLenCase(stringOne, stringTwo);
            default:
                return false;
        }
    }
}
