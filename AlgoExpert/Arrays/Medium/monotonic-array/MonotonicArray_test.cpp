#include "MonotonicArray.h"
#include "gtest/gtest.h"

namespace
{
    TEST(MonotonicArray, Case01)
    {
        const std::vector<int> array = {-1, -5, -10, -1100, -1100, -1101, -1102, -9001};
        const auto expected = true;
        const auto result = algoExpert::arrays::isMonotonic(array);
        EXPECT_EQ(expected, result);
    }
    TEST(MonotonicArray, Case02)
    {
        const std::vector<int> array = {};
        const auto expected = true;
        const auto result = algoExpert::arrays::isMonotonic(array);
        EXPECT_EQ(expected, result);
    }
    TEST(MonotonicArray, Case03)
    {
        const std::vector<int> array = {1};
        const auto expected = true;
        const auto result = algoExpert::arrays::isMonotonic(array);
        EXPECT_EQ(expected, result);
    }
    TEST(MonotonicArray, Case04)
    {
        const std::vector<int> array = {1, 2};
        const auto expected = true;
        const auto result = algoExpert::arrays::isMonotonic(array);
        EXPECT_EQ(expected, result);
    }
    TEST(MonotonicArray, Case05)
    {
        const std::vector<int> array = {2, 1};
        const auto expected = true;
        const auto result = algoExpert::arrays::isMonotonic(array);
        EXPECT_EQ(expected, result);
    }
    TEST(MonotonicArray, Case06)
    {
        const std::vector<int> array = {1, 5, 10, 1100, 1101, 1102, 9001};
        const auto expected = true;
        const auto result = algoExpert::arrays::isMonotonic(array);
        EXPECT_EQ(expected, result);
    }
    TEST(MonotonicArray, Case07)
    {
        const std::vector<int> array = {-1, -5, -10, -1100, -1101, -1102, -9001};
        const auto expected = true;
        const auto result = algoExpert::arrays::isMonotonic(array);
        EXPECT_EQ(expected, result);
    }
    TEST(MonotonicArray, Case08)
    {
        const std::vector<int> array = {-1, -5, -10, -1100, -900, -1101, -1102, -9001};
        const auto expected = false;
        const auto result = algoExpert::arrays::isMonotonic(array);
        EXPECT_EQ(expected, result);
    }
    TEST(MonotonicArray, Case09)
    {
        const std::vector<int> array = {1, 2, 0};
        const auto expected = false;
        const auto result = algoExpert::arrays::isMonotonic(array);
        EXPECT_EQ(expected, result);
    }
    TEST(MonotonicArray, Case10)
    {
        const std::vector<int> array = {1, 1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 7, 9, 10, 11};
        const auto expected = false;
        const auto result = algoExpert::arrays::isMonotonic(array);
        EXPECT_EQ(expected, result);
    }
    TEST(MonotonicArray, Case11)
    {
        const std::vector<int> array = {1, 1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 8, 9, 10, 11};
        const auto expected = true;
        const auto result = algoExpert::arrays::isMonotonic(array);
        EXPECT_EQ(expected, result);
    }
    TEST(MonotonicArray, Case12)
    {
        const std::vector<int> array = {-1, -1, -2, -3, -4, -5, -5, -5, -6, -7, -8, -7, -9, -10, -11};
        const auto expected = false;
        const auto result = algoExpert::arrays::isMonotonic(array);
        EXPECT_EQ(expected, result);
    }
    TEST(MonotonicArray, Case13)
    {
        const std::vector<int> array = {-1, -1, -2, -3, -4, -5, -5, -5, -6, -7, -8, -8, -9, -10, -11};
        const auto expected = true;
        const auto result = algoExpert::arrays::isMonotonic(array);
        EXPECT_EQ(expected, result);
    }
    TEST(MonotonicArray, Case14)
    {
        const std::vector<int> array = {-1, -1, -1, -1, -1, -1, -1, -1};
        const auto expected = true;
        const auto result = algoExpert::arrays::isMonotonic(array);
        EXPECT_EQ(expected, result);
    }
    TEST(MonotonicArray, Case15)
    {
        const std::vector<int> array = {1, 2, -1, -2, -5};
        const auto expected = false;
        const auto result = algoExpert::arrays::isMonotonic(array);
        EXPECT_EQ(expected, result);
    }
    TEST(MonotonicArray, Case16)
    {
        const std::vector<int> array = {-1, -5, 10};
        const auto expected = false;
        const auto result = algoExpert::arrays::isMonotonic(array);
        EXPECT_EQ(expected, result);
    }
    TEST(MonotonicArray, Case17)
    {
        const std::vector<int> array = {2, 2, 2, 1, 4, 5};
        const auto expected = false;
        const auto result = algoExpert::arrays::isMonotonic(array);
        EXPECT_EQ(expected, result);
    }
    TEST(MonotonicArray, Case18)
    {
        const std::vector<int> array = {1, 1, 1, 2, 3, 4, 1};
        const auto expected = false;
        const auto result = algoExpert::arrays::isMonotonic(array);
        EXPECT_EQ(expected, result);
    }
    TEST(MonotonicArray, Case19)
    {
        const std::vector<int> array = {1, 2, 3, 3, 2, 1};
        const auto expected = false;
        const auto result = algoExpert::arrays::isMonotonic(array);
        EXPECT_EQ(expected, result);
    }
}
