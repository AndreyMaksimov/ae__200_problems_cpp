#include "LargestRange.h"
#include "gtest/gtest.h"

namespace
{
    TEST(LargestRange, Case01)
    {
        std::vector<int> array = {1, 11, 3, 0, 15, 5, 2, 4, 10, 7, 12, 6};
        const std::vector<int> expected = {0, 7};
        const auto output = algoExpert::arrays::largestRange(array);
        EXPECT_EQ(expected, output);
    }
    TEST(LargestRange, Case02)
    {
        std::vector<int> array = {1};
        const std::vector<int> expected = {1, 1};
        const auto output = algoExpert::arrays::largestRange(array);
        EXPECT_EQ(expected, output);
    }
    TEST(LargestRange, Case03)
    {
        std::vector<int> array = {1, 2};
        const std::vector<int> expected = {1, 2};
        const auto output = algoExpert::arrays::largestRange(array);
        EXPECT_EQ(expected, output);
    }
    TEST(LargestRange, Case04)
    {
        std::vector<int> array = {4, 2, 1, 3};
        const std::vector<int> expected = {1, 4};
        const auto output = algoExpert::arrays::largestRange(array);
        EXPECT_EQ(expected, output);
    }
    TEST(LargestRange, Case05)
    {
        std::vector<int> array = {4, 2, 1, 3, 6};
        const std::vector<int> expected = {1, 4};
        const auto output = algoExpert::arrays::largestRange(array);
        EXPECT_EQ(expected, output);
    }
    TEST(LargestRange, Case06)
    {
        std::vector<int> array = {8, 4, 2, 10, 3, 6, 7, 9, 1};
        const std::vector<int> expected = {6, 10};
        const auto output = algoExpert::arrays::largestRange(array);
        EXPECT_EQ(expected, output);
    }
    TEST(LargestRange, Case07)
    {
        std::vector<int> array = {19, -1, 18, 17, 2, 10, 3, 12, 5, 16, 4, 11, 8, 7, 6, 15, 12, 12, 2, 1, 6, 13, 14};
        const std::vector<int> expected = {10, 19};
        const auto output = algoExpert::arrays::largestRange(array);
        EXPECT_EQ(expected, output);
    }
    TEST(LargestRange, Case08)
    {
        std::vector<int> array = {0, 9, 19, -1, 18, 17, 2, 10, 3, 12, 5, 16, 4, 11, 8, 7, 6, 15, 12, 12, 2, 1, 6, 13, 14};
        const std::vector<int> expected = {-1, 19};
        const auto output = algoExpert::arrays::largestRange(array);
        EXPECT_EQ(expected, output);
    }
    TEST(LargestRange, Case09)
    {
        std::vector<int> array = {0, -5, 9, 19, -1, 18, 17, 2, -4, -3, 10, 3, 12, 5, 16, 4, 11, 7, -6, -7, 6, 15, 12, 12, 2, 1, 6, 13, 14, -2};
        const std::vector<int> expected = {-7, 7};
        const auto output = algoExpert::arrays::largestRange(array);
        EXPECT_EQ(expected, output);
    }
    TEST(LargestRange, Case10)
    {
        std::vector<int> array = {-7, -7, -7, -7, 8, -8, 0, 9, 19, -1, -3, 18, 17, 2, 10, 3, 12, 5, 16, 4, 11, -6, 8, 7, 6, 15, 12, 12, -5, 2, 1, 6, 13, 14, -4, -2};
        const std::vector<int> expected = {-8, 19};
        const auto output = algoExpert::arrays::largestRange(array);
        EXPECT_EQ(expected, output);
    }
    TEST(LargestRange, Case11)
    {
        std::vector<int> array = {1, 1, 1, 3, 4};
        const std::vector<int> expected = {3, 4};
        const auto output = algoExpert::arrays::largestRange(array);
        EXPECT_EQ(expected, output);
    }
    TEST(LargestRange, Case12)
    {
        std::vector<int> array = {-1, 0, 1};
        const std::vector<int> expected = {-1, 1};
        const auto output = algoExpert::arrays::largestRange(array);
        EXPECT_EQ(expected, output);
    }
    TEST(LargestRange, Case13)
    {
        std::vector<int> array = {10, 0, 1};
        const std::vector<int> expected = {0, 1};
        const auto output = algoExpert::arrays::largestRange(array);
        EXPECT_EQ(expected, output);
    }
}
