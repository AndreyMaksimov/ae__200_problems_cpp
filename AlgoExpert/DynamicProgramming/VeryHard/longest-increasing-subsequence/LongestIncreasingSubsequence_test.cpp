#include "LongestIncreasingSubsequence.h"
#include "gtest/gtest.h"

#if 0
namespace
{
	TEST(LongestIncreasingSubsequence, Case01)
	{
		std::vector<int> array = {5, 7, -24, 12, 10, 2, 3, 12, 5, 6, 35};
		const std::vector<int> expected = {-24, 2, 3, 5, 6, 35};
		const auto output = algoExpert::dynamicProgramming::longestIncreasingSubsequence(array);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestIncreasingSubsequence, Case02)
	{
		std::vector<int> array = {-1};
		const std::vector<int> expected = {-1};
		const auto output = algoExpert::dynamicProgramming::longestIncreasingSubsequence(array);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestIncreasingSubsequence, Case03)
	{
		std::vector<int> array = {-1, 2};
		const std::vector<int> expected = {-1, 2};
		const auto output = algoExpert::dynamicProgramming::longestIncreasingSubsequence(array);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestIncreasingSubsequence, Case04)
	{
		std::vector<int> array = {-1, 2, 1, 2};
		const std::vector<int> expected = {-1, 1, 2};
		const auto output = algoExpert::dynamicProgramming::longestIncreasingSubsequence(array);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestIncreasingSubsequence, Case05)
	{
		std::vector<int> array = {1, 5, -1, 10};
		const std::vector<int> expected = {1, 5, 10};
		const auto output = algoExpert::dynamicProgramming::longestIncreasingSubsequence(array);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestIncreasingSubsequence, Case06)
	{
		std::vector<int> array = {1, 5, -1, 0, 6, 2, 4};
		const std::vector<int> expected = {-1, 0, 2, 4};
		const auto output = algoExpert::dynamicProgramming::longestIncreasingSubsequence(array);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestIncreasingSubsequence, Case07)
	{
		std::vector<int> array = {3, 4, -1};
		const std::vector<int> expected = {3, 4};
		const auto output = algoExpert::dynamicProgramming::longestIncreasingSubsequence(array);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestIncreasingSubsequence, Case08)
	{
		std::vector<int> array = {29, 2, 32, 12, 30, 31};
		const std::vector<int> expected = {2, 12, 30, 31};
		const auto output = algoExpert::dynamicProgramming::longestIncreasingSubsequence(array);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestIncreasingSubsequence, Case09)
	{
		std::vector<int> array = {10, 22, 9, 33, 21, 61, 41, 60, 80};
		const std::vector<int> expected = {10, 22, 33, 41, 60, 80};
		const auto output = algoExpert::dynamicProgramming::longestIncreasingSubsequence(array);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestIncreasingSubsequence, Case10)
	{
		std::vector<int> array = {100, 1, 2, 3, 4, 101};
		const std::vector<int> expected = {1, 2, 3, 4, 101};
		const auto output = algoExpert::dynamicProgramming::longestIncreasingSubsequence(array);
		EXPECT_EQ(expected, output);
	}
}
#endif
