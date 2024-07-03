#include "FirstDuplicateValue.h"
#include "gtest/gtest.h"

namespace
{
    TEST(FirstDuplicateValue, Case01)
    {
        std::vector<int> array = {2, 1, 5, 2, 3, 3, 4};
        const auto expected = 2;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case02)
    {
        std::vector<int> array = {2, 1, 5, 3, 3, 2, 4};
        const auto expected = 3;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case03)
    {
        std::vector<int> array = {1, 1, 2, 3, 3, 2, 2};
        const auto expected = 1;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case04)
    {
        std::vector<int> array = {3, 1, 3, 1, 1, 4, 4};
        const auto expected = 3;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case05)
    {
        std::vector<int> array = {};
        const auto expected = -1;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case06)
    {
        std::vector<int> array = {1};
        const auto expected = -1;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case07)
    {
        std::vector<int> array = {1, 1};
        const auto expected = 1;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case08)
    {
        std::vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10};
        const auto expected = 10;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case09)
    {
        std::vector<int> array = {2, 1, 1};
        const auto expected = 1;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case10)
    {
        std::vector<int> array = {2, 2, 2, 2, 2, 2, 2, 2, 2};
        const auto expected = 2;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case11)
    {
        std::vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        const auto expected = -1;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case12)
    {
        std::vector<int> array = {7, 6, 5, 3, 6, 4, 3, 5, 2};
        const auto expected = 6;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case13)
    {
        std::vector<int> array = {9, 13, 6, 2, 3, 5, 5, 5, 3, 2, 2, 2, 2, 4, 3};
        const auto expected = 5;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case14)
    {
        std::vector<int> array = {23, 21, 22, 5, 3, 13, 11, 16, 5, 11, 9, 14, 23, 3, 2, 2, 5, 11, 6, 11, 23, 8, 1};
        const auto expected = 5;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case15)
    {
        std::vector<int> array = {8, 20, 4, 12, 14, 9, 19, 17, 14, 20, 22, 9, 6, 15, 1, 15, 10, 9, 17, 7, 22, 17};
        const auto expected = 14;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case16)
    {
        std::vector<int> array = {3, 3, 2};
        const auto expected = 3;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case17)
    {
        std::vector<int> array = {6, 6, 5, 1, 3, 7, 7, 8};
        const auto expected = 6;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case18)
    {
        std::vector<int> array = {23, 25, 9, 26, 2, 19, 24, 18, 25, 17, 13, 3, 14, 17, 9, 20, 26, 15, 21, 2, 6, 11, 2, 12, 23, 5, 4, 20};
        const auto expected = 25;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case19)
    {
        std::vector<int> array = {12, 22, 6, 18, 5, 17, 18, 22, 22, 4, 6, 14, 12, 8, 5, 6, 10, 7, 13, 22, 17, 18};
        const auto expected = 18;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case20)
    {
        std::vector<int> array = {16, 6, 6, 18, 6, 13, 28, 9, 3, 26, 10, 2, 23, 5, 20, 21, 11, 20, 6, 11, 26, 20, 26, 25, 13, 3, 12, 4};
        const auto expected = 6;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case21)
    {
        std::vector<int> array = {15, 2, 6, 3, 3, 22, 14, 16, 6, 21, 4, 16, 2, 17, 9, 13, 1, 3, 5, 6, 1, 2, 23, 16, 16};
        const auto expected = 3;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case22)
    {
        std::vector<int> array = {4, 7, 9, 7, 1, 3, 2, 3, 1, 12, 12, 5};
        const auto expected = 7;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case23)
    {
        std::vector<int> array = {9, 21, 9, 22, 3, 23, 4, 26, 7, 11, 25, 25, 19, 13, 23, 28, 5, 23, 19, 13, 10, 26, 28, 9, 28, 16, 7, 13, 22};
        const auto expected = 9;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case24)
    {
        std::vector<int> array = {29, 3, 23, 16, 1, 22, 21, 14, 15, 21, 12, 27, 9, 12, 11, 3, 22, 5, 21, 24, 14, 26, 11, 5, 21, 25, 15, 19, 13, 4};
        const auto expected = 21;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case25)
    {
        std::vector<int> array = {13, 2, 8, 8, 10, 11, 13, 11, 9, 13, 4, 5, 7};
        const auto expected = 8;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case26)
    {
        std::vector<int> array = {4, 7, 7, 14, 14, 10, 15, 14, 14, 16, 14, 11, 5, 12, 17, 7, 1, 6, 13};
        const auto expected = 7;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case27)
    {
        std::vector<int> array = {2, 5, 1, 4, 1};
        const auto expected = 1;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case28)
    {
        std::vector<int> array = {11, 10, 5, 3, 1, 7, 10, 6, 10, 11, 7};
        const auto expected = 10;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case29)
    {
        std::vector<int> array = {2, 13, 3, 9, 1, 9, 1, 11, 11, 5, 3, 1, 9, 12};
        const auto expected = 9;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case30)
    {
        std::vector<int> array = {3, 3, 1, 1};
        const auto expected = 3;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case31)
    {
        std::vector<int> array = {26, 18, 21, 26, 26, 16, 16, 3, 19, 9, 10, 24, 21, 9, 8, 11, 17, 21, 18, 22, 17, 27, 6, 7, 6, 10, 4};
        const auto expected = 26;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case32)
    {
        std::vector<int> array = {27, 16, 15, 21, 10, 21, 3, 21, 5, 12, 27, 24, 20, 26, 5, 13, 26, 22, 26, 8, 23, 10, 14, 17, 7, 5, 3};
        const auto expected = 21;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case33)
    {
        std::vector<int> array = {11, 6, 1, 1, 4, 19, 10, 12, 19, 8, 12, 15, 26, 9, 6, 20, 17, 12, 26, 15, 25, 18, 26, 5, 3, 5, 16, 5};
        const auto expected = 1;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case34)
    {
        std::vector<int> array = {16, 22, 20, 22, 26, 19, 8, 17, 18, 24, 17, 19, 19, 11, 18, 13, 10, 20, 6, 23, 20, 19, 21, 6, 17, 7};
        const auto expected = 22;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case35)
    {
        std::vector<int> array = {11, 13, 6, 12, 4, 15, 4, 9, 3, 10, 5, 8, 15, 5, 8};
        const auto expected = 4;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case36)
    {
        std::vector<int> array = {7, 9, 5, 6, 4, 11, 2, 8, 2, 5, 1};
        const auto expected = 2;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case37)
    {
        std::vector<int> array = {8, 1, 5, 2, 9, 12, 9, 6, 9, 9, 5, 13, 5, 9};
        const auto expected = 9;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case38)
    {
        std::vector<int> array = {11, 5, 2, 7, 11, 11, 3, 11, 4, 2, 9};
        const auto expected = 11;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case39)
    {
        std::vector<int> array = {2, 22, 3, 20, 18, 8, 29, 25, 7, 12, 12, 17, 1, 28, 3, 6, 11, 2, 28, 16, 23, 27, 8, 28, 4, 29, 24, 12, 29};
        const auto expected = 12;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case40)
    {
        std::vector<int> array = {5, 1, 3, 5, 1};
        const auto expected = 5;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case41)
    {
        std::vector<int> array = {20, 12, 3, 18, 9, 16, 4, 18, 6, 19, 14, 23, 10, 13, 6, 1, 22, 11, 11, 16, 13, 15, 17, 19, 14, 12, 20};
        const auto expected = 18;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case42)
    {
        std::vector<int> array = {23, 15, 11, 5, 13, 11, 9, 9, 13, 8, 22, 12, 2, 24, 6, 2, 15, 24, 12, 9, 13, 13, 22, 18};
        const auto expected = 11;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case43)
    {
        std::vector<int> array = {4, 1, 5, 1, 4};
        const auto expected = 1;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case44)
    {
        std::vector<int> array = {7, 14, 4, 6, 17, 17, 3, 14, 1, 16, 18, 4, 12, 13, 8, 19, 1, 2, 4, 14};
        const auto expected = 17;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case45)
    {
        std::vector<int> array = {5, 6, 6, 4, 3, 5};
        const auto expected = 6;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case46)
    {
        std::vector<int> array = {3, 2, 3, 1};
        const auto expected = 3;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case47)
    {
        std::vector<int> array = {9, 12, 14, 6, 14, 2, 4, 9, 13, 2, 10, 5, 7, 1};
        const auto expected = 14;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case48)
    {
        std::vector<int> array = {9, 2, 11, 5, 6, 8, 10, 15, 5, 7, 11, 6, 19, 19, 14, 15, 3, 9, 16};
        const auto expected = 5;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case49)
    {
        std::vector<int> array = {2, 6, 1, 7, 1, 6, 6};
        const auto expected = 1;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case50)
    {
        std::vector<int> array = {6, 3, 1, 8, 2, 2, 1, 7, 10, 8, 6, 4};
        const auto expected = 2;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case51)
    {
        std::vector<int> array = {21, 17, 1, 8, 22, 8, 22, 8, 23, 3, 21, 5, 18, 2, 8, 21, 21, 22, 10, 24, 13, 4, 20, 24};
        const auto expected = 8;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case52)
    {
        std::vector<int> array = {16, 9, 13, 10, 18, 17, 11, 5, 11, 4, 2, 16, 15, 6, 3, 7, 15, 10, 1};
        const auto expected = 11;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case53)
    {
        std::vector<int> array = {5, 5, 5, 4, 6, 6, 2};
        const auto expected = 5;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case54)
    {
        std::vector<int> array = {5, 3, 8, 2, 9, 6, 8, 1, 6};
        const auto expected = 8;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case55)
    {
        std::vector<int> array = {5, 5, 1, 5, 3, 7, 4, 4};
        const auto expected = 5;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case56)
    {
        std::vector<int> array = {19, 4, 1, 6, 2, 5, 20, 13, 8, 6, 11, 12, 12, 12, 11, 18, 7, 13, 6, 10};
        const auto expected = 6;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case57)
    {
        std::vector<int> array = {3, 11, 11, 10, 11, 8, 8, 11, 10, 11, 10, 8, 10};
        const auto expected = 11;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case58)
    {
        std::vector<int> array = {15, 3, 15, 6, 13, 3, 12, 10, 17, 8, 13, 1, 12, 9, 14, 7, 16};
        const auto expected = 15;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case59)
    {
        std::vector<int> array = {2, 2, 2};
        const auto expected = 2;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case60)
    {
        std::vector<int> array = {11, 6, 8, 8, 8, 9, 10, 6, 4, 1, 10, 1, 6};
        const auto expected = 8;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case61)
    {
        std::vector<int> array = {2, 3, 16, 9, 11, 14, 13, 1, 10, 12, 5, 17, 4, 16, 10, 5, 4};
        const auto expected = 16;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case62)
    {
        std::vector<int> array = {13, 4, 10, 10, 8, 13, 13, 7, 11, 6, 3, 2, 11};
        const auto expected = 10;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
    TEST(FirstDuplicateValue, Case63)
    {
        std::vector<int> array = {6, 15, 7, 10, 9, 14, 10, 1, 10, 1, 2, 11, 1, 6, 8};
        const auto expected = 10;
        const auto output = algoExpert::arrays::firstDuplicateValue(array);
        EXPECT_EQ(expected, output);
    }
}
