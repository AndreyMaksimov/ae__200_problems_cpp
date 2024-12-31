#include "NextGreaterElement.h"
#include "gtest/gtest.h"

namespace
{
	TEST(NextGreaterElement, Case01)
	{
		std::vector<int> array = {2, 5, -3, -4, 6, 7, 2};
		const std::vector<int> expected = {5, 6, 6, 6, 7, -1, 5};
		const auto output = algoExpert::stacks::nextGreaterElement(array);
		EXPECT_EQ(expected, output);
	}
	TEST(NextGreaterElement, Case02)
	{
		std::vector<int> array = {0, 1, 2, 3, 4};
		const std::vector<int> expected = {1, 2, 3, 4, -1};
		const auto output = algoExpert::stacks::nextGreaterElement(array);
		EXPECT_EQ(expected, output);
	}
	TEST(NextGreaterElement, Case03)
	{
		std::vector<int> array = {6, 4, 5, 7, 2, 1, 3};
		const std::vector<int> expected = {7, 5, 7, -1, 3, 3, 6};
		const auto output = algoExpert::stacks::nextGreaterElement(array);
		EXPECT_EQ(expected, output);
	}
	TEST(NextGreaterElement, Case04)
	{
		std::vector<int> array = {1, 0, 1, 0, 1, 0, 1};
		const std::vector<int> expected = {-1, 1, -1, 1, -1, 1, -1};
		const auto output = algoExpert::stacks::nextGreaterElement(array);
		EXPECT_EQ(expected, output);
	}
	TEST(NextGreaterElement, Case05)
	{
		std::vector<int> array = {5, 6, 1, 3, 1, -2, -1, 3, 4, 5};
		const std::vector<int> expected = {6, -1, 3, 4, 3, -1, 3, 4, 5, 6};
		const auto output = algoExpert::stacks::nextGreaterElement(array);
		EXPECT_EQ(expected, output);
	}
	TEST(NextGreaterElement, Case06)
	{
		std::vector<int> array = {7, 6, 5, 4, 3, 2, 1};
		const std::vector<int> expected = {-1, 7, 7, 7, 7, 7, 7};
		const auto output = algoExpert::stacks::nextGreaterElement(array);
		EXPECT_EQ(expected, output);
	}
	TEST(NextGreaterElement, Case07)
	{
		std::vector<int> array = {5, 6, 1, 2, 3, 4};
		const std::vector<int> expected = {6, -1, 2, 3, 4, 5};
		const auto output = algoExpert::stacks::nextGreaterElement(array);
		EXPECT_EQ(expected, output);
	}
	TEST(NextGreaterElement, Case08)
	{
		std::vector<int> array = {1, 1, 1, 1, 1, 1, 1, 1};
		const std::vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1};
		const auto output = algoExpert::stacks::nextGreaterElement(array);
		EXPECT_EQ(expected, output);
	}
	TEST(NextGreaterElement, Case09)
	{
		std::vector<int> array = {12};
		const std::vector<int> expected = {-1};
		const auto output = algoExpert::stacks::nextGreaterElement(array);
		EXPECT_EQ(expected, output);
	}
	TEST(NextGreaterElement, Case10)
	{
		std::vector<int> array = {12, 4};
		const std::vector<int> expected = {-1, 12};
		const auto output = algoExpert::stacks::nextGreaterElement(array);
		EXPECT_EQ(expected, output);
	}
	TEST(NextGreaterElement, Case11)
	{
		std::vector<int> array = {-9, 0, -5, 1, 3, -2, 18, 2, 5, 18};
		const std::vector<int> expected = {0, 1, 1, 3, 18, 18, -1, 5, 18, -1};
		const auto output = algoExpert::stacks::nextGreaterElement(array);
		EXPECT_EQ(expected, output);
	}
	TEST(NextGreaterElement, Case12)
	{
		std::vector<int> array = {2, 6, 7, 2, 2, 2};
		const std::vector<int> expected = {6, 7, -1, 6, 6, 6};
		const auto output = algoExpert::stacks::nextGreaterElement(array);
		EXPECT_EQ(expected, output);
	}
	TEST(NextGreaterElement, Case13)
	{
		std::vector<int> array = {1, 2, 3, 4, 1, 2, 3, 4, -8, -7, 6, 2, 17, 2, -8, 9, 0, 2};
		const std::vector<int> expected = {2, 3, 4, 6, 2, 3, 4, 6, -7, 6, 17, 17, -1, 9, 9, 17, 2, 3};
		const auto output = algoExpert::stacks::nextGreaterElement(array);
		EXPECT_EQ(expected, output);
	}
	TEST(NextGreaterElement, Case14)
	{
		std::vector<int> array = {-8, -1, -1, -2, -4, -5, -6, 0, -9, -91, -2, 8};
		const std::vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 8, -2, -2, 8, -1};
		const auto output = algoExpert::stacks::nextGreaterElement(array);
		EXPECT_EQ(expected, output);
	}
	TEST(NextGreaterElement, Case15)
	{
		std::vector<int> array = {};
		const std::vector<int> expected = {};
		const auto output = algoExpert::stacks::nextGreaterElement(array);
		EXPECT_EQ(expected, output);
	}
}

