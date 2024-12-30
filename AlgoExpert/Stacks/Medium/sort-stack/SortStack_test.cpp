#include "SortStack.h"
#include "gtest/gtest.h"

namespace
{
	TEST(SortStack, Case01)
	{
		std::vector<int> stack = {-5, 2, -2, 4, 3, 1};
		const std::vector<int> expected = {-5, -2, 1, 2, 3, 4};
		const auto output = algoExpert::stacks::sortStack(stack);
		EXPECT_EQ(expected, output);
	}
	TEST(SortStack, Case02)
	{
		std::vector<int> stack = {3, 4, 5, 1, 2};
		const std::vector<int> expected = {1, 2, 3, 4, 5};
		const auto output = algoExpert::stacks::sortStack(stack);
		EXPECT_EQ(expected, output);
	}
	TEST(SortStack, Case03)
	{
		std::vector<int> stack = {0, -2, 3, 4, 1, -9, 8};
		const std::vector<int> expected = {-9, -2, 0, 1, 3, 4, 8};
		const auto output = algoExpert::stacks::sortStack(stack);
		EXPECT_EQ(expected, output);
	}
	TEST(SortStack, Case04)
	{
		std::vector<int> stack = {2, 4, 22, 1, -9, 0, 6, 23, -2, 1};
		const std::vector<int> expected = {-9, -2, 0, 1, 1, 2, 4, 6, 22, 23};
		const auto output = algoExpert::stacks::sortStack(stack);
		EXPECT_EQ(expected, output);
	}
	TEST(SortStack, Case05)
	{
		std::vector<int> stack = {3, 4, 5, 1, 2};
		const std::vector<int> expected = {1, 2, 3, 4, 5};
		const auto output = algoExpert::stacks::sortStack(stack);
		EXPECT_EQ(expected, output);
	}
	TEST(SortStack, Case06)
	{
		std::vector<int> stack = {-1, 0, 2, 3, 4, 1, 1, 1};
		const std::vector<int> expected = {-1, 0, 1, 1, 1, 2, 3, 4};
		const auto output = algoExpert::stacks::sortStack(stack);
		EXPECT_EQ(expected, output);
	}
	TEST(SortStack, Case07)
	{
		std::vector<int> stack = {};
		const std::vector<int> expected = {};
		const auto output = algoExpert::stacks::sortStack(stack);
		EXPECT_EQ(expected, output);
	}
	TEST(SortStack, Case08)
	{
		std::vector<int> stack = {1};
		const std::vector<int> expected = {1};
		const auto output = algoExpert::stacks::sortStack(stack);
		EXPECT_EQ(expected, output);
	}
	TEST(SortStack, Case09)
	{
		std::vector<int> stack = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
		const std::vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		const auto output = algoExpert::stacks::sortStack(stack);
		EXPECT_EQ(expected, output);
	}
	TEST(SortStack, Case10)
	{
		std::vector<int> stack = {9, 2, 8, 1};
		const std::vector<int> expected = {1, 2, 8, 9};
		const auto output = algoExpert::stacks::sortStack(stack);
		EXPECT_EQ(expected, output);
	}
	TEST(SortStack, Case11)
	{
		std::vector<int> stack = {2, 33, 44, 2, -9, -7, -5, -2, -2, -2, 0};
		const std::vector<int> expected = {-9, -7, -5, -2, -2, -2, 0, 2, 2, 33, 44};
		const auto output = algoExpert::stacks::sortStack(stack);
		EXPECT_EQ(expected, output);
	}
	TEST(SortStack, Case12)
	{
		std::vector<int> stack = {3, 3, 3, 3, 3, 3};
		const std::vector<int> expected = {3, 3, 3, 3, 3, 3};
		const auto output = algoExpert::stacks::sortStack(stack);
		EXPECT_EQ(expected, output);
	}
	TEST(SortStack, Case13)
	{
		std::vector<int> stack = {0, 0};
		const std::vector<int> expected = {0, 0};
		const auto output = algoExpert::stacks::sortStack(stack);
		EXPECT_EQ(expected, output);
	}
	TEST(SortStack, Case14)
	{
		std::vector<int> stack = {2, 22, 222, 3, 33, 33, 9, 2, 3, 312, -9, -2, 3};
		const std::vector<int> expected = {-9, -2, 2, 2, 3, 3, 3, 9, 22, 33, 33, 222, 312};
		const auto output = algoExpert::stacks::sortStack(stack);
		EXPECT_EQ(expected, output);
	}
	TEST(SortStack, Case15)
	{
		std::vector<int> stack = {3, 4, 5, 1, 2, 2, 2, 1, 3, 4, 5, 3, 1, 3, -1, 2, 3};
		const std::vector<int> expected = {-1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 5, 5};
		const auto output = algoExpert::stacks::sortStack(stack);
		EXPECT_EQ(expected, output);
	}
}
