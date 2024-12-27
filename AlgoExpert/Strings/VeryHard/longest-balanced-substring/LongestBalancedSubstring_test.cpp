#include "LongestBalancedSubstring.h"
#include "gtest/gtest.h"

namespace
{
	TEST(LongestBalancedSubstring, Case01)
	{
		std::string string = "(()))(";
		const auto expected = 4;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case02)
	{
		std::string string = "())()(()())";
		const auto expected = 8;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case03)
	{
		std::string string = "()()()()()()()()()()";
		const auto expected = 20;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case04)
	{
		std::string string = "((()))()()()()()()()()()()";
		const auto expected = 26;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case05)
	{
		std::string string = "()";
		const auto expected = 2;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case06)
	{
		std::string string = "(())";
		const auto expected = 4;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case07)
	{
		std::string string = "((((((((()))))))))";
		const auto expected = 18;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case08)
	{
		std::string string = "((((((((((((((((()))))))))))))))))";
		const auto expected = 34;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case09)
	{
		std::string string = "(((()))()())))(()()()())()()";
		const auto expected = 14;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case10)
	{
		std::string string = "((((((()()()())()))((())))()";
		const auto expected = 26;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case11)
	{
		std::string string = "((";
		const auto expected = 0;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case12)
	{
		std::string string = "))";
		const auto expected = 0;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case13)
	{
		std::string string = "(";
		const auto expected = 0;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case14)
	{
		std::string string = ")";
		const auto expected = 0;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case15)
	{
		std::string string = "((((((((((((((((((";
		const auto expected = 0;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case16)
	{
		std::string string = "))))))))))))))))))";
		const auto expected = 0;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case17)
	{
		std::string string = "(((((((((((((((((()";
		const auto expected = 2;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case18)
	{
		std::string string = "()))))))))))))))))))";
		const auto expected = 2;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case19)
	{
		std::string string = ")(";
		const auto expected = 0;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case20)
	{
		std::string string = "(((((((((())))))))))";
		const auto expected = 20;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case21)
	{
		std::string string = "(((((((((()())))))))))";
		const auto expected = 22;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case22)
	{
		std::string string = "(((((((((()))))))))))";
		const auto expected = 20;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case23)
	{
		std::string string = "))))))))))((((((((((";
		const auto expected = 0;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case24)
	{
		std::string string = "";
		const auto expected = 0;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case25)
	{
		std::string string = "())()";
		const auto expected = 2;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case26)
	{
		std::string string = "()(()";
		const auto expected = 2;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case27)
	{
		std::string string = ")))))))()))))())((((";
		const auto expected = 2;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case28)
	{
		std::string string = "))())(())((())(())((";
		const auto expected = 8;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case29)
	{
		std::string string = ")())()(()(()())))(((";
		const auto expected = 12;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case30)
	{
		std::string string = "((()))())()()()()))(";
		const auto expected = 8;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case31)
	{
		std::string string = ")(())))(())()))))))(";
		const auto expected = 6;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case32)
	{
		std::string string = "()()((((()()))()()()";
		const auto expected = 14;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case33)
	{
		std::string string = "()(())()(()()))((())";
		const auto expected = 14;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case34)
	{
		std::string string = ")(()((()()(()()()(((";
		const auto expected = 6;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case35)
	{
		std::string string = ")())()(()))()((()))(";
		const auto expected = 8;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case36)
	{
		std::string string = "()()))))(())((()(()(";
		const auto expected = 4;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case37)
	{
		std::string string = "(()())())()((())())(";
		const auto expected = 10;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case38)
	{
		std::string string = "(()))((())()))))))()";
		const auto expected = 8;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case39)
	{
		std::string string = "(((()()()(())((()()(";
		const auto expected = 10;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case40)
	{
		std::string string = ")(()())((()(()())(((";
		const auto expected = 8;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case41)
	{
		std::string string = "))()(()()()(()()()))";
		const auto expected = 18;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case42)
	{
		std::string string = "(((((((((((((()(()()";
		const auto expected = 4;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case43)
	{
		std::string string = ")))(()(()(()()()((()";
		const auto expected = 6;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case44)
	{
		std::string string = "()(()((()((()(((((()";
		const auto expected = 2;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case45)
	{
		std::string string = ")((())(((()(()()(())";
		const auto expected = 8;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case46)
	{
		std::string string = ")((((((()))(()))()((";
		const auto expected = 14;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case47)
	{
		std::string string = "()(()()(()(()))((())";
		const auto expected = 12;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case48)
	{
		std::string string = ")))((())()()))())(()";
		const auto expected = 10;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case49)
	{
		std::string string = "()())()((()()(((()))";
		const auto expected = 6;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case50)
	{
		std::string string = ")(()))))(()())))(()(";
		const auto expected = 6;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case51)
	{
		std::string string = "))(()()((()))()))()(";
		const auto expected = 14;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case52)
	{
		std::string string = ")()()))()(())))))))(";
		const auto expected = 6;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case53)
	{
		std::string string = "(((())(())()())()()(";
		const auto expected = 18;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case54)
	{
		std::string string = "()()(()()())((((()))";
		const auto expected = 12;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case55)
	{
		std::string string = "((()()((()(((()))())";
		const auto expected = 12;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case56)
	{
		std::string string = "))(())()())())))()))";
		const auto expected = 8;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case57)
	{
		std::string string = "(()(()()())())()((()";
		const auto expected = 16;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case58)
	{
		std::string string = "()()())))()()()())()";
		const auto expected = 8;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case59)
	{
		std::string string = "))((((()))()))()))))";
		const auto expected = 14;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case60)
	{
		std::string string = ")())(())((((((()((()";
		const auto expected = 4;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case61)
	{
		std::string string = ")((()())))((()((()))";
		const auto expected = 8;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case62)
	{
		std::string string = "())(())))(((()()((()";
		const auto expected = 4;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case63)
	{
		std::string string = ")()))((()))(((((((()";
		const auto expected = 6;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case64)
	{
		std::string string = ")((((((((()())((())(";
		const auto expected = 6;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case65)
	{
		std::string string = ")(())))((()()()(((()";
		const auto expected = 6;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case66)
	{
		std::string string = ")()()))((((())))((()";
		const auto expected = 8;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case67)
	{
		std::string string = "(()(())(()((()))()()";
		const auto expected = 12;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case68)
	{
		std::string string = "(((()(((()()))((())(";
		const auto expected = 8;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case69)
	{
		std::string string = ")()()())()))(())()()";
		const auto expected = 8;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case70)
	{
		std::string string = "((()))())(((()((())(";
		const auto expected = 8;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case71)
	{
		std::string string = ")((((()()(()))))()))";
		const auto expected = 18;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case72)
	{
		std::string string = "((()(())))))((()))((";
		const auto expected = 10;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case73)
	{
		std::string string = "(()()))())()()(())((";
		const auto expected = 8;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case74)
	{
		std::string string = "(()))((())()()((((((";
		const auto expected = 8;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case75)
	{
		std::string string = "((()(()))(((((())(((";
		const auto expected = 8;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case76)
	{
		std::string string = "())))))())(((())((()";
		const auto expected = 4;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
	TEST(LongestBalancedSubstring, Case77)
	{
		std::string string = "(()(()";
		const auto expected = 2;
		const auto output = algoExpert::strings::longestBalancedSubstring(string);
		EXPECT_EQ(expected, output);
	}
}

