#include "LongestSubarrayWithSum.h"
#include "gtest/gtest.h"

namespace
{
    TEST(LongestSubarrayWithSum, Case01)
    {
        std::vector<int> array = {1, 2, 3, 4, 3, 3, 1, 2, 1};
        int targetSum = 10;
        const std::vector<int> expected = {4, 8};
        const auto output = algoExpert::arrays::longestSubarrayWithSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestSubarrayWithSum, Case02)
    {
        std::vector<int> array = {1, 2, 3, 4, 0, 0, 0, 0, 0, 3, 3, 1, 2, 1};
        int targetSum = 10;
        const std::vector<int> expected = {4, 13};
        const auto output = algoExpert::arrays::longestSubarrayWithSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestSubarrayWithSum, Case03)
    {
        std::vector<int> array = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
        int targetSum = 1;
        const std::vector<int> expected = {0, 9};
        const auto output = algoExpert::arrays::longestSubarrayWithSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestSubarrayWithSum, Case04)
    {
        std::vector<int> array = {0, 0, 0, 0, 0, 1, 0, 0, 0, 0};
        int targetSum = 1;
        const std::vector<int> expected = {0, 9};
        const auto output = algoExpert::arrays::longestSubarrayWithSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestSubarrayWithSum, Case05)
    {
        std::vector<int> array = {25, 25, 25, 25, 100, 0, 0, 0, 0, 0, 0, 0};
        int targetSum = 100;
        const std::vector<int> expected = {4, 11};
        const auto output = algoExpert::arrays::longestSubarrayWithSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestSubarrayWithSum, Case06)
    {
        std::vector<int> array = {1, 2, 3, 4, 5, 5, 5, 5};
        int targetSum = 15;
        const std::vector<int> expected = {0, 4};
        const auto output = algoExpert::arrays::longestSubarrayWithSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestSubarrayWithSum, Case07)
    {
        std::vector<int> array = {0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 5, 5, 5, 5, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1};
        int targetSum = 20;
        const std::vector<int> expected = {11, 23};
        const auto output = algoExpert::arrays::longestSubarrayWithSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestSubarrayWithSum, Case08)
    {
        std::vector<int> array = {1, 2, 3, 4, 5, 0, 0, 0, 6, 7, 8, 9, 10};
        int targetSum = 15;
        const std::vector<int> expected = {0, 7};
        const auto output = algoExpert::arrays::longestSubarrayWithSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestSubarrayWithSum, Case09)
    {
        std::vector<int> array = {61, 54, 1, 499, 2212, 4059, 1, 2, 3, 1, 3};
        int targetSum = 19;
        const std::vector<int> expected = {};
        const auto output = algoExpert::arrays::longestSubarrayWithSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestSubarrayWithSum, Case10)
    {
        std::vector<int> array = {0};
        int targetSum = 0;
        const std::vector<int> expected = {0, 0};
        const auto output = algoExpert::arrays::longestSubarrayWithSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestSubarrayWithSum, Case11)
    {
        std::vector<int> array = {10};
        int targetSum = 10;
        const std::vector<int> expected = {0, 0};
        const auto output = algoExpert::arrays::longestSubarrayWithSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestSubarrayWithSum, Case12)
    {
        std::vector<int> array = {5};
        int targetSum = 0;
        const std::vector<int> expected = {};
        const auto output = algoExpert::arrays::longestSubarrayWithSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestSubarrayWithSum, Case13)
    {
        std::vector<int> array = {5};
        int targetSum = 10;
        const std::vector<int> expected = {};
        const auto output = algoExpert::arrays::longestSubarrayWithSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestSubarrayWithSum, Case14)
    {
        std::vector<int> array = {0, 1, 0, 1};
        int targetSum = 3;
        const std::vector<int> expected = {};
        const auto output = algoExpert::arrays::longestSubarrayWithSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestSubarrayWithSum, Case15)
    {
        std::vector<int> array = {0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 28, 10};
        int targetSum = 39;
        const std::vector<int> expected = {0, 9};
        const auto output = algoExpert::arrays::longestSubarrayWithSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestSubarrayWithSum, Case16)
    {
        std::vector<int> array = {1, 4, 10, 15, 31, 7, 1, 40, 0, 20, 1, 1, 1, 1, 2, 1};
        int targetSum = 68;
        const std::vector<int> expected = {6, 15};
        const auto output = algoExpert::arrays::longestSubarrayWithSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestSubarrayWithSum, Case17)
    {
        std::vector<int> array = {1, 4, 10, 15, 31, 7, 1, 40, 0, 20, 1, 1, 1, 1, 2, 1};
        int targetSum = 0;
        const std::vector<int> expected = {8, 8};
        const auto output = algoExpert::arrays::longestSubarrayWithSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestSubarrayWithSum, Case18)
    {
        std::vector<int> array = {1, 4, 10, 15, 31, 7, 1, 40, 5, 20, 1, 1, 1, 1, 2, 1};
        int targetSum = 0;
        const std::vector<int> expected = {};
        const auto output = algoExpert::arrays::longestSubarrayWithSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestSubarrayWithSum, Case19)
    {
        std::vector<int> array = {1, 2, 3, 4, 5};
        int targetSum = 0;
        const std::vector<int> expected = {};
        const auto output = algoExpert::arrays::longestSubarrayWithSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
}
