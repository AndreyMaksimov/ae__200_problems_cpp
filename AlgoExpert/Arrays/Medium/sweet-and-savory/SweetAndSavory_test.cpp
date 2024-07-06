#include "SweetAndSavory.h"
#include "gtest/gtest.h"

namespace
{
    TEST(SweetAndSavory, Case01)
    {
        std::vector<int> dishes = {};
        int target = 10;
        const std::vector<int> expected = {0, 0};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case02)
    {
        std::vector<int> dishes = {4};
        int target = 10;
        const std::vector<int> expected = {0, 0};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case03)
    {
        std::vector<int> dishes = {-5, 10};
        int target = 4;
        const std::vector<int> expected = {0, 0};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case04)
    {
        std::vector<int> dishes = {};
        int target = -10;
        const std::vector<int> expected = {0, 0};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case05)
    {
        std::vector<int> dishes = {4};
        int target = -10;
        const std::vector<int> expected = {0, 0};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case06)
    {
        std::vector<int> dishes = {-5, 10};
        int target = -4;
        const std::vector<int> expected = {0, 0};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case07)
    {
        std::vector<int> dishes = {5, -10};
        int target = -4;
        const std::vector<int> expected = {-10, 5};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case08)
    {
        std::vector<int> dishes = {-5, 10};
        int target = 5;
        const std::vector<int> expected = {-5, 10};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case09)
    {
        std::vector<int> dishes = {-5, 10};
        int target = 0;
        const std::vector<int> expected = {0, 0};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case10)
    {
        std::vector<int> dishes = {5, -10};
        int target = 0;
        const std::vector<int> expected = {-10, 5};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case11)
    {
        std::vector<int> dishes = {10, -5};
        int target = 5;
        const std::vector<int> expected = {-5, 10};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case12)
    {
        std::vector<int> dishes = {10, -5};
        int target = 100;
        const std::vector<int> expected = {-5, 10};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case13)
    {
        std::vector<int> dishes = {5, -5, 5, -5, 5, -5};
        int target = 10;
        const std::vector<int> expected = {-5, 5};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case14)
    {
        std::vector<int> dishes = {5, -5, 5, -5, 5, -5};
        int target = 0;
        const std::vector<int> expected = {-5, 5};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case15)
    {
        std::vector<int> dishes = {3, 5, 7, 2, 6, 8, 1};
        int target = 10;
        const std::vector<int> expected = {0, 0};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case16)
    {
        std::vector<int> dishes = {-3, -5, 1, 7};
        int target = 8;
        const std::vector<int> expected = {-3, 7};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case17)
    {
        std::vector<int> dishes = {-3, -5, 1, 7};
        int target = 0;
        const std::vector<int> expected = {-3, 1};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case18)
    {
        std::vector<int> dishes = {2, 5, -4, -7, 12, 100, -25};
        int target = -5;
        const std::vector<int> expected = {-7, 2};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case19)
    {
        std::vector<int> dishes = {2, 5, -4, -7, 12, 100, -25};
        int target = -7;
        const std::vector<int> expected = {-25, 12};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case20)
    {
        std::vector<int> dishes = {2, 4, -4, -7, 12, 100, -25};
        int target = -1;
        const std::vector<int> expected = {-4, 2};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case21)
    {
        std::vector<int> dishes = {2, 5, -4, -7, 12, 100, -25};
        int target = -20;
        const std::vector<int> expected = {-25, 5};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case22)
    {
        std::vector<int> dishes = {2, 5, -4, -7, 12, 100, -25};
        int target = 5;
        const std::vector<int> expected = {-7, 12};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case23)
    {
        std::vector<int> dishes = {2, 5, -4, -7, 12, 100, -25};
        int target = 7;
        const std::vector<int> expected = {-7, 12};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case24)
    {
        std::vector<int> dishes = {2, 5, -4, -7, 12, 100, -25};
        int target = 1;
        const std::vector<int> expected = {-4, 5};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case25)
    {
        std::vector<int> dishes = {2, 5, -4, -7, 12, 100, -25};
        int target = 20;
        const std::vector<int> expected = {-4, 12};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case26)
    {
        std::vector<int> dishes = {-5, -4, -3, -2, -1, 1, 2, 3, 4, 5};
        int target = 6;
        const std::vector<int> expected = {-1, 5};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case27)
    {
        std::vector<int> dishes = {-5, -4, -3, -2, -1, 1, 2, 3, 4, 5};
        int target = -6;
        const std::vector<int> expected = {0, 0};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case28)
    {
        std::vector<int> dishes = {17, 37, 12, -102, 53, 49, -90, 102, 49, 16, 52};
        int target = 12;
        const std::vector<int> expected = {-90, 102};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case29)
    {
        std::vector<int> dishes = {17, 37, 12, -102, 53, 49, -90, 102, 49, 16, 52};
        int target = 11;
        const std::vector<int> expected = {-102, 102};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case30)
    {
        std::vector<int> dishes = {17, 37, 12, -102, 53, 49, -90, 102, 49, 16, 52};
        int target = -100;
        const std::vector<int> expected = {0, 0};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case31)
    {
        std::vector<int> dishes = {17, 37, 12, -102, 53, 49, -90, 102, 49, 16, 52};
        int target = -28;
        const std::vector<int> expected = {-90, 53};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case32)
    {
        std::vector<int> dishes = {-12, 13, 100, -53, 540, -538, 53, 76, 32, -63};
        int target = 0;
        const std::vector<int> expected = {-53, 53};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case33)
    {
        std::vector<int> dishes = {-12, 13, 100, -53, 540, -538, 53, 76, 32, -63};
        int target = -34;
        const std::vector<int> expected = {-53, 13};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case34)
    {
        std::vector<int> dishes = {-12, 13, 100, -53, 540, -538, 53, 76, 32, -63};
        int target = -15;
        const std::vector<int> expected = {-53, 32};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
    TEST(SweetAndSavory, Case35)
    {
        std::vector<int> dishes = {-12, 13, 100, -53, 540, -538, 53, 76, 32, -63};
        int target = 42;
        const std::vector<int> expected = {-12, 53};
        const auto output = algoExpert::arrays::sweetAndSavory(dishes, target);
        EXPECT_EQ(expected, output);
    }
}
