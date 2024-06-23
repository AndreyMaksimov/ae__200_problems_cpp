#include <vector>
#include <algorithm>
#include "TwoNumberSum.h"
#include "gtest/gtest.h"

namespace {
    TEST(TwoNumberSum, Case01)
    {
        const std::vector<int> array = {3, 5, -4, 8, 11, 1, -1, 6};
        constexpr  int targetSum = 10;
        std::vector<int> output = algoExpert::arrays::twoNumberSum(array, targetSum);
        EXPECT_EQ(2, output.size());
        EXPECT_EQ(1, std::count(output.begin(), output.end(), -1));
        EXPECT_EQ(1, std::count(output.begin(), output.end(), 11));
    }
    TEST(TwoNumberSum, Case02)
    {
        const std::vector<int> array = {4, 6};
        constexpr  int targetSum = 10;
        std::vector<int> output = algoExpert::arrays::twoNumberSum(array, targetSum);
        EXPECT_EQ(2, output.size());
        EXPECT_EQ(1, std::count(output.begin(), output.end(), 4));
        EXPECT_EQ(1, std::count(output.begin(), output.end(), 6));
    }
    TEST(TwoNumberSum, Case03)
    {
        const std::vector<int> array = {4, 6, 1};
        constexpr  int targetSum = 5;
        std::vector<int> output = algoExpert::arrays::twoNumberSum(array, targetSum);
        EXPECT_EQ(2, output.size());
        EXPECT_EQ(1, std::count(output.begin(), output.end(), 4));
        EXPECT_EQ(1, std::count(output.begin(), output.end(), 1));
    }
    TEST(TwoNumberSum, Case04)
    {
        const std::vector<int> array = {4, 6, 1, -3};
        constexpr  int targetSum = 3;
        std::vector<int> output = algoExpert::arrays::twoNumberSum(array, targetSum);
        EXPECT_EQ(2, output.size());
        EXPECT_EQ(1, std::count(output.begin(), output.end(), 6));
        EXPECT_EQ(1, std::count(output.begin(), output.end(), -3));
    }
    TEST(TwoNumberSum, Case05)
    {
        const std::vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        constexpr  int targetSum = 17;
        std::vector<int> output = algoExpert::arrays::twoNumberSum(array, targetSum);
        EXPECT_EQ(2, output.size());
        EXPECT_EQ(1, std::count(output.begin(), output.end(), 8));
        EXPECT_EQ(1, std::count(output.begin(), output.end(), 9));
    }
    TEST(TwoNumberSum, Case06)
    {
        const std::vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
        constexpr  int targetSum = 18;
        std::vector<int> output = algoExpert::arrays::twoNumberSum(array, targetSum);
        EXPECT_EQ(2, output.size());
        EXPECT_EQ(1, std::count(output.begin(), output.end(), 3));
        EXPECT_EQ(1, std::count(output.begin(), output.end(), 15));
    }
    TEST(TwoNumberSum, Case07)
    {
        const std::vector<int> array = {-7, -5, -3, -1, 0, 1, 3, 5, 7};
        constexpr  int targetSum = -5;
        std::vector<int> output = algoExpert::arrays::twoNumberSum(array, targetSum);
        EXPECT_EQ(2, output.size());
        EXPECT_EQ(1, std::count(output.begin(), output.end(), -5));
        EXPECT_EQ(1, std::count(output.begin(), output.end(), 0));
    }
    TEST(TwoNumberSum, Case08)
    {
        const std::vector<int> array = {-21, 301, 12, 4, 65, 56, 210, 356, 9, -47};
        constexpr  int targetSum = 163;
        std::vector<int> output = algoExpert::arrays::twoNumberSum(array, targetSum);
        EXPECT_EQ(2, output.size());
        EXPECT_EQ(1, std::count(output.begin(), output.end(), 210));
        EXPECT_EQ(1, std::count(output.begin(), output.end(), -47));
    }
    TEST(TwoNumberSum, Case09)
    {
        const std::vector<int> array = {-21, 301, 12, 4, 65, 56, 210, 356, 9, -47};
        constexpr  int targetSum = 164;
        std::vector<int> output = algoExpert::arrays::twoNumberSum(array, targetSum);
        EXPECT_EQ(0, output.size());
    }
    TEST(TwoNumberSum, Case10)
    {
        const std::vector<int> array = {3, 5, -4, 8, 11, 1, -1, 6};
        constexpr  int targetSum = 15;
        std::vector<int> output = algoExpert::arrays::twoNumberSum(array, targetSum);
        EXPECT_EQ(0, output.size());
    }
    TEST(TwoNumberSum, Case11)
    {
        const std::vector<int> array = {14};
        constexpr  int targetSum = 15;
        std::vector<int> output = algoExpert::arrays::twoNumberSum(array, targetSum);
        EXPECT_EQ(0, output.size());
    }
    TEST(TwoNumberSum, Case12)
    {
        const std::vector<int> array = {15};
        constexpr  int targetSum = 15;
        std::vector<int> output = algoExpert::arrays::twoNumberSum(array, targetSum);
        EXPECT_EQ(0, output.size());
    }
}
