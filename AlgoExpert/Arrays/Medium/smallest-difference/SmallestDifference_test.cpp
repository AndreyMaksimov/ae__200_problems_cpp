#include "SmallestDifference.h"
#include "gtest/gtest.h"

namespace
{
    TEST(smallestDifference, Case01)
    {
        const std::vector<int> arrayOne = {-1, 5, 10, 20, 28, 3};
        const std::vector<int> arrayTwo = {26, 134, 135, 15, 17};
        const std::vector<int> expected = {28, 26};
        const auto result = algoExpert::arrays::smallestDifference(arrayOne, arrayTwo);
        EXPECT_EQ(expected, result);
    }
    TEST(smallestDifference, Case02)
    {
        const std::vector<int> arrayOne = {-1, 5, 10, 20, 3};
        const std::vector<int> arrayTwo = {26, 134, 135, 15, 17};
        const std::vector<int> expected = {20, 17};
        const auto result = algoExpert::arrays::smallestDifference(arrayOne, arrayTwo);
        EXPECT_EQ(expected, result);
    }
    TEST(smallestDifference, Case03)
    {
        const std::vector<int> arrayOne = {10, 0, 20, 25};
        const std::vector<int> arrayTwo = {1005, 1006, 1014, 1032, 1031};
        const std::vector<int> expected = {25, 1005};
        const auto result = algoExpert::arrays::smallestDifference(arrayOne, arrayTwo);
        EXPECT_EQ(expected, result);
    }
    TEST(smallestDifference, Case04)
    {
        const std::vector<int> arrayOne = {10, 0, 20, 25, 2200};
        const std::vector<int> arrayTwo = {1005, 1006, 1014, 1032, 1031};
        const std::vector<int> expected = {25, 1005};
        const auto result = algoExpert::arrays::smallestDifference(arrayOne, arrayTwo);
        EXPECT_EQ(expected, result);
    }
    TEST(smallestDifference, Case05)
    {
        const std::vector<int> arrayOne = {10, 0, 20, 25, 2000};
        const std::vector<int> arrayTwo = {1005, 1006, 1014, 1032, 1031};
        const std::vector<int> expected = {2000, 1032};
        const auto result = algoExpert::arrays::smallestDifference(arrayOne, arrayTwo);
        EXPECT_EQ(expected, result);
    }
    TEST(smallestDifference, Case06)
    {
        const std::vector<int> arrayOne = {240, 124, 86, 111, 2, 84, 954, 27, 89};
        const std::vector<int> arrayTwo = {1, 3, 954, 19, 8};
        const std::vector<int> expected = {954, 954};
        const auto result = algoExpert::arrays::smallestDifference(arrayOne, arrayTwo);
        EXPECT_EQ(expected, result);
    }
    TEST(smallestDifference, Case07)
    {
        const std::vector<int> arrayOne = {0, 20};
        const std::vector<int> arrayTwo = {21, -2};
        const std::vector<int> expected = {20, 21};
        const auto result = algoExpert::arrays::smallestDifference(arrayOne, arrayTwo);
        EXPECT_EQ(expected, result);
    }
    TEST(smallestDifference, Case08)
    {
        const std::vector<int> arrayOne = {10, 1000};
        const std::vector<int> arrayTwo = {-1441, -124, -25, 1014, 1500, 660, 410, 245, 530};
        const std::vector<int> expected = {1000, 1014};
        const auto result = algoExpert::arrays::smallestDifference(arrayOne, arrayTwo);
        EXPECT_EQ(expected, result);
    }
    TEST(smallestDifference, Case09)
    {
        const std::vector<int> arrayOne = {10, 1000, 9124, 2142, 59, 24, 596, 591, 124, -123};
        const std::vector<int> arrayTwo = {-1441, -124, -25, 1014, 1500, 660, 410, 245, 530};
        const std::vector<int> expected = {-123, -124};
        const auto result = algoExpert::arrays::smallestDifference(arrayOne, arrayTwo);
        EXPECT_EQ(expected, result);
    }
    TEST(smallestDifference, Case10)
    {
        const std::vector<int> arrayOne = {10, 1000, 9124, 2142, 59, 24, 596, 591, 124, -123, 530};
        const std::vector<int> arrayTwo = {-1441, -124, -25, 1014, 1500, 660, 410, 245, 530};
        const std::vector<int> expected = {530, 530};
        const auto result = algoExpert::arrays::smallestDifference(arrayOne, arrayTwo);
        EXPECT_EQ(expected, result);
    }
}
