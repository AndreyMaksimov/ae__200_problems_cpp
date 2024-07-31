#include "LongestStringChain.h"
#include "gtest/gtest.h"

namespace
{
	TEST(LongestStringChain, Case01)
	{
		std::vector<std::string> strings = {"abde", "abc", "abd", "abcde", "ade", "ae", "1abde", "abcdef"};
		const std::vector<std::string> expected = {"abcdef", "abcde", "abde", "ade", "ae"};
		const auto output = algoExpert::dynamicProgramming::longestStringChain(strings);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestStringChain, Case02)
	{
		std::vector<std::string> strings = {"abcdefg", "abcdef", "abcde", "abcd", "abc", "ab", "a"};
		const std::vector<std::string> expected = {"abcdefg", "abcdef", "abcde", "abcd", "abc", "ab", "a"};
		const auto output = algoExpert::dynamicProgramming::longestStringChain(strings);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestStringChain, Case03)
	{
		std::vector<std::string> strings = {"abcdefg", "abdefg", "abdfg", "bdfg", "bfg", "bg", "g"};
		const std::vector<std::string> expected = {"abcdefg", "abdefg", "abdfg", "bdfg", "bfg", "bg", "g"};
		const auto output = algoExpert::dynamicProgramming::longestStringChain(strings);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestStringChain, Case04)
	{
		std::vector<std::string> strings = {"abcdefg", "1234", "abdefg", "abdfg", "123", "12", "bg", "g", "12345", "12a345"};
		const std::vector<std::string> expected = {"12a345", "12345", "1234", "123", "12"};
		const auto output = algoExpert::dynamicProgramming::longestStringChain(strings);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestStringChain, Case05)
	{
		std::vector<std::string> strings = {"abcdefg1", "1234c", "abdefg2", "abdfg", "123", "122", "bgg", "g", "1a2345", "12a345"};
		const std::vector<std::string> expected = {};
		const auto output = algoExpert::dynamicProgramming::longestStringChain(strings);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestStringChain, Case06)
	{
		std::vector<std::string> strings = {"lgoprt", "12345678", "algoxpert", "abcde", "123468", "lgoxprt", "abde", "lgopt", "1234678", "ade", "ae", "algoxprt", "a", "1abde", "lgpt", "123456789", "234678", "algoexpert"};
		const std::vector<std::string> expected = {"algoexpert", "algoxpert", "algoxprt", "lgoxprt", "lgoprt", "lgopt", "lgpt"};
		const auto output = algoExpert::dynamicProgramming::longestStringChain(strings);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestStringChain, Case07)
	{
		std::vector<std::string> strings = {"12345678", "algoxpert", "123468", "abde", "lgopt", "1234678", "ade", "ae", "a", "1abde", "lgpt", "123456789", "234678", "algoexpert"};
		const std::vector<std::string> expected = {"1abde", "abde", "ade", "ae", "a"};
		const auto output = algoExpert::dynamicProgramming::longestStringChain(strings);
		EXPECT_EQ(expected, output);
	}
}

