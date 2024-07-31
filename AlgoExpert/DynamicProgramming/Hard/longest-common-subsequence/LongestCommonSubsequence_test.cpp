#include "LongestCommonSubsequence.h"
#include "gtest/gtest.h"

namespace
{
	TEST(LongestCommonSubsequence, Case01)
	{
		std::string str1 = "ZXVVYZW";
		std::string str2 = "XKYKZPW";
		const std::vector<char> expected = {'X', 'Y', 'Z', 'W'};
		const auto output = algoExpert::dynamicProgramming::longestCommonSubsequence(str1, str2);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestCommonSubsequence, Case02)
	{
		std::string str1 = "";
		std::string str2 = "";
		const std::vector<char> expected = {};
		const auto output = algoExpert::dynamicProgramming::longestCommonSubsequence(str1, str2);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestCommonSubsequence, Case03)
	{
		std::string str1 = "";
		std::string str2 = "ABCDEFG";
		const std::vector<char> expected = {};
		const auto output = algoExpert::dynamicProgramming::longestCommonSubsequence(str1, str2);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestCommonSubsequence, Case04)
	{
		std::string str1 = "ABCDEFG";
		std::string str2 = "";
		const std::vector<char> expected = {};
		const auto output = algoExpert::dynamicProgramming::longestCommonSubsequence(str1, str2);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestCommonSubsequence, Case05)
	{
		std::string str1 = "ABCDEFG";
		std::string str2 = "ABCDEFG";
		const std::vector<char> expected = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
		const auto output = algoExpert::dynamicProgramming::longestCommonSubsequence(str1, str2);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestCommonSubsequence, Case06)
	{
		std::string str1 = "ABCDEFG";
		std::string str2 = "APPLES";
		const std::vector<char> expected = {'A', 'E'};
		const auto output = algoExpert::dynamicProgramming::longestCommonSubsequence(str1, str2);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestCommonSubsequence, Case07)
	{
		std::string str1 = "clement";
		std::string str2 = "antoine";
		const std::vector<char> expected = {'n', 't'};
		const auto output = algoExpert::dynamicProgramming::longestCommonSubsequence(str1, str2);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestCommonSubsequence, Case08)
	{
		std::string str1 = "8111111111111111142";
		std::string str2 = "222222222822222222222222222222433333333332";
		const std::vector<char> expected = {'8', '4', '2'};
		const auto output = algoExpert::dynamicProgramming::longestCommonSubsequence(str1, str2);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestCommonSubsequence, Case09)
	{
		std::string str1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		std::string str2 = "CCCDDEGDHAGKGLWAJWKJAWGKGWJAKLGGWAFWLFFWAGJWKAG";
		const std::vector<char> expected = {'C', 'D', 'E', 'G', 'H', 'J', 'K', 'L', 'W'};
		const auto output = algoExpert::dynamicProgramming::longestCommonSubsequence(str1, str2);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestCommonSubsequence, Case10)
	{
		std::string str1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		std::string str2 = "CCCDDEGDHAGKGLWAJWKJAWGKGWJAKLGGWAFWLFFWAGJWKAGTUV";
		const std::vector<char> expected = {'C', 'D', 'E', 'G', 'H', 'J', 'K', 'L', 'T', 'U', 'V'};
		const auto output = algoExpert::dynamicProgramming::longestCommonSubsequence(str1, str2);
		EXPECT_EQ(expected, output);
	}
}
