#include "LargestRectangleUnderSkyline.h"
#include "gtest/gtest.h"

namespace
{
	TEST(LargestRectangleUnderSkyline, Case01)
	{
		std::vector<int> buildings = {1, 3, 3, 2, 4, 1, 5, 3, 2};
		const auto expected = 9;
		const auto output = algoExpert::stacks::largestRectangleUnderSkyline(buildings);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestRectangleUnderSkyline, Case02)
	{
		std::vector<int> buildings = {4, 4, 4, 2, 2, 1};
		const auto expected = 12;
		const auto output = algoExpert::stacks::largestRectangleUnderSkyline(buildings);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestRectangleUnderSkyline, Case03)
	{
		std::vector<int> buildings = {1, 3, 3, 2, 4, 1, 5, 3};
		const auto expected = 8;
		const auto output = algoExpert::stacks::largestRectangleUnderSkyline(buildings);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestRectangleUnderSkyline, Case04)
	{
		std::vector<int> buildings = {5, 5, 2, 2, 4, 1};
		const auto expected = 10;
		const auto output = algoExpert::stacks::largestRectangleUnderSkyline(buildings);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestRectangleUnderSkyline, Case05)
	{
		std::vector<int> buildings = {1, 2, 3, 4, 5, 11};
		const auto expected = 12;
		const auto output = algoExpert::stacks::largestRectangleUnderSkyline(buildings);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestRectangleUnderSkyline, Case06)
	{
		std::vector<int> buildings = {25, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
		const auto expected = 25;
		const auto output = algoExpert::stacks::largestRectangleUnderSkyline(buildings);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestRectangleUnderSkyline, Case07)
	{
		std::vector<int> buildings = {20, 2, 2, 2, 2, 2, 10, 5, 5, 5, 4, 4};
		const auto expected = 24;
		const auto output = algoExpert::stacks::largestRectangleUnderSkyline(buildings);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestRectangleUnderSkyline, Case08)
	{
		std::vector<int> buildings = {5, 10, 5, 15, 10, 25};
		const auto expected = 30;
		const auto output = algoExpert::stacks::largestRectangleUnderSkyline(buildings);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestRectangleUnderSkyline, Case09)
	{
		std::vector<int> buildings = {1, 1, 1, 1};
		const auto expected = 4;
		const auto output = algoExpert::stacks::largestRectangleUnderSkyline(buildings);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestRectangleUnderSkyline, Case10)
	{
		std::vector<int> buildings = {10, 21};
		const auto expected = 21;
		const auto output = algoExpert::stacks::largestRectangleUnderSkyline(buildings);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestRectangleUnderSkyline, Case11)
	{
		std::vector<int> buildings = {11, 21};
		const auto expected = 22;
		const auto output = algoExpert::stacks::largestRectangleUnderSkyline(buildings);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestRectangleUnderSkyline, Case12)
	{
		std::vector<int> buildings = {3, 3, 3, 4, 4, 4, 1, 3, 1, 2, 8, 9, 1};
		const auto expected = 18;
		const auto output = algoExpert::stacks::largestRectangleUnderSkyline(buildings);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestRectangleUnderSkyline, Case13)
	{
		std::vector<int> buildings = {5};
		const auto expected = 5;
		const auto output = algoExpert::stacks::largestRectangleUnderSkyline(buildings);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestRectangleUnderSkyline, Case14)
	{
		std::vector<int> buildings = {10, 1, 2, 3, 4, 5, 6, 7};
		const auto expected = 16;
		const auto output = algoExpert::stacks::largestRectangleUnderSkyline(buildings);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestRectangleUnderSkyline, Case15)
	{
		std::vector<int> buildings = {10, 1, 2, 3, 3, 5, 6, 7};
		const auto expected = 15;
		const auto output = algoExpert::stacks::largestRectangleUnderSkyline(buildings);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestRectangleUnderSkyline, Case16)
	{
		std::vector<int> buildings = {};
		const auto expected = 0;
		const auto output = algoExpert::stacks::largestRectangleUnderSkyline(buildings);
		EXPECT_EQ(expected, output);
	}
}

