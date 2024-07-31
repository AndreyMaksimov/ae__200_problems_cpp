#include "LevenshteinDistance.h"
#include "gtest/gtest.h"

namespace
{
	TEST(LevenshteinDistance, Case01)
	{
		std::string str1 = "abc";
		std::string str2 = "yabd";
		const auto expected = 2;
		const auto output = algoExpert::dynamicProgramming::levenshteinDistance(str1, str2);
		EXPECT_EQ(expected, output);
	}
	TEST(LevenshteinDistance, Case02)
	{
		std::string str1 = "";
		std::string str2 = "";
		const auto expected = 0;
		const auto output = algoExpert::dynamicProgramming::levenshteinDistance(str1, str2);
		EXPECT_EQ(expected, output);
	}
	TEST(LevenshteinDistance, Case03)
	{
		std::string str1 = "";
		std::string str2 = "abc";
		const auto expected = 3;
		const auto output = algoExpert::dynamicProgramming::levenshteinDistance(str1, str2);
		EXPECT_EQ(expected, output);
	}
	TEST(LevenshteinDistance, Case04)
	{
		std::string str1 = "abc";
		std::string str2 = "abc";
		const auto expected = 0;
		const auto output = algoExpert::dynamicProgramming::levenshteinDistance(str1, str2);
		EXPECT_EQ(expected, output);
	}
	TEST(LevenshteinDistance, Case05)
	{
		std::string str1 = "abc";
		std::string str2 = "abx";
		const auto expected = 1;
		const auto output = algoExpert::dynamicProgramming::levenshteinDistance(str1, str2);
		EXPECT_EQ(expected, output);
	}
	TEST(LevenshteinDistance, Case06)
	{
		std::string str1 = "abc";
		std::string str2 = "abcx";
		const auto expected = 1;
		const auto output = algoExpert::dynamicProgramming::levenshteinDistance(str1, str2);
		EXPECT_EQ(expected, output);
	}
	TEST(LevenshteinDistance, Case07)
	{
		std::string str1 = "abc";
		std::string str2 = "yabcx";
		const auto expected = 2;
		const auto output = algoExpert::dynamicProgramming::levenshteinDistance(str1, str2);
		EXPECT_EQ(expected, output);
	}
	TEST(LevenshteinDistance, Case08)
	{
		std::string str1 = "algoexpert";
		std::string str2 = "algozexpert";
		const auto expected = 1;
		const auto output = algoExpert::dynamicProgramming::levenshteinDistance(str1, str2);
		EXPECT_EQ(expected, output);
	}
	TEST(LevenshteinDistance, Case09)
	{
		std::string str1 = "abcdefghij";
		std::string str2 = "1234567890";
		const auto expected = 10;
		const auto output = algoExpert::dynamicProgramming::levenshteinDistance(str1, str2);
		EXPECT_EQ(expected, output);
	}
	TEST(LevenshteinDistance, Case10)
	{
		std::string str1 = "abcdefghij";
		std::string str2 = "a234567890";
		const auto expected = 9;
		const auto output = algoExpert::dynamicProgramming::levenshteinDistance(str1, str2);
		EXPECT_EQ(expected, output);
	}
	TEST(LevenshteinDistance, Case11)
	{
		std::string str1 = "biting";
		std::string str2 = "mitten";
		const auto expected = 4;
		const auto output = algoExpert::dynamicProgramming::levenshteinDistance(str1, str2);
		EXPECT_EQ(expected, output);
	}
	TEST(LevenshteinDistance, Case12)
	{
		std::string str1 = "cereal";
		std::string str2 = "saturday";
		const auto expected = 6;
		const auto output = algoExpert::dynamicProgramming::levenshteinDistance(str1, str2);
		EXPECT_EQ(expected, output);
	}
	TEST(LevenshteinDistance, Case13)
	{
		std::string str1 = "cereal";
		std::string str2 = "saturdzz";
		const auto expected = 7;
		const auto output = algoExpert::dynamicProgramming::levenshteinDistance(str1, str2);
		EXPECT_EQ(expected, output);
	}
	TEST(LevenshteinDistance, Case14)
	{
		std::string str1 = "abbbbbbbbb";
		std::string str2 = "bbbbbbbbba";
		const auto expected = 2;
		const auto output = algoExpert::dynamicProgramming::levenshteinDistance(str1, str2);
		EXPECT_EQ(expected, output);
	}
	TEST(LevenshteinDistance, Case15)
	{
		std::string str1 = "xabc";
		std::string str2 = "abcx";
		const auto expected = 2;
		const auto output = algoExpert::dynamicProgramming::levenshteinDistance(str1, str2);
		EXPECT_EQ(expected, output);
	}
	TEST(LevenshteinDistance, Case16)
	{
		std::string str1 = "table";
		std::string str2 = "bal";
		const auto expected = 3;
		const auto output = algoExpert::dynamicProgramming::levenshteinDistance(str1, str2);
		EXPECT_EQ(expected, output);
	}
	TEST(LevenshteinDistance, Case17)
	{
		std::string str1 = "gumbo";
		std::string str2 = "gambol";
		const auto expected = 2;
		const auto output = algoExpert::dynamicProgramming::levenshteinDistance(str1, str2);
		EXPECT_EQ(expected, output);
	}
}
