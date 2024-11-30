#include "GroupAnagrams.h"
#include "gtest/gtest.h"

namespace
{
	TEST(GroupAnagrams, Case01)
	{
		std::vector<std::string> words = {"yo", "act", "flop", "tac", "foo", "cat", "oy", "olfp"};
		std::vector<std::vector<std::string>> expected = 
			{
				{"foo"},
				{"flop", "olfp"},
				{"oy", "yo"},
				{"act", "cat", "tac"}
			};
		const auto output = algoExpert::strings::groupAnagrams(words);
		EXPECT_EQ(expected, output);
	}
	TEST(GroupAnagrams, Case02)
	{
		std::vector<std::string> words = {};
		std::vector<std::vector<std::string>> expected = 
			{};
		const auto output = algoExpert::strings::groupAnagrams(words);
		EXPECT_EQ(expected, output);
	}
	TEST(GroupAnagrams, Case04)
	{
		std::vector<std::string> words = {"abc", "dabd", "bca", "cab", "ddba"};
		std::vector<std::vector<std::string>> expected = 
			{
				{"dabd", "ddba"},
				{"abc", "bca", "cab"}
			};
		const auto output = algoExpert::strings::groupAnagrams(words);
		EXPECT_EQ(expected, output);
	}
	TEST(GroupAnagrams, Case05)
	{
		std::vector<std::string> words = {"abc", "cba", "bca"};
		std::vector<std::vector<std::string>> expected = 
			{
				{"abc", "bca", "cba"}
			};
		const auto output = algoExpert::strings::groupAnagrams(words);
		EXPECT_EQ(expected, output);
	}
	TEST(GroupAnagrams, Case06)
	{
		std::vector<std::string> words = {"zxc", "asd", "weq", "sda", "qwe", "xcz"};
		std::vector<std::vector<std::string>> expected = 
			{
				{"asd", "sda"},
				{"qwe", "weq"},
				{"xcz", "zxc"}
			};
		const auto output = algoExpert::strings::groupAnagrams(words);
		EXPECT_EQ(expected, output);
	}
	TEST(GroupAnagrams, Case07)
	{
		std::vector<std::string> words = {"cinema", "a", "flop", "iceman", "meacyne", "lofp", "olfp"};
		std::vector<std::vector<std::string>> expected = 
			{
				{"a"},
				{"meacyne"},
				{"cinema", "iceman"},
				{"flop", "lofp", "olfp"}
			};
		const auto output = algoExpert::strings::groupAnagrams(words);
		EXPECT_EQ(expected, output);
	}
	TEST(GroupAnagrams, Case08)
	{
		std::vector<std::string> words = {"abc", "abe", "abf", "abg"};
		std::vector<std::vector<std::string>> expected = 
			{
				{"abc"},
				{"abe"},
				{"abf"},
				{"abg"}
			};
		const auto output = algoExpert::strings::groupAnagrams(words);
		EXPECT_EQ(expected, output);
	}
	TEST(GroupAnagrams, Case09)
	{
		std::vector<std::string> words = {"aaa", "a"};
		std::vector<std::vector<std::string>> expected = 
			{
				{"a"},
				{"aaa"}
			};
		const auto output = algoExpert::strings::groupAnagrams(words);
		EXPECT_EQ(expected, output);
	}
	TEST(GroupAnagrams, Case10)
	{
		std::vector<std::string> words = {"bob", "boo"};
		std::vector<std::vector<std::string>> expected = 
			{
				{"bob"},
				{"boo"}
			};
		const auto output = algoExpert::strings::groupAnagrams(words);
		EXPECT_EQ(expected, output);
	}
	TEST(GroupAnagrams, Case11)
	{
		std::vector<std::string> words = {"ill", "duh"};
		std::vector<std::vector<std::string>> expected = 
			{
				{"duh"},
				{"ill"}
			};
		const auto output = algoExpert::strings::groupAnagrams(words);
		EXPECT_EQ(expected, output);
	}
	TEST(GroupAnagrams, Case12)
	{
		std::vector<std::string> words = {"yo", "oy", "zn"};
		std::vector<std::vector<std::string>> expected = 
			{
				{"zn"},
				{"oy", "yo"}
			};
		const auto output = algoExpert::strings::groupAnagrams(words);
		EXPECT_EQ(expected, output);
	}
	TEST(GroupAnagrams, Case13)
	{
		std::vector<std::string> words = {"yyo", "yo"};
		std::vector<std::vector<std::string>> expected = 
			{
				{"yo"},
				{"yyo"}
			};
		const auto output = algoExpert::strings::groupAnagrams(words);
		EXPECT_EQ(expected, output);
	}
	TEST(GroupAnagrams, Case14)
	{
		std::vector<std::string> words = {"aca", "bba"};
		std::vector<std::vector<std::string>> expected = 
			{
				{"aca"},
				{"bba"}
			};
		const auto output = algoExpert::strings::groupAnagrams(words);
		EXPECT_EQ(expected, output);
	}
}

