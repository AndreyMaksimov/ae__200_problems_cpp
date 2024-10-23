#include "Powerset.h"
#include "gtest/gtest.h"

namespace
{
	TEST(Powerset, Case01)
	{
		std::vector<int> array = {1, 2, 3};
		std::vector<std::vector<int>> expected =
			{
				{},
				{1},
				{2},
				{1, 2},
				{3},
				{1, 3},
				{2, 3},
				{1, 2, 3}
			};
		const auto output = algoExpert::recursion::powerset(array);
		EXPECT_EQ(expected, output);
	}
	TEST(Powerset, Case02)
	{
		std::vector<int> array = {};
		std::vector<std::vector<int>> expected =
			{
				{}
			};
		const auto output = algoExpert::recursion::powerset(array);
		EXPECT_EQ(expected, output);
	}
	TEST(Powerset, Case03)
	{
		std::vector<int> array = {1};
		std::vector<std::vector<int>> expected =
			{
				{},
				{1}
			};
		const auto output = algoExpert::recursion::powerset(array);
		EXPECT_EQ(expected, output);
	}
	TEST(Powerset, Case04)
	{
		std::vector<int> array = {1, 2};
		std::vector<std::vector<int>> expected =
			{
				{},
				{1},
				{2},
				{1, 2}
			};
		const auto output = algoExpert::recursion::powerset(array);
		EXPECT_EQ(expected, output);
	}
	TEST(Powerset, Case05)
	{
		std::vector<int> array = {1, 2, 3, 4};
		std::vector<std::vector<int>> expected =
			{
				{},
				{1},
				{2},
				{1, 2},
				{3},
				{1, 3},
				{2, 3},
				{1, 2, 3},
				{4},
				{1, 4},
				{2, 4},
				{1, 2, 4},
				{3, 4},
				{1, 3, 4},
				{2, 3, 4},
				{1, 2, 3, 4}
			};
		const auto output = algoExpert::recursion::powerset(array);
		EXPECT_EQ(expected, output);
	}
	TEST(Powerset, Case06)
	{
		std::vector<int> array = {1, 2, 3, 4, 5};
		std::vector<std::vector<int>> expected =
			{
				{},
				{1},
				{2},
				{1, 2},
				{3},
				{1, 3},
				{2, 3},
				{1, 2, 3},
				{4},
				{1, 4},
				{2, 4},
				{1, 2, 4},
				{3, 4},
				{1, 3, 4},
				{2, 3, 4},
				{1, 2, 3, 4},
				{5},
				{1, 5},
				{2, 5},
				{1, 2, 5},
				{3, 5},
				{1, 3, 5},
				{2, 3, 5},
				{1, 2, 3, 5},
				{4, 5},
				{1, 4, 5},
				{2, 4, 5},
				{1, 2, 4, 5},
				{3, 4, 5},
				{1, 3, 4, 5},
				{2, 3, 4, 5},
				{1, 2, 3, 4, 5}
			};
		const auto output = algoExpert::recursion::powerset(array);
		EXPECT_EQ(expected, output);
	}
	TEST(Powerset, Case07)
	{
		std::vector<int> array = {1, 2, 3, 4, 5, 6};
		std::vector<std::vector<int>> expected =
			{
				{},
				{1},
				{2},
				{1, 2},
				{3},
				{1, 3},
				{2, 3},
				{1, 2, 3},
				{4},
				{1, 4},
				{2, 4},
				{1, 2, 4},
				{3, 4},
				{1, 3, 4},
				{2, 3, 4},
				{1, 2, 3, 4},
				{5},
				{1, 5},
				{2, 5},
				{1, 2, 5},
				{3, 5},
				{1, 3, 5},
				{2, 3, 5},
				{1, 2, 3, 5},
				{4, 5},
				{1, 4, 5},
				{2, 4, 5},
				{1, 2, 4, 5},
				{3, 4, 5},
				{1, 3, 4, 5},
				{2, 3, 4, 5},
				{1, 2, 3, 4, 5},
				{6},
				{1, 6},
				{2, 6},
				{1, 2, 6},
				{3, 6},
				{1, 3, 6},
				{2, 3, 6},
				{1, 2, 3, 6},
				{4, 6},
				{1, 4, 6},
				{2, 4, 6},
				{1, 2, 4, 6},
				{3, 4, 6},
				{1, 3, 4, 6},
				{2, 3, 4, 6},
				{1, 2, 3, 4, 6},
				{5, 6},
				{1, 5, 6},
				{2, 5, 6},
				{1, 2, 5, 6},
				{3, 5, 6},
				{1, 3, 5, 6},
				{2, 3, 5, 6},
				{1, 2, 3, 5, 6},
				{4, 5, 6},
				{1, 4, 5, 6},
				{2, 4, 5, 6},
				{1, 2, 4, 5, 6},
				{3, 4, 5, 6},
				{1, 3, 4, 5, 6},
				{2, 3, 4, 5, 6},
				{1, 2, 3, 4, 5, 6}
			};
		const auto output = algoExpert::recursion::powerset(array);
		EXPECT_EQ(expected, output);
	}
}
