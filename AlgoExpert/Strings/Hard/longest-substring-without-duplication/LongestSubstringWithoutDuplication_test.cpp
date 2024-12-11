#include "LongestSubstringWithoutDuplication.h"
#include "gtest/gtest.h"

namespace
{
	TEST(LongestSubstringWithoutDuplication, Case01)
	{
		std::string string = "clementisacap";
		const std::string expected = "mentisac";
		const auto output = algoExpert::strings::longestSubstringWithoutDuplication(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestSubstringWithoutDuplication, Case02)
	{
		std::string string = "a";
		const std::string expected = "a";
		const auto output = algoExpert::strings::longestSubstringWithoutDuplication(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestSubstringWithoutDuplication, Case03)
	{
		std::string string = "abc";
		const std::string expected = "abc";
		const auto output = algoExpert::strings::longestSubstringWithoutDuplication(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestSubstringWithoutDuplication, Case04)
	{
		std::string string = "abcb";
		const std::string expected = "abc";
		const auto output = algoExpert::strings::longestSubstringWithoutDuplication(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestSubstringWithoutDuplication, Case05)
	{
		std::string string = "abcdeabcdefc";
		const std::string expected = "abcdef";
		const auto output = algoExpert::strings::longestSubstringWithoutDuplication(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestSubstringWithoutDuplication, Case06)
	{
		std::string string = "abccdeaabbcddef";
		const std::string expected = "cdea";
		const auto output = algoExpert::strings::longestSubstringWithoutDuplication(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestSubstringWithoutDuplication, Case07)
	{
		std::string string = "abacacacaaabacaaaeaaafa";
		const std::string expected = "bac";
		const auto output = algoExpert::strings::longestSubstringWithoutDuplication(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestSubstringWithoutDuplication, Case08)
	{
		std::string string = "abcdabcef";
		const std::string expected = "dabcef";
		const auto output = algoExpert::strings::longestSubstringWithoutDuplication(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestSubstringWithoutDuplication, Case09)
	{
		std::string string = "abcbde";
		const std::string expected = "cbde";
		const auto output = algoExpert::strings::longestSubstringWithoutDuplication(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestSubstringWithoutDuplication, Case10)
	{
		std::string string = "clementisanarm";
		const std::string expected = "mentisa";
		const auto output = algoExpert::strings::longestSubstringWithoutDuplication(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestSubstringWithoutDuplication, Case11)
	{
		std::string string = "aabb";
		const std::string expected = "ab";
		const auto output = algoExpert::strings::longestSubstringWithoutDuplication(string);
		EXPECT_EQ(expected, output);
	}
}

