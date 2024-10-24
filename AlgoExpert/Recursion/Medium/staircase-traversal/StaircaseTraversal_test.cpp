#include "StaircaseTraversal.h"
#include "gtest/gtest.h"

namespace
{
	TEST(StaircaseTraversal, Case01)
	{
		int height = 4;
		int maxSteps = 2;
		const auto expected = 5;
		const auto output = algoExpert::recursion::staircaseTraversal(height, maxSteps);
		EXPECT_EQ(expected, output);
	}
	TEST(StaircaseTraversal, Case02)
	{
		int height = 10;
		int maxSteps = 1;
		const auto expected = 1;
		const auto output = algoExpert::recursion::staircaseTraversal(height, maxSteps);
		EXPECT_EQ(expected, output);
	}
	TEST(StaircaseTraversal, Case03)
	{
		int height = 10;
		int maxSteps = 2;
		const auto expected = 89;
		const auto output = algoExpert::recursion::staircaseTraversal(height, maxSteps);
		EXPECT_EQ(expected, output);
	}
	TEST(StaircaseTraversal, Case04)
	{
		int height = 4;
		int maxSteps = 3;
		const auto expected = 7;
		const auto output = algoExpert::recursion::staircaseTraversal(height, maxSteps);
		EXPECT_EQ(expected, output);
	}
	TEST(StaircaseTraversal, Case05)
	{
		int height = 1;
		int maxSteps = 1;
		const auto expected = 1;
		const auto output = algoExpert::recursion::staircaseTraversal(height, maxSteps);
		EXPECT_EQ(expected, output);
	}
	TEST(StaircaseTraversal, Case06)
	{
		int height = 5;
		int maxSteps = 2;
		const auto expected = 8;
		const auto output = algoExpert::recursion::staircaseTraversal(height, maxSteps);
		EXPECT_EQ(expected, output);
	}
	TEST(StaircaseTraversal, Case07)
	{
		int height = 4;
		int maxSteps = 4;
		const auto expected = 8;
		const auto output = algoExpert::recursion::staircaseTraversal(height, maxSteps);
		EXPECT_EQ(expected, output);
	}
	TEST(StaircaseTraversal, Case08)
	{
		int height = 6;
		int maxSteps = 2;
		const auto expected = 13;
		const auto output = algoExpert::recursion::staircaseTraversal(height, maxSteps);
		EXPECT_EQ(expected, output);
	}
	TEST(StaircaseTraversal, Case09)
	{
		int height = 100;
		int maxSteps = 1;
		const auto expected = 1;
		const auto output = algoExpert::recursion::staircaseTraversal(height, maxSteps);
		EXPECT_EQ(expected, output);
	}
	TEST(StaircaseTraversal, Case10)
	{
		int height = 15;
		int maxSteps = 5;
		const auto expected = 13624;
		const auto output = algoExpert::recursion::staircaseTraversal(height, maxSteps);
		EXPECT_EQ(expected, output);
	}
	TEST(StaircaseTraversal, Case11)
	{
		int height = 7;
		int maxSteps = 2;
		const auto expected = 21;
		const auto output = algoExpert::recursion::staircaseTraversal(height, maxSteps);
		EXPECT_EQ(expected, output);
	}
	TEST(StaircaseTraversal, Case12)
	{
		int height = 6;
		int maxSteps = 3;
		const auto expected = 24;
		const auto output = algoExpert::recursion::staircaseTraversal(height, maxSteps);
		EXPECT_EQ(expected, output);
	}
	TEST(StaircaseTraversal, Case13)
	{
		int height = 3;
		int maxSteps = 2;
		const auto expected = 3;
		const auto output = algoExpert::recursion::staircaseTraversal(height, maxSteps);
		EXPECT_EQ(expected, output);
	}
}
