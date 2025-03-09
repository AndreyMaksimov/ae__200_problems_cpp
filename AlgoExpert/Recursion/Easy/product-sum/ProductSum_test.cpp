#include "ProductSum.h"
#include "gtest/gtest.h"
// #Copilot helped

namespace {
    using namespace algoExpert::recursion;
    TEST(ProductSumTest, TestCase1) {
        std::vector<std::any> array = {5, 2, std::vector<std::any>{7, -1}, 3, std::vector<std::any>{6, std::vector<std::any>{-13, 8}, 4}};
        EXPECT_EQ(productSum(array), 12);
    }

    TEST(ProductSumTest, TestCase2) {
        std::vector<std::any> array = {1, 2, 3, 4, 5};
        EXPECT_EQ(productSum(array), 15);
    }

    TEST(ProductSumTest, TestCase3) {
        std::vector<std::any> array = {1, 2, std::vector<std::any>{3}, 4, 5};
        EXPECT_EQ(productSum(array), 18);
    }

    TEST(ProductSumTest, TestCase4) {
        std::vector<std::any> array = {std::vector<std::any>{1, 2}, 3, std::vector<std::any>{4, 5}};
        EXPECT_EQ(productSum(array), 27);
    }

    TEST(ProductSumTest, TestCase5) {
        std::vector<std::any> array = {std::vector<std::any>{std::vector<std::any>{std::vector<std::any>{std::vector<std::any>{5}}}}};
        EXPECT_EQ(productSum(array), 600);
    }

    TEST(ProductSumTest, TestCase6) {
        std::vector<std::any> array = {9, std::vector<std::any>{2, -3, 4}, 1, std::vector<std::any>{1, 1, std::vector<std::any>{1, 1, 1}}, std::vector<std::any>{std::vector<std::any>{std::vector<std::any>{std::vector<std::any>{3, 4, 1}}}, 8}, std::vector<std::any>{1, 2, 3, 4, 5, std::vector<std::any>{6, 7}, -7}, std::vector<std::any>{1, std::vector<std::any>{2, 3, std::vector<std::any>{4, 5}}, std::vector<std::any>{6, 0, std::vector<std::any>{7, 0, -8}}, -7}, std::vector<std::any>{1, -3, 2, std::vector<std::any>{1, -3, 2, std::vector<std::any>{1, -3, 2}, std::vector<std::any>{1, -3, 2, std::vector<std::any>{1, -3, 2}}, std::vector<std::any>{1, -3, 2}}}, -3};
        EXPECT_EQ(productSum(array), 1351);
    }}
