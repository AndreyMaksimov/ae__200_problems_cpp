#include "LongestPalindromicSubstring.h"
#include "gtest/gtest.h"

namespace
{
	TEST(LongestPalindromicSubstring, Case01)
	{
		std::string string = "abaxyzzyxf";
		const std::string expected = "xyzzyx";
		const auto output = algoExpert::strings::longestPalindromicSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestPalindromicSubstring, Case02)
	{
		std::string string = "a";
		const std::string expected = "a";
		const auto output = algoExpert::strings::longestPalindromicSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestPalindromicSubstring, Case03)
	{
		std::string string = "it's highnoon";
		const std::string expected = "noon";
		const auto output = algoExpert::strings::longestPalindromicSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestPalindromicSubstring, Case04)
	{
		std::string string = "noon high it is";
		const std::string expected = "noon";
		const auto output = algoExpert::strings::longestPalindromicSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestPalindromicSubstring, Case05)
	{
		std::string string = "abccbait's highnoon";
		const std::string expected = "abccba";
		const auto output = algoExpert::strings::longestPalindromicSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestPalindromicSubstring, Case06)
	{
		std::string string = "abcdefgfedcbazzzzzzzzzzzzzzzzzzzz";
		const std::string expected = "zzzzzzzzzzzzzzzzzzzz";
		const auto output = algoExpert::strings::longestPalindromicSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestPalindromicSubstring, Case07)
	{
		std::string string = "abcdefgfedcba";
		const std::string expected = "abcdefgfedcba";
		const auto output = algoExpert::strings::longestPalindromicSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestPalindromicSubstring, Case08)
	{
		std::string string = "abcdefghfedcbaa";
		const std::string expected = "aa";
		const auto output = algoExpert::strings::longestPalindromicSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestPalindromicSubstring, Case09)
	{
		std::string string = "abcdefggfedcba";
		const std::string expected = "abcdefggfedcba";
		const auto output = algoExpert::strings::longestPalindromicSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestPalindromicSubstring, Case10)
	{
		std::string string = "zzzzzzz2345abbbba5432zzbbababa";
		const std::string expected = "zz2345abbbba5432zz";
		const auto output = algoExpert::strings::longestPalindromicSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestPalindromicSubstring, Case11)
	{
		std::string string = "z234a5abbbba54a32z";
		const std::string expected = "5abbbba5";
		const auto output = algoExpert::strings::longestPalindromicSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestPalindromicSubstring, Case12)
	{
		std::string string = "z234a5abbba54a32z";
		const std::string expected = "5abbba5";
		const auto output = algoExpert::strings::longestPalindromicSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestPalindromicSubstring, Case13)
	{
		std::string string = "ab12365456321bb";
		const std::string expected = "b12365456321b";
		const auto output = algoExpert::strings::longestPalindromicSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestPalindromicSubstring, Case14)
	{
		std::string string = "aca";
		const std::string expected = "aca";
		const auto output = algoExpert::strings::longestPalindromicSubstring(string);
		EXPECT_EQ(expected, output);
	}
}
