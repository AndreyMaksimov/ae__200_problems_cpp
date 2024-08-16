#include "KadanesAlgorithm.h"
#include "gtest/gtest.h"

namespace
{
	TEST(KadanesAlgorithm, Case01)
	{
		std::vector<int> array = {3, 5, -9, 1, 3, -2, 3, 4, 7, 2, -9, 6, 3, 1, -5, 4};
		const auto expected = 19;
		const auto output = algoExpert::famousAlgorithms::kadanesAlgorithm(array);
		EXPECT_EQ(expected, output);
	}
	TEST(KadanesAlgorithm, Case02)
	{
		std::vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		const auto expected = 55;
		const auto output = algoExpert::famousAlgorithms::kadanesAlgorithm(array);
		EXPECT_EQ(expected, output);
	}
	TEST(KadanesAlgorithm, Case03)
	{
		std::vector<int> array = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
		const auto expected = -1;
		const auto output = algoExpert::famousAlgorithms::kadanesAlgorithm(array);
		EXPECT_EQ(expected, output);
	}
	TEST(KadanesAlgorithm, Case04)
	{
		std::vector<int> array = {-10, -2, -9, -4, -8, -6, -7, -1, -3, -5};
		const auto expected = -1;
		const auto output = algoExpert::famousAlgorithms::kadanesAlgorithm(array);
		EXPECT_EQ(expected, output);
	}
	TEST(KadanesAlgorithm, Case05)
	{
		std::vector<int> array = {1, 2, 3, 4, 5, 6, -20, 7, 8, 9, 10};
		const auto expected = 35;
		const auto output = algoExpert::famousAlgorithms::kadanesAlgorithm(array);
		EXPECT_EQ(expected, output);
	}
	TEST(KadanesAlgorithm, Case06)
	{
		std::vector<int> array = {1, 2, 3, 4, 5, 6, -22, 7, 8, 9, 10};
		const auto expected = 34;
		const auto output = algoExpert::famousAlgorithms::kadanesAlgorithm(array);
		EXPECT_EQ(expected, output);
	}
	TEST(KadanesAlgorithm, Case07)
	{
		std::vector<int> array = {1, 2, -4, 3, 5, -9, 8, 1, 2};
		const auto expected = 11;
		const auto output = algoExpert::famousAlgorithms::kadanesAlgorithm(array);
		EXPECT_EQ(expected, output);
	}
	TEST(KadanesAlgorithm, Case08)
	{
		std::vector<int> array = {3, 4, -6, 7, 8};
		const auto expected = 16;
		const auto output = algoExpert::famousAlgorithms::kadanesAlgorithm(array);
		EXPECT_EQ(expected, output);
	}
	TEST(KadanesAlgorithm, Case09)
	{
		std::vector<int> array = {3, 4, -6, 7, 8, -18, 100};
		const auto expected = 100;
		const auto output = algoExpert::famousAlgorithms::kadanesAlgorithm(array);
		EXPECT_EQ(expected, output);
	}
	TEST(KadanesAlgorithm, Case10)
	{
		std::vector<int> array = {3, 4, -6, 7, 8, -15, 100};
		const auto expected = 101;
		const auto output = algoExpert::famousAlgorithms::kadanesAlgorithm(array);
		EXPECT_EQ(expected, output);
	}
	TEST(KadanesAlgorithm, Case11)
	{
		std::vector<int> array = {8, 5, -9, 1, 3, -2, 3, 4, 7, 2, -9, 6, 3, 1, -5, 4};
		const auto expected = 23;
		const auto output = algoExpert::famousAlgorithms::kadanesAlgorithm(array);
		EXPECT_EQ(expected, output);
	}
	TEST(KadanesAlgorithm, Case12)
	{
		std::vector<int> array = {8, 5, -9, 1, 3, -2, 3, 4, 7, 2, -9, 6, 3, 1, -5, 6};
		const auto expected = 24;
		const auto output = algoExpert::famousAlgorithms::kadanesAlgorithm(array);
		EXPECT_EQ(expected, output);
	}
	TEST(KadanesAlgorithm, Case13)
	{
		std::vector<int> array = {8, 5, -9, 1, 3, -2, 3, 4, 7, 2, -18, 6, 3, 1, -5, 6};
		const auto expected = 22;
		const auto output = algoExpert::famousAlgorithms::kadanesAlgorithm(array);
		EXPECT_EQ(expected, output);
	}
	TEST(KadanesAlgorithm, Case14)
	{
		std::vector<int> array = {8, 5, -9, 1, 3, -2, 3, 4, 7, 2, -18, 6, 3, 1, -5, 6, 20, -23, 15, 1, -3, 4};
		const auto expected = 35;
		const auto output = algoExpert::famousAlgorithms::kadanesAlgorithm(array);
		EXPECT_EQ(expected, output);
	}
	TEST(KadanesAlgorithm, Case15)
	{
		std::vector<int> array = {100, 8, 5, -9, 1, 3, -2, 3, 4, 7, 2, -18, 6, 3, 1, -5, 6, 20, -23, 15, 1, -3, 4};
		const auto expected = 135;
		const auto output = algoExpert::famousAlgorithms::kadanesAlgorithm(array);
		EXPECT_EQ(expected, output);
	}
	TEST(KadanesAlgorithm, Case16)
	{
		std::vector<int> array = {-1000, -1000, 2, 4, -5, -6, -7, -8, -2, -100};
		const auto expected = 6;
		const auto output = algoExpert::famousAlgorithms::kadanesAlgorithm(array);
		EXPECT_EQ(expected, output);
	}
	TEST(KadanesAlgorithm, Case17)
	{
		std::vector<int> array = {-2, -1};
		const auto expected = -1;
		const auto output = algoExpert::famousAlgorithms::kadanesAlgorithm(array);
		EXPECT_EQ(expected, output);
	}
	TEST(KadanesAlgorithm, Case18)
	{
		std::vector<int> array = {-2, 1};
		const auto expected = 1;
		const auto output = algoExpert::famousAlgorithms::kadanesAlgorithm(array);
		EXPECT_EQ(expected, output);
	}
	TEST(KadanesAlgorithm, Case19)
	{
		std::vector<int> array = {-10};
		const auto expected = -10;
		const auto output = algoExpert::famousAlgorithms::kadanesAlgorithm(array);
		EXPECT_EQ(expected, output);
	}
}

