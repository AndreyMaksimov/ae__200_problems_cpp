#include "FindThreeLargestNumbers.h"
#include "gtest/gtest.h"

namespace
{
	TEST(FindThreeLargestNumbers, Case01)
	{
		std::vector<int> array = {141, 1, 17, -7, -17, -27, 18, 541, 8, 7, 7};
		const std::vector<int> expected = {18, 141, 541};
		const auto output = algoExpert::searching::findThreeLargestNumbers(array);
		EXPECT_EQ(expected, output);
	}
	TEST(FindThreeLargestNumbers, Case02)
	{
		std::vector<int> array = {55, 7, 8};
		const std::vector<int> expected = {7, 8, 55};
		const auto output = algoExpert::searching::findThreeLargestNumbers(array);
		EXPECT_EQ(expected, output);
	}
	TEST(FindThreeLargestNumbers, Case03)
	{
		std::vector<int> array = {55, 43, 11, 3, -3, 10};
		const std::vector<int> expected = {11, 43, 55};
		const auto output = algoExpert::searching::findThreeLargestNumbers(array);
		EXPECT_EQ(expected, output);
	}
	TEST(FindThreeLargestNumbers, Case04)
	{
		std::vector<int> array = {7, 8, 3, 11, 43, 55};
		const std::vector<int> expected = {11, 43, 55};
		const auto output = algoExpert::searching::findThreeLargestNumbers(array);
		EXPECT_EQ(expected, output);
	}
	TEST(FindThreeLargestNumbers, Case05)
	{
		std::vector<int> array = {55, 7, 8, 3, 43, 11};
		const std::vector<int> expected = {11, 43, 55};
		const auto output = algoExpert::searching::findThreeLargestNumbers(array);
		EXPECT_EQ(expected, output);
	}
	TEST(FindThreeLargestNumbers, Case06)
	{
		std::vector<int> array = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
		const std::vector<int> expected = {7, 7, 7};
		const auto output = algoExpert::searching::findThreeLargestNumbers(array);
		EXPECT_EQ(expected, output);
	}
	TEST(FindThreeLargestNumbers, Case07)
	{
		std::vector<int> array = {7, 7, 7, 7, 7, 7, 8, 7, 7, 7, 7};
		const std::vector<int> expected = {7, 7, 8};
		const auto output = algoExpert::searching::findThreeLargestNumbers(array);
		EXPECT_EQ(expected, output);
	}
	TEST(FindThreeLargestNumbers, Case08)
	{
		std::vector<int> array = {-1, -2, -3, -7, -17, -27, -18, -541, -8, -7, 7};
		const std::vector<int> expected = {-2, -1, 7};
		const auto output = algoExpert::searching::findThreeLargestNumbers(array);
		EXPECT_EQ(expected, output);
	}
}

