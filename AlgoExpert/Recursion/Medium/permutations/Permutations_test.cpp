#include "Permutations.h"
#include "gtest/gtest.h"

namespace
{
	TEST(getPermutations, Case01)
	{
		std::vector<int> array = {1, 2, 3};
		std::vector<std::vector<int>> expected = 
			{
				{1, 2, 3},
				{1, 3, 2},
				{2, 1, 3},
				{2, 3, 1},
				{3, 1, 2},
				{3, 2, 1}
			};
		const auto output = algoExpert::recursion::getPermutations(array);
		EXPECT_EQ(expected, output);
	}
	TEST(getPermutations, Case02)
	{
		std::vector<int> array = {};
		const std::vector<std::vector<int>> expected = {};
		const auto output = algoExpert::recursion::getPermutations(array);
		EXPECT_EQ(expected, output);
	}
	TEST(getPermutations, Case03)
	{
		std::vector<int> array = {1};
		std::vector<std::vector<int>> expected = 
			{
				{1}
			};
		const auto output = algoExpert::recursion::getPermutations(array);
		EXPECT_EQ(expected, output);
	}
	TEST(getPermutations, Case04)
	{
		std::vector<int> array = {1, 2};
		std::vector<std::vector<int>> expected = 
			{
				{1, 2},
				{2, 1}
			};
		const auto output = algoExpert::recursion::getPermutations(array);
		EXPECT_EQ(expected, output);
	}
	TEST(getPermutations, Case05)
	{
		std::vector<int> array = {1, 2, 3, 4};
		std::vector<std::vector<int>> expected = 
			{
				{1, 2, 3, 4},
				{1, 2, 4, 3},
				{1, 3, 2, 4},
				{1, 3, 4, 2},
				{1, 4, 2, 3},
				{1, 4, 3, 2},
				{2, 1, 3, 4},
				{2, 1, 4, 3},
				{2, 3, 1, 4},
				{2, 3, 4, 1},
				{2, 4, 1, 3},
				{2, 4, 3, 1},
				{3, 1, 2, 4},
				{3, 1, 4, 2},
				{3, 2, 1, 4},
				{3, 2, 4, 1},
				{3, 4, 1, 2},
				{3, 4, 2, 1},
				{4, 1, 2, 3},
				{4, 1, 3, 2},
				{4, 2, 1, 3},
				{4, 2, 3, 1},
				{4, 3, 1, 2},
				{4, 3, 2, 1}
			};
		const auto output = algoExpert::recursion::getPermutations(array);
		EXPECT_EQ(expected, output);
	}
	TEST(getPermutations, Case06)
	{
		std::vector<int> array = {1, 2, 3, 4, 5};
		std::vector<std::vector<int>> expected =
			{
				{1, 2, 3, 4, 5},
				{1, 2, 3, 5, 4},
				{1, 2, 4, 3, 5},
				{1, 2, 4, 5, 3},
				{1, 2, 5, 3, 4},
				{1, 2, 5, 4, 3},
				{1, 3, 2, 4, 5},
				{1, 3, 2, 5, 4},
				{1, 3, 4, 2, 5},
				{1, 3, 4, 5, 2},
				{1, 3, 5, 2, 4},
				{1, 3, 5, 4, 2},
				{1, 4, 2, 3, 5},
				{1, 4, 2, 5, 3},
				{1, 4, 3, 2, 5},
				{1, 4, 3, 5, 2},
				{1, 4, 5, 2, 3},
				{1, 4, 5, 3, 2},
				{1, 5, 2, 3, 4},
				{1, 5, 2, 4, 3},
				{1, 5, 3, 2, 4},
				{1, 5, 3, 4, 2},
				{1, 5, 4, 2, 3},
				{1, 5, 4, 3, 2},
				{2, 1, 3, 4, 5},
				{2, 1, 3, 5, 4},
				{2, 1, 4, 3, 5},
				{2, 1, 4, 5, 3},
				{2, 1, 5, 3, 4},
				{2, 1, 5, 4, 3},
				{2, 3, 1, 4, 5},
				{2, 3, 1, 5, 4},
				{2, 3, 4, 1, 5},
				{2, 3, 4, 5, 1},
				{2, 3, 5, 1, 4},
				{2, 3, 5, 4, 1},
				{2, 4, 1, 3, 5},
				{2, 4, 1, 5, 3},
				{2, 4, 3, 1, 5},
				{2, 4, 3, 5, 1},
				{2, 4, 5, 1, 3},
				{2, 4, 5, 3, 1},
				{2, 5, 1, 3, 4},
				{2, 5, 1, 4, 3},
				{2, 5, 3, 1, 4},
				{2, 5, 3, 4, 1},
				{2, 5, 4, 1, 3},
				{2, 5, 4, 3, 1},
				{3, 1, 2, 4, 5},
				{3, 1, 2, 5, 4},
				{3, 1, 4, 2, 5},
				{3, 1, 4, 5, 2},
				{3, 1, 5, 2, 4},
				{3, 1, 5, 4, 2},
				{3, 2, 1, 4, 5},
				{3, 2, 1, 5, 4},
				{3, 2, 4, 1, 5},
				{3, 2, 4, 5, 1},
				{3, 2, 5, 1, 4},
				{3, 2, 5, 4, 1},
				{3, 4, 1, 2, 5},
				{3, 4, 1, 5, 2},
				{3, 4, 2, 1, 5},
				{3, 4, 2, 5, 1},
				{3, 4, 5, 1, 2},
				{3, 4, 5, 2, 1},
				{3, 5, 1, 2, 4},
				{3, 5, 1, 4, 2},
				{3, 5, 2, 1, 4},
				{3, 5, 2, 4, 1},
				{3, 5, 4, 1, 2},
				{3, 5, 4, 2, 1},
				{4, 1, 2, 3, 5},
				{4, 1, 2, 5, 3},
				{4, 1, 3, 2, 5},
				{4, 1, 3, 5, 2},
				{4, 1, 5, 2, 3},
				{4, 1, 5, 3, 2},
				{4, 2, 1, 3, 5},
				{4, 2, 1, 5, 3},
				{4, 2, 3, 1, 5},
				{4, 2, 3, 5, 1},
				{4, 2, 5, 1, 3},
				{4, 2, 5, 3, 1},
				{4, 3, 1, 2, 5},
				{4, 3, 1, 5, 2},
				{4, 3, 2, 1, 5},
				{4, 3, 2, 5, 1},
				{4, 3, 5, 1, 2},
				{4, 3, 5, 2, 1},
				{4, 5, 1, 2, 3},
				{4, 5, 1, 3, 2},
				{4, 5, 2, 1, 3},
				{4, 5, 2, 3, 1},
				{4, 5, 3, 1, 2},
				{4, 5, 3, 2, 1},
				{5, 1, 2, 3, 4},
				{5, 1, 2, 4, 3},
				{5, 1, 3, 2, 4},
				{5, 1, 3, 4, 2},
				{5, 1, 4, 2, 3},
				{5, 1, 4, 3, 2},
				{5, 2, 1, 3, 4},
				{5, 2, 1, 4, 3},
				{5, 2, 3, 1, 4},
				{5, 2, 3, 4, 1},
				{5, 2, 4, 1, 3},
				{5, 2, 4, 3, 1},
				{5, 3, 1, 2, 4},
				{5, 3, 1, 4, 2},
				{5, 3, 2, 1, 4},
				{5, 3, 2, 4, 1},
				{5, 3, 4, 1, 2},
				{5, 3, 4, 2, 1},
				{5, 4, 1, 2, 3},
				{5, 4, 1, 3, 2},
				{5, 4, 2, 1, 3},
				{5, 4, 2, 3, 1},
				{5, 4, 3, 1, 2},
				{5, 4, 3, 2, 1}
			};
		auto output = algoExpert::recursion::getPermutations(array);
		EXPECT_EQ(expected, output);
	}
}
