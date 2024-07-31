#include "MaximizeExpression.h"
#include "gtest/gtest.h"

namespace
{
	TEST(MaximizeExpression, Case01)
	{
		std::vector<int> array = {3, 6, 1, -3, 2, 7};
		const auto expected = 4;
		const auto output = algoExpert::dynamicProgramming::maximizeExpression(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximizeExpression, Case02)
	{
		std::vector<int> array = {3, 9, 10, 1, 30, 40};
		const auto expected = 3;
		const auto output = algoExpert::dynamicProgramming::maximizeExpression(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximizeExpression, Case03)
	{
		std::vector<int> array = {40, 30, 1, 10, 9, 3};
		const auto expected = 46;
		const auto output = algoExpert::dynamicProgramming::maximizeExpression(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximizeExpression, Case04)
	{
		std::vector<int> array = {-1, 2, -1, -2, -2, 1, -1};
		const auto expected = 6;
		const auto output = algoExpert::dynamicProgramming::maximizeExpression(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximizeExpression, Case05)
	{
		std::vector<int> array = {10, 5, 10, 5};
		const auto expected = 10;
		const auto output = algoExpert::dynamicProgramming::maximizeExpression(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximizeExpression, Case06)
	{
		std::vector<int> array = {0, 0, 0, 0, 0, 0, 0, 1, 1, 0};
		const auto expected = 1;
		const auto output = algoExpert::dynamicProgramming::maximizeExpression(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximizeExpression, Case07)
	{
		std::vector<int> array = {34, 21, 22, 0, -98, -72, 100, 23};
		const auto expected = 209;
		const auto output = algoExpert::dynamicProgramming::maximizeExpression(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximizeExpression, Case08)
	{
		std::vector<int> array = {5, 2, 2, 1, -2, 2, -9, 0};
		const auto expected = 18;
		const auto output = algoExpert::dynamicProgramming::maximizeExpression(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximizeExpression, Case09)
	{
		std::vector<int> array = {1, 1, 1, 1};
		const auto expected = 0;
		const auto output = algoExpert::dynamicProgramming::maximizeExpression(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximizeExpression, Case10)
	{
		std::vector<int> array = {1, -1, 1, -1};
		const auto expected = 4;
		const auto output = algoExpert::dynamicProgramming::maximizeExpression(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximizeExpression, Case11)
	{
		std::vector<int> array = {3, 6, 1, 2, -9, -2, 1, 3, 4, -3, 2};
		const auto expected = 22;
		const auto output = algoExpert::dynamicProgramming::maximizeExpression(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximizeExpression, Case12)
	{
		std::vector<int> array = {1, -1, 1, -1, -2};
		const auto expected = 5;
		const auto output = algoExpert::dynamicProgramming::maximizeExpression(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximizeExpression, Case13)
	{
		std::vector<int> array = {3, -1, 1, -1, -2, 4, 5, -4};
		const auto expected = 14;
		const auto output = algoExpert::dynamicProgramming::maximizeExpression(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximizeExpression, Case14)
	{
		std::vector<int> array = {-1, 2, -3, -3, 2, -1};
		const auto expected = 8;
		const auto output = algoExpert::dynamicProgramming::maximizeExpression(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximizeExpression, Case15)
	{
		std::vector<int> array = {6, 2, 3, 4, 1, -1, -2, 3, 1, 7, 8, -8, 2, 5, 1};
		const auto expected = 24;
		const auto output = algoExpert::dynamicProgramming::maximizeExpression(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximizeExpression, Case16)
	{
		std::vector<int> array = {5, 10, 5, 10};
		const auto expected = -10;
		const auto output = algoExpert::dynamicProgramming::maximizeExpression(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximizeExpression, Case17)
	{
		std::vector<int> array = {2, 3};
		const auto expected = 0;
		const auto output = algoExpert::dynamicProgramming::maximizeExpression(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximizeExpression, Case18)
	{
		std::vector<int> array = {2, 3, 4};
		const auto expected = 0;
		const auto output = algoExpert::dynamicProgramming::maximizeExpression(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximizeExpression, Case19)
	{
		std::vector<int> array = {1};
		const auto expected = 0;
		const auto output = algoExpert::dynamicProgramming::maximizeExpression(array);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximizeExpression, Case20)
	{
		std::vector<int> array = {};
		const auto expected = 0;
		const auto output = algoExpert::dynamicProgramming::maximizeExpression(array);
		EXPECT_EQ(expected, output);
	}
}
