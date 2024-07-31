#include "MaxProfitWithKTransactions.h"
#include "gtest/gtest.h"

namespace
{
	TEST(MaxProfitWithKTransactions, Case03)
	{
		int k = 1;
		std::vector<int> prices = {1};
		const auto expected = 0;
		const auto output = algoExpert::dynamicProgramming::maxProfitWithKTransactions(prices, k);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxProfitWithKTransactions, Case04)
	{
		int k = 1;
		std::vector<int> prices = {1, 10};
		const auto expected = 9;
		const auto output = algoExpert::dynamicProgramming::maxProfitWithKTransactions(prices, k);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxProfitWithKTransactions, Case05)
	{
		int k = 3;
		std::vector<int> prices = {1, 10};
		const auto expected = 9;
		const auto output = algoExpert::dynamicProgramming::maxProfitWithKTransactions(prices, k);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxProfitWithKTransactions, Case06)
	{
		int k = 1;
		std::vector<int> prices = {3, 2, 5, 7, 1, 3, 7};
		const auto expected = 6;
		const auto output = algoExpert::dynamicProgramming::maxProfitWithKTransactions(prices, k);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxProfitWithKTransactions, Case07)
	{
		int k = 3;
		std::vector<int> prices = {5, 11, 3, 50, 60, 90};
		const auto expected = 93;
		const auto output = algoExpert::dynamicProgramming::maxProfitWithKTransactions(prices, k);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxProfitWithKTransactions, Case08)
	{
		int k = 2;
		std::vector<int> prices = {5, 11, 3, 50, 40, 90};
		const auto expected = 97;
		const auto output = algoExpert::dynamicProgramming::maxProfitWithKTransactions(prices, k);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxProfitWithKTransactions, Case09)
	{
		int k = 3;
		std::vector<int> prices = {5, 11, 3, 50, 40, 90};
		const auto expected = 103;
		const auto output = algoExpert::dynamicProgramming::maxProfitWithKTransactions(prices, k);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxProfitWithKTransactions, Case10)
	{
		int k = 2;
		std::vector<int> prices = {50, 25, 12, 4, 3, 10, 1, 100};
		const auto expected = 106;
		const auto output = algoExpert::dynamicProgramming::maxProfitWithKTransactions(prices, k);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxProfitWithKTransactions, Case11)
	{
		int k = 5;
		std::vector<int> prices = {100, 99, 98, 97, 1};
		const auto expected = 0;
		const auto output = algoExpert::dynamicProgramming::maxProfitWithKTransactions(prices, k);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxProfitWithKTransactions, Case12)
	{
		int k = 5;
		std::vector<int> prices = {1, 100, 2, 200, 3, 300, 4, 400, 5, 500};
		const auto expected = 1485;
		const auto output = algoExpert::dynamicProgramming::maxProfitWithKTransactions(prices, k);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxProfitWithKTransactions, Case13)
	{
		int k = 5;
		std::vector<int> prices = {1, 100, 101, 200, 201, 300, 301, 400, 401, 500};
		const auto expected = 499;
		const auto output = algoExpert::dynamicProgramming::maxProfitWithKTransactions(prices, k);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxProfitWithKTransactions, Case14)
	{
		int k = 4;
		std::vector<int> prices = {1, 25, 24, 23, 12, 36, 14, 40, 31, 41, 5};
		const auto expected = 84;
		const auto output = algoExpert::dynamicProgramming::maxProfitWithKTransactions(prices, k);
		EXPECT_EQ(expected, output);
	}
	TEST(MaxProfitWithKTransactions, Case15)
	{
		int k = 2;
		std::vector<int> prices = {1, 25, 24, 23, 12, 36, 14, 40, 31, 41, 5};
		const auto expected = 62;
		const auto output = algoExpert::dynamicProgramming::maxProfitWithKTransactions(prices, k);
		EXPECT_EQ(expected, output);
	}
}
