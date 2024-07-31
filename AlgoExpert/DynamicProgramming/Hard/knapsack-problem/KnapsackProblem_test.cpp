#include "KnapsackProblem.h"
#include "gtest/gtest.h"

namespace
{
	TEST(KnapsackProblem, Case01)
	{
		int capacity = 10;
		std::vector<std::vector<int>> items =
			{
				{1, 2},
				{4, 3},
				{5, 6},
				{6, 7}
			};
		const std::vector<std::vector<int>> expected = {{10}, {1, 3}};
		const auto output = algoExpert::dynamicProgramming::knapsackProblem(items, capacity);
		EXPECT_EQ(expected, output);
	}
	TEST(KnapsackProblem, Case02)
	{
		int capacity = 11;
		std::vector<std::vector<int>> items =
			{
				{1, 2},
				{4, 3},
				{5, 6},
				{6, 9}
			};
		const std::vector<std::vector<int>> expected = {{10}, {0, 1, 2}};
		const auto output = algoExpert::dynamicProgramming::knapsackProblem(items, capacity);
		EXPECT_EQ(expected, output);
	}
	TEST(KnapsackProblem, Case03)
	{
		int capacity = 200;
		std::vector<std::vector<int>> items =
			{
				{465, 100},
				{400, 85},
				{255, 55},
				{350, 45},
				{650, 130},
				{1000, 190},
				{455, 100},
				{100, 25},
				{1200, 190},
				{320, 65},
				{750, 100},
				{50, 45},
				{550, 65},
				{100, 50},
				{600, 70},
				{240, 40}
			};
		const std::vector<std::vector<int>> expected = {{1500}, {3, 12, 14}};
		const auto output = algoExpert::dynamicProgramming::knapsackProblem(items, capacity);
		EXPECT_EQ(expected, output);
	}
	TEST(KnapsackProblem, Case04)
	{
		int capacity = 200;
		std::vector<std::vector<int>> items =
			{
				{465, 100},
				{400, 85},
				{255, 55},
				{350, 45},
				{650, 130},
				{1000, 190},
				{455, 100},
				{100, 25},
				{1200, 190},
				{320, 65},
				{750, 100},
				{50, 45},
				{550, 65},
				{100, 50},
				{600, 70},
				{255, 40}
			};
		const std::vector<std::vector<int>> expected = {{1505}, {7, 12, 14, 15}};
		const auto output = algoExpert::dynamicProgramming::knapsackProblem(items, capacity);
		EXPECT_EQ(expected, output);
	}
	TEST(KnapsackProblem, Case05)
	{
		int capacity = 100;
		std::vector<std::vector<int>> items =
			{
				{2, 1},
				{70, 70},
				{30, 30},
				{69, 69},
				{100, 100}
			};
		const std::vector<std::vector<int>> expected = {{101}, {0, 2, 3}};
		const auto output = algoExpert::dynamicProgramming::knapsackProblem(items, capacity);
		EXPECT_EQ(expected, output);
	}
	TEST(KnapsackProblem, Case06)
	{
		int capacity = 100;
		std::vector<std::vector<int>> items =
			{
				{1, 2},
				{70, 70},
				{30, 30},
				{69, 69},
				{99, 100}
			};
		const std::vector<std::vector<int>> expected = {{100}, {1, 2}};
		const auto output = algoExpert::dynamicProgramming::knapsackProblem(items, capacity);
		EXPECT_EQ(expected, output);
	}
	TEST(KnapsackProblem, Case07)
	{
		int capacity = 0;
		std::vector<std::vector<int>> items =
			{
				{1, 2},
				{70, 70},
				{30, 30},
				{69, 69},
				{100, 100}
			};
		const std::vector<std::vector<int>> expected = {{0}, {}};
		const auto output = algoExpert::dynamicProgramming::knapsackProblem(items, capacity);
		EXPECT_EQ(expected, output);
	}
}
