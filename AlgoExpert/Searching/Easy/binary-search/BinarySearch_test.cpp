#include "BinarySearch.h"
#include "gtest/gtest.h"

namespace
{
	TEST(BinarySearch, Case01)
	{
		std::vector<int> array = {0, 1, 21, 33, 45, 45, 61, 71, 72, 73};
		int target = 33;
		const auto expected = 3;
		const auto output = algoExpert::searching::binarySearch(array, target);
		EXPECT_EQ(expected, output);
	}
	TEST(BinarySearch, Case02)
	{
		std::vector<int> array = {1, 5, 23, 111};
		int target = 111;
		const auto expected = 3;
		const auto output = algoExpert::searching::binarySearch(array, target);
		EXPECT_EQ(expected, output);
	}
	TEST(BinarySearch, Case03)
	{
		std::vector<int> array = {1, 5, 23, 111};
		int target = 5;
		const auto expected = 1;
		const auto output = algoExpert::searching::binarySearch(array, target);
		EXPECT_EQ(expected, output);
	}
	TEST(BinarySearch, Case04)
	{
		std::vector<int> array = {1, 5, 23, 111};
		int target = 35;
		const auto expected = -1;
		const auto output = algoExpert::searching::binarySearch(array, target);
		EXPECT_EQ(expected, output);
	}
	TEST(BinarySearch, Case05)
	{
		std::vector<int> array = {0, 1, 21, 33, 45, 45, 61, 71, 72, 73};
		int target = 0;
		const auto expected = 0;
		const auto output = algoExpert::searching::binarySearch(array, target);
		EXPECT_EQ(expected, output);
	}
	TEST(BinarySearch, Case06)
	{
		std::vector<int> array = {0, 1, 21, 33, 45, 45, 61, 71, 72, 73};
		int target = 1;
		const auto expected = 1;
		const auto output = algoExpert::searching::binarySearch(array, target);
		EXPECT_EQ(expected, output);
	}
	TEST(BinarySearch, Case07)
	{
		std::vector<int> array = {0, 1, 21, 33, 45, 45, 61, 71, 72, 73};
		int target = 21;
		const auto expected = 2;
		const auto output = algoExpert::searching::binarySearch(array, target);
		EXPECT_EQ(expected, output);
	}
	TEST(BinarySearch, Case08)
	{
		std::vector<int> array = {0, 1, 21, 33, 45, 45, 61, 71, 72, 73};
		int target = 45;
		const auto expected = 4;
		const auto output = algoExpert::searching::binarySearch(array, target);
		EXPECT_EQ(expected, output);
	}
	TEST(BinarySearch, Case09)
	{
		std::vector<int> array = {0, 1, 21, 33, 45, 45, 61, 71, 72, 73};
		int target = 61;
		const auto expected = 6;
		const auto output = algoExpert::searching::binarySearch(array, target);
		EXPECT_EQ(expected, output);
	}
	TEST(BinarySearch, Case10)
	{
		std::vector<int> array = {0, 1, 21, 33, 45, 45, 61, 71, 72, 73};
		int target = 71;
		const auto expected = 7;
		const auto output = algoExpert::searching::binarySearch(array, target);
		EXPECT_EQ(expected, output);
	}
	TEST(BinarySearch, Case11)
	{
		std::vector<int> array = {0, 1, 21, 33, 45, 45, 61, 71, 72, 73};
		int target = 72;
		const auto expected = 8;
		const auto output = algoExpert::searching::binarySearch(array, target);
		EXPECT_EQ(expected, output);
	}
	TEST(BinarySearch, Case12)
	{
		std::vector<int> array = {0, 1, 21, 33, 45, 45, 61, 71, 72, 73};
		int target = 73;
		const auto expected = 9;
		const auto output = algoExpert::searching::binarySearch(array, target);
		EXPECT_EQ(expected, output);
	}
	TEST(BinarySearch, Case13)
	{
		std::vector<int> array = {0, 1, 21, 33, 45, 45, 61, 71, 72, 73};
		int target = 70;
		const auto expected = -1;
		const auto output = algoExpert::searching::binarySearch(array, target);
		EXPECT_EQ(expected, output);
	}
	TEST(BinarySearch, Case14)
	{
		std::vector<int> array = {0, 1, 21, 33, 45, 45, 61, 71, 72, 73, 355};
		int target = 355;
		const auto expected = 10;
		const auto output = algoExpert::searching::binarySearch(array, target);
		EXPECT_EQ(expected, output);
	}
	TEST(BinarySearch, Case15)
	{
		std::vector<int> array = {0, 1, 21, 33, 45, 45, 61, 71, 72, 73, 355};
		int target = 354;
		const auto expected = -1;
		const auto output = algoExpert::searching::binarySearch(array, target);
		EXPECT_EQ(expected, output);
	}
	TEST(BinarySearch, Case16)
	{
		std::vector<int> array = {1, 5, 23, 111};
		int target = 120;
		const auto expected = -1;
		const auto output = algoExpert::searching::binarySearch(array, target);
		EXPECT_EQ(expected, output);
	}
	TEST(BinarySearch, Case17)
	{
		std::vector<int> array = {5, 23, 111};
		int target = 3;
		const auto expected = -1;
		const auto output = algoExpert::searching::binarySearch(array, target);
		EXPECT_EQ(expected, output);
	}
}

