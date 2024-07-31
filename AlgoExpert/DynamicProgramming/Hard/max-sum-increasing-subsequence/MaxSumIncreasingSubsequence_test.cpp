#include "MaxSumIncreasingSubsequence.h"
#include "gtest/gtest.h"

namespace
{
	TEST(MaxSumIncreasingSubsequence, Case01)
	{
		std::vector<int> array = {10, 70, 20, 30, 50, 11, 30};
		const std::vector<std::vector<int>> expected = {{110}, {10, 20, 30, 50}};
		const auto output = algoExpert::dynamicProgramming::maxSumIncreasingSubsequence(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxSumIncreasingSubsequence, Case02)
	{
		std::vector<int> array = {1};
		const std::vector<std::vector<int>> expected = {{1}, {1}};
		const auto output = algoExpert::dynamicProgramming::maxSumIncreasingSubsequence(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxSumIncreasingSubsequence, Case03)
	{
		std::vector<int> array = {-1};
		const std::vector<std::vector<int>> expected = {{-1}, {-1}};
		const auto output = algoExpert::dynamicProgramming::maxSumIncreasingSubsequence(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxSumIncreasingSubsequence, Case04)
	{
		std::vector<int> array = {-1, 1};
		const std::vector<std::vector<int>> expected = {{1}, {1}};
		const auto output = algoExpert::dynamicProgramming::maxSumIncreasingSubsequence(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxSumIncreasingSubsequence, Case05)
	{
		std::vector<int> array = {5, 4, 3, 2, 1};
		const std::vector<std::vector<int>> expected = {{5}, {5}};
		const auto output = algoExpert::dynamicProgramming::maxSumIncreasingSubsequence(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxSumIncreasingSubsequence, Case06)
	{
		std::vector<int> array = {1, 2, 3, 4, 5};
		const std::vector<std::vector<int>> expected = {{15}, {1, 2, 3, 4, 5}};
		const auto output = algoExpert::dynamicProgramming::maxSumIncreasingSubsequence(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxSumIncreasingSubsequence, Case07)
	{
		std::vector<int> array = {-5, -4, -3, -2, -1};
		const std::vector<std::vector<int>> expected = {{-1}, {-1}};
		const auto output = algoExpert::dynamicProgramming::maxSumIncreasingSubsequence(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxSumIncreasingSubsequence, Case08)
	{
		std::vector<int> array = {8, 12, 2, 3, 15, 5, 7};
		const std::vector<std::vector<int>> expected = { 35, {8, 12, 15}};
		const auto output = algoExpert::dynamicProgramming::maxSumIncreasingSubsequence(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxSumIncreasingSubsequence, Case09)
	{
		std::vector<int> array = {10, 15, 4, 5, 11, 14, 31, 25, 31, 23, 25, 31, 50};
		const std::vector<std::vector<int>> expected = { 164, {10, 11, 14, 23, 25, 31, 50}};
		const auto output = algoExpert::dynamicProgramming::maxSumIncreasingSubsequence(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxSumIncreasingSubsequence, Case10)
	{
		std::vector<int> array = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		const std::vector<std::vector<int>> expected = { 45, {1, 2, 3, 4, 5, 6, 7, 8, 9}};
		const auto output = algoExpert::dynamicProgramming::maxSumIncreasingSubsequence(array);
		EXPECT_EQ(expected, output);
	}
}
