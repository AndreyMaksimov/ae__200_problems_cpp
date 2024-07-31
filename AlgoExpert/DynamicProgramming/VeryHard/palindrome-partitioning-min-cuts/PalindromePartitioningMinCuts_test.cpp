#include "PalindromePartitioningMinCuts.h"
#include "gtest/gtest.h"

namespace
{
	TEST(PalindromePartitioningMinCuts, Case01)
	{
		std::string string = "noonabbad";
		const auto expected = 2;
		const auto output = algoExpert::dynamicProgramming::palindromePartitioningMinCuts(string);
		EXPECT_EQ(expected, output);
	}
	TEST(PalindromePartitioningMinCuts, Case02)
	{
		std::string string = "a";
		const auto expected = 0;
		const auto output = algoExpert::dynamicProgramming::palindromePartitioningMinCuts(string);
		EXPECT_EQ(expected, output);
	}
	TEST(PalindromePartitioningMinCuts, Case03)
	{
		std::string string = "abba";
		const auto expected = 0;
		const auto output = algoExpert::dynamicProgramming::palindromePartitioningMinCuts(string);
		EXPECT_EQ(expected, output);
	}
	TEST(PalindromePartitioningMinCuts, Case04)
	{
		std::string string = "abbba";
		const auto expected = 0;
		const auto output = algoExpert::dynamicProgramming::palindromePartitioningMinCuts(string);
		EXPECT_EQ(expected, output);
	}
	TEST(PalindromePartitioningMinCuts, Case05)
	{
		std::string string = "abb";
		const auto expected = 1;
		const auto output = algoExpert::dynamicProgramming::palindromePartitioningMinCuts(string);
		EXPECT_EQ(expected, output);
	}
	TEST(PalindromePartitioningMinCuts, Case06)
	{
		std::string string = "abbb";
		const auto expected = 1;
		const auto output = algoExpert::dynamicProgramming::palindromePartitioningMinCuts(string);
		EXPECT_EQ(expected, output);
	}
	TEST(PalindromePartitioningMinCuts, Case07)
	{
		std::string string = "abcbm";
		const auto expected = 2;
		const auto output = algoExpert::dynamicProgramming::palindromePartitioningMinCuts(string);
		EXPECT_EQ(expected, output);
	}
	TEST(PalindromePartitioningMinCuts, Case08)
	{
		std::string string = "ababbbabbababa";
		const auto expected = 3;
		const auto output = algoExpert::dynamicProgramming::palindromePartitioningMinCuts(string);
		EXPECT_EQ(expected, output);
	}
	TEST(PalindromePartitioningMinCuts, Case09)
	{
		std::string string = "abbbacecffgbgffab";
		const auto expected = 4;
		const auto output = algoExpert::dynamicProgramming::palindromePartitioningMinCuts(string);
		EXPECT_EQ(expected, output);
	}
	TEST(PalindromePartitioningMinCuts, Case10)
	{
		std::string string = "abcdefghijklmonpqrstuvwxyz";
		const auto expected = 25;
		const auto output = algoExpert::dynamicProgramming::palindromePartitioningMinCuts(string);
		EXPECT_EQ(expected, output);
	}
	TEST(PalindromePartitioningMinCuts, Case11)
	{
		std::string string = "abcdefghijklmracecaronpqrstuvwxyz";
		const auto expected = 26;
		const auto output = algoExpert::dynamicProgramming::palindromePartitioningMinCuts(string);
		EXPECT_EQ(expected, output);
	}
}

