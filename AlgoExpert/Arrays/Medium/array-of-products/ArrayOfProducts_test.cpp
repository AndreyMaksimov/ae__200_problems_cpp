#include "ArrayOfProducts.h"
#include "gtest/gtest.h"

namespace
{
    TEST(ArrayOfProducts, Case01)
    {
        std::vector<int> array = {5, 1, 4, 2};
        const std::vector<int> expected = {8, 40, 10, 20};
        const auto output = algoExpert::arrays::arrayOfProducts(array);
        EXPECT_EQ(expected, output);
    }
    TEST(ArrayOfProducts, Case02)
    {
        std::vector<int> array = {1, 8, 6, 2, 4};
        const std::vector<int> expected = {384, 48, 64, 192, 96};
        const auto output = algoExpert::arrays::arrayOfProducts(array);
        EXPECT_EQ(expected, output);
    }
    TEST(ArrayOfProducts, Case03)
    {
        std::vector<int> array = {-5, 2, -4, 14, -6};
        const std::vector<int> expected = {672, -1680, 840, -240, 560};
        const auto output = algoExpert::arrays::arrayOfProducts(array);
        EXPECT_EQ(expected, output);
    }
    TEST(ArrayOfProducts, Case04)
    {
        std::vector<int> array = {9, 3, 2, 1, 9, 5, 3, 2};
        const std::vector<int> expected = {1620, 4860, 7290, 14580, 1620, 2916, 4860, 7290};
        const auto output = algoExpert::arrays::arrayOfProducts(array);
        EXPECT_EQ(expected, output);
    }
    TEST(ArrayOfProducts, Case05)
    {
        std::vector<int> array = {4, 4};
        const std::vector<int> expected = {4, 4};
        const auto output = algoExpert::arrays::arrayOfProducts(array);
        EXPECT_EQ(expected, output);
    }
    TEST(ArrayOfProducts, Case06)
    {
        std::vector<int> array = {0, 0, 0, 0};
        const std::vector<int> expected = {0, 0, 0, 0};
        const auto output = algoExpert::arrays::arrayOfProducts(array);
        EXPECT_EQ(expected, output);
    }
    TEST(ArrayOfProducts, Case07)
    {
        std::vector<int> array = {1, 1, 1, 1};
        const std::vector<int> expected = {1, 1, 1, 1};
        const auto output = algoExpert::arrays::arrayOfProducts(array);
        EXPECT_EQ(expected, output);
    }
    TEST(ArrayOfProducts, Case08)
    {
        std::vector<int> array = {-1, -1, -1};
        const std::vector<int> expected = {1, 1, 1};
        const auto output = algoExpert::arrays::arrayOfProducts(array);
        EXPECT_EQ(expected, output);
    }
    TEST(ArrayOfProducts, Case09)
    {
        std::vector<int> array = {-1, -1, -1, -1};
        const std::vector<int> expected = {-1, -1, -1, -1};
        const auto output = algoExpert::arrays::arrayOfProducts(array);
        EXPECT_EQ(expected, output);
    }
    TEST(ArrayOfProducts, Case10)
    {
        std::vector<int> array = {0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        const std::vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        const auto output = algoExpert::arrays::arrayOfProducts(array);
        EXPECT_EQ(expected, output);
    }
    TEST(ArrayOfProducts, Case11)
    {
        std::vector<int> array = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        const std::vector<int> expected = {362880, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        const auto output = algoExpert::arrays::arrayOfProducts(array);
        EXPECT_EQ(expected, output);
    }
}
