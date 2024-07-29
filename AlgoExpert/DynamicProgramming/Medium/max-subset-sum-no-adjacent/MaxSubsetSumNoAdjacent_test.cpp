#include "MaxSubsetSumNoAdjacent.h"
#include "gtest/gtest.h"

namespace
{
	TEST(MaxSubsetSumNoAdjacent, Case01)
	{
		std::vector<int> array = {75, 105, 120, 75, 90, 135};
		const auto expected = 330;
		const auto output = algoExpert::dynamicProgramming::maxSubsetSumNoAdjacent(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxSubsetSumNoAdjacent, Case02)
	{
		std::vector<int> array = {};
		const auto expected = 0;
		const auto output = algoExpert::dynamicProgramming::maxSubsetSumNoAdjacent(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxSubsetSumNoAdjacent, Case03)
	{
		std::vector<int> array = {1};
		const auto expected = 1;
		const auto output = algoExpert::dynamicProgramming::maxSubsetSumNoAdjacent(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxSubsetSumNoAdjacent, Case04)
	{
		std::vector<int> array = {1, 2};
		const auto expected = 2;
		const auto output = algoExpert::dynamicProgramming::maxSubsetSumNoAdjacent(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxSubsetSumNoAdjacent, Case05)
	{
		std::vector<int> array = {1, 2, 3};
		const auto expected = 4;
		const auto output = algoExpert::dynamicProgramming::maxSubsetSumNoAdjacent(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxSubsetSumNoAdjacent, Case06)
	{
		std::vector<int> array = {1, 15, 3};
		const auto expected = 15;
		const auto output = algoExpert::dynamicProgramming::maxSubsetSumNoAdjacent(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxSubsetSumNoAdjacent, Case07)
	{
		std::vector<int> array = {7, 10, 12, 7, 9, 14};
		const auto expected = 33;
		const auto output = algoExpert::dynamicProgramming::maxSubsetSumNoAdjacent(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxSubsetSumNoAdjacent, Case08)
	{
		std::vector<int> array = {4, 3, 5, 200, 5, 3};
		const auto expected = 207;
		const auto output = algoExpert::dynamicProgramming::maxSubsetSumNoAdjacent(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxSubsetSumNoAdjacent, Case09)
	{
		std::vector<int> array = {10, 5, 20, 25, 15, 5, 5, 15};
		const auto expected = 60;
		const auto output = algoExpert::dynamicProgramming::maxSubsetSumNoAdjacent(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxSubsetSumNoAdjacent, Case10)
	{
		std::vector<int> array = {10, 5, 20, 25, 15, 5, 5, 15, 3, 15, 5, 5, 15};
		const auto expected = 90;
		const auto output = algoExpert::dynamicProgramming::maxSubsetSumNoAdjacent(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxSubsetSumNoAdjacent, Case11)
	{
		std::vector<int> array = {125, 210, 250, 120, 150, 300};
		const auto expected = 675;
		const auto output = algoExpert::dynamicProgramming::maxSubsetSumNoAdjacent(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxSubsetSumNoAdjacent, Case12)
	{
		std::vector<int> array = {30, 25, 50, 55, 100};
		const auto expected = 180;
		const auto output = algoExpert::dynamicProgramming::maxSubsetSumNoAdjacent(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxSubsetSumNoAdjacent, Case13)
	{
		std::vector<int> array = {30, 25, 50, 55, 100, 120};
		const auto expected = 205;
		const auto output = algoExpert::dynamicProgramming::maxSubsetSumNoAdjacent(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxSubsetSumNoAdjacent, Case14)
	{
		std::vector<int> array = {7, 10, 12, 7, 9, 14, 15, 16, 25, 20, 4};
		const auto expected = 72;
		const auto output = algoExpert::dynamicProgramming::maxSubsetSumNoAdjacent(array);
		EXPECT_EQ(expected, output);
	}
}
