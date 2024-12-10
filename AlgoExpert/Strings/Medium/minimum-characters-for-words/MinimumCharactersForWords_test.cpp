#include "MinimumCharactersForWords.h"
#include "gtest/gtest.h"

namespace
{
	TEST(MinimumCharactersForWords, Case01)
	{
		std::vector<std::string> words = {"this", "that", "did", "deed", "them!", "a"};
		const std::vector<char> expected = {'!', 'a', 'd', 'd', 'e', 'e', 'h', 'i', 'm', 's', 't', 't'};
		const auto output = algoExpert::strings::minimumCharactersForWords(words);
		EXPECT_EQ(expected, output);
	}
	TEST(MinimumCharactersForWords, Case02)
	{
		std::vector<std::string> words = {"a", "abc", "ab", "boo"};
		const std::vector<char> expected = {'a', 'b', 'c', 'o', 'o'};
		const auto output = algoExpert::strings::minimumCharactersForWords(words);
		EXPECT_EQ(expected, output);
	}
	TEST(MinimumCharactersForWords, Case03)
	{
		std::vector<std::string> words = {"a"};
		const std::vector<char> expected = {'a'};
		const auto output = algoExpert::strings::minimumCharactersForWords(words);
		EXPECT_EQ(expected, output);
	}
	TEST(MinimumCharactersForWords, Case04)
	{
		std::vector<std::string> words = {"abc", "ab", "b", "bac", "c"};
		const std::vector<char> expected = {'a', 'b', 'c'};
		const auto output = algoExpert::strings::minimumCharactersForWords(words);
		EXPECT_EQ(expected, output);
	}
	TEST(MinimumCharactersForWords, Case05)
	{
		std::vector<std::string> words = {"!!!2", "234", "222", "432"};
		const std::vector<char> expected = {'!', '!', '!', '2', '2', '2', '3', '4'};
		const auto output = algoExpert::strings::minimumCharactersForWords(words);
		EXPECT_EQ(expected, output);
	}
	TEST(MinimumCharactersForWords, Case06)
	{
		std::vector<std::string> words = {"this", "that", "they", "them", "their", "there", "time", "is"};
		const std::vector<char> expected = {'a', 'e', 'e', 'h', 'i', 'm', 'r', 's', 't', 't', 'y'};
		const auto output = algoExpert::strings::minimumCharactersForWords(words);
		EXPECT_EQ(expected, output);
	}
	TEST(MinimumCharactersForWords, Case07)
	{
		std::vector<std::string> words = {"tim", "is", "great"};
		const std::vector<char> expected = {'a', 'e', 'g', 'i', 'm', 'r', 's', 't'};
		const auto output = algoExpert::strings::minimumCharactersForWords(words);
		EXPECT_EQ(expected, output);
	}
	TEST(MinimumCharactersForWords, Case08)
	{
		std::vector<std::string> words = {"abc", "bavcc", "aaaa", "cde", "efg", "gead"};
		const std::vector<char> expected = {'a', 'a', 'a', 'a', 'b', 'c', 'c', 'd', 'e', 'f', 'g', 'v'};
		const auto output = algoExpert::strings::minimumCharactersForWords(words);
		EXPECT_EQ(expected, output);
	}
	TEST(MinimumCharactersForWords, Case09)
	{
		std::vector<std::string> words = {"a", "a", "a"};
		const std::vector<char> expected = {'a'};
		const auto output = algoExpert::strings::minimumCharactersForWords(words);
		EXPECT_EQ(expected, output);
	}
	TEST(MinimumCharactersForWords, Case10)
	{
		std::vector<std::string> words = {"them", "they", "that", "that", "yes", "yo", "no", "boo", "you", "okay", "too"};
		const std::vector<char> expected = {'a', 'b', 'e', 'h', 'k', 'm', 'n', 'o', 'o', 's', 't', 't', 'u', 'y'};
		const auto output = algoExpert::strings::minimumCharactersForWords(words);
		EXPECT_EQ(expected, output);
	}
	TEST(MinimumCharactersForWords, Case11)
	{
		std::vector<std::string> words = {"cta", "cat", "tca", "tac", "a", "c", "t"};
		const std::vector<char> expected = {'a', 'c', 't'};
		const auto output = algoExpert::strings::minimumCharactersForWords(words);
		EXPECT_EQ(expected, output);
	}
	TEST(MinimumCharactersForWords, Case12)
	{
		std::vector<std::string> words = {"my", "coding", "skills", "are", "great"};
		const std::vector<char> expected = {'a', 'c', 'd', 'e', 'g', 'i', 'k', 'l', 'l', 'm', 'n', 'o', 'r', 's', 's', 't', 'y'};
		const auto output = algoExpert::strings::minimumCharactersForWords(words);
		EXPECT_EQ(expected, output);
	}
	TEST(MinimumCharactersForWords, Case13)
	{
		std::vector<std::string> words = {};
		const std::vector<char> expected = {};
		const auto output = algoExpert::strings::minimumCharactersForWords(words);
		EXPECT_EQ(expected, output);
	}
	TEST(MinimumCharactersForWords, Case14)
	{
		std::vector<std::string> words = {"168712hn3;nlsdjhahjdksaxa097918@#$RT%T^&*()_"};
		const std::vector<char> expected = {'#', '$', '%', '&', '(', ')', '*', '0', '1', '1', '1', '2', '3', '6', '7', '7', '8', '8', '9', '9', ';', '@', 'R', 'T', 'T', '^', '_', 'a', 'a', 'a', 'd', 'd', 'h', 'h', 'h', 'j', 'j', 'k', 'l', 'n', 'n', 's', 's', 'x'};
		const auto output = algoExpert::strings::minimumCharactersForWords(words);
		EXPECT_EQ(expected, output);
	}
	TEST(MinimumCharactersForWords, Case15)
	{
		std::vector<std::string> words = {"cat", "cAt", "tAc", "Act", "Cat"};
		const std::vector<char> expected = {'A', 'C', 'a', 'c', 't'};
		const auto output = algoExpert::strings::minimumCharactersForWords(words);
		EXPECT_EQ(expected, output);
	}
	TEST(MinimumCharactersForWords, Case16)
	{
		std::vector<std::string> words = {"Abc", "baVcc", "aaaa", "cdeE", "efg", "gead"};
		const std::vector<char> expected = {'A', 'E', 'V', 'a', 'a', 'a', 'a', 'b', 'c', 'c', 'd', 'e', 'f', 'g'};
		const auto output = algoExpert::strings::minimumCharactersForWords(words);
		EXPECT_EQ(expected, output);
	}
	TEST(MinimumCharactersForWords, Case17)
	{
		std::vector<std::string> words = {"mississippi", "piper", "icing", "ice", "pickle", "piping", "pie", "pi", "sassy", "serpent", "python", "ascii", "sister", "mister"};
		const std::vector<char> expected = {'a', 'c', 'e', 'e', 'g', 'h', 'i', 'i', 'i', 'i', 'k', 'l', 'm', 'n', 'o', 'p', 'p', 'r', 's', 's', 's', 's', 't', 'y'};
		const auto output = algoExpert::strings::minimumCharactersForWords(words);
		EXPECT_EQ(expected, output);
	}
}

