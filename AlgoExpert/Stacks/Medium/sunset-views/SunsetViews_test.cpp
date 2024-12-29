#include "SunsetViews.h"
#include "gtest/gtest.h"

namespace
{
	TEST(SunsetViews, Case01)
	{
		std::vector<int> buildings = {3, 5, 4, 4, 3, 1, 3, 2};
		std::string direction = "EAST";
		const std::vector<int> expected = {1, 3, 6, 7};
		const auto output = algoExpert::stacks::sunsetViews(buildings, direction);
		EXPECT_EQ(expected, output);
	}
	TEST(SunsetViews, Case02)
	{
		std::vector<int> buildings = {3, 5, 4, 4, 3, 1, 3, 2};
		std::string direction = "WEST";
		const std::vector<int> expected = {0, 1};
		const auto output = algoExpert::stacks::sunsetViews(buildings, direction);
		EXPECT_EQ(expected, output);
	}
	TEST(SunsetViews, Case03)
	{
		std::vector<int> buildings = {10, 11};
		std::string direction = "EAST";
		const std::vector<int> expected = {1};
		const auto output = algoExpert::stacks::sunsetViews(buildings, direction);
		EXPECT_EQ(expected, output);
	}
	TEST(SunsetViews, Case04)
	{
		std::vector<int> buildings = {2, 4};
		std::string direction = "WEST";
		const std::vector<int> expected = {0, 1};
		const auto output = algoExpert::stacks::sunsetViews(buildings, direction);
		EXPECT_EQ(expected, output);
	}
	TEST(SunsetViews, Case05)
	{
		std::vector<int> buildings = {1};
		std::string direction = "EAST";
		const std::vector<int> expected = {0};
		const auto output = algoExpert::stacks::sunsetViews(buildings, direction);
		EXPECT_EQ(expected, output);
	}
	TEST(SunsetViews, Case06)
	{
		std::vector<int> buildings = {1};
		std::string direction = "WEST";
		const std::vector<int> expected = {0};
		const auto output = algoExpert::stacks::sunsetViews(buildings, direction);
		EXPECT_EQ(expected, output);
	}
	TEST(SunsetViews, Case07)
	{
		std::vector<int> buildings = {};
		std::string direction = "EAST";
		const std::vector<int> expected = {};
		const auto output = algoExpert::stacks::sunsetViews(buildings, direction);
		EXPECT_EQ(expected, output);
	}
	TEST(SunsetViews, Case08)
	{
		std::vector<int> buildings = {};
		std::string direction = "WEST";
		const std::vector<int> expected = {};
		const auto output = algoExpert::stacks::sunsetViews(buildings, direction);
		EXPECT_EQ(expected, output);
	}
	TEST(SunsetViews, Case09)
	{
		std::vector<int> buildings = {7, 1, 7, 8, 9, 8, 7, 6, 5, 4, 2, 5};
		std::string direction = "EAST";
		const std::vector<int> expected = {4, 5, 6, 7, 11};
		const auto output = algoExpert::stacks::sunsetViews(buildings, direction);
		EXPECT_EQ(expected, output);
	}
	TEST(SunsetViews, Case10)
	{
		std::vector<int> buildings = {1, 2, 3, 4, 5, 6};
		std::string direction = "EAST";
		const std::vector<int> expected = {5};
		const auto output = algoExpert::stacks::sunsetViews(buildings, direction);
		EXPECT_EQ(expected, output);
	}
	TEST(SunsetViews, Case11)
	{
		std::vector<int> buildings = {1, 2, 3, 4, 5, 6};
		std::string direction = "WEST";
		const std::vector<int> expected = {0, 1, 2, 3, 4, 5};
		const auto output = algoExpert::stacks::sunsetViews(buildings, direction);
		EXPECT_EQ(expected, output);
	}
	TEST(SunsetViews, Case12)
	{
		std::vector<int> buildings = {1, 2, 3, 1, 5, 6, 9, 1, 9, 9, 11, 10, 9, 12, 8};
		std::string direction = "WEST";
		const std::vector<int> expected = {0, 1, 2, 4, 5, 6, 10, 13};
		const auto output = algoExpert::stacks::sunsetViews(buildings, direction);
		EXPECT_EQ(expected, output);
	}
	TEST(SunsetViews, Case13)
	{
		std::vector<int> buildings = {20, 2, 3, 1, 5, 6, 9, 1, 9, 9, 11, 10, 9, 12, 8};
		std::string direction = "EAST";
		const std::vector<int> expected = {0, 13, 14};
		const auto output = algoExpert::stacks::sunsetViews(buildings, direction);
		EXPECT_EQ(expected, output);
	}
}

