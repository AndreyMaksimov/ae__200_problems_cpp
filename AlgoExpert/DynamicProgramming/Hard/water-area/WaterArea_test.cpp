#include "WaterArea.h"
#include "gtest/gtest.h"

namespace
{
	TEST(WaterArea, Case01)
	{
		std::vector<int> heights = {0, 8, 0, 0, 5, 0, 0, 10, 0, 0, 1, 1, 0, 3};
		const auto expected = 48;
		const auto output = algoExpert::dynamicProgramming::waterArea(heights);
		EXPECT_EQ(expected, output);
	}
	TEST(WaterArea, Case02)
	{
		std::vector<int> heights = {};
		const auto expected = 0;
		const auto output = algoExpert::dynamicProgramming::waterArea(heights);
		EXPECT_EQ(expected, output);
	}
	TEST(WaterArea, Case03)
	{
		std::vector<int> heights = {0, 0, 0, 0, 0};
		const auto expected = 0;
		const auto output = algoExpert::dynamicProgramming::waterArea(heights);
		EXPECT_EQ(expected, output);
	}
	TEST(WaterArea, Case04)
	{
		std::vector<int> heights = {0, 1, 0, 0, 0};
		const auto expected = 0;
		const auto output = algoExpert::dynamicProgramming::waterArea(heights);
		EXPECT_EQ(expected, output);
	}
	TEST(WaterArea, Case05)
	{
		std::vector<int> heights = {0, 1, 1, 0, 0};
		const auto expected = 0;
		const auto output = algoExpert::dynamicProgramming::waterArea(heights);
		EXPECT_EQ(expected, output);
	}
	TEST(WaterArea, Case06)
	{
		std::vector<int> heights = {0, 1, 2, 1, 1};
		const auto expected = 0;
		const auto output = algoExpert::dynamicProgramming::waterArea(heights);
		EXPECT_EQ(expected, output);
	}
	TEST(WaterArea, Case07)
	{
		std::vector<int> heights = {0, 1, 0, 1, 0};
		const auto expected = 1;
		const auto output = algoExpert::dynamicProgramming::waterArea(heights);
		EXPECT_EQ(expected, output);
	}
	TEST(WaterArea, Case08)
	{
		std::vector<int> heights = {0, 1, 0, 1, 0, 2, 0, 3};
		const auto expected = 4;
		const auto output = algoExpert::dynamicProgramming::waterArea(heights);
		EXPECT_EQ(expected, output);
	}
	TEST(WaterArea, Case09)
	{
		std::vector<int> heights = {0, 8, 0, 0, 10, 0, 0, 10, 0, 0, 1, 1, 0, 3};
		const auto expected = 49;
		const auto output = algoExpert::dynamicProgramming::waterArea(heights);
		EXPECT_EQ(expected, output);
	}
	TEST(WaterArea, Case10)
	{
		std::vector<int> heights = {0, 100, 0, 0, 10, 1, 1, 10, 1, 0, 1, 1, 0, 100};
		const auto expected = 1075;
		const auto output = algoExpert::dynamicProgramming::waterArea(heights);
		EXPECT_EQ(expected, output);
	}
	TEST(WaterArea, Case11)
	{
		std::vector<int> heights = {0, 100, 0, 0, 10, 1, 1, 10, 1, 0, 1, 1, 0, 0};
		const auto expected = 39;
		const auto output = algoExpert::dynamicProgramming::waterArea(heights);
		EXPECT_EQ(expected, output);
	}
	TEST(WaterArea, Case12)
	{
		std::vector<int> heights = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8};
		const auto expected = 10;
		const auto output = algoExpert::dynamicProgramming::waterArea(heights);
		EXPECT_EQ(expected, output);
	}
	TEST(WaterArea, Case13)
	{
		std::vector<int> heights = {8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
		const auto expected = 10;
		const auto output = algoExpert::dynamicProgramming::waterArea(heights);
		EXPECT_EQ(expected, output);
	}
	TEST(WaterArea, Case14)
	{
		std::vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
		const auto expected = 19;
		const auto output = algoExpert::dynamicProgramming::waterArea(heights);
		EXPECT_EQ(expected, output);
	}
}
