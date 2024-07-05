#include "MajorityElement.h"
#include "gtest/gtest.h"

namespace
{
    TEST(MajorityElement, Case01)
    {
        std::vector<int> array = {2};
        const auto expected = 2;
        const auto output = algoExpert::arrays::majorityElement(array);
        EXPECT_EQ(expected, output);
    }
    TEST(MajorityElement, Case02)
    {
        std::vector<int> array = {1, 2, 1};
        const auto expected = 1;
        const auto output = algoExpert::arrays::majorityElement(array);
        EXPECT_EQ(expected, output);
    }
    TEST(MajorityElement, Case03)
    {
        std::vector<int> array = {3, 3, 1};
        const auto expected = 3;
        const auto output = algoExpert::arrays::majorityElement(array);
        EXPECT_EQ(expected, output);
    }
    TEST(MajorityElement, Case04)
    {
        std::vector<int> array = {4, 5, 5};
        const auto expected = 5;
        const auto output = algoExpert::arrays::majorityElement(array);
        EXPECT_EQ(expected, output);
    }
    TEST(MajorityElement, Case05)
    {
        std::vector<int> array = {1, 2, 3, 2, 2, 1, 2};
        const auto expected = 2;
        const auto output = algoExpert::arrays::majorityElement(array);
        EXPECT_EQ(expected, output);
    }
    TEST(MajorityElement, Case06)
    {
        std::vector<int> array = {1, 2, 3, 2, 3, 2, 2, 4, 2};
        const auto expected = 2;
        const auto output = algoExpert::arrays::majorityElement(array);
        EXPECT_EQ(expected, output);
    }
    TEST(MajorityElement, Case07)
    {
        std::vector<int> array = {1, 1, 1, 1, 1, 1, 1};
        const auto expected = 1;
        const auto output = algoExpert::arrays::majorityElement(array);
        EXPECT_EQ(expected, output);
    }
    TEST(MajorityElement, Case08)
    {
        std::vector<int> array = {5, 4, 3, 2, 1, 1, 1, 1, 1};
        const auto expected = 1;
        const auto output = algoExpert::arrays::majorityElement(array);
        EXPECT_EQ(expected, output);
    }
    TEST(MajorityElement, Case09)
    {
        std::vector<int> array = {1, 1, 1, 1, 1, 5, 4, 3, 2};
        const auto expected = 1;
        const auto output = algoExpert::arrays::majorityElement(array);
        EXPECT_EQ(expected, output);
    }
    TEST(MajorityElement, Case10)
    {
        std::vector<int> array = {1, 1, 1, 1, 2, 2, 2, 2, 2};
        const auto expected = 2;
        const auto output = algoExpert::arrays::majorityElement(array);
        EXPECT_EQ(expected, output);
    }
    TEST(MajorityElement, Case11)
    {
        std::vector<int> array = {435, 6543, 6543, 435, 535, 6543, 6543, 12, 43, 6543, 6543};
        const auto expected = 6543;
        const auto output = algoExpert::arrays::majorityElement(array);
        EXPECT_EQ(expected, output);
    }
    TEST(MajorityElement, Case12)
    {
        std::vector<int> array = {1, 2, 2, 2, 1};
        const auto expected = 2;
        const auto output = algoExpert::arrays::majorityElement(array);
        EXPECT_EQ(expected, output);
    }
    TEST(MajorityElement, Case13)
    {
        std::vector<int> array = {1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 3, 2, 1};
        const auto expected = 4;
        const auto output = algoExpert::arrays::majorityElement(array);
        EXPECT_EQ(expected, output);
    }
    TEST(MajorityElement, Case14)
    {
        std::vector<int> array = {1, 2, 3, 2, 2, 4, 2, 2, 5, 2, 1};
        const auto expected = 2;
        const auto output = algoExpert::arrays::majorityElement(array);
        EXPECT_EQ(expected, output);
    }
}
