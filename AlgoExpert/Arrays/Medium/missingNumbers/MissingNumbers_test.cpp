#include "MissingNumbers.h"
#include "gtest/gtest.h"

namespace
{
    TEST(MissingNumbers, Case01)
    {
        std::vector<int> nums = {};
        const std::vector<int> expected = {1, 2};
        const auto output = algoExpert::arrays::missingNumbers(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(MissingNumbers, Case02)
    {
        std::vector<int> nums = {1};
        const std::vector<int> expected = {2, 3};
        const auto output = algoExpert::arrays::missingNumbers(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(MissingNumbers, Case03)
    {
        std::vector<int> nums = {2};
        const std::vector<int> expected = {1, 3};
        const auto output = algoExpert::arrays::missingNumbers(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(MissingNumbers, Case04)
    {
        std::vector<int> nums = {3};
        const std::vector<int> expected = {1, 2};
        const auto output = algoExpert::arrays::missingNumbers(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(MissingNumbers, Case05)
    {
        std::vector<int> nums = {1, 3};
        const std::vector<int> expected = {2, 4};
        const auto output = algoExpert::arrays::missingNumbers(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(MissingNumbers, Case06)
    {
        std::vector<int> nums = {3, 1};
        const std::vector<int> expected = {2, 4};
        const auto output = algoExpert::arrays::missingNumbers(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(MissingNumbers, Case07)
    {
        std::vector<int> nums = {1, 2, 3};
        const std::vector<int> expected = {4, 5};
        const auto output = algoExpert::arrays::missingNumbers(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(MissingNumbers, Case08)
    {
        std::vector<int> nums = {3, 2, 1};
        const std::vector<int> expected = {4, 5};
        const auto output = algoExpert::arrays::missingNumbers(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(MissingNumbers, Case09)
    {
        std::vector<int> nums = {3, 1, 2};
        const std::vector<int> expected = {4, 5};
        const auto output = algoExpert::arrays::missingNumbers(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(MissingNumbers, Case10)
    {
        std::vector<int> nums = {3, 4, 5};
        const std::vector<int> expected = {1, 2};
        const auto output = algoExpert::arrays::missingNumbers(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(MissingNumbers, Case11)
    {
        std::vector<int> nums = {4, 5, 3};
        const std::vector<int> expected = {1, 2};
        const auto output = algoExpert::arrays::missingNumbers(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(MissingNumbers, Case12)
    {
        std::vector<int> nums = {1, 3, 4, 5};
        const std::vector<int> expected = {2, 6};
        const auto output = algoExpert::arrays::missingNumbers(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(MissingNumbers, Case13)
    {
        std::vector<int> nums = {4, 5, 1, 3};
        const std::vector<int> expected = {2, 6};
        const auto output = algoExpert::arrays::missingNumbers(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(MissingNumbers, Case14)
    {
        std::vector<int> nums = {1, 2, 4, 5, 7};
        const std::vector<int> expected = {3, 6};
        const auto output = algoExpert::arrays::missingNumbers(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(MissingNumbers, Case15)
    {
        std::vector<int> nums = {1, 2, 7, 5, 4};
        const std::vector<int> expected = {3, 6};
        const auto output = algoExpert::arrays::missingNumbers(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(MissingNumbers, Case16)
    {
        std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
        const std::vector<int> expected = {8, 9};
        const auto output = algoExpert::arrays::missingNumbers(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(MissingNumbers, Case17)
    {
        std::vector<int> nums = {7, 6, 5, 4, 3, 2, 1};
        const std::vector<int> expected = {8, 9};
        const auto output = algoExpert::arrays::missingNumbers(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(MissingNumbers, Case18)
    {
        std::vector<int> nums = {3, 5, 1, 2, 4, 7, 6};
        const std::vector<int> expected = {8, 9};
        const auto output = algoExpert::arrays::missingNumbers(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(MissingNumbers, Case19)
    {
        std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15, 16, 17, 18, 20, 21, 22};
        const std::vector<int> expected = {14, 19};
        const auto output = algoExpert::arrays::missingNumbers(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(MissingNumbers, Case20)
    {
        std::vector<int> nums = {3, 5, 7, 8, 1, 10, 11, 2, 4, 13, 17, 22, 18, 21, 16, 20, 6, 9, 15, 12};
        const std::vector<int> expected = {14, 19};
        const auto output = algoExpert::arrays::missingNumbers(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(MissingNumbers, Case21)
    {
        std::vector<int> nums = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22};
        const std::vector<int> expected = {1, 2};
        const auto output = algoExpert::arrays::missingNumbers(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(MissingNumbers, Case22)
    {
        std::vector<int> nums = {14, 15, 16, 17, 18, 19, 20, 21, 22, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
        const std::vector<int> expected = {1, 2};
        const auto output = algoExpert::arrays::missingNumbers(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(MissingNumbers, Case23)
    {
        std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22};
        const std::vector<int> expected = {23, 24};
        const auto output = algoExpert::arrays::missingNumbers(nums);
        EXPECT_EQ(expected, output);
    }
    TEST(MissingNumbers, Case24)
    {
        std::vector<int> nums = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        const std::vector<int> expected = {23, 24};
        const auto output = algoExpert::arrays::missingNumbers(nums);
        EXPECT_EQ(expected, output);
    }
}
