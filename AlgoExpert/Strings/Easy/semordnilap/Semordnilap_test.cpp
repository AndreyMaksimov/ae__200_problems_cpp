#include "Semordnilap.h"
#include "gtest/gtest.h"

namespace
{
	TEST(Semordnilap, Case01)
	{
		std::vector<std::string> words = {};
		const std::vector<std::vector<std::string>> expected = {};
		const auto output = algoExpert::strings::semordnilap(words);
		EXPECT_EQ(expected, output);
	}
	TEST(Semordnilap, Case02)
	{
		std::vector<std::string> words = {"aaa", "bbbb"};
		const std::vector<std::vector<std::string>> expected = {};
		const auto output = algoExpert::strings::semordnilap(words);
		EXPECT_EQ(expected, output);
	}
	TEST(Semordnilap, Case03)
	{
		std::vector<std::string> words = {"dog", "god"};
		std::vector<std::vector<std::string>> expected = 
			{
				{"dog", "god"}
			};
		const auto output = algoExpert::strings::semordnilap(words);
		EXPECT_EQ(expected, output);
	}
	TEST(Semordnilap, Case04)
	{
		std::vector<std::string> words = {"dog", "hello", "god"};
		std::vector<std::vector<std::string>> expected = 
			{
				{"dog", "god"}
			};
		const auto output = algoExpert::strings::semordnilap(words);
		EXPECT_EQ(expected, output);
	}
	TEST(Semordnilap, Case05)
	{
		std::vector<std::string> words = {"dog", "desserts", "god", "stressed"};
		std::vector<std::vector<std::string>> expected = 
			{
				{"dog", "god"},
				{"desserts", "stressed"}
			};
		const auto output = algoExpert::strings::semordnilap(words);
		EXPECT_EQ(expected, output);
	}
	TEST(Semordnilap, Case06)
	{
		std::vector<std::string> words = {"dog", "hello", "desserts", "test", "god", "stressed"};
		std::vector<std::vector<std::string>> expected = 
			{
				{"dog", "god"},
				{"desserts", "stressed"}
			};
		const auto output = algoExpert::strings::semordnilap(words);
		EXPECT_EQ(expected, output);
	}
	TEST(Semordnilap, Case07)
	{
		std::vector<std::string> words = {"abcde", "edcba", "edbc", "edb", "cbde", "abc"};
		std::vector<std::vector<std::string>> expected = 
			{
				{"abcde", "edcba"},
				{"cbde", "edbc"}
			};
		const auto output = algoExpert::strings::semordnilap(words);
		EXPECT_EQ(expected, output);
	}
	TEST(Semordnilap, Case08)
	{
		std::vector<std::string> words = {"abcde", "bcd", "dcb", "edcba", "aaa"};
		std::vector<std::vector<std::string>> expected = 
			{
				{"abcde", "edcba"},
				{"bcd", "dcb"}
			};
		const auto output = algoExpert::strings::semordnilap(words);
		EXPECT_EQ(expected, output);
	}
	TEST(Semordnilap, Case09)
	{
		std::vector<std::string> words = {"abcdefghijk", "aaa", "hello", "racecar", "kjihgfedcba"};
		std::vector<std::vector<std::string>> expected = 
			{
				{"abcdefghijk", "kjihgfedcba"}
			};
		const auto output = algoExpert::strings::semordnilap(words);
		EXPECT_EQ(expected, output);
	}
	TEST(Semordnilap, Case10)
	{
		std::vector<std::string> words = {"liver", "dog", "hello", "desserts", "evil", "test", "god", "stressed", "racecar", "palindromes", "semordnilap", "abcd", "live"};
		std::vector<std::vector<std::string>> expected = 
			{
				{"dog", "god"},
				{"desserts", "stressed"},
				{"evil", "live"},
				{"palindromes", "semordnilap"}
			};
		const auto output = algoExpert::strings::semordnilap(words);
		EXPECT_EQ(expected, output);
	}
}

