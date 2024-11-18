#include "PalindromeCheck.h"
#include "gtest/gtest.h"

namespace
{
    TEST(PalindromeCheck, Case01)
    {
        std::string str = "abcdcba";
        const auto expected = true;
        const auto output = algoExpert::strings::isPalindrome(str);
        EXPECT_EQ(expected, output);
    }
    TEST(PalindromeCheck, Case02)
    {
        std::string str = "a";
        const auto expected = true;
        const auto output = algoExpert::strings::isPalindrome(str);
        EXPECT_EQ(expected, output);
    }
    TEST(PalindromeCheck, Case03)
    {
        std::string str = "aba";
        const auto expected = true;
        const auto output = algoExpert::strings::isPalindrome(str);
        EXPECT_EQ(expected, output);
    }
    TEST(PalindromeCheck, Case05)
    {
        std::string str = "abb";
        const auto expected = false;
        const auto output = algoExpert::strings::isPalindrome(str);
        EXPECT_EQ(expected, output);
    }
    TEST(PalindromeCheck, Case06)
    {
        std::string str = "abba";
        const auto expected = true;
        const auto output = algoExpert::strings::isPalindrome(str);
        EXPECT_EQ(expected, output);
    }
    TEST(PalindromeCheck, Case07)
    {
        std::string str = "abcdefghhgfedcba";
        const auto expected = true;
        const auto output = algoExpert::strings::isPalindrome(str);
        EXPECT_EQ(expected, output);
    }
    TEST(PalindromeCheck, Case08)
    {
        std::string str = "abcdefghihgfedcba";
        const auto expected = true;
        const auto output = algoExpert::strings::isPalindrome(str);
        EXPECT_EQ(expected, output);
    }
    TEST(PalindromeCheck, Case09)
    {
        std::string str = "abcdefghihgfeddcba";
        const auto expected = false;
        const auto output = algoExpert::strings::isPalindrome(str);
        EXPECT_EQ(expected, output);
    }
}
