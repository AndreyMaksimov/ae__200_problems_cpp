#include "ReverseWordsInString.h"
#include "gtest/gtest.h"

namespace
{
	TEST(ReverseWordsInString, Case01)
	{
		std::string string = "AlgoExpert is the best!";
		const std::string expected = "best! the is AlgoExpert";
		const auto output = algoExpert::strings::reverseWordsInString(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ReverseWordsInString, Case02)
	{
		std::string string = "Reverse These Words";
		const std::string expected = "Words These Reverse";
		const auto output = algoExpert::strings::reverseWordsInString(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ReverseWordsInString, Case03)
	{
		std::string string = "..H,, hello 678";
		const std::string expected = "678 hello ..H,,";
		const auto output = algoExpert::strings::reverseWordsInString(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ReverseWordsInString, Case04)
	{
		std::string string = "this this words this this this words this";
		const std::string expected = "this words this this this words this this";
		const auto output = algoExpert::strings::reverseWordsInString(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ReverseWordsInString, Case05)
	{
		std::string string = "1 12 23 34 56";
		const std::string expected = "56 34 23 12 1";
		const auto output = algoExpert::strings::reverseWordsInString(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ReverseWordsInString, Case06)
	{
		std::string string = "APPLE PEAR PLUM ORANGE";
		const std::string expected = "ORANGE PLUM PEAR APPLE";
		const auto output = algoExpert::strings::reverseWordsInString(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ReverseWordsInString, Case07)
	{
		std::string string = "this-is-one-word";
		const std::string expected = "this-is-one-word";
		const auto output = algoExpert::strings::reverseWordsInString(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ReverseWordsInString, Case08)
	{
		std::string string = "a";
		const std::string expected = "a";
		const auto output = algoExpert::strings::reverseWordsInString(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ReverseWordsInString, Case09)
	{
		std::string string = "ab";
		const std::string expected = "ab";
		const auto output = algoExpert::strings::reverseWordsInString(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ReverseWordsInString, Case10)
	{
		std::string string = "";
		const std::string expected = "";
		const auto output = algoExpert::strings::reverseWordsInString(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ReverseWordsInString, Case11)
	{
		std::string string = "algoexpert is the best platform to use to prepare for coding interviews!";
		const std::string expected = "interviews! coding for prepare to use to platform best the is algoexpert";
		const auto output = algoExpert::strings::reverseWordsInString(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ReverseWordsInString, Case12)
	{
		std::string string = "words, separated, by, commas";
		const std::string expected = "commas by, separated, words,";
		const auto output = algoExpert::strings::reverseWordsInString(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ReverseWordsInString, Case13)
	{
		std::string string = "this      string     has a     lot of   whitespace";
		const std::string expected = "whitespace   of lot     a has     string      this";
		const auto output = algoExpert::strings::reverseWordsInString(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ReverseWordsInString, Case14)
	{
		std::string string = "a ab a";
		const std::string expected = "a ab a";
		const auto output = algoExpert::strings::reverseWordsInString(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ReverseWordsInString, Case15)
	{
		std::string string = "test        ";
		const std::string expected = "        test";
		const auto output = algoExpert::strings::reverseWordsInString(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ReverseWordsInString, Case16)
	{
		std::string string = " ";
		const std::string expected = " ";
		const auto output = algoExpert::strings::reverseWordsInString(string);
		EXPECT_EQ(expected, output);
	}
}

