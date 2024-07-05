// https://www.algoexpert.io/questions/missingNumbers
//
// #Arrays
// #Medium

#include <algorithm>
#include "MissingNumbers.h"

//
// The idea is to add "spare" array with length = 2
// Multiply existing numbers by (-1)
namespace algoExpert::arrays {
    using std::abs;
    vector<int> missingNumbers(vector<int> nums) {
        vector<int> result;
        const int size = nums.size();
        vector<int> spare = {size+1, size+2};
        for (auto i=0; i<size; ++i) {
            auto i_new = abs(nums[i]) - 1;
            if ( i_new < size) {
                nums[i_new] *= -1; // 0 - means exists
            }
            else {
                auto i_spare = i_new - size;
                spare[i_spare] *= -1;
            }
        }

        for (auto i=0; i<size; ++i) {
            if (nums[i] > 0) result.push_back(i+1);
        }
        for (auto i=0; i<2 ; ++i) {
            if (spare[i] > 0) result.push_back(size+i+1);
        }

        return result;
    }
}
