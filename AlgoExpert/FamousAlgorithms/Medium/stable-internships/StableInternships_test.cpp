#include "StableInternships.h"
#include "gtest/gtest.h"

#if 0
namespace
{
	TEST(StableInternships, Case01)
	{
		std::vector<std::vector<int>> interns = {};
		std::vector<std::vector<int>> teams = {};
		const std::vector<std::vector<int>> expected = {};
		const auto output = algoExpert::famousAlgorithms::stableInternships(interns, teams);
		EXPECT_EQ(expected, output);
	}
	TEST(StableInternships, Case02)
	{
		std::vector<std::vector<int>> interns =
			{
				{0}
			};
		std::vector<std::vector<int>> teams =
			{
				{0}
			};
		std::vector<std::vector<int>> expected =
			{
				{0, 0}
			};
		const auto output = algoExpert::famousAlgorithms::stableInternships(interns, teams);
		EXPECT_EQ(expected, output);
	}
	TEST(StableInternships, Case03)
	{
		std::vector<std::vector<int>> interns =
			{
				{0, 1},
				{1, 0}
			};
		std::vector<std::vector<int>> teams =
			{
				{0, 1},
				{1, 0}
			};
		std::vector<std::vector<int>> expected =
			{
				{0, 0},
				{1, 1}
			};
		const auto output = algoExpert::famousAlgorithms::stableInternships(interns, teams);
		EXPECT_EQ(expected, output);
	}
	TEST(StableInternships, Case04)
	{
		std::vector<std::vector<int>> interns =
			{
				{0, 1},
				{0, 1}
			};
		std::vector<std::vector<int>> teams =
			{
				{0, 1},
				{0, 1}
			};
		std::vector<std::vector<int>> expected =
			{
				{0, 0},
				{1, 1}
			};
		const auto output = algoExpert::famousAlgorithms::stableInternships(interns, teams);
		EXPECT_EQ(expected, output);
	}
	TEST(StableInternships, Case05)
	{
		std::vector<std::vector<int>> interns =
			{
				{0, 1},
				{0, 1}
			};
		std::vector<std::vector<int>> teams =
			{
				{0, 1},
				{1, 0}
			};
		std::vector<std::vector<int>> expected =
			{
				{0, 0},
				{1, 1}
			};
		const auto output = algoExpert::famousAlgorithms::stableInternships(interns, teams);
		EXPECT_EQ(expected, output);
	}
	TEST(StableInternships, Case06)
	{
		std::vector<std::vector<int>> interns =
			{
				{0, 1},
				{1, 0}
			};
		std::vector<std::vector<int>> teams =
			{
				{0, 1},
				{0, 1}
			};
		std::vector<std::vector<int>> expected =
			{
				{0, 0},
				{1, 1}
			};
		const auto output = algoExpert::famousAlgorithms::stableInternships(interns, teams);
		EXPECT_EQ(expected, output);
	}
	TEST(StableInternships, Case07)
	{
		std::vector<std::vector<int>> interns =
			{
				{1, 0},
				{0, 1}
			};
		std::vector<std::vector<int>> teams =
			{
				{0, 1},
				{1, 0}
			};
		std::vector<std::vector<int>> expected =
			{
				{0, 1},
				{1, 0}
			};
		const auto output = algoExpert::famousAlgorithms::stableInternships(interns, teams);
		EXPECT_EQ(expected, output);
	}
	TEST(StableInternships, Case08)
	{
		std::vector<std::vector<int>> interns =
			{
				{0, 1, 2},
				{2, 1, 0},
				{1, 2, 0}
			};
		std::vector<std::vector<int>> teams =
			{
				{2, 1, 0},
				{0, 1, 2},
				{0, 2, 1}
			};
		std::vector<std::vector<int>> expected =
			{
				{0, 0},
				{1, 2},
				{2, 1}
			};
		const auto output = algoExpert::famousAlgorithms::stableInternships(interns, teams);
		EXPECT_EQ(expected, output);
	}
	TEST(StableInternships, Case09)
	{
		std::vector<std::vector<int>> interns =
			{
				{0, 1, 2},
				{0, 2, 1},
				{1, 2, 0}
			};
		std::vector<std::vector<int>> teams =
			{
				{2, 1, 0},
				{0, 1, 2},
				{0, 2, 1}
			};
		std::vector<std::vector<int>> expected =
			{
				{0, 1},
				{1, 0},
				{2, 2}
			};
		const auto output = algoExpert::famousAlgorithms::stableInternships(interns, teams);
		EXPECT_EQ(expected, output);
	}
	TEST(StableInternships, Case10)
	{
		std::vector<std::vector<int>> interns =
			{
				{0, 1, 2},
				{0, 1, 2},
				{0, 1, 2}
			};
		std::vector<std::vector<int>> teams =
			{
				{2, 1, 0},
				{2, 1, 0},
				{2, 1, 0}
			};
		std::vector<std::vector<int>> expected =
			{
				{0, 2},
				{1, 1},
				{2, 0}
			};
		const auto output = algoExpert::famousAlgorithms::stableInternships(interns, teams);
		EXPECT_EQ(expected, output);
	}
	TEST(StableInternships, Case11)
	{
		std::vector<std::vector<int>> interns =
			{
				{0, 1, 2, 3},
				{2, 1, 3, 0},
				{0, 2, 3, 1},
				{3, 1, 0, 2}
			};
		std::vector<std::vector<int>> teams =
			{
				{1, 3, 2, 0},
				{0, 1, 2, 3},
				{1, 2, 3, 0},
				{3, 0, 2, 1}
			};
		std::vector<std::vector<int>> expected =
			{
				{0, 1},
				{1, 2},
				{2, 0},
				{3, 3}
			};
		const auto output = algoExpert::famousAlgorithms::stableInternships(interns, teams);
		EXPECT_EQ(expected, output);
	}
	TEST(StableInternships, Case12)
	{
		std::vector<std::vector<int>> interns =
			{
				{0, 1, 2, 3},
				{0, 1, 3, 2},
				{0, 2, 3, 1},
				{0, 2, 3, 1}
			};
		std::vector<std::vector<int>> teams =
			{
				{1, 3, 2, 0},
				{0, 1, 2, 3},
				{1, 2, 3, 0},
				{3, 0, 2, 1}
			};
		std::vector<std::vector<int>> expected =
			{
				{0, 1},
				{1, 0},
				{2, 2},
				{3, 3}
			};
		const auto output = algoExpert::famousAlgorithms::stableInternships(interns, teams);
		EXPECT_EQ(expected, output);
	}
	TEST(StableInternships, Case13)
	{
		std::vector<std::vector<int>> interns =
			{
				{0, 1, 2, 3},
				{0, 1, 3, 2},
				{0, 2, 3, 1},
				{0, 2, 3, 1}
			};
		std::vector<std::vector<int>> teams =
			{
				{1, 3, 2, 0},
				{0, 1, 2, 3},
				{1, 3, 2, 0},
				{3, 0, 2, 1}
			};
		std::vector<std::vector<int>> expected =
			{
				{0, 1},
				{1, 0},
				{2, 3},
				{3, 2}
			};
		const auto output = algoExpert::famousAlgorithms::stableInternships(interns, teams);
		EXPECT_EQ(expected, output);
	}
}
#endif
