#include "LargestPark.h"
#include "gtest/gtest.h"

namespace
{
	TEST(LargestPark, Case01)
	{
		std::vector<std::vector<bool>> land = 
			{
				{true}
			};
		const auto expected = 0;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case02)
	{
		std::vector<std::vector<bool>> land = 
			{
				{false}
			};
		const auto expected = 1;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case03)
	{
		std::vector<std::vector<bool>> land = 
			{
				{true, false, true}
			};
		const auto expected = 1;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case04)
	{
		std::vector<std::vector<bool>> land = 
			{
				{false, true, false}
			};
		const auto expected = 1;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case05)
	{
		std::vector<std::vector<bool>> land = 
			{
				{false, false, false}
			};
		const auto expected = 3;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case06)
	{
		std::vector<std::vector<bool>> land = 
			{
				{true, true, true}
			};
		const auto expected = 0;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case07)
	{
		std::vector<std::vector<bool>> land = 
			{
				{false, false, false},
				{false, false, false}
			};
		const auto expected = 6;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case08)
	{
		std::vector<std::vector<bool>> land = 
			{
				{false, true, false},
				{false, false, false}
			};
		const auto expected = 3;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case09)
	{
		std::vector<std::vector<bool>> land = 
			{
				{false, false, false},
				{false, true, false}
			};
		const auto expected = 3;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case10)
	{
		std::vector<std::vector<bool>> land = 
			{
				{false, true, false},
				{false, true, false}
			};
		const auto expected = 2;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case11)
	{
		std::vector<std::vector<bool>> land = 
			{
				{false, true, false},
				{false, true, false},
				{false, true, false}
			};
		const auto expected = 3;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case12)
	{
		std::vector<std::vector<bool>> land = 
			{
				{false, true, false},
				{false, false, false},
				{false, true, false}
			};
		const auto expected = 3;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case13)
	{
		std::vector<std::vector<bool>> land = 
			{
				{false, false, false},
				{false, false, false},
				{false, true, false}
			};
		const auto expected = 6;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case14)
	{
		std::vector<std::vector<bool>> land = 
			{
				{false, false, false},
				{false, false, false},
				{false, false, false}
			};
		const auto expected = 9;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case15)
	{
		std::vector<std::vector<bool>> land = 
			{
				{false, false, false},
				{false, false, false},
				{false, false, true}
			};
		const auto expected = 6;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case16)
	{
		std::vector<std::vector<bool>> land = 
			{
				{false, false, false},
				{false, false, false},
				{true, false, false}
			};
		const auto expected = 6;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case17)
	{
		std::vector<std::vector<bool>> land = 
			{
				{true, false, false},
				{false, false, false},
				{false, false, false}
			};
		const auto expected = 6;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case18)
	{
		std::vector<std::vector<bool>> land = 
			{
				{false, false, true},
				{false, false, false},
				{false, false, false}
			};
		const auto expected = 6;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case19)
	{
		std::vector<std::vector<bool>> land = 
			{
				{true, true, false, true, false},
				{false, true, false, false, false},
				{true, false, false, false, false},
				{false, true, true, false, true}
			};
		const auto expected = 6;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case20)
	{
		std::vector<std::vector<bool>> land = 
			{
				{true, true, true},
				{true, true, true},
				{true, true, true}
			};
		const auto expected = 0;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case21)
	{
		std::vector<std::vector<bool>> land = 
			{
				{false, false},
				{false, false}
			};
		const auto expected = 4;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case22)
	{
		std::vector<std::vector<bool>> land = 
			{
				{true, false, true, false},
				{false, true, false, true},
				{true, false, true, false},
				{false, true, false, true}
			};
		const auto expected = 1;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case23)
	{
		std::vector<std::vector<bool>> land = 
			{
				{false, false, false, false, false},
				{false, false, false, false, false},
				{false, false, true, false, false},
				{false, false, false, false, false},
				{false, false, false, false, false}
			};
		const auto expected = 10;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case24)
	{
		std::vector<std::vector<bool>> land = 
			{
				{true, false, false, true, true, false},
				{false, true, true, false, true, false},
				{true, true, false, false, true, false}
			};
		const auto expected = 3;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case25)
	{
		std::vector<std::vector<bool>> land = 
			{
				{false, true, true, true},
				{true, true, true, true},
				{true, true, true, true},
				{true, true, true, true}
			};
		const auto expected = 1;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case26)
	{
		std::vector<std::vector<bool>> land = 
			{
				{true, false, false, true, true, false},
				{false, true, true, false, true, false},
				{true, true, false, true, true, false}
			};
		const auto expected = 3;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case27)
	{
		std::vector<std::vector<bool>> land = 
			{
				{true},
				{false},
				{true},
				{false},
				{true},
				{false},
				{true}
			};
		const auto expected = 1;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case28)
	{
		std::vector<std::vector<bool>> land = 
			{
				{true},
				{true},
				{true},
				{true},
				{true},
				{true},
				{true}
			};
		const auto expected = 0;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case29)
	{
		std::vector<std::vector<bool>> land = 
			{
				{false},
				{false},
				{false},
				{false},
				{false},
				{false},
				{false}
			};
		const auto expected = 7;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case30)
	{
		std::vector<std::vector<bool>> land = 
			{
				{false, true, false, false, true, false},
				{true, false, true, false, false, true},
				{false, true, false, true, false, false},
				{false, false, true, false, true, false},
				{true, false, false, true, false, true},
				{false, true, false, false, true, false}
			};
		const auto expected = 2;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case31)
	{
		std::vector<std::vector<bool>> land = 
			{
				{true, false, true, false, false},
				{false, true, false, true, true},
				{false, true, true, false, false},
				{false, true, false, false, true},
				{true, false, true, false, false}
			};
		const auto expected = 3;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case32)
	{
		std::vector<std::vector<bool>> land = 
			{
				{true, false, true, true, false, false, true},
				{false, true, false, false, true, true, false},
				{true, false, true, true, false, false, true}
			};
		const auto expected = 2;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case33)
	{
		std::vector<std::vector<bool>> land = 
			{
				{false, false, true, false, false, true, true},
				{true, true, false, true, true, false, false},
				{false, true, false, true, false, false, false},
				{false, true, false, false, true, true, true}
			};
		const auto expected = 4;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case34)
	{
		std::vector<std::vector<bool>> land = 
			{
				{true, false, true, false, false, true, false, true, false, true},
				{false, true, false, true, true, false, true, false, true, false},
				{true, false, true, false, false, true, false, true, false, true},
				{false, true, false, true, true, false, true, false, true, false},
				{true, false, true, false, false, true, false, true, false, true},
				{false, true, false, true, true, false, true, false, true, false},
				{true, false, true, false, false, true, false, true, false, true},
				{false, true, false, true, true, false, true, false, true, false},
				{true, false, true, false, false, true, false, true, false, true},
				{false, true, false, true, true, false, true, false, true, false}
			};
		const auto expected = 2;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case35)
	{
		std::vector<std::vector<bool>> land = 
			{
				{false, false, false, false, false, false},
				{false, false, false, false, false, false},
				{false, false, true, true, true, false},
				{false, false, true, true, true, false},
				{false, false, true, true, true, false},
				{false, false, false, false, false, false},
				{false, false, false, false, false, false}
			};
		const auto expected = 14;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case36)
	{
		std::vector<std::vector<bool>> land = 
			{
				{true, true, true, false, false, false},
				{true, true, true, false, false, false},
				{true, true, true, false, false, false},
				{false, false, false, false, false, false},
				{false, false, false, false, false, false},
				{false, false, false, false, false, false},
				{false, false, false, false, false, false}
			};
		const auto expected = 24;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case37)
	{
		std::vector<std::vector<bool>> land = 
			{
				{true, true, true, true, true, true},
				{true, true, true, true, true, true},
				{true, false, false, false, false, true},
				{true, false, false, false, false, true},
				{true, false, false, false, false, true},
				{true, true, true, true, true, true},
				{true, true, true, true, true, true}
			};
		const auto expected = 12;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case38)
	{
		std::vector<std::vector<bool>> land = 
			{
				{false, false, false, true, true, true},
				{false, false, false, true, true, true},
				{false, false, false, true, true, true},
				{false, false, false, true, true, true},
				{true, true, true, true, true, true},
				{true, true, true, true, true, true},
				{true, true, true, true, true, true}
			};
		const auto expected = 12;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case39)
	{
		std::vector<std::vector<bool>> land = 
			{
				{false, false, false, true, true, true},
				{false, true, true, true, true, true},
				{true, false, false, false, false, true},
				{true, false, false, false, false, true},
				{true, false, false, false, false, true},
				{true, true, true, true, true, false},
				{false, false, true, true, false, false}
			};
		const auto expected = 12;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
	TEST(LargestPark, Case40)
	{
		std::vector<std::vector<bool>> land = 
			{
				{true, false, true, false, true, false, true, false, false, true, false, false, true, false, false},
				{false, false, true, true, false, true, false, false, true, false, true, false, false, false, false},
				{true, true, false, false, false, false, false, true, false, false, true, true, false, false, false},
				{true, true, false, false, false, false, false, true, false, false, true, true, false, false, true},
				{false, false, false, false, false, false, false, false, true, true, false, false, true, false, true},
				{true, false, true, true, false, true, false, true, true, false, false, true, false, false, true},
				{false, true, false, false, true, false, true, true, false, true, false, true, false, false, true},
				{false, true, false, true, false, true, false, false, true, false, true, true, false, true, false},
				{false, true, true, false, false, true, false, false, true, true, false, false, true, false, true},
				{true, false, true, true, false, true, false, true, true, false, false, true, false, false, true},
				{false, true, false, false, true, false, true, true, false, false, false, true, false, false, true},
				{false, true, false, true, false, true, false, false, true, false, true, true, false, true, false},
				{false, true, true, false, false, true, false, false, true, true, false, false, true, false, true},
				{true, false, true, true, false, true, false, true, true, false, false, true, false, false, false},
				{false, false, false, false, false, false, false, true, false, false, false, false, false, false, false}
			};
		const auto expected = 15;
		const auto output = algoExpert::stacks::largestPark(land);
		EXPECT_EQ(expected, output);
	}
}
