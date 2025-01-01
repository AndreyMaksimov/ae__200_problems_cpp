#include "ReversePolishNotation.h"
#include "gtest/gtest.h"

namespace
{
	TEST(ReversePolishNotation, Case01)
	{
		std::vector<std::string> tokens = {"10"};
		const auto expected = 10;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case02)
	{
		std::vector<std::string> tokens = {"10", "5", "+"};
		const auto expected = 15;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case03)
	{
		std::vector<std::string> tokens = {"10", "5", "-"};
		const auto expected = 5;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case04)
	{
		std::vector<std::string> tokens = {"10", "5", "/"};
		const auto expected = 2;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case05)
	{
		std::vector<std::string> tokens = {"10", "5", "*"};
		const auto expected = 50;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case06)
	{
		std::vector<std::string> tokens = {"10", "-5", "*"};
		const auto expected = -50;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case07)
	{
		std::vector<std::string> tokens = {"-10", "5", "*"};
		const auto expected = -50;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case08)
	{
		std::vector<std::string> tokens = {"-10", "-5", "*"};
		const auto expected = 50;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case09)
	{
		std::vector<std::string> tokens = {"10", "-5", "/"};
		const auto expected = -2;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case10)
	{
		std::vector<std::string> tokens = {"-10", "5", "/"};
		const auto expected = -2;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case11)
	{
		std::vector<std::string> tokens = {"-10", "-5", "/"};
		const auto expected = 2;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case12)
	{
		std::vector<std::string> tokens = {"10", "3", "/"};
		const auto expected = 3;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case13)
	{
		std::vector<std::string> tokens = {"10", "-3", "/"};
		const auto expected = -3;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case14)
	{
		std::vector<std::string> tokens = {"10", "-5", "+"};
		const auto expected = 5;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case15)
	{
		std::vector<std::string> tokens = {"-10", "5", "+"};
		const auto expected = -5;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case16)
	{
		std::vector<std::string> tokens = {"-10", "-5", "+"};
		const auto expected = -15;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case17)
	{
		std::vector<std::string> tokens = {"10", "-5", "-"};
		const auto expected = 15;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case18)
	{
		std::vector<std::string> tokens = {"-10", "5", "-"};
		const auto expected = -15;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case19)
	{
		std::vector<std::string> tokens = {"-10", "-5", "-"};
		const auto expected = -5;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case20)
	{
		std::vector<std::string> tokens = {"3", "2", "+", "7", "*"};
		const auto expected = 35;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case21)
	{
		std::vector<std::string> tokens = {"4", "2", "/", "7", "-"};
		const auto expected = -5;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case22)
	{
		std::vector<std::string> tokens = {"3", "4", "+", "2", "/", "4", "-"};
		const auto expected = -1;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case23)
	{
		std::vector<std::string> tokens = {"4", "-7", "2", "6", "+", "10", "-", "/", "*", "2", "+", "3", "*"};
		const auto expected = 42;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case24)
	{
		std::vector<std::string> tokens = {"4", "-7", "2", "6", "+", "10", "-", "/", "*", "2", "+", "3", "*", "0", "*"};
		const auto expected = 0;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case25)
	{
		std::vector<std::string> tokens = {"50", "3", "17", "+", "2", "-", "/"};
		const auto expected = 2;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case26)
	{
		std::vector<std::string> tokens = {"0", "3", "17", "+", "2", "-", "/"};
		const auto expected = 0;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
	TEST(ReversePolishNotation, Case27)
	{
		std::vector<std::string> tokens = {"0", "3", "17", "+", "2", "-", "/", "2", "-", "7", "10", "+", "*"};
		const auto expected = -34;
		const auto output = algoExpert::stacks::reversePolishNotation(tokens);
		EXPECT_EQ(expected, output);
	}
}
