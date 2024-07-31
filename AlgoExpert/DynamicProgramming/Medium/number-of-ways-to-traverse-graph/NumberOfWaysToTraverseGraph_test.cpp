#include "NumberOfWaysToTraverseGraph.h"
#include "gtest/gtest.h"

namespace
{
	TEST(NumberOfWaysToTraverseGraph, Case01)
	{
		int height = 3;
		int width = 4;
		const auto expected = 10;
		const auto output = algoExpert::dynamicProgramming::numberOfWaysToTraverseGraph(width, height);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfWaysToTraverseGraph, Case02)
	{
		int height = 2;
		int width = 3;
		const auto expected = 3;
		const auto output = algoExpert::dynamicProgramming::numberOfWaysToTraverseGraph(width, height);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfWaysToTraverseGraph, Case03)
	{
		int height = 3;
		int width = 2;
		const auto expected = 3;
		const auto output = algoExpert::dynamicProgramming::numberOfWaysToTraverseGraph(width, height);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfWaysToTraverseGraph, Case04)
	{
		int height = 5;
		int width = 5;
		const auto expected = 70;
		const auto output = algoExpert::dynamicProgramming::numberOfWaysToTraverseGraph(width, height);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfWaysToTraverseGraph, Case05)
	{
		int height = 6;
		int width = 5;
		const auto expected = 126;
		const auto output = algoExpert::dynamicProgramming::numberOfWaysToTraverseGraph(width, height);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfWaysToTraverseGraph, Case06)
	{
		int height = 5;
		int width = 7;
		const auto expected = 210;
		const auto output = algoExpert::dynamicProgramming::numberOfWaysToTraverseGraph(width, height);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfWaysToTraverseGraph, Case07)
	{
		int height = 2;
		int width = 10;
		const auto expected = 10;
		const auto output = algoExpert::dynamicProgramming::numberOfWaysToTraverseGraph(width, height);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfWaysToTraverseGraph, Case08)
	{
		int height = 2;
		int width = 11;
		const auto expected = 11;
		const auto output = algoExpert::dynamicProgramming::numberOfWaysToTraverseGraph(width, height);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfWaysToTraverseGraph, Case09)
	{
		int height = 9;
		int width = 5;
		const auto expected = 495;
		const auto output = algoExpert::dynamicProgramming::numberOfWaysToTraverseGraph(width, height);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfWaysToTraverseGraph, Case10)
	{
		int height = 7;
		int width = 6;
		const auto expected = 462;
		const auto output = algoExpert::dynamicProgramming::numberOfWaysToTraverseGraph(width, height);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfWaysToTraverseGraph, Case11)
	{
		int height = 5;
		int width = 8;
		const auto expected = 330;
		const auto output = algoExpert::dynamicProgramming::numberOfWaysToTraverseGraph(width, height);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfWaysToTraverseGraph, Case12)
	{
		int height = 2;
		int width = 2;
		const auto expected = 2;
		const auto output = algoExpert::dynamicProgramming::numberOfWaysToTraverseGraph(width, height);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfWaysToTraverseGraph, Case13)
	{
		int height = 1;
		int width = 2;
		const auto expected = 1;
		const auto output = algoExpert::dynamicProgramming::numberOfWaysToTraverseGraph(width, height);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfWaysToTraverseGraph, Case14)
	{
		int height = 2;
		int width = 1;
		const auto expected = 1;
		const auto output = algoExpert::dynamicProgramming::numberOfWaysToTraverseGraph(width, height);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfWaysToTraverseGraph, Case15)
	{
		int height = 3;
		int width = 3;
		const auto expected = 6;
		const auto output = algoExpert::dynamicProgramming::numberOfWaysToTraverseGraph(width, height);
		EXPECT_EQ(expected, output);
	}
}
