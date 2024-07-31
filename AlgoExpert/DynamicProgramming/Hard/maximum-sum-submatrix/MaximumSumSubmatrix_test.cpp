#include "MaximumSumSubmatrix.h"
#include "gtest/gtest.h"

namespace
{
	TEST(MaximumSumSubmatrix, Case01)
	{
		std::vector<std::vector<int>> matrix =
			{
				{5, 3, -1, 5},
				{-7, 3, 7, 4},
				{12, 8, 0, 0},
				{1, -8, -8, 2}
			};
		int size = 2;
		const auto expected = 18;
		const auto output = algoExpert::dynamicProgramming::maximumSumSubmatrix(matrix, size);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximumSumSubmatrix, Case02)
	{
		std::vector<std::vector<int>> matrix =
			{
				{3, -4, 6, -5, 1},
				{1, -2, 8, -4, -2},
				{3, -8, 9, 3, 1},
				{-7, 3, 4, 2, 7},
				{-3, 7, -5, 7, -6}
			};
		int size = 3;
		const auto expected = 28;
		const auto output = algoExpert::dynamicProgramming::maximumSumSubmatrix(matrix, size);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximumSumSubmatrix, Case03)
	{
		std::vector<std::vector<int>> matrix =
			{
				{2, 4},
				{5, 6},
				{-3, 2}
			};
		int size = 2;
		const auto expected = 17;
		const auto output = algoExpert::dynamicProgramming::maximumSumSubmatrix(matrix, size);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximumSumSubmatrix, Case04)
	{
		std::vector<std::vector<int>> matrix =
			{
				{3, -4, 6, -5, 1},
				{1, -2, 8, -4, -2},
				{3, -8, 9, 3, 1},
				{-7, 3, 4, 2, 7},
				{-3, 7, -5, 7, -6},
				{2, 4, 5, 2, 3}
			};
		int size = 4;
		const auto expected = 38;
		const auto output = algoExpert::dynamicProgramming::maximumSumSubmatrix(matrix, size);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximumSumSubmatrix, Case05)
	{
		std::vector<std::vector<int>> matrix =
			{
				{1}
			};
		int size = 1;
		const auto expected = 1;
		const auto output = algoExpert::dynamicProgramming::maximumSumSubmatrix(matrix, size);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximumSumSubmatrix, Case06)
	{
		std::vector<std::vector<int>> matrix =
			{
				{1, 1},
				{1, 1}
			};
		int size = 2;
		const auto expected = 4;
		const auto output = algoExpert::dynamicProgramming::maximumSumSubmatrix(matrix, size);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximumSumSubmatrix, Case07)
	{
		std::vector<std::vector<int>> matrix =
			{
				{1, 1, 2, -1},
				{1, 1, 2, -1}
			};
		int size = 2;
		const auto expected = 6;
		const auto output = algoExpert::dynamicProgramming::maximumSumSubmatrix(matrix, size);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximumSumSubmatrix, Case08)
	{
		std::vector<std::vector<int>> matrix =
			{
				{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
				{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
				{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
				{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
				{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
				{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
				{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
			};
		int size = 5;
		const auto expected = 25;
		const auto output = algoExpert::dynamicProgramming::maximumSumSubmatrix(matrix, size);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximumSumSubmatrix, Case09)
	{
		std::vector<std::vector<int>> matrix =
			{
				{2, 1, 1, 1, 1, 4, -1, 1, 1, 5},
				{1, -1, 1, 1, 1, 1, -1, 1, 4, 1},
				{-50, 12, -1, 1, 5, 1, -1, 1, 1, 1},
				{-52, 99, 1, -1, 1, 1, -1, 1, 1, 1},
				{1, -10, -287, 9, -1, 1, -1, 1, 1, 1},
				{1, 2, 1, 8, 1, -1, 1, 1, 1, 1},
				{1, 1, 1, 1, 1, 1, -1, 1, 1, 1}
			};
		int size = 6;
		const auto expected = 45;
		const auto output = algoExpert::dynamicProgramming::maximumSumSubmatrix(matrix, size);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximumSumSubmatrix, Case10)
	{
		std::vector<std::vector<int>> matrix =
			{
				{-1, -2, -3, -4, -5},
				{-5, -4, -3, -2, -1},
				{-1, -2, -3, -4, -5}
			};
		int size = 2;
		const auto expected = -12;
		const auto output = algoExpert::dynamicProgramming::maximumSumSubmatrix(matrix, size);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximumSumSubmatrix, Case11)
	{
		std::vector<std::vector<int>> matrix =
			{
				{-1, -2, -3, -4, -5},
				{-5, -4, -3, -2, -1},
				{-1, -2, -3, -4, -5},
				{-5, -4, -3, -2, -1},
				{-5, -4, -3, -2, -1}
			};
		int size = 3;
		const auto expected = -24;
		const auto output = algoExpert::dynamicProgramming::maximumSumSubmatrix(matrix, size);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximumSumSubmatrix, Case12)
	{
		std::vector<std::vector<int>> matrix =
			{
				{-1, -2, -3, -4, -5},
				{1, 1, 1, 1, 1},
				{-1, -10, -10, -4, -5},
				{5, 5, 5, 5, 5},
				{-5, -4, -3, -10, -1}
			};
		int size = 1;
		const auto expected = 5;
		const auto output = algoExpert::dynamicProgramming::maximumSumSubmatrix(matrix, size);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximumSumSubmatrix, Case13)
	{
		std::vector<std::vector<int>> matrix =
			{
				{-1, -2, -3, -4, -5},
				{1, 1, 1, 1, 1},
				{-1, -10, -10, -4, -5},
				{5, 5, 5, 5, 5},
				{-5, -4, -3, -10, -1}
			};
		int size = 2;
		const auto expected = 3;
		const auto output = algoExpert::dynamicProgramming::maximumSumSubmatrix(matrix, size);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximumSumSubmatrix, Case14)
	{
		std::vector<std::vector<int>> matrix =
			{
				{3, -4, 6, -5, 1},
				{1, -2, 8, -4, -2},
				{3, -8, 9, 3, 1},
				{-7, 3, 4, 2, 7},
				{-3, 7, -5, 7, -6}
			};
		int size = 4;
		const auto expected = 24;
		const auto output = algoExpert::dynamicProgramming::maximumSumSubmatrix(matrix, size);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximumSumSubmatrix, Case15)
	{
		std::vector<std::vector<int>> matrix =
			{
				{3, -4, 6, -5, 1},
				{1, -2, 8, -4, -2},
				{3, -8, 9, 3, 1},
				{-7, 3, 4, 2, 7},
				{-3, 7, -5, 7, -6}
			};
		int size = 5;
		const auto expected = 19;
		const auto output = algoExpert::dynamicProgramming::maximumSumSubmatrix(matrix, size);
		EXPECT_EQ(expected, output);
	}
	TEST(MaximumSumSubmatrix, Case16)
	{
		std::vector<std::vector<int>> matrix =
			{
				{22, 24, -9, 23},
				{12, 10, -19, 35},
				{45, -20, -20, 99},
				{0, 0, 0, 0},
				{0, 0, 0, 0},
				{-100, 200, -50, 5},
				{5, 6, 7, 8}
			};
		int size = 3;
		const auto expected = 176;
		const auto output = algoExpert::dynamicProgramming::maximumSumSubmatrix(matrix, size);
		EXPECT_EQ(expected, output);
	}
}
