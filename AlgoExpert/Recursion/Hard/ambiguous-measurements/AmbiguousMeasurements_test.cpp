#include "AmbiguousMeasurements.h"
#include "gtest/gtest.h"

namespace
{
	TEST(AmbiguousMeasurements, Case01)
	{
		int high = 2300;
		int low = 2100;
		std::vector<std::vector<int>> measuringCups =
			{
				{200, 210},
				{450, 465},
				{800, 850}
			};
		const auto expected = true;
		const auto output = algoExpert::recursion::ambiguousMeasurements(measuringCups, low, high);
		EXPECT_EQ(expected, output);
	}
	TEST(AmbiguousMeasurements, Case02)
	{
		int high = 20;
		int low = 10;
		std::vector<std::vector<int>> measuringCups =
			{
				{200, 210}
			};
		const auto expected = false;
		const auto output = algoExpert::recursion::ambiguousMeasurements(measuringCups, low, high);
		EXPECT_EQ(expected, output);
	}
	TEST(AmbiguousMeasurements, Case03)
	{
		int high = 2300;
		int low = 2100;
		std::vector<std::vector<int>> measuringCups =
			{
				{230, 240},
				{290, 310},
				{500, 515}
			};
		const auto expected = true;
		const auto output = algoExpert::recursion::ambiguousMeasurements(measuringCups, low, high);
		EXPECT_EQ(expected, output);
	}
	TEST(AmbiguousMeasurements, Case04)
	{
		int high = 101;
		int low = 100;
		std::vector<std::vector<int>> measuringCups =
			{
				{1, 3},
				{2, 4},
				{5, 6}
			};
		const auto expected = false;
		const auto output = algoExpert::recursion::ambiguousMeasurements(measuringCups, low, high);
		EXPECT_EQ(expected, output);
	}
	TEST(AmbiguousMeasurements, Case05)
	{
		int high = 120;
		int low = 100;
		std::vector<std::vector<int>> measuringCups =
			{
				{1, 3},
				{2, 4},
				{5, 6}
			};
		const auto expected = true;
		const auto output = algoExpert::recursion::ambiguousMeasurements(measuringCups, low, high);
		EXPECT_EQ(expected, output);
	}
	TEST(AmbiguousMeasurements, Case06)
	{
		int high = 12;
		int low = 10;
		std::vector<std::vector<int>> measuringCups =
			{
				{1, 3},
				{2, 4},
				{5, 6},
				{10, 20}
			};
		const auto expected = true;
		const auto output = algoExpert::recursion::ambiguousMeasurements(measuringCups, low, high);
		EXPECT_EQ(expected, output);
	}
	TEST(AmbiguousMeasurements, Case07)
	{
		int high = 12;
		int low = 10;
		std::vector<std::vector<int>> measuringCups =
			{
				{1, 3},
				{2, 4},
				{5, 7},
				{10, 20}
			};
		const auto expected = false;
		const auto output = algoExpert::recursion::ambiguousMeasurements(measuringCups, low, high);
		EXPECT_EQ(expected, output);
	}
	TEST(AmbiguousMeasurements, Case08)
	{
		int high = 1050;
		int low = 1000;
		std::vector<std::vector<int>> measuringCups =
			{
				{50, 60},
				{100, 120},
				{20, 40},
				{10, 15},
				{400, 500}
			};
		const auto expected = false;
		const auto output = algoExpert::recursion::ambiguousMeasurements(measuringCups, low, high);
		EXPECT_EQ(expected, output);
	}
	TEST(AmbiguousMeasurements, Case09)
	{
		int high = 1200;
		int low = 1000;
		std::vector<std::vector<int>> measuringCups =
			{
				{50, 65},
				{100, 120},
				{20, 40},
				{10, 15},
				{400, 500}
			};
		const auto expected = true;
		const auto output = algoExpert::recursion::ambiguousMeasurements(measuringCups, low, high);
		EXPECT_EQ(expected, output);
	}
	TEST(AmbiguousMeasurements, Case10)
	{
		int high = 3300;
		int low = 3000;
		std::vector<std::vector<int>> measuringCups =
			{
				{50, 65},
				{100, 120},
				{20, 40},
				{10, 15},
				{400, 500},
				{300, 350},
				{10, 25}
			};
		const auto expected = false;
		const auto output = algoExpert::recursion::ambiguousMeasurements(measuringCups, low, high);
		EXPECT_EQ(expected, output);
	}
	TEST(AmbiguousMeasurements, Case11)
	{
		int high = 1050;
		int low = 1000;
		std::vector<std::vector<int>> measuringCups =
			{
				{50, 60},
				{100, 120},
				{20, 40},
				{400, 500}
			};
		const auto expected = false;
		const auto output = algoExpert::recursion::ambiguousMeasurements(measuringCups, low, high);
		EXPECT_EQ(expected, output);
	}
	TEST(AmbiguousMeasurements, Case12)
	{
		int high = 200;
		int low = 200;
		std::vector<std::vector<int>> measuringCups =
			{
				{50, 65}
			};
		const auto expected = false;
		const auto output = algoExpert::recursion::ambiguousMeasurements(measuringCups, low, high);
		EXPECT_EQ(expected, output);
	}
	TEST(AmbiguousMeasurements, Case13)
	{
		int high = 200;
		int low = 200;
		std::vector<std::vector<int>> measuringCups =
			{
				{50, 50}
			};
		const auto expected = true;
		const auto output = algoExpert::recursion::ambiguousMeasurements(measuringCups, low, high);
		EXPECT_EQ(expected, output);
	}
	TEST(AmbiguousMeasurements, Case14)
	{
		int high = 200;
		int low = 200;
		std::vector<std::vector<int>> measuringCups =
			{
				{50, 50},
				{50, 51}
			};
		const auto expected = true;
		const auto output = algoExpert::recursion::ambiguousMeasurements(measuringCups, low, high);
		EXPECT_EQ(expected, output);
	}
	TEST(AmbiguousMeasurements, Case15)
	{
		int high = 1000;
		int low = 0;
		std::vector<std::vector<int>> measuringCups =
			{
				{100, 150},
				{1000, 2000}
			};
		const auto expected = true;
		const auto output = algoExpert::recursion::ambiguousMeasurements(measuringCups, low, high);
		EXPECT_EQ(expected, output);
	}
	TEST(AmbiguousMeasurements, Case16)
	{
		int high = 20;
		int low = 10;
		std::vector<std::vector<int>> measuringCups =
			{
				{10, 20}
			};
		const auto expected = true;
		const auto output = algoExpert::recursion::ambiguousMeasurements(measuringCups, low, high);
		EXPECT_EQ(expected, output);
	}
	TEST(AmbiguousMeasurements, Case17)
	{
		int high = 20;
		int low = 10;
		std::vector<std::vector<int>> measuringCups =
			{
				{15, 18}
			};
		const auto expected = true;
		const auto output = algoExpert::recursion::ambiguousMeasurements(measuringCups, low, high);
		EXPECT_EQ(expected, output);
	}
	TEST(AmbiguousMeasurements, Case18)
	{
		int high = 20;
		int low = 10;
		std::vector<std::vector<int>> measuringCups =
			{
				{15, 22}
			};
		const auto expected = false;
		const auto output = algoExpert::recursion::ambiguousMeasurements(measuringCups, low, high);
		EXPECT_EQ(expected, output);
	}
}
