// https://www.algoexpert.io/questions/interweaving-strings
//
// #Recursion
// #Hard
// TODO: Improve performance by applying cache/memoization (see hints/solutions)

#include "InterweavingStrings.h"

namespace algoExpert::recursion {
    using str_iter = std::string::const_iterator;

    bool iws_helper(
        const str_iter one_iter,
        const str_iter& one_end,
        const str_iter two_iter,
        const str_iter& two_end,
        const str_iter three_iter,
        const str_iter& three_end)
    {
        if (one_iter == one_end && two_iter == two_end && three_iter == three_end) return true;
        bool b_one = false;
        bool b_two = false;
        if (one_iter != one_end)
            if (*one_iter == *three_iter)
                b_one = iws_helper(one_iter+1, one_end, two_iter, two_end, three_iter+1, three_end);
        if (two_iter != two_end)
            if (*two_iter == *three_iter)
                b_two = iws_helper(one_iter, one_end, two_iter+1, two_end, three_iter+1, three_end);

        return b_one || b_two;
    }
    bool interweavingStrings(string one, string two, string three) {
        return iws_helper(
            one.begin(),
            one.end(),
            two.begin(),
            two.end(),
            three.begin(),
            three.end());
    }
}
