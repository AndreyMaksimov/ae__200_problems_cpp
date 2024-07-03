#include "BestSeat.h"
#include "gtest/gtest.h"

namespace
{
    TEST(BestSeat, Case01)
    {
        std::vector<int> seats = {1};
        const auto expected = -1;
        const auto output = algoExpert::arrays::bestSeat(seats);
        EXPECT_EQ(expected, output);
    }
    TEST(BestSeat, Case02)
    {
        std::vector<int> seats = {1, 0, 1, 0, 0, 0, 1};
        const auto expected = 4;
        const auto output = algoExpert::arrays::bestSeat(seats);
        EXPECT_EQ(expected, output);
    }
    TEST(BestSeat, Case03)
    {
        std::vector<int> seats = {1, 0, 1};
        const auto expected = 1;
        const auto output = algoExpert::arrays::bestSeat(seats);
        EXPECT_EQ(expected, output);
    }
    TEST(BestSeat, Case04)
    {
        std::vector<int> seats = {1, 0, 0, 1};
        const auto expected = 1;
        const auto output = algoExpert::arrays::bestSeat(seats);
        EXPECT_EQ(expected, output);
    }
    TEST(BestSeat, Case05)
    {
        std::vector<int> seats = {1, 1, 1};
        const auto expected = -1;
        const auto output = algoExpert::arrays::bestSeat(seats);
        EXPECT_EQ(expected, output);
    }
    TEST(BestSeat, Case06)
    {
        std::vector<int> seats = {1, 0, 0, 1, 0, 0, 1};
        const auto expected = 1;
        const auto output = algoExpert::arrays::bestSeat(seats);
        EXPECT_EQ(expected, output);
    }
    TEST(BestSeat, Case07)
    {
        std::vector<int> seats = {1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1};
        const auto expected = 3;
        const auto output = algoExpert::arrays::bestSeat(seats);
        EXPECT_EQ(expected, output);
    }
    TEST(BestSeat, Case08)
    {
        std::vector<int> seats = {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1};
        const auto expected = 4;
        const auto output = algoExpert::arrays::bestSeat(seats);
        EXPECT_EQ(expected, output);
    }
    TEST(BestSeat, Case09)
    {
        std::vector<int> seats = {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1};
        const auto expected = 4;
        const auto output = algoExpert::arrays::bestSeat(seats);
        EXPECT_EQ(expected, output);
    }
    TEST(BestSeat, Case10)
    {
        std::vector<int> seats = {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
        const auto expected = 13;
        const auto output = algoExpert::arrays::bestSeat(seats);
        EXPECT_EQ(expected, output);
    }
    TEST(BestSeat, Case11)
    {
        std::vector<int> seats = {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1};
        const auto expected = 13;
        const auto output = algoExpert::arrays::bestSeat(seats);
        EXPECT_EQ(expected, output);
    }
    TEST(BestSeat, Case12)
    {
        std::vector<int> seats = {1, 0, 0, 0, 1, 0, 0, 0, 0, 1};
        const auto expected = 6;
        const auto output = algoExpert::arrays::bestSeat(seats);
        EXPECT_EQ(expected, output);
    }
    TEST(BestSeat, Case13)
    {
        std::vector<int> seats = {1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1};
        const auto expected = 3;
        const auto output = algoExpert::arrays::bestSeat(seats);
        EXPECT_EQ(expected, output);
    }
    TEST(BestSeat, Case14)
    {
        std::vector<int> seats = {1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1};
        const auto expected = 5;
        const auto output = algoExpert::arrays::bestSeat(seats);
        EXPECT_EQ(expected, output);
    }
}
