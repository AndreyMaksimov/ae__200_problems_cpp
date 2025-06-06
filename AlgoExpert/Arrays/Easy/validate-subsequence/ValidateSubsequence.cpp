// https://www.algoexpert.io/questions/validate-subsequence
//
// #arrays
// #easy
// #std::vector
// #iterator

#include <vector>

namespace algoExpert::arrays {
    using std::vector;

    bool isValidSubsequence01(vector<int>& array, vector<int>& sequence) {
        auto result = false;
        auto iter_a = array.begin();
        auto iter_s = sequence.begin();
        while (!result && (iter_a != array.end())) {
            if (*iter_s == *iter_a) {
                if ( ++iter_s == sequence.end() ) {
                    result = true;
                }
            }
            ++iter_a;
        }
        return result;
    }

    bool isValidSubsequence(vector<int> array, vector<int> sequence) {
        return isValidSubsequence01(array, sequence);
    }
}
