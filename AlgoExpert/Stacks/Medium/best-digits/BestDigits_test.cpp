#include "BestDigits.h"
#include "gtest/gtest.h"

namespace
{
	TEST(BestDigits, Case01)
	{
		int numDigits = 2;
		std::string number = "462839";
		const auto expected = 6839;
		const auto output = algoExpert::stacks::bestDigits(number, numDigits);
		EXPECT_EQ(expected, output);
	}
	TEST(BestDigits, Case02)
	{
		int numDigits = 4;
		std::string number = "129847563";
		const auto expected = 98763;
		const auto output = algoExpert::stacks::bestDigits(number, numDigits);
		EXPECT_EQ(expected, output);
	}
	TEST(BestDigits, Case03)
	{
		int numDigits = 1;
		std::string number = "19";
		const auto expected = 9;
		const auto output = algoExpert::stacks::bestDigits(number, numDigits);
		EXPECT_EQ(expected, output);
	}
	TEST(BestDigits, Case04)
	{
		int numDigits = 1;
		std::string number = "22";
		const auto expected = 2;
		const auto output = algoExpert::stacks::bestDigits(number, numDigits);
		EXPECT_EQ(expected, output);
	}
	TEST(BestDigits, Case05)
	{
		int numDigits = 1;
		std::string number = "23";
		const auto expected = 3;
		const auto output = algoExpert::stacks::bestDigits(number, numDigits);
		EXPECT_EQ(expected, output);
	}
	TEST(BestDigits, Case06)
	{
		int numDigits = 1;
		std::string number = "123";
		const auto expected = 23;
		const auto output = algoExpert::stacks::bestDigits(number, numDigits);
		EXPECT_EQ(expected, output);
	}
	TEST(BestDigits, Case07)
	{
		int numDigits = 1;
		std::string number = "321";
		const auto expected = 32;
		const auto output = algoExpert::stacks::bestDigits(number, numDigits);
		EXPECT_EQ(expected, output);
	}
	TEST(BestDigits, Case08)
	{
		int numDigits = 2;
		std::string number = "123";
		const auto expected = 3;
		const auto output = algoExpert::stacks::bestDigits(number, numDigits);
		EXPECT_EQ(expected, output);
	}
	TEST(BestDigits, Case09)
	{
		int numDigits = 2;
		std::string number = "321";
		const auto expected = 3;
		const auto output = algoExpert::stacks::bestDigits(number, numDigits);
		EXPECT_EQ(expected, output);
	}
	TEST(BestDigits, Case10)
	{
		int numDigits = 10;
		std::string number = "11111111119999999999";
		const auto expected = 9999999999;
		const auto output = algoExpert::stacks::bestDigits(number, numDigits);
		EXPECT_EQ(expected, output);
	}
	TEST(BestDigits, Case11)
	{
		int numDigits = 9;
		std::string number = "10000000002";
		const auto expected = 12;
		const auto output = algoExpert::stacks::bestDigits(number, numDigits);
		EXPECT_EQ(expected, output);
	}
	TEST(BestDigits, Case12)
	{
		int numDigits = 10;
		std::string number = "10000000002";
		const auto expected = 2;
		const auto output = algoExpert::stacks::bestDigits(number, numDigits);
		EXPECT_EQ(expected, output);
	}
	TEST(BestDigits, Case13)
	{
		int numDigits = 5;
		std::string number = "1020304050";
		const auto expected = 34050;
		const auto output = algoExpert::stacks::bestDigits(number, numDigits);
		EXPECT_EQ(expected, output);
	}
	TEST(BestDigits, Case14)
	{
		int numDigits = 4;
		std::string number = "100300200004";
		const auto expected = 30200004;
		const auto output = algoExpert::stacks::bestDigits(number, numDigits);
		EXPECT_EQ(expected, output);
	}
	TEST(BestDigits, Case15)
	{
		int numDigits = 9;
		std::string number = "9999999999";
		const auto expected = 9;
		const auto output = algoExpert::stacks::bestDigits(number, numDigits);
		EXPECT_EQ(expected, output);
	}
	TEST(BestDigits, Case16)
	{
		int numDigits = 3;
		std::string number = "111221";
		const auto expected = 221;
		const auto output = algoExpert::stacks::bestDigits(number, numDigits);
		EXPECT_EQ(expected, output);
	}
	TEST(BestDigits, Case17)
	{
		int numDigits = 0;
		std::string number = "12345";
		const auto expected = 12345;
		const auto output = algoExpert::stacks::bestDigits(number, numDigits);
		EXPECT_EQ(expected, output);
	}
	TEST(BestDigits, Case18)
	{
		int numDigits = 0;
		std::string number = "54321";
		const auto expected = 54321;
		const auto output = algoExpert::stacks::bestDigits(number, numDigits);
		EXPECT_EQ(expected, output);
	}
}

