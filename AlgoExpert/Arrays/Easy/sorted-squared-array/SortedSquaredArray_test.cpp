#include "SortedSquaredArray.h"
#include "gtest/gtest.h"

namespace {
    TEST(SortedSquaredArray, Case01)
    {
        const std::vector<int> array = {1, 2, 3, 5, 6, 8, 9};
        const std::vector<int> expected = {1, 4, 9, 25, 36, 64, 81};
        const std::vector<int> output = algoExpert::arrays::sortedSquaredArray(array);
        EXPECT_EQ(expected, output);
    }
    TEST(SortedSquaredArray, Case12)
    {
        const std::vector<int> array = {-7, -3, 1, 9, 22, 30};
        const std::vector<int> expected = {1, 9, 49, 81, 484, 900};
        const std::vector<int> output = algoExpert::arrays::sortedSquaredArray(array);
        EXPECT_EQ(expected, output);
    }
}
