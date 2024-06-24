#include "SortedSquaredArray.h"
#include "gtest/gtest.h"

namespace
{
    TEST(sortedSquaredArray, Case01)
    {
        const std::vector<int> array = {1, 2, 3, 5, 6, 8, 9};
        const std::vector<int> expected = {1, 4, 9, 25, 36, 64, 81};
        const auto result = algoExpert::arrays::sortedSquaredArray(array);
        EXPECT_EQ(expected, result);
    }
    TEST(sortedSquaredArray, Case02)
    {
        const std::vector<int> array = {1};
        const std::vector<int> expected = {1};
        const auto result = algoExpert::arrays::sortedSquaredArray(array);
        EXPECT_EQ(expected, result);
    }
    TEST(sortedSquaredArray, Case03)
    {
        const std::vector<int> array = {1, 2};
        const std::vector<int> expected = {1, 4};
        const auto result = algoExpert::arrays::sortedSquaredArray(array);
        EXPECT_EQ(expected, result);
    }
    TEST(sortedSquaredArray, Case04)
    {
        const std::vector<int> array = {1, 2, 3, 4, 5};
        const std::vector<int> expected = {1, 4, 9, 16, 25};
        const auto result = algoExpert::arrays::sortedSquaredArray(array);
        EXPECT_EQ(expected, result);
    }
    TEST(sortedSquaredArray, Case05)
    {
        const std::vector<int> array = {0};
        const std::vector<int> expected = {0};
        const auto result = algoExpert::arrays::sortedSquaredArray(array);
        EXPECT_EQ(expected, result);
    }
    TEST(sortedSquaredArray, Case06)
    {
        const std::vector<int> array = {10};
        const std::vector<int> expected = {100};
        const auto result = algoExpert::arrays::sortedSquaredArray(array);
        EXPECT_EQ(expected, result);
    }
    TEST(sortedSquaredArray, Case07)
    {
        const std::vector<int> array = {-1};
        const std::vector<int> expected = {1};
        const auto result = algoExpert::arrays::sortedSquaredArray(array);
        EXPECT_EQ(expected, result);
    }
    TEST(sortedSquaredArray, Case08)
    {
        const std::vector<int> array = {-2, -1};
        const std::vector<int> expected = {1, 4};
        const auto result = algoExpert::arrays::sortedSquaredArray(array);
        EXPECT_EQ(expected, result);
    }
    TEST(sortedSquaredArray, Case09)
    {
        const std::vector<int> array = {-5, -4, -3, -2, -1};
        const std::vector<int> expected = {1, 4, 9, 16, 25};
        const auto result = algoExpert::arrays::sortedSquaredArray(array);
        EXPECT_EQ(expected, result);
    }
    TEST(sortedSquaredArray, Case10)
    {
        const std::vector<int> array = {-10};
        const std::vector<int> expected = {100};
        const auto result = algoExpert::arrays::sortedSquaredArray(array);
        EXPECT_EQ(expected, result);
    }
    TEST(sortedSquaredArray, Case11)
    {
        const std::vector<int> array = {-10, -5, 0, 5, 10};
        const std::vector<int> expected = {0, 25, 25, 100, 100};
        const auto result = algoExpert::arrays::sortedSquaredArray(array);
        EXPECT_EQ(expected, result);
    }
    TEST(sortedSquaredArray, Case12)
    {
        const std::vector<int> array = {-7, -3, 1, 9, 22, 30};
        const std::vector<int> expected = {1, 9, 49, 81, 484, 900};
        const auto result = algoExpert::arrays::sortedSquaredArray(array);
        EXPECT_EQ(expected, result);
    }
    TEST(sortedSquaredArray, Case13)
    {
        const std::vector<int> array = {-50, -13, -2, -1, 0, 0, 1, 1, 2, 3, 19, 20};
        const std::vector<int> expected = {0, 0, 1, 1, 1, 4, 4, 9, 169, 361, 400, 2500};
        const auto result = algoExpert::arrays::sortedSquaredArray(array);
        EXPECT_EQ(expected, result);
    }
    TEST(sortedSquaredArray, Case14)
    {
        const std::vector<int> array = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        const std::vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        const auto result = algoExpert::arrays::sortedSquaredArray(array);
        EXPECT_EQ(expected, result);
    }
    TEST(sortedSquaredArray, Case15)
    {
        const std::vector<int> array = {-1, -1, 2, 3, 3, 3, 4};
        const std::vector<int> expected = {1, 1, 4, 9, 9, 9, 16};
        const auto result = algoExpert::arrays::sortedSquaredArray(array);
        EXPECT_EQ(expected, result);
    }
    TEST(sortedSquaredArray, Case16)
    {
        const std::vector<int> array = {-3, -2, -1};
        const std::vector<int> expected = {1, 4, 9};
        const auto result = algoExpert::arrays::sortedSquaredArray(array);
        EXPECT_EQ(expected, result);
    }
    TEST(sortedSquaredArray, Case17)
    {
        const std::vector<int> array = {-3, -2, -1};
        const std::vector<int> expected = {1, 4, 9};
        const auto result = algoExpert::arrays::sortedSquaredArray(array);
        EXPECT_EQ(expected, result);
    }
}
