// https://www.algoexpert.io/questions/majority-element
//
// #Arrays
// #Medium
//
// #Algorithm Boyer–Moore majority vote algorithm
// https://en.wikipedia.org/wiki/Boyer%E2%80%93Moore_majority_vote_algorithm

#include "MajorityElement.h"

namespace algoExpert::arrays {
    int majorityElement(vector<int> array) {
        auto pos = array.begin();
        auto a = *pos++;
        int count = 1;
        while (pos != array.end()) {
            auto a_next = *pos;
            if (a == a_next) {
                ++count;
            }
            else {
                --count;
                if (count == 0) {
                    a = a_next;
                    count = 1;
                }
            }
            ++pos;
        }
        return a;
    }
}
