// https://www.algoexpert.io/questions/levenshtein-distance
//
// #DynamicProgramming
// #Medium
//
// https://neerc.ifmo.ru/wiki/index.php?title=%D0%97%D0%B0%D0%B4%D0%B0%D1%87%D0%B0_%D0%BE_%D1%80%D0%B0%D1%81%D1%81%D1%82%D0%BE%D1%8F%D0%BD%D0%B8%D0%B8_%D0%94%D0%B0%D0%BC%D0%B5%D1%80%D0%B0%D1%83-%D0%9B%D0%B5%D0%B2%D0%B5%D0%BD%D1%88%D1%82%D0%B5%D0%B9%D0%BD%D0%B0
// https://en.wikipedia.org/wiki/Damerau%E2%80%93Levenshtein_distance

#include <algorithm>
#include "LevenshteinDistance.h"

namespace algoExpert::dynamicProgramming {
    using std::min;
    int levenshteinDistance(string str1, string str2) {
        const auto size1 = static_cast<int>(str1.size());
        const auto size2 = static_cast<int>(str2.size());
        if (size1 == 0) return size2;
        if (size2 == 0) return size1;

        vector<vector<int>> mem(size1+1, vector<int>(size2+1, 0));

        // fill in 0-th column
        for (auto i=0; i<=size1; ++i) {
            mem[i][0] = i;
        }
        // fill in 0-th row
        for (auto j=0; j<=size2; ++j) {
            mem[0][j] = j;
        }
        // run over strings
        for(auto i=1; i<=size1; ++i) {
            for(auto j=1; j<=size2; ++j) {
                const auto char_i = str1[i-1];
                const auto char_j = str2[j-1];
                if (char_i != char_j) {
                    auto mem_tmp = min(mem[i][j-1], mem[i-1][j]);
                    mem_tmp = min(mem_tmp, mem[i-1][j-1]);
                    mem[i][j] = mem_tmp + 1;
                }
                else {
                    mem[i][j] = mem[i-1][j-1];
                }
            }
        }
        return mem[size1][size2];
    }
}
