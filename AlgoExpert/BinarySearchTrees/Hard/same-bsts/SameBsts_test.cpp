#include "SameBsts.h"
#include "gtest/gtest.h"

namespace
{
	TEST(SameBsts, Case01)
	{
		std::vector<int> arrayOne = {10, 15, 8, 12, 94, 81, 5, 2, 11};
		std::vector<int> arrayTwo = {10, 8, 5, 15, 2, 12, 11, 94, 81};
		const auto expected = true;
		const auto output = algoExpert::binarySearchTrees::sameBsts(arrayOne, arrayTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(SameBsts, Case02)
	{
		std::vector<int> arrayOne = {1, 2, 3, 4, 5, 6, 7};
		std::vector<int> arrayTwo = {1, 2, 3, 4, 5, 6, 7};
		const auto expected = true;
		const auto output = algoExpert::binarySearchTrees::sameBsts(arrayOne, arrayTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(SameBsts, Case03)
	{
		std::vector<int> arrayOne = {7, 6, 5, 4, 3, 2, 1};
		std::vector<int> arrayTwo = {7, 6, 5, 4, 3, 2, 1};
		const auto expected = true;
		const auto output = algoExpert::binarySearchTrees::sameBsts(arrayOne, arrayTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(SameBsts, Case04)
	{
		std::vector<int> arrayOne = {10, 15, 8, 12, 94, 81, 5, 2};
		std::vector<int> arrayTwo = {10, 8, 5, 15, 2, 12, 94, 81};
		const auto expected = true;
		const auto output = algoExpert::binarySearchTrees::sameBsts(arrayOne, arrayTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(SameBsts, Case05)
	{
		std::vector<int> arrayOne = {10, 15, 8, 12, 94, 81, 5, 2};
		std::vector<int> arrayTwo = {11, 8, 5, 15, 2, 12, 94, 81};
		const auto expected = false;
		const auto output = algoExpert::binarySearchTrees::sameBsts(arrayOne, arrayTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(SameBsts, Case06)
	{
		std::vector<int> arrayOne = {10, 15, 8, 12, 94, 81, 5, 2, -1, 100, 45, 12, 8, -1, 8, 2, -34};
		std::vector<int> arrayTwo = {10, 8, 5, 15, 2, 12, 94, 81, -1, -1, -34, 8, 2, 8, 12, 45, 100};
		const auto expected = true;
		const auto output = algoExpert::binarySearchTrees::sameBsts(arrayOne, arrayTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(SameBsts, Case07)
	{
		std::vector<int> arrayOne = {10, 15, 8, 12, 94, 81, 5, 2, -1, 101, 45, 12, 8, -1, 8, 2, -34};
		std::vector<int> arrayTwo = {10, 8, 5, 15, 2, 12, 94, 81, -1, -1, -34, 8, 2, 8, 12, 45, 100};
		const auto expected = false;
		const auto output = algoExpert::binarySearchTrees::sameBsts(arrayOne, arrayTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(SameBsts, Case08)
	{
		std::vector<int> arrayOne = {5, 2, -1, 100, 45, 12, 8, -1, 8, 10, 15, 8, 12, 94, 81, 2, -34};
		std::vector<int> arrayTwo = {5, 8, 10, 15, 2, 8, 12, 45, 100, 2, 12, 94, 81, -1, -1, -34, 8};
		const auto expected = false;
		const auto output = algoExpert::binarySearchTrees::sameBsts(arrayOne, arrayTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(SameBsts, Case09)
	{
		std::vector<int> arrayOne = {10, 15, 8, 12, 94, 81, 5, 2, -1, 100, 45, 12, 9, -1, 8, 2, -34};
		std::vector<int> arrayTwo = {10, 8, 5, 15, 2, 12, 94, 81, -1, -1, -34, 8, 2, 9, 12, 45, 100};
		const auto expected = false;
		const auto output = algoExpert::binarySearchTrees::sameBsts(arrayOne, arrayTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(SameBsts, Case10)
	{
		std::vector<int> arrayOne = {1, 2, 3, 4, 5, 6, 7, 8};
		std::vector<int> arrayTwo = {1, 2, 3, 4, 5, 6, 7};
		const auto expected = false;
		const auto output = algoExpert::binarySearchTrees::sameBsts(arrayOne, arrayTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(SameBsts, Case11)
	{
		std::vector<int> arrayOne = {7, 6, 5, 4, 3, 2, 1};
		std::vector<int> arrayTwo = {7, 6, 5, 4, 3, 2, 1, 0};
		const auto expected = false;
		const auto output = algoExpert::binarySearchTrees::sameBsts(arrayOne, arrayTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(SameBsts, Case12)
	{
		std::vector<int> arrayOne = {10, 15, 8, 12, 94, 81, 5, 2, 10};
		std::vector<int> arrayTwo = {10, 8, 5, 15, 2, 10, 12, 94, 81};
		const auto expected = false;
		const auto output = algoExpert::binarySearchTrees::sameBsts(arrayOne, arrayTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(SameBsts, Case13)
	{
		std::vector<int> arrayOne = {50, 76, 81, 23, 23, 23, 100, 56, 12, -1, 3};
		std::vector<int> arrayTwo = {50, 23, 76, 23, 23, 12, 56, 81, -1, 3, 100};
		const auto expected = true;
		const auto output = algoExpert::binarySearchTrees::sameBsts(arrayOne, arrayTwo);
		EXPECT_EQ(expected, output);
	}
}

