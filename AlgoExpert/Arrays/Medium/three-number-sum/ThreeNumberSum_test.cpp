#include "ThreeNumberSum.h"
#include "gtest/gtest.h"

namespace {
    using std::vector;

    TEST(ThreeNumberSum, Case01) {
        const vector<int> array = {12, 3, 1, 2, -6, 5, -8, 6};
        const int targetSum = 0;
        vector<vector<int>> expected =
                {
                        {-8, 2, 6},
                        {-8, 3, 5},
                        {-6, 1, 5}
                };
        EXPECT_EQ(expected, algoExpert::arrays::threeNumberSum(array, targetSum));
    }

    TEST(ThreeNumberSum, Case02) {
        const vector<int> array = {1, 2, 3};
        const int targetSum = 6;
        vector<vector<int>> expected =
                {
                        {1, 2, 3}
                };
        EXPECT_EQ(expected, algoExpert::arrays::threeNumberSum(array, targetSum));
    }

    TEST(ThreeNumberSum, Case03) {
        const vector<int> array = {1, 2, 3};
        const int targetSum = 7;
        vector<vector<int>> expected =
                {
                };
        EXPECT_EQ(expected, algoExpert::arrays::threeNumberSum(array, targetSum));
    }

    TEST(ThreeNumberSum, Case04) {
        const vector<int> array = {8, 10, -2, 49, 14};
        const int targetSum = 57;
        vector<vector<int>> expected =
                {
                        {-2, 10, 49}
                };
        EXPECT_EQ(expected, algoExpert::arrays::threeNumberSum(array, targetSum));
    }

    TEST(ThreeNumberSum, Case05) {
        const vector<int> array = {12, 3, 1, 2, -6, 5, 0, -8, -1};
        const int targetSum = 0;
        vector<vector<int>> expected =
                {
                        {-8, 3, 5},
                        {-6, 1, 5},
                        {-1, 0, 1}
                };
        EXPECT_EQ(expected, algoExpert::arrays::threeNumberSum(array, targetSum));
    }

    TEST(ThreeNumberSum, Case06) {
        const vector<int> array = {12, 3, 1, 2, -6, 5, 0, -8, -1, 6};
        const int targetSum = 0;
        vector<vector<int>> expected =
                {
                        {-8, 2, 6},
                        {-8, 3, 5},
                        {-6, 0, 6},
                        {-6, 1, 5},
                        {-1, 0, 1}
                };
        EXPECT_EQ(expected, algoExpert::arrays::threeNumberSum(array, targetSum));
    }

    TEST(ThreeNumberSum, Case07) {
        const vector<int> array = {12, 3, 1, 2, -6, 5, 0, -8, -1, 6, -5};
        const int targetSum = 0;
        vector<vector<int>> expected =
                {
                        {-8, 2,  6},
                        {-8, 3,  5},
                        {-6, 0,  6},
                        {-6, 1,  5},
                        {-5, -1, 6},
                        {-5, 0,  5},
                        {-5, 2,  3},
                        {-1, 0,  1}
                };
        EXPECT_EQ(expected, algoExpert::arrays::threeNumberSum(array, targetSum));
    }

    TEST(ThreeNumberSum, Case08) {
        const vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
        const int targetSum = 18;
        vector<vector<int>> expected =
                {
                        {1, 2, 15},
                        {1, 8, 9},
                        {2, 7, 9},
                        {3, 6, 9},
                        {3, 7, 8},
                        {4, 5, 9},
                        {4, 6, 8},
                        {5, 6, 7}
                };
        EXPECT_EQ(expected, algoExpert::arrays::threeNumberSum(array, targetSum));
    }

    TEST(ThreeNumberSum, Case09) {
        const vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
        const int targetSum = 32;
        vector<vector<int>> expected =
                {
                        {8, 9, 15}
                };
        EXPECT_EQ(expected, algoExpert::arrays::threeNumberSum(array, targetSum));
    }

    TEST(ThreeNumberSum, Case10) {
        const vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
        const int targetSum = 33;
        vector<vector<int>> expected =
                {
                };
        EXPECT_EQ(expected, algoExpert::arrays::threeNumberSum(array, targetSum));
    }

    TEST(ThreeNumberSum, Case11) {
        const vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
        const int targetSum = 5;
        vector<vector<int>> expected =
                {
                };
        EXPECT_EQ(expected, algoExpert::arrays::threeNumberSum(array, targetSum));
    }
}
