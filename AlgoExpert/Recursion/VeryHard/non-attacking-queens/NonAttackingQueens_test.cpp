#include "NonAttackingQueens.h"
#include "gtest/gtest.h"

#if 0
namespace
{
    TEST(NonAttackingQueens, Case01)
    {
        int n = 4;
        const auto expected = 2;
        const auto output = algoExpert::recursion::nonAttackingQueens(n);
        EXPECT_EQ(expected, output);
    }
    TEST(NonAttackingQueens, Case02)
    {
        int n = 2;
        const auto expected = 0;
        const auto output = algoExpert::recursion::nonAttackingQueens(n);
        EXPECT_EQ(expected, output);
    }
    TEST(NonAttackingQueens, Case03)
    {
        int n = 1;
        const auto expected = 1;
        const auto output = algoExpert::recursion::nonAttackingQueens(n);
        EXPECT_EQ(expected, output);
    }
    TEST(NonAttackingQueens, Case04)
    {
        int n = 3;
        const auto expected = 0;
        const auto output = algoExpert::recursion::nonAttackingQueens(n);
        EXPECT_EQ(expected, output);
    }
    TEST(NonAttackingQueens, Case05)
    {
        int n = 8;
        const auto expected = 92;
        const auto output = algoExpert::recursion::nonAttackingQueens(n);
        EXPECT_EQ(expected, output);
    }
    TEST(NonAttackingQueens, Case06)
    {
        int n = 5;
        const auto expected = 10;
        const auto output = algoExpert::recursion::nonAttackingQueens(n);
        EXPECT_EQ(expected, output);
    }
    TEST(NonAttackingQueens, Case07)
    {
        int n = 6;
        const auto expected = 4;
        const auto output = algoExpert::recursion::nonAttackingQueens(n);
        EXPECT_EQ(expected, output);
    }
    TEST(NonAttackingQueens, Case08)
    {
        int n = 7;
        const auto expected = 40;
        const auto output = algoExpert::recursion::nonAttackingQueens(n);
        EXPECT_EQ(expected, output);
    }
    TEST(NonAttackingQueens, Case09)
    {
        int n = 10;
        const auto expected = 724;
        const auto output = algoExpert::recursion::nonAttackingQueens(n);
        EXPECT_EQ(expected, output);
    }
}
#endif
