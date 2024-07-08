#include "SubarraySort.h"
#include "gtest/gtest.h"

namespace
{
    TEST(SubarraySort, Case01)
    {
        std::vector<int> array = {1, 2, 4, 7, 10, 11, 7, 12, 6, 7, 16, 18, 19};
        const std::vector<int> expected = {3, 9};
        const auto output = algoExpert::arrays::subarraySort(array);
        EXPECT_EQ(expected, output);
    }
    TEST(SubarraySort, Case02)
    {
        std::vector<int> array = {1, 2};
        const std::vector<int> expected = {-1, -1};
        const auto output = algoExpert::arrays::subarraySort(array);
        EXPECT_EQ(expected, output);
    }
    TEST(SubarraySort, Case03)
    {
        std::vector<int> array = {2, 1};
        const std::vector<int> expected = {0, 1};
        const auto output = algoExpert::arrays::subarraySort(array);
        EXPECT_EQ(expected, output);
    }
    TEST(SubarraySort, Case04)
    {
        std::vector<int> array = {1, 2, 4, 7, 10, 11, 7, 12, 7, 7, 16, 18, 19};
        const std::vector<int> expected = {4, 9};
        const auto output = algoExpert::arrays::subarraySort(array);
        EXPECT_EQ(expected, output);
    }
    TEST(SubarraySort, Case05)
    {
        std::vector<int> array = {1, 2, 4, 7, 10, 11, 7, 12, 13, 14, 16, 18, 19};
        const std::vector<int> expected = {4, 6};
        const auto output = algoExpert::arrays::subarraySort(array);
        EXPECT_EQ(expected, output);
    }
    TEST(SubarraySort, Case06)
    {
        std::vector<int> array = {1, 2, 8, 4, 5};
        const std::vector<int> expected = {2, 4};
        const auto output = algoExpert::arrays::subarraySort(array);
        EXPECT_EQ(expected, output);
    }
    TEST(SubarraySort, Case07)
    {
        std::vector<int> array = {4, 8, 7, 12, 11, 9, -1, 3, 9, 16, -15, 51, 7};
        const std::vector<int> expected = {0, 12};
        const auto output = algoExpert::arrays::subarraySort(array);
        EXPECT_EQ(expected, output);
    }
    TEST(SubarraySort, Case08)
    {
        std::vector<int> array = {4, 8, 7, 12, 11, 9, -1, 3, 9, 16, -15, 11, 57};
        const std::vector<int> expected = {0, 11};
        const auto output = algoExpert::arrays::subarraySort(array);
        EXPECT_EQ(expected, output);
    }
    TEST(SubarraySort, Case09)
    {
        std::vector<int> array = {-41, 8, 7, 12, 11, 9, -1, 3, 9, 16, -15, 11, 57};
        const std::vector<int> expected = {1, 11};
        const auto output = algoExpert::arrays::subarraySort(array);
        EXPECT_EQ(expected, output);
    }
    TEST(SubarraySort, Case10)
    {
        std::vector<int> array = {-41, 8, 7, 12, 11, 9, -1, 3, 9, 16, -15, 51, 7};
        const std::vector<int> expected = {1, 12};
        const auto output = algoExpert::arrays::subarraySort(array);
        EXPECT_EQ(expected, output);
    }
    TEST(SubarraySort, Case11)
    {
        std::vector<int> array = {1, 2, 3, 4, 5, 6, 8, 7, 9, 10, 11};
        const std::vector<int> expected = {6, 7};
        const auto output = algoExpert::arrays::subarraySort(array);
        EXPECT_EQ(expected, output);
    }
    TEST(SubarraySort, Case12)
    {
        std::vector<int> array = {1, 2, 3, 4, 5, 6, 18, 7, 9, 10, 11, 12, 13, 14, 15, 16, 17, 19};
        const std::vector<int> expected = {6, 16};
        const auto output = algoExpert::arrays::subarraySort(array);
        EXPECT_EQ(expected, output);
    }
    TEST(SubarraySort, Case13)
    {
        std::vector<int> array = {1, 2, 3, 4, 5, 6, 18, 21, 22, 7, 14, 9, 10, 11, 12, 13, 14, 15, 16, 17, 19, 4, 14, 11, 6, 33, 35, 41, 55};
        const std::vector<int> expected = {4, 24};
        const auto output = algoExpert::arrays::subarraySort(array);
        EXPECT_EQ(expected, output);
    }
    TEST(SubarraySort, Case14)
    {
        std::vector<int> array = {1, 2, 20, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
        const std::vector<int> expected = {2, 19};
        const auto output = algoExpert::arrays::subarraySort(array);
        EXPECT_EQ(expected, output);
    }
    TEST(SubarraySort, Case15)
    {
        std::vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 2};
        const std::vector<int> expected = {2, 19};
        const auto output = algoExpert::arrays::subarraySort(array);
        EXPECT_EQ(expected, output);
    }
    TEST(SubarraySort, Case16)
    {
        std::vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
        const std::vector<int> expected = {-1, -1};
        const auto output = algoExpert::arrays::subarraySort(array);
        EXPECT_EQ(expected, output);
    }
    TEST(SubarraySort, Case17)
    {
        std::vector<int> array = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
        const std::vector<int> expected = {-1, -1};
        const auto output = algoExpert::arrays::subarraySort(array);
        EXPECT_EQ(expected, output);
    }
}
