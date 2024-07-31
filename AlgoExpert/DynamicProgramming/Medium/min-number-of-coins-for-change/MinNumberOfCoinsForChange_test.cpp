#include "MinNumberOfCoinsForChange.h"
#include "gtest/gtest.h"

namespace
{
	TEST(MinNumberOfCoinsForChange, Case01)
	{
		std::vector<int> denoms = {1, 5, 10};
		int n = 7;
		const auto expected = 3;
		const auto output = algoExpert::dynamicProgramming::minNumberOfCoinsForChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfCoinsForChange, Case02)
	{
		std::vector<int> denoms = {1, 10, 5};
		int n = 7;
		const auto expected = 3;
		const auto output = algoExpert::dynamicProgramming::minNumberOfCoinsForChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfCoinsForChange, Case03)
	{
		std::vector<int> denoms = {10, 1, 5};
		int n = 7;
		const auto expected = 3;
		const auto output = algoExpert::dynamicProgramming::minNumberOfCoinsForChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfCoinsForChange, Case04)
	{
		std::vector<int> denoms = {1, 2, 3};
		int n = 0;
		const auto expected = 0;
		const auto output = algoExpert::dynamicProgramming::minNumberOfCoinsForChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfCoinsForChange, Case05)
	{
		std::vector<int> denoms = {2, 1};
		int n = 3;
		const auto expected = 2;
		const auto output = algoExpert::dynamicProgramming::minNumberOfCoinsForChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfCoinsForChange, Case06)
	{
		std::vector<int> denoms = {1, 5, 10};
		int n = 4;
		const auto expected = 4;
		const auto output = algoExpert::dynamicProgramming::minNumberOfCoinsForChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfCoinsForChange, Case07)
	{
		std::vector<int> denoms = {1, 5, 10};
		int n = 10;
		const auto expected = 1;
		const auto output = algoExpert::dynamicProgramming::minNumberOfCoinsForChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfCoinsForChange, Case08)
	{
		std::vector<int> denoms = {1, 5, 10};
		int n = 11;
		const auto expected = 2;
		const auto output = algoExpert::dynamicProgramming::minNumberOfCoinsForChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfCoinsForChange, Case09)
	{
		std::vector<int> denoms = {1, 5, 10};
		int n = 24;
		const auto expected = 6;
		const auto output = algoExpert::dynamicProgramming::minNumberOfCoinsForChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfCoinsForChange, Case10)
	{
		std::vector<int> denoms = {1, 5, 10};
		int n = 25;
		const auto expected = 3;
		const auto output = algoExpert::dynamicProgramming::minNumberOfCoinsForChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfCoinsForChange, Case11)
	{
		std::vector<int> denoms = {2, 4};
		int n = 7;
		const auto expected = -1;
		const auto output = algoExpert::dynamicProgramming::minNumberOfCoinsForChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfCoinsForChange, Case12)
	{
		std::vector<int> denoms = {3, 7};
		int n = 7;
		const auto expected = 1;
		const auto output = algoExpert::dynamicProgramming::minNumberOfCoinsForChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfCoinsForChange, Case13)
	{
		std::vector<int> denoms = {3, 5};
		int n = 9;
		const auto expected = 3;
		const auto output = algoExpert::dynamicProgramming::minNumberOfCoinsForChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfCoinsForChange, Case14)
	{
		std::vector<int> denoms = {3, 4, 5};
		int n = 9;
		const auto expected = 2;
		const auto output = algoExpert::dynamicProgramming::minNumberOfCoinsForChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfCoinsForChange, Case15)
	{
		std::vector<int> denoms = {39, 45, 130, 40, 4, 1};
		int n = 135;
		const auto expected = 3;
		const auto output = algoExpert::dynamicProgramming::minNumberOfCoinsForChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfCoinsForChange, Case16)
	{
		std::vector<int> denoms = {39, 45, 130, 40, 4, 1, 60, 75};
		int n = 135;
		const auto expected = 2;
		const auto output = algoExpert::dynamicProgramming::minNumberOfCoinsForChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
	TEST(MinNumberOfCoinsForChange, Case17)
	{
		std::vector<int> denoms = {1, 3, 4};
		int n = 10;
		const auto expected = 3;
		const auto output = algoExpert::dynamicProgramming::minNumberOfCoinsForChange(n, denoms);
		EXPECT_EQ(expected, output);
	}
}

