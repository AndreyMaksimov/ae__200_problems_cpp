#include "NonConstructibleChange.h"
#include "gtest/gtest.h"

namespace
{
    TEST(nonConstructibleChange, Case01)
    {
        const std::vector<int> coins = {5, 7, 1, 1, 2, 3, 22};
        const int expected = 20;
        const auto result = algoExpert::arrays::nonConstructibleChange(coins);
        EXPECT_EQ(expected, result);
    }
    TEST(nonConstructibleChange, Case02)
    {
        const std::vector<int> coins = {1, 1, 1, 1, 1};
        const int expected = 6;
        const auto result = algoExpert::arrays::nonConstructibleChange(coins);
        EXPECT_EQ(expected, result);
    }
    TEST(nonConstructibleChange, Case03)
    {
        const std::vector<int> coins = {1, 5, 1, 1, 1, 10, 15, 20, 100};
        const int expected = 55;
        const auto result = algoExpert::arrays::nonConstructibleChange(coins);
        EXPECT_EQ(expected, result);
    }
    TEST(nonConstructibleChange, Case04)
    {
        const std::vector<int> coins = {6, 4, 5, 1, 1, 8, 9};
        const int expected = 3;
        const auto result = algoExpert::arrays::nonConstructibleChange(coins);
        EXPECT_EQ(expected, result);
    }
    TEST(nonConstructibleChange, Case05)
    {
        const std::vector<int> coins = {};
        const int expected = 1;
        const auto result = algoExpert::arrays::nonConstructibleChange(coins);
        EXPECT_EQ(expected, result);
    }
    TEST(nonConstructibleChange, Case06)
    {
        const std::vector<int> coins = {87};
        const int expected = 1;
        const auto result = algoExpert::arrays::nonConstructibleChange(coins);
        EXPECT_EQ(expected, result);
    }
    TEST(nonConstructibleChange, Case07)
    {
        const std::vector<int> coins = {5, 6, 1, 1, 2, 3, 4, 9};
        const int expected = 32;
        const auto result = algoExpert::arrays::nonConstructibleChange(coins);
        EXPECT_EQ(expected, result);
    }
    TEST(nonConstructibleChange, Case08)
    {
        const std::vector<int> coins = {5, 6, 1, 1, 2, 3, 43};
        const int expected = 19;
        const auto result = algoExpert::arrays::nonConstructibleChange(coins);
        EXPECT_EQ(expected, result);
    }
    TEST(nonConstructibleChange, Case09)
    {
        const std::vector<int> coins = {1, 1};
        const int expected = 3;
        const auto result = algoExpert::arrays::nonConstructibleChange(coins);
        EXPECT_EQ(expected, result);
    }
    TEST(nonConstructibleChange, Case10)
    {
        const std::vector<int> coins = {2};
        const int expected = 1;
        const auto result = algoExpert::arrays::nonConstructibleChange(coins);
        EXPECT_EQ(expected, result);
    }
    TEST(nonConstructibleChange, Case11)
    {
        const std::vector<int> coins = {1};
        const int expected = 2;
        const auto result = algoExpert::arrays::nonConstructibleChange(coins);
        EXPECT_EQ(expected, result);
    }
    TEST(nonConstructibleChange, Case12)
    {
        const std::vector<int> coins = {109, 2000, 8765, 19, 18, 17, 16, 8, 1, 1, 2, 4};
        const int expected = 87;
        const auto result = algoExpert::arrays::nonConstructibleChange(coins);
        EXPECT_EQ(expected, result);
    }
    TEST(nonConstructibleChange, Case13)
    {
        const std::vector<int> coins = {1, 2, 3, 4, 5, 6, 7};
        const int expected = 29;
        const auto result = algoExpert::arrays::nonConstructibleChange(coins);
        EXPECT_EQ(expected, result);
    }
}
