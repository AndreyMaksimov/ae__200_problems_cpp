#include "MinNumberOfJumps.h"
#include "gtest/gtest.h"

namespace
{
	TEST(MinNumberOfJumps, Case01)
	{
		std::vector<int> array = {3, 4, 2, 1, 2, 3, 7, 1, 1, 1, 3};
		const auto expected = 4;
		const auto output = algoExpert::dynamicProgramming::minNumberOfJumps(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfJumps, Case02)
	{
		std::vector<int> array = {1};
		const auto expected = 0;
		const auto output = algoExpert::dynamicProgramming::minNumberOfJumps(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfJumps, Case03)
	{
		std::vector<int> array = {1, 1};
		const auto expected = 1;
		const auto output = algoExpert::dynamicProgramming::minNumberOfJumps(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfJumps, Case04)
	{
		std::vector<int> array = {3, 1};
		const auto expected = 1;
		const auto output = algoExpert::dynamicProgramming::minNumberOfJumps(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfJumps, Case05)
	{
		std::vector<int> array = {1, 1, 1};
		const auto expected = 2;
		const auto output = algoExpert::dynamicProgramming::minNumberOfJumps(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfJumps, Case06)
	{
		std::vector<int> array = {2, 1, 1};
		const auto expected = 1;
		const auto output = algoExpert::dynamicProgramming::minNumberOfJumps(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfJumps, Case07)
	{
		std::vector<int> array = {2, 1, 2, 3, 1};
		const auto expected = 2;
		const auto output = algoExpert::dynamicProgramming::minNumberOfJumps(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfJumps, Case08)
	{
		std::vector<int> array = {2, 1, 2, 3, 1, 1, 1};
		const auto expected = 3;
		const auto output = algoExpert::dynamicProgramming::minNumberOfJumps(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfJumps, Case09)
	{
		std::vector<int> array = {2, 1, 2, 2, 1, 1, 1};
		const auto expected = 4;
		const auto output = algoExpert::dynamicProgramming::minNumberOfJumps(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfJumps, Case10)
	{
		std::vector<int> array = {3, 4, 2, 1, 2, 3, 7, 1, 1, 1, 3, 2, 6, 2, 1, 1, 1, 1};
		const auto expected = 5;
		const auto output = algoExpert::dynamicProgramming::minNumberOfJumps(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfJumps, Case11)
	{
		std::vector<int> array = {3, 4, 2, 1, 2, 3, 7, 1, 1, 1, 3, 2, 3, 2, 1, 1, 1, 1};
		const auto expected = 7;
		const auto output = algoExpert::dynamicProgramming::minNumberOfJumps(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfJumps, Case12)
	{
		std::vector<int> array = {3, 10, 2, 1, 2, 3, 7, 1, 1, 1, 3, 2, 3, 2, 1, 1, 1, 1};
		const auto expected = 6;
		const auto output = algoExpert::dynamicProgramming::minNumberOfJumps(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfJumps, Case13)
	{
		std::vector<int> array = {3, 12, 2, 1, 2, 3, 7, 1, 1, 1, 3, 2, 3, 2, 1, 1, 1, 1};
		const auto expected = 5;
		const auto output = algoExpert::dynamicProgramming::minNumberOfJumps(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfJumps, Case14)
	{
		std::vector<int> array = {3, 12, 2, 1, 2, 3, 15, 1, 1, 1, 3, 2, 3, 2, 1, 1, 1, 1};
		const auto expected = 3;
		const auto output = algoExpert::dynamicProgramming::minNumberOfJumps(array);
		EXPECT_EQ(expected, output);
	}
}

