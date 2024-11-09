#include "NumberOfBinaryTreeTopologies.h"
#include "gtest/gtest.h"

namespace
{
	TEST(NumberOfBinaryTreeTopologies, Case01)
	{
		int n = 3;
		const auto expected = 5;
		const auto output = algoExpert::recursion::numberOfBinaryTreeTopologies(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfBinaryTreeTopologies, Case02)
	{
		int n = 0;
		const auto expected = 1;
		const auto output = algoExpert::recursion::numberOfBinaryTreeTopologies(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfBinaryTreeTopologies, Case03)
	{
		int n = 1;
		const auto expected = 1;
		const auto output = algoExpert::recursion::numberOfBinaryTreeTopologies(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfBinaryTreeTopologies, Case04)
	{
		int n = 2;
		const auto expected = 2;
		const auto output = algoExpert::recursion::numberOfBinaryTreeTopologies(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfBinaryTreeTopologies, Case05)
	{
		int n = 4;
		const auto expected = 14;
		const auto output = algoExpert::recursion::numberOfBinaryTreeTopologies(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfBinaryTreeTopologies, Case06)
	{
		int n = 5;
		const auto expected = 42;
		const auto output = algoExpert::recursion::numberOfBinaryTreeTopologies(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfBinaryTreeTopologies, Case07)
	{
		int n = 6;
		const auto expected = 132;
		const auto output = algoExpert::recursion::numberOfBinaryTreeTopologies(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfBinaryTreeTopologies, Case08)
	{
		int n = 7;
		const auto expected = 429;
		const auto output = algoExpert::recursion::numberOfBinaryTreeTopologies(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfBinaryTreeTopologies, Case09)
	{
		int n = 8;
		const auto expected = 1430;
		const auto output = algoExpert::recursion::numberOfBinaryTreeTopologies(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfBinaryTreeTopologies, Case10)
	{
		int n = 9;
		const auto expected = 4862;
		const auto output = algoExpert::recursion::numberOfBinaryTreeTopologies(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfBinaryTreeTopologies, Case11)
	{
		int n = 10;
		const auto expected = 16796;
		const auto output = algoExpert::recursion::numberOfBinaryTreeTopologies(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NumberOfBinaryTreeTopologies, Case12)
	{
		int n = 11;
		const auto expected = 58786;
		const auto output = algoExpert::recursion::numberOfBinaryTreeTopologies(n);
		EXPECT_EQ(expected, output);
	}
}
