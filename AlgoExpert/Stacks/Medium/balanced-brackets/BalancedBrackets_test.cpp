#include "BalancedBrackets.h"
#include "gtest/gtest.h"

namespace
{
	TEST(BalancedBrackets, Case01)
	{
		std::string str = "({})(){}(())()()";
		const auto expected = true;
		const auto output = algoExpert::stacks::balancedBrackets(str);
		EXPECT_EQ(expected, output);
	}
	TEST(BalancedBrackets, Case02)
	{
		std::string str = "(){}{}{";
		const auto expected = false;
		const auto output = algoExpert::stacks::balancedBrackets(str);
		EXPECT_EQ(expected, output);
	}
	TEST(BalancedBrackets, Case03)
	{
		std::string str = "(((((({{{{{{{{{{({)})}}}}}}}}}}))))))";
		const auto expected = false;
		const auto output = algoExpert::stacks::balancedBrackets(str);
		EXPECT_EQ(expected, output);
	}
	TEST(BalancedBrackets, Case04)
	{
		std::string str = "()(){{()})}";
		const auto expected = false;
		const auto output = algoExpert::stacks::balancedBrackets(str);
		EXPECT_EQ(expected, output);
	}
	TEST(BalancedBrackets, Case05)
	{
		std::string str = "(()())((()()()))";
		const auto expected = true;
		const auto output = algoExpert::stacks::balancedBrackets(str);
		EXPECT_EQ(expected, output);
	}
	TEST(BalancedBrackets, Case06)
	{
		std::string str = "{}()";
		const auto expected = true;
		const auto output = algoExpert::stacks::balancedBrackets(str);
		EXPECT_EQ(expected, output);
	}
	TEST(BalancedBrackets, Case07)
	{
		std::string str = "()({})";
		const auto expected = true;
		const auto output = algoExpert::stacks::balancedBrackets(str);
		EXPECT_EQ(expected, output);
	}
	TEST(BalancedBrackets, Case08)
	{
		std::string str = "((){{{{{}}}}})";
		const auto expected = true;
		const auto output = algoExpert::stacks::balancedBrackets(str);
		EXPECT_EQ(expected, output);
	}
	TEST(BalancedBrackets, Case09)
	{
		std::string str = "((({})()))";
		const auto expected = true;
		const auto output = algoExpert::stacks::balancedBrackets(str);
		EXPECT_EQ(expected, output);
	}
	TEST(BalancedBrackets, Case10)
	{
		std::string str = "(({}()()){})";
		const auto expected = true;
		const auto output = algoExpert::stacks::balancedBrackets(str);
		EXPECT_EQ(expected, output);
	}
	TEST(BalancedBrackets, Case11)
	{
		std::string str = "(((((({{{{{{{{{{{{{{{{{{()}}}}}}}}}}}}}}}}}}))))))((({})({}){}){}){}({}){}(())";
		const auto expected = true;
		const auto output = algoExpert::stacks::balancedBrackets(str);
		EXPECT_EQ(expected, output);
	}
	TEST(BalancedBrackets, Case12)
	{
		std::string str = "{{{{{({(}))}}}}}";
		const auto expected = false;
		const auto output = algoExpert::stacks::balancedBrackets(str);
		EXPECT_EQ(expected, output);
	}
	TEST(BalancedBrackets, Case13)
	{
		std::string str = "{((({})({}){}){}){}({}){}((())";
		const auto expected = false;
		const auto output = algoExpert::stacks::balancedBrackets(str);
		EXPECT_EQ(expected, output);
	}
	TEST(BalancedBrackets, Case14)
	{
		std::string str = "){}}";
		const auto expected = false;
		const auto output = algoExpert::stacks::balancedBrackets(str);
		EXPECT_EQ(expected, output);
	}
	TEST(BalancedBrackets, Case15)
	{
		std::string str = "(a)";
		const auto expected = true;
		const auto output = algoExpert::stacks::balancedBrackets(str);
		EXPECT_EQ(expected, output);
	}
	TEST(BalancedBrackets, Case16)
	{
		std::string str = "(a(";
		const auto expected = false;
		const auto output = algoExpert::stacks::balancedBrackets(str);
		EXPECT_EQ(expected, output);
	}
	TEST(BalancedBrackets, Case17)
	{
		std::string str = "(141{})(){waga}((51afaw))()hh()";
		const auto expected = true;
		const auto output = algoExpert::stacks::balancedBrackets(str);
		EXPECT_EQ(expected, output);
	}
	TEST(BalancedBrackets, Case18)
	{
		std::string str = "aafwgaga(){}a{}{gggg";
		const auto expected = false;
		const auto output = algoExpert::stacks::balancedBrackets(str);
		EXPECT_EQ(expected, output);
	}
	TEST(BalancedBrackets, Case19)
	{
		std::string str = "(((((({{{{{safaf{{{{{({)}safsafsa)}}}}}}}}gawga}}))))))";
		const auto expected = false;
		const auto output = algoExpert::stacks::balancedBrackets(str);
		EXPECT_EQ(expected, output);
	}
	TEST(BalancedBrackets, Case20)
	{
		std::string str = "()(agawg){{()gawggaw})}";
		const auto expected = false;
		const auto output = algoExpert::stacks::balancedBrackets(str);
		EXPECT_EQ(expected, output);
	}
	TEST(BalancedBrackets, Case21)
	{
		std::string str = "(()agwg())((()agwga()())gawgwgag)";
		const auto expected = true;
		const auto output = algoExpert::stacks::balancedBrackets(str);
		EXPECT_EQ(expected, output);
	}
	TEST(BalancedBrackets, Case22)
	{
		std::string str = "{}gawgw()";
		const auto expected = true;
		const auto output = algoExpert::stacks::balancedBrackets(str);
		EXPECT_EQ(expected, output);
	}
	TEST(BalancedBrackets, Case23)
	{
		std::string str = "(agwgg)({ghhheah%&@Q})";
		const auto expected = true;
		const auto output = algoExpert::stacks::balancedBrackets(str);
		EXPECT_EQ(expected, output);
	}
}

