#include "FourNumberSum.h"
#include "gtest/gtest.h"

namespace
{
    TEST(FourNumberSum, Case01)
    {
        std::vector<int> array = {7, 6, 4, -1, 1, 2};
        int targetSum = 16;
        std::vector<std::vector<int>> expected =
                {
                        {7, 6, 4, -1},
                        {7, 6, 1, 2}
                };
        const auto output = algoExpert::arrays::fourNumberSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
    TEST(FourNumberSum, Case02)
    {
        std::vector<int> array = {1, 2, 3, 4, 5, 6, 7};
        int targetSum = 10;
        std::vector<std::vector<int>> expected =
                {
                        {1, 2, 3, 4}
                };
        const auto output = algoExpert::arrays::fourNumberSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
    TEST(FourNumberSum, Case03)
    {
        std::vector<int> array = {5, -5, -2, 2, 3, -3};
        int targetSum = 0;
        std::vector<std::vector<int>> expected =
                {
                        {5, -5, -2, 2},
                        {5, -5, 3, -3},
                        {-2, 2, 3, -3}
                };
        const auto output = algoExpert::arrays::fourNumberSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
    TEST(FourNumberSum, Case04)
    {
        std::vector<int> array = {-2, -1, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        int targetSum = 4;
        std::vector<std::vector<int>> expected =
                {
                        {-2, -1, 1, 6},
                        {-2, 1, 2, 3},
                        {-2, -1, 2, 5},
                        {-2, -1, 3, 4}
                };
        const auto output = algoExpert::arrays::fourNumberSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
    TEST(FourNumberSum, Case05)
    {
        std::vector<int> array = {-1, 22, 18, 4, 7, 11, 2, -5, -3};
        int targetSum = 30;
        std::vector<std::vector<int>> expected =
                {
                        {-1, 22, 7, 2},
                        {22, 4, 7, -3},
                        {-1, 18, 11, 2},
                        {18, 4, 11, -3},
                        {22, 11, 2, -5}
                };
        const auto output = algoExpert::arrays::fourNumberSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
    TEST(FourNumberSum, Case06)
    {
        std::vector<int> array = {-10, -3, -5, 2, 15, -7, 28, -6, 12, 8, 11, 5};
        int targetSum = 20;
        std::vector<std::vector<int>> expected =
                {
                        {-5, 2, 15, 8},
                        {-3, 2, -7, 28},
                        {-10, -3, 28, 5},
                        {-10, 28, -6, 8},
                        {-7, 28, -6, 5},
                        {-5, 2, 12, 11},
                        {-5, 12, 8, 5}
                };
        const auto output = algoExpert::arrays::fourNumberSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
    TEST(FourNumberSum, Case07)
    {
        std::vector<int> array = {1, 2, 3, 4, 5};
        int targetSum = 100;
        std::vector<std::vector<int>> expected = {};
        const auto output = algoExpert::arrays::fourNumberSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
    TEST(FourNumberSum, Case08)
    {
        std::vector<int> array = {1, 2, 3, 4, 5, -5, 6, -6};
        int targetSum = 5;
        std::vector<std::vector<int>> expected =
                {
                        {2, 3, 5, -5},
                        {1, 4, 5, -5},
                        {2, 4, 5, -6},
                        {1, 3, -5, 6},
                        {2, 3, 6, -6},
                        {1, 4, 6, -6}
                };
        const auto output = algoExpert::arrays::fourNumberSum(array, targetSum);
        EXPECT_EQ(expected, output);
    }
}
