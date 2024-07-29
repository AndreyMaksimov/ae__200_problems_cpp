#include "NumberOfWaysToMakeChange.h"
#include "gtest/gtest.h"

namespace
{
	TEST(NumberOfWaysToMakeChange, Case01)
	{
		std::vector<int> denoms = {1, 5};
		int n = 6;
		const auto expected = 2;
		const auto output = algoExpert::dynamicProgramming::numberOfWaysToMakeChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfWaysToMakeChange, Case02)
	{
		std::vector<int> denoms = {2, 3, 4, 7};
		int n = 0;
		const auto expected = 1;
		const auto output = algoExpert::dynamicProgramming::numberOfWaysToMakeChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfWaysToMakeChange, Case03)
	{
		std::vector<int> denoms = {5};
		int n = 9;
		const auto expected = 0;
		const auto output = algoExpert::dynamicProgramming::numberOfWaysToMakeChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfWaysToMakeChange, Case04)
	{
		std::vector<int> denoms = {2, 4};
		int n = 7;
		const auto expected = 0;
		const auto output = algoExpert::dynamicProgramming::numberOfWaysToMakeChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfWaysToMakeChange, Case05)
	{
		std::vector<int> denoms = {1, 5, 10, 25};
		int n = 4;
		const auto expected = 1;
		const auto output = algoExpert::dynamicProgramming::numberOfWaysToMakeChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfWaysToMakeChange, Case06)
	{
		std::vector<int> denoms = {1, 5, 10, 25};
		int n = 5;
		const auto expected = 2;
		const auto output = algoExpert::dynamicProgramming::numberOfWaysToMakeChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfWaysToMakeChange, Case07)
	{
		std::vector<int> denoms = {1, 5, 10, 25};
		int n = 10;
		const auto expected = 4;
		const auto output = algoExpert::dynamicProgramming::numberOfWaysToMakeChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfWaysToMakeChange, Case08)
	{
		std::vector<int> denoms = {1, 5, 10, 25};
		int n = 25;
		const auto expected = 13;
		const auto output = algoExpert::dynamicProgramming::numberOfWaysToMakeChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfWaysToMakeChange, Case09)
	{
		std::vector<int> denoms = {2, 3, 7};
		int n = 12;
		const auto expected = 4;
		const auto output = algoExpert::dynamicProgramming::numberOfWaysToMakeChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfWaysToMakeChange, Case10)
	{
		std::vector<int> denoms = {2, 3, 4, 7};
		int n = 7;
		const auto expected = 3;
		const auto output = algoExpert::dynamicProgramming::numberOfWaysToMakeChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
}

