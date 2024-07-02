#include "LongestPeak.h"
#include "gtest/gtest.h"

namespace
{
    TEST(LongestPeak, Case01)
    {
        std::vector<int> array = {1, 2, 3, 3, 4, 0, 10, 6, 5, -1, -3, 2, 3};
        const auto expected = 6;
        const auto output = algoExpert::arrays::longestPeak(array);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestPeak, Case02)
    {
        std::vector<int> array = {};
        const auto expected = 0;
        const auto output = algoExpert::arrays::longestPeak(array);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestPeak, Case03)
    {
        std::vector<int> array = {1, 3, 2};
        const auto expected = 3;
        const auto output = algoExpert::arrays::longestPeak(array);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestPeak, Case04)
    {
        std::vector<int> array = {1, 2, 3, 4, 5, 1};
        const auto expected = 6;
        const auto output = algoExpert::arrays::longestPeak(array);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestPeak, Case05)
    {
        std::vector<int> array = {5, 4, 3, 2, 1, 2, 1};
        const auto expected = 3;
        const auto output = algoExpert::arrays::longestPeak(array);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestPeak, Case06)
    {
        std::vector<int> array = {5, 4, 3, 2, 1, 2, 10, 12, -3, 5, 6, 7, 10};
        const auto expected = 5;
        const auto output = algoExpert::arrays::longestPeak(array);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestPeak, Case07)
    {
        std::vector<int> array = {5, 4, 3, 2, 1, 2, 10, 12};
        const auto expected = 0;
        const auto output = algoExpert::arrays::longestPeak(array);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestPeak, Case08)
    {
        std::vector<int> array = {1, 2, 3, 4, 5, 6, 10, 100, 1000};
        const auto expected = 0;
        const auto output = algoExpert::arrays::longestPeak(array);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestPeak, Case09)
    {
        std::vector<int> array = {1, 2, 3, 3, 2, 1};
        const auto expected = 0;
        const auto output = algoExpert::arrays::longestPeak(array);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestPeak, Case10)
    {
        std::vector<int> array = {1, 1, 3, 2, 1};
        const auto expected = 4;
        const auto output = algoExpert::arrays::longestPeak(array);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestPeak, Case11)
    {
        std::vector<int> array = {1, 2, 3, 2, 1, 1};
        const auto expected = 5;
        const auto output = algoExpert::arrays::longestPeak(array);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestPeak, Case12)
    {
        std::vector<int> array = {1, 1, 1, 2, 3, 10, 12, -3, -3, 2, 3, 45, 800, 99, 98, 0, -1, -1, 2, 3, 4, 5, 0, -1, -1};
        const auto expected = 9;
        const auto output = algoExpert::arrays::longestPeak(array);
        EXPECT_EQ(expected, output);
    }
    TEST(LongestPeak, Case13)
    {
        std::vector<int> array = {1, 2, 3, 3, 4, 0, 10};
        const auto expected = 3;
        const auto output = algoExpert::arrays::longestPeak(array);
        EXPECT_EQ(expected, output);
    }
}

