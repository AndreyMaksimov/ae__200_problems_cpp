#include "KnightConnection.h"
#include "gtest/gtest.h"

#if 0
namespace
{
    TEST(KnightConnection, Case01)
    {
        std::vector<int> knightA = {0, 0};
        std::vector<int> knightB = {0, 0};
        const auto expected = 0;
        const auto output = algoExpert::arrays::knightConnection(knightA, knightB);
        EXPECT_EQ(expected, output);
    }
    TEST(KnightConnection, Case02)
    {
        std::vector<int> knightA = {15, -12};
        std::vector<int> knightB = {15, -12};
        const auto expected = 0;
        const auto output = algoExpert::arrays::knightConnection(knightA, knightB);
        EXPECT_EQ(expected, output);
    }
    TEST(KnightConnection, Case03)
    {
        std::vector<int> knightA = {1, 0};
        std::vector<int> knightB = {0, 0};
        const auto expected = 2;
        const auto output = algoExpert::arrays::knightConnection(knightA, knightB);
        EXPECT_EQ(expected, output);
    }
    TEST(KnightConnection, Case04)
    {
        std::vector<int> knightA = {0, 0};
        std::vector<int> knightB = {1, 0};
        const auto expected = 2;
        const auto output = algoExpert::arrays::knightConnection(knightA, knightB);
        EXPECT_EQ(expected, output);
    }
    TEST(KnightConnection, Case05)
    {
        std::vector<int> knightA = {1, 1};
        std::vector<int> knightB = {0, 0};
        const auto expected = 1;
        const auto output = algoExpert::arrays::knightConnection(knightA, knightB);
        EXPECT_EQ(expected, output);
    }
    TEST(KnightConnection, Case06)
    {
        std::vector<int> knightA = {0, 0};
        std::vector<int> knightB = {-1, -1};
        const auto expected = 1;
        const auto output = algoExpert::arrays::knightConnection(knightA, knightB);
        EXPECT_EQ(expected, output);
    }
    TEST(KnightConnection, Case07)
    {
        std::vector<int> knightA = {2, 1};
        std::vector<int> knightB = {0, 0};
        const auto expected = 1;
        const auto output = algoExpert::arrays::knightConnection(knightA, knightB);
        EXPECT_EQ(expected, output);
    }
    TEST(KnightConnection, Case08)
    {
        std::vector<int> knightA = {3, 3};
        std::vector<int> knightB = {0, 0};
        const auto expected = 1;
        const auto output = algoExpert::arrays::knightConnection(knightA, knightB);
        EXPECT_EQ(expected, output);
    }
    TEST(KnightConnection, Case09)
    {
        std::vector<int> knightA = {2, 1};
        std::vector<int> knightB = {-1, -2};
        const auto expected = 1;
        const auto output = algoExpert::arrays::knightConnection(knightA, knightB);
        EXPECT_EQ(expected, output);
    }
    TEST(KnightConnection, Case10)
    {
        std::vector<int> knightA = {2, 1};
        std::vector<int> knightB = {-2, -4};
        const auto expected = 2;
        const auto output = algoExpert::arrays::knightConnection(knightA, knightB);
        EXPECT_EQ(expected, output);
    }
    TEST(KnightConnection, Case11)
    {
        std::vector<int> knightA = {5, 2};
        std::vector<int> knightB = {-2, -4};
        const auto expected = 3;
        const auto output = algoExpert::arrays::knightConnection(knightA, knightB);
        EXPECT_EQ(expected, output);
    }
    TEST(KnightConnection, Case12)
    {
        std::vector<int> knightA = {10, 10};
        std::vector<int> knightB = {-10, -10};
        const auto expected = 7;
        const auto output = algoExpert::arrays::knightConnection(knightA, knightB);
        EXPECT_EQ(expected, output);
    }
    TEST(KnightConnection, Case13)
    {
        std::vector<int> knightA = {15, 15};
        std::vector<int> knightB = {-10, -10};
        const auto expected = 9;
        const auto output = algoExpert::arrays::knightConnection(knightA, knightB);
        EXPECT_EQ(expected, output);
    }
    TEST(KnightConnection, Case14)
    {
        std::vector<int> knightA = {-15, 2};
        std::vector<int> knightB = {-3, 20};
        const auto expected = 5;
        const auto output = algoExpert::arrays::knightConnection(knightA, knightB);
        EXPECT_EQ(expected, output);
    }
    TEST(KnightConnection, Case15)
    {
        std::vector<int> knightA = {20, 20};
        std::vector<int> knightB = {0, 0};
        const auto expected = 7;
        const auto output = algoExpert::arrays::knightConnection(knightA, knightB);
        EXPECT_EQ(expected, output);
    }
    TEST(KnightConnection, Case16)
    {
        std::vector<int> knightA = {18, -13};
        std::vector<int> knightB = {0, 12};
        const auto expected = 8;
        const auto output = algoExpert::arrays::knightConnection(knightA, knightB);
        EXPECT_EQ(expected, output);
    }
}
#endif
