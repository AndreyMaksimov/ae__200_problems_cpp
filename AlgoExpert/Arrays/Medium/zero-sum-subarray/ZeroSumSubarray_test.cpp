#include "ZeroSumSubarray.h"
#include "gtest/gtest.h"

namespace
{
    TEST(ZeroSumSubarray, Case01)
    {
        std::vector<int> nums = {};
        const auto expected = false;
        const auto output = algoExpert::arrays::zeroSumSubarray(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(ZeroSumSubarray, Case02)
    {
        std::vector<int> nums = {0};
        const auto expected = true;
        const auto output = algoExpert::arrays::zeroSumSubarray(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(ZeroSumSubarray, Case03)
    {
        std::vector<int> nums = {1};
        const auto expected = false;
        const auto output = algoExpert::arrays::zeroSumSubarray(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(ZeroSumSubarray, Case04)
    {
        std::vector<int> nums = {1, 2, 3};
        const auto expected = false;
        const auto output = algoExpert::arrays::zeroSumSubarray(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(ZeroSumSubarray, Case05)
    {
        std::vector<int> nums = {1, 1, 1};
        const auto expected = false;
        const auto output = algoExpert::arrays::zeroSumSubarray(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(ZeroSumSubarray, Case06)
    {
        std::vector<int> nums = {-1, -1, -1};
        const auto expected = false;
        const auto output = algoExpert::arrays::zeroSumSubarray(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(ZeroSumSubarray, Case07)
    {
        std::vector<int> nums = {0, 0, 0};
        const auto expected = true;
        const auto output = algoExpert::arrays::zeroSumSubarray(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(ZeroSumSubarray, Case08)
    {
        std::vector<int> nums = {1, 2, -2, 3};
        const auto expected = true;
        const auto output = algoExpert::arrays::zeroSumSubarray(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(ZeroSumSubarray, Case09)
    {
        std::vector<int> nums = {2, -2};
        const auto expected = true;
        const auto output = algoExpert::arrays::zeroSumSubarray(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(ZeroSumSubarray, Case10)
    {
        std::vector<int> nums = {-1, 2, 3, 4, -5, -3, 1, 2};
        const auto expected = true;
        const auto output = algoExpert::arrays::zeroSumSubarray(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(ZeroSumSubarray, Case11)
    {
        std::vector<int> nums = {-2, -3, -1, 2, 3, 4, -5, -3, 1, 2};
        const auto expected = true;
        const auto output = algoExpert::arrays::zeroSumSubarray(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(ZeroSumSubarray, Case12)
    {
        std::vector<int> nums = {2, 3, 4, -5, -3, 4, 5};
        const auto expected = true;
        const auto output = algoExpert::arrays::zeroSumSubarray(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(ZeroSumSubarray, Case13)
    {
        std::vector<int> nums = {2, 3, 4, -5, -3, 5, 5};
        const auto expected = false;
        const auto output = algoExpert::arrays::zeroSumSubarray(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(ZeroSumSubarray, Case14)
    {
        std::vector<int> nums = {1, 2, 3, 4, 0, 5, 6, 7};
        const auto expected = true;
        const auto output = algoExpert::arrays::zeroSumSubarray(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(ZeroSumSubarray, Case15)
    {
        std::vector<int> nums = {1, 2, 3, -2, -1};
        const auto expected = true;
        const auto output = algoExpert::arrays::zeroSumSubarray(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(ZeroSumSubarray, Case16)
    {
        std::vector<int> nums = {-8, -22, 104, 73, -120, 53, 22, -12, 1, 14, -90, 13, -22};
        const auto expected = false;
        const auto output = algoExpert::arrays::zeroSumSubarray(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(ZeroSumSubarray, Case17)
    {
        std::vector<int> nums = {-8, -22, 104, 73, -120, 53, 22, 20, 25, -12, 1, 14, -90, 13, -22};
        const auto expected = true;
        const auto output = algoExpert::arrays::zeroSumSubarray(nums);
        EXPECT_EQ(expected, output);
    }
}
