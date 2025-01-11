#include "SearchInSortedMatrix.h"
#include "gtest/gtest.h"

namespace
{
	TEST(SearchInSortedMatrix, Case01)
	{
		std::vector<std::vector<int>> matrix =
			{
				{1, 4, 7, 12, 15, 1000},
				{2, 5, 19, 31, 32, 1001},
				{3, 8, 24, 33, 35, 1002},
				{40, 41, 42, 44, 45, 1003},
				{99, 100, 103, 106, 128, 1004}
			};
		int target = 44;
		const std::vector<int> expected = {3, 3};
		const auto output = algoExpert::searching::searchInSortedMatrix(matrix, target);
		EXPECT_EQ(expected, output);
	}
	TEST(SearchInSortedMatrix, Case02)
	{
		std::vector<std::vector<int>> matrix =
			{
				{1, 4, 7, 12, 15, 1000},
				{2, 5, 19, 31, 32, 1001},
				{3, 8, 24, 33, 35, 1002},
				{40, 41, 42, 44, 45, 1003},
				{99, 100, 103, 106, 128, 1004}
			};
		int target = 1;
		const std::vector<int> expected = {0, 0};
		const auto output = algoExpert::searching::searchInSortedMatrix(matrix, target);
		EXPECT_EQ(expected, output);
	}
	TEST(SearchInSortedMatrix, Case03)
	{
		std::vector<std::vector<int>> matrix =
			{
				{1, 4, 7, 12, 15, 1000},
				{2, 5, 19, 31, 32, 1001},
				{3, 8, 24, 33, 35, 1002},
				{40, 41, 42, 44, 45, 1003},
				{99, 100, 103, 106, 128, 1004}
			};
		int target = 2;
		const std::vector<int> expected = {1, 0};
		const auto output = algoExpert::searching::searchInSortedMatrix(matrix, target);
		EXPECT_EQ(expected, output);
	}
	TEST(SearchInSortedMatrix, Case04)
	{
		std::vector<std::vector<int>> matrix =
			{
				{1, 4, 7, 12, 15, 1000},
				{2, 5, 19, 31, 32, 1001},
				{3, 8, 24, 33, 35, 1002},
				{40, 41, 42, 44, 45, 1003},
				{99, 100, 103, 106, 128, 1004}
			};
		int target = 4;
		const std::vector<int> expected = {0, 1};
		const auto output = algoExpert::searching::searchInSortedMatrix(matrix, target);
		EXPECT_EQ(expected, output);
	}
	TEST(SearchInSortedMatrix, Case05)
	{
		std::vector<std::vector<int>> matrix =
			{
				{1, 4, 7, 12, 15, 1000},
				{2, 5, 19, 31, 32, 1001},
				{3, 8, 24, 33, 35, 1002},
				{40, 41, 42, 44, 45, 1003},
				{99, 100, 103, 106, 128, 1004}
			};
		int target = 15;
		const std::vector<int> expected = {0, 4};
		const auto output = algoExpert::searching::searchInSortedMatrix(matrix, target);
		EXPECT_EQ(expected, output);
	}
	TEST(SearchInSortedMatrix, Case06)
	{
		std::vector<std::vector<int>> matrix =
			{
				{1, 4, 7, 12, 15, 1000},
				{2, 5, 19, 31, 32, 1001},
				{3, 8, 24, 33, 35, 1002},
				{40, 41, 42, 44, 45, 1003},
				{99, 100, 103, 106, 128, 1004}
			};
		int target = 12;
		const std::vector<int> expected = {0, 3};
		const auto output = algoExpert::searching::searchInSortedMatrix(matrix, target);
		EXPECT_EQ(expected, output);
	}
	TEST(SearchInSortedMatrix, Case07)
	{
		std::vector<std::vector<int>> matrix =
			{
				{1, 4, 7, 12, 15, 1000},
				{2, 5, 19, 31, 32, 1001},
				{3, 8, 24, 33, 35, 1002},
				{40, 41, 42, 44, 45, 1003},
				{99, 100, 103, 106, 128, 1004}
			};
		int target = 32;
		const std::vector<int> expected = {1, 4};
		const auto output = algoExpert::searching::searchInSortedMatrix(matrix, target);
		EXPECT_EQ(expected, output);
	}
	TEST(SearchInSortedMatrix, Case08)
	{
		std::vector<std::vector<int>> matrix =
			{
				{1, 4, 7, 12, 15, 1000},
				{2, 5, 19, 31, 32, 1001},
				{3, 8, 24, 33, 35, 1002},
				{40, 41, 42, 44, 45, 1003},
				{99, 100, 103, 106, 128, 1004}
			};
		int target = 99;
		const std::vector<int> expected = {4, 0};
		const auto output = algoExpert::searching::searchInSortedMatrix(matrix, target);
		EXPECT_EQ(expected, output);
	}
	TEST(SearchInSortedMatrix, Case09)
	{
		std::vector<std::vector<int>> matrix =
			{
				{1, 4, 7, 12, 15, 1000},
				{2, 5, 19, 31, 32, 1001},
				{3, 8, 24, 33, 35, 1002},
				{40, 41, 42, 44, 45, 1003},
				{99, 100, 103, 106, 128, 1004}
			};
		int target = 100;
		const std::vector<int> expected = {4, 1};
		const auto output = algoExpert::searching::searchInSortedMatrix(matrix, target);
		EXPECT_EQ(expected, output);
	}
	TEST(SearchInSortedMatrix, Case10)
	{
		std::vector<std::vector<int>> matrix =
			{
				{1, 4, 7, 12, 15, 1000},
				{2, 5, 19, 31, 32, 1001},
				{3, 8, 24, 33, 35, 1002},
				{40, 41, 42, 44, 45, 1003},
				{99, 100, 103, 106, 128, 1004}
			};
		int target = 40;
		const std::vector<int> expected = {3, 0};
		const auto output = algoExpert::searching::searchInSortedMatrix(matrix, target);
		EXPECT_EQ(expected, output);
	}
	TEST(SearchInSortedMatrix, Case11)
	{
		std::vector<std::vector<int>> matrix =
			{
				{1, 4, 7, 12, 15, 1000},
				{2, 5, 19, 31, 32, 1001},
				{3, 8, 24, 33, 35, 1002},
				{40, 41, 42, 44, 45, 1003},
				{99, 100, 103, 106, 128, 1004}
			};
		int target = 128;
		const std::vector<int> expected = {4, 4};
		const auto output = algoExpert::searching::searchInSortedMatrix(matrix, target);
		EXPECT_EQ(expected, output);
	}
	TEST(SearchInSortedMatrix, Case12)
	{
		std::vector<std::vector<int>> matrix =
			{
				{1, 4, 7, 12, 15, 1000},
				{2, 5, 19, 31, 32, 1001},
				{3, 8, 24, 33, 35, 1002},
				{40, 41, 42, 44, 45, 1003},
				{99, 100, 103, 106, 128, 1004}
			};
		int target = 106;
		const std::vector<int> expected = {4, 3};
		const auto output = algoExpert::searching::searchInSortedMatrix(matrix, target);
		EXPECT_EQ(expected, output);
	}
	TEST(SearchInSortedMatrix, Case13)
	{
		std::vector<std::vector<int>> matrix =
			{
				{1, 4, 7, 12, 15, 1000},
				{2, 5, 19, 31, 32, 1001},
				{3, 8, 24, 33, 35, 1002},
				{40, 41, 42, 44, 45, 1003},
				{99, 100, 103, 106, 128, 1004}
			};
		int target = 45;
		const std::vector<int> expected = {3, 4};
		const auto output = algoExpert::searching::searchInSortedMatrix(matrix, target);
		EXPECT_EQ(expected, output);
	}
	TEST(SearchInSortedMatrix, Case14)
	{
		std::vector<std::vector<int>> matrix =
			{
				{1, 4, 7, 12, 15, 1000},
				{2, 5, 19, 31, 32, 1001},
				{3, 8, 24, 33, 35, 1002},
				{40, 41, 42, 44, 45, 1003},
				{99, 100, 103, 106, 128, 1004}
			};
		int target = 24;
		const std::vector<int> expected = {2, 2};
		const auto output = algoExpert::searching::searchInSortedMatrix(matrix, target);
		EXPECT_EQ(expected, output);
	}
	TEST(SearchInSortedMatrix, Case15)
	{
		std::vector<std::vector<int>> matrix =
			{
				{1, 4, 7, 12, 15, 1000},
				{2, 5, 19, 31, 32, 1001},
				{3, 8, 24, 33, 35, 1002},
				{40, 41, 42, 44, 45, 1003},
				{99, 100, 103, 106, 128, 1004}
			};
		int target = 43;
		const std::vector<int> expected = {-1, -1};
		const auto output = algoExpert::searching::searchInSortedMatrix(matrix, target);
		EXPECT_EQ(expected, output);
	}
	TEST(SearchInSortedMatrix, Case16)
	{
		std::vector<std::vector<int>> matrix =
			{
				{1, 4, 7, 12, 15, 1000},
				{2, 5, 19, 31, 32, 1001},
				{3, 8, 24, 33, 35, 1002},
				{40, 41, 42, 44, 45, 1003},
				{99, 100, 103, 106, 128, 1004}
			};
		int target = -1;
		const std::vector<int> expected = {-1, -1};
		const auto output = algoExpert::searching::searchInSortedMatrix(matrix, target);
		EXPECT_EQ(expected, output);
	}
	TEST(SearchInSortedMatrix, Case17)
	{
		std::vector<std::vector<int>> matrix =
			{
				{1, 4, 7, 12, 15, 1000},
				{2, 5, 19, 31, 32, 1001},
				{3, 8, 24, 33, 35, 1002},
				{40, 41, 42, 44, 45, 1003},
				{99, 100, 103, 106, 128, 1004}
			};
		int target = 1000;
		const std::vector<int> expected = {0, 5};
		const auto output = algoExpert::searching::searchInSortedMatrix(matrix, target);
		EXPECT_EQ(expected, output);
	}
	TEST(SearchInSortedMatrix, Case18)
	{
		std::vector<std::vector<int>> matrix =
			{
				{1, 4, 7, 12, 15, 1000},
				{2, 5, 19, 31, 32, 1001},
				{3, 8, 24, 33, 35, 1002},
				{40, 41, 42, 44, 45, 1003},
				{99, 100, 103, 106, 128, 1004}
			};
		int target = 1004;
		const std::vector<int> expected = {4, 5};
		const auto output = algoExpert::searching::searchInSortedMatrix(matrix, target);
		EXPECT_EQ(expected, output);
	}
}
