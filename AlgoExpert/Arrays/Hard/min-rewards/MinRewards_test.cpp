#include "MinRewards.h"
#include "gtest/gtest.h"

namespace
{
    TEST(MinRewards, Case01)
    {
        std::vector<int> scores = {8, 4, 2, 1, 3, 6, 7, 9, 5};
        const auto expected = 25;
        const auto output = algoExpert::arrays::minRewards(scores);
        EXPECT_EQ(expected, output);
    }
    TEST(MinRewards, Case02)
    {
        std::vector<int> scores = {1};
        const auto expected = 1;
        const auto output = algoExpert::arrays::minRewards(scores);
        EXPECT_EQ(expected, output);
    }
    TEST(MinRewards, Case03)
    {
        std::vector<int> scores = {5, 10};
        const auto expected = 3;
        const auto output = algoExpert::arrays::minRewards(scores);
        EXPECT_EQ(expected, output);
    }
    TEST(MinRewards, Case04)
    {
        std::vector<int> scores = {10, 5};
        const auto expected = 3;
        const auto output = algoExpert::arrays::minRewards(scores);
        EXPECT_EQ(expected, output);
    }
    TEST(MinRewards, Case05)
    {
        std::vector<int> scores = {4, 2, 1, 3};
        const auto expected = 8;
        const auto output = algoExpert::arrays::minRewards(scores);
        EXPECT_EQ(expected, output);
    }
    TEST(MinRewards, Case06)
    {
        std::vector<int> scores = {0, 4, 2, 1, 3};
        const auto expected = 9;
        const auto output = algoExpert::arrays::minRewards(scores);
        EXPECT_EQ(expected, output);
    }
    TEST(MinRewards, Case07)
    {
        std::vector<int> scores = {2, 20, 13, 12, 11, 8, 4, 3, 1, 5, 6, 7, 9, 0};
        const auto expected = 52;
        const auto output = algoExpert::arrays::minRewards(scores);
        EXPECT_EQ(expected, output);
    }
    TEST(MinRewards, Case08)
    {
        std::vector<int> scores = {2, 1, 4, 3, 6, 5, 8, 7, 10, 9};
        const auto expected = 15;
        const auto output = algoExpert::arrays::minRewards(scores);
        EXPECT_EQ(expected, output);
    }
    TEST(MinRewards, Case09)
    {
        std::vector<int> scores = {800, 400, 20, 10, 30, 61, 70, 90, 17, 21, 22, 13, 12, 11, 8, 4, 2, 1, 3, 6, 7, 9, 0, 68, 55, 67, 57, 60, 51, 661, 50, 65, 53};
        const auto expected = 93;
        const auto output = algoExpert::arrays::minRewards(scores);
        EXPECT_EQ(expected, output);
    }
}
