// https://www.algoexpert.io/questions/product-sum
//
// #Recursion
// #Easy

// #std::any #std::any_cast

#include <any>
#include <vector>
#include "ProductSum.h"

namespace algoExpert::recursion {
    // Tip: You can use el.type() == typeid(vector<any>) to check whether an item is
    // a list or an integer.
    // If you know an element of the array is vector<any> you can cast it using:
    //     any_cast<vector<any>>(element)
    // If you know an element of the array is an int you can cast it using:
    //     any_cast<int>(element)
    using std::vector, std::any, std::any_cast;
    int Sum(const int deep, vector<any>& nums) {
        if (nums.empty()) return 0;
        int sum = 0;
        for (auto& it : nums) {
            if (it.type() == typeid(int)) { // vector's element is an int
                sum += any_cast<int>(it);
            }
            else { // or inner vector
                sum += deep * Sum(deep+1, any_cast<vector<any>&>(it));
            }
        }
        return sum;
    }
    int productSum(vector<any> array) {
        return Sum(2, array);
    }
}
