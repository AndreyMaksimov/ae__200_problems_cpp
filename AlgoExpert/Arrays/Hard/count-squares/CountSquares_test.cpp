#include "CountSquares.h"
#include "gtest/gtest.h"

namespace
{
	TEST(CountSquares, Case01)
	{
		std::vector<std::vector<int>> points = {};
		const auto expected = 0;
		const auto output = algoExpert::arrays::countSquares(points);
		EXPECT_EQ(expected, output);
	}
	TEST(CountSquares, Case02)
	{
		std::vector<std::vector<int>> points =
			{
				{1, 0}
			};
		const auto expected = 0;
		const auto output = algoExpert::arrays::countSquares(points);
		EXPECT_EQ(expected, output);
	}
	TEST(CountSquares, Case03)
	{
		std::vector<std::vector<int>> points =
			{
				{0, 1},
				{1, 0}
			};
		const auto expected = 0;
		const auto output = algoExpert::arrays::countSquares(points);
		EXPECT_EQ(expected, output);
	}
	TEST(CountSquares, Case04)
	{
		std::vector<std::vector<int>> points =
			{
				{0, 0},
				{0, 1},
				{1, 0}
			};
		const auto expected = 0;
		const auto output = algoExpert::arrays::countSquares(points);
		EXPECT_EQ(expected, output);
	}
	TEST(CountSquares, Case05)
	{
		std::vector<std::vector<int>> points =
			{
				{1, 1},
				{0, 0},
				{0, 1},
				{1, 0}
			};
		const auto expected = 1;
		const auto output = algoExpert::arrays::countSquares(points);
		EXPECT_EQ(expected, output);
	}
	TEST(CountSquares, Case06)
	{
		std::vector<std::vector<int>> points =
			{
				{1, 1},
				{0, 0},
				{-4, 2},
				{-2, -1},
				{0, 1},
				{1, 0},
				{-1, 4}
			};
		const auto expected = 2;
		const auto output = algoExpert::arrays::countSquares(points);
		EXPECT_EQ(expected, output);
	}
	TEST(CountSquares, Case07)
	{
		std::vector<std::vector<int>> points =
			{
				{1, 1},
				{3, -3},
				{0, 0},
				{0, 1},
				{-1, 3},
				{6, 2},
				{0, -2},
				{1, 0},
				{4, 0},
				{5, 1},
				{1, 5},
				{-2, 0}
			};
		const auto expected = 3;
		const auto output = algoExpert::arrays::countSquares(points);
		EXPECT_EQ(expected, output);
	}
	TEST(CountSquares, Case08)
	{
		std::vector<std::vector<int>> points =
			{
				{1, 1},
				{0, 0},
				{0, 1},
				{2, 0}
			};
		const auto expected = 0;
		const auto output = algoExpert::arrays::countSquares(points);
		EXPECT_EQ(expected, output);
	}
	TEST(CountSquares, Case09)
	{
		std::vector<std::vector<int>> points =
			{
				{-1, -1},
				{1, 1},
				{-1, 1},
				{1, -1}
			};
		const auto expected = 1;
		const auto output = algoExpert::arrays::countSquares(points);
		EXPECT_EQ(expected, output);
	}
	TEST(CountSquares, Case10)
	{
		std::vector<std::vector<int>> points =
			{
				{-2, -2},
				{2, 2},
				{0, 0},
				{-2, 2},
				{2, -2}
			};
		const auto expected = 1;
		const auto output = algoExpert::arrays::countSquares(points);
		EXPECT_EQ(expected, output);
	}
	TEST(CountSquares, Case11)
	{
		std::vector<std::vector<int>> points =
			{
				{0, 0},
				{1, 1},
				{1, 0},
				{2, 1},
				{2, 0}
			};
		const auto expected = 1;
		const auto output = algoExpert::arrays::countSquares(points);
		EXPECT_EQ(expected, output);
	}
	TEST(CountSquares, Case12)
	{
		std::vector<std::vector<int>> points =
			{
				{1, -1},
				{-1, 3},
				{3, 5},
				{5, 1}
			};
		const auto expected = 1;
		const auto output = algoExpert::arrays::countSquares(points);
		EXPECT_EQ(expected, output);
	}
	TEST(CountSquares, Case13)
	{
		std::vector<std::vector<int>> points =
			{
				{1, 1},
				{0, 0},
				{0, 1},
				{1, 0},
				{2, 2},
				{1, 2},
				{2, 1}
			};
		const auto expected = 3;
		const auto output = algoExpert::arrays::countSquares(points);
		EXPECT_EQ(expected, output);
	}
	TEST(CountSquares, Case14)
	{
		std::vector<std::vector<int>> points =
			{
				{1, 1},
				{0, 0},
				{0, 1},
				{1, 0},
				{-1, 3},
				{3, 5},
				{5, 1},
				{1, -1}
			};
		const auto expected = 2;
		const auto output = algoExpert::arrays::countSquares(points);
		EXPECT_EQ(expected, output);
	}
	TEST(CountSquares, Case15)
	{
		std::vector<std::vector<int>> points =
			{
				{3, 1},
				{1, 1},
				{0, 0},
				{0, 1},
				{3, 7},
				{1, 0},
				{-1, 3},
				{3, 5},
				{5, 1},
				{9, 1},
				{1, -1},
				{9, 7}
			};
		const auto expected = 3;
		const auto output = algoExpert::arrays::countSquares(points);
		EXPECT_EQ(expected, output);
	}
	TEST(CountSquares, Case16)
	{
		std::vector<std::vector<int>> points =
			{
				{3, 1},
				{1, 1},
				{0, 0},
				{0, 1},
				{3, 7},
				{1, 0},
				{-4, -2},
				{27, -5},
				{-1, 3},
				{3, 5},
				{5, 1},
				{10, -19},
				{9, 1},
				{1, -1},
				{9, 7},
				{13, 12}
			};
		const auto expected = 4;
		const auto output = algoExpert::arrays::countSquares(points);
		EXPECT_EQ(expected, output);
	}
	TEST(CountSquares, Case17)
	{
		std::vector<std::vector<int>> points =
			{
				{3, 1},
				{1, 1},
				{21, 19},
				{0, 0},
				{0, 1},
				{3, 7},
				{1, 0},
				{12, -14},
				{-4, -2},
				{27, -5},
				{-1, 3},
				{3, 5},
				{5, 1},
				{10, -19},
				{9, 1},
				{1, -1},
				{9, 7},
				{13, 12},
				{0, 7},
				{33, -2}
			};
		const auto expected = 5;
		const auto output = algoExpert::arrays::countSquares(points);
		EXPECT_EQ(expected, output);
	}
	TEST(CountSquares, Case18)
	{
		std::vector<std::vector<int>> points =
			{
				{21, 1},
				{3, 1},
				{1, 1},
				{21, 19},
				{0, 0},
				{0, 1},
				{2, 3},
				{22, 2},
				{3, 7},
				{1, 0},
				{12, -14},
				{-4, -2},
				{-22, 22},
				{27, -5},
				{-1, 3},
				{3, 5},
				{5, 1},
				{10, -19},
				{9, 1},
				{1, -1},
				{9, 7},
				{13, 12},
				{0, 7},
				{3, 19},
				{33, -2}
			};
		const auto expected = 6;
		const auto output = algoExpert::arrays::countSquares(points);
		EXPECT_EQ(expected, output);
	}
}
