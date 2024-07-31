#include "DiskStacking.h"
#include "gtest/gtest.h"

namespace
{
	TEST(DiskStacking, Case01)
	{
		std::vector<std::vector<int>> disks =
			{
				{2, 1, 2},
				{3, 2, 3},
				{2, 2, 8},
				{2, 3, 4},
				{1, 3, 1},
				{4, 4, 5}
			};
		std::vector<std::vector<int>> expected =
			{
				{2, 1, 2},
				{3, 2, 3},
				{4, 4, 5}
			};
		const auto output = algoExpert::dynamicProgramming::diskStacking(disks);
		EXPECT_EQ(expected, output);
	}
	TEST(DiskStacking, Case02)
	{
		std::vector<std::vector<int>> disks =
			{
				{2, 1, 2}
			};
		std::vector<std::vector<int>> expected =
			{
				{2, 1, 2}
			};
		const auto output = algoExpert::dynamicProgramming::diskStacking(disks);
		EXPECT_EQ(expected, output);
	}
	TEST(DiskStacking, Case03)
	{
		std::vector<std::vector<int>> disks =
			{
				{2, 1, 2},
				{3, 2, 3}
			};
		std::vector<std::vector<int>> expected =
			{
				{2, 1, 2},
				{3, 2, 3}
			};
		const auto output = algoExpert::dynamicProgramming::diskStacking(disks);
		EXPECT_EQ(expected, output);
	}
	TEST(DiskStacking, Case04)
	{
		std::vector<std::vector<int>> disks =
			{
				{2, 1, 2},
				{3, 2, 3},
				{2, 2, 8}
			};
		std::vector<std::vector<int>> expected =
			{
				{2, 2, 8}
			};
		const auto output = algoExpert::dynamicProgramming::diskStacking(disks);
		EXPECT_EQ(expected, output);
	}
	TEST(DiskStacking, Case05)
	{
		std::vector<std::vector<int>> disks =
			{
				{2, 1, 2},
				{3, 2, 3},
				{2, 3, 4}
			};
		std::vector<std::vector<int>> expected =
			{
				{2, 1, 2},
				{3, 2, 3}
			};
		const auto output = algoExpert::dynamicProgramming::diskStacking(disks);
		EXPECT_EQ(expected, output);
	}
	TEST(DiskStacking, Case06)
	{
		std::vector<std::vector<int>> disks =
			{
				{2, 1, 2},
				{3, 2, 3},
				{2, 2, 8},
				{2, 3, 4},
				{2, 2, 1},
				{4, 4, 5}
			};
		std::vector<std::vector<int>> expected =
			{
				{2, 1, 2},
				{3, 2, 3},
				{4, 4, 5}
			};
		const auto output = algoExpert::dynamicProgramming::diskStacking(disks);
		EXPECT_EQ(expected, output);
	}
	TEST(DiskStacking, Case07)
	{
		std::vector<std::vector<int>> disks =
			{
				{2, 1, 2},
				{3, 2, 5},
				{2, 2, 8},
				{2, 3, 4},
				{2, 2, 1},
				{4, 4, 5}
			};
		std::vector<std::vector<int>> expected =
			{
				{2, 3, 4},
				{4, 4, 5}
			};
		const auto output = algoExpert::dynamicProgramming::diskStacking(disks);
		EXPECT_EQ(expected, output);
	}
	TEST(DiskStacking, Case08)
	{
		std::vector<std::vector<int>> disks =
			{
				{2, 1, 2},
				{3, 2, 3},
				{2, 2, 8},
				{2, 3, 4},
				{1, 2, 1},
				{4, 4, 5},
				{1, 1, 4}
			};
		std::vector<std::vector<int>> expected =
			{
				{1, 1, 4},
				{2, 2, 8}
			};
		const auto output = algoExpert::dynamicProgramming::diskStacking(disks);
		EXPECT_EQ(expected, output);
	}
	TEST(DiskStacking, Case09)
	{
		std::vector<std::vector<int>> disks =
			{
				{3, 3, 4},
				{2, 1, 2},
				{3, 2, 3},
				{2, 2, 8},
				{2, 3, 4},
				{5, 5, 6},
				{1, 2, 1},
				{4, 4, 5},
				{1, 1, 4},
				{2, 2, 3}
			};
		std::vector<std::vector<int>> expected =
			{
				{2, 2, 3},
				{3, 3, 4},
				{4, 4, 5},
				{5, 5, 6}
			};
		const auto output = algoExpert::dynamicProgramming::diskStacking(disks);
		EXPECT_EQ(expected, output);
	}
}
