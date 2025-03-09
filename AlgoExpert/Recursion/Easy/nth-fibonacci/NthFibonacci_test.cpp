#include "NthFibonacci.h"
#include "gtest/gtest.h"

namespace
{
	TEST(NthFibonacci, Case01)
	{
		int n = 6;
		const auto expected = 5;
		const auto output = algoExpert::recursion::getNthFib(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NthFibonacci, Case02)
	{
		int n = 1;
		const auto expected = 0;
		const auto output = algoExpert::recursion::getNthFib(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NthFibonacci, Case03)
	{
		int n = 2;
		const auto expected = 1;
		const auto output = algoExpert::recursion::getNthFib(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NthFibonacci, Case04)
	{
		int n = 3;
		const auto expected = 1;
		const auto output = algoExpert::recursion::getNthFib(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NthFibonacci, Case05)
	{
		int n = 4;
		const auto expected = 2;
		const auto output = algoExpert::recursion::getNthFib(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NthFibonacci, Case06)
	{
		int n = 5;
		const auto expected = 3;
		const auto output = algoExpert::recursion::getNthFib(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NthFibonacci, Case07)
	{
		int n = 7;
		const auto expected = 8;
		const auto output = algoExpert::recursion::getNthFib(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NthFibonacci, Case08)
	{
		int n = 8;
		const auto expected = 13;
		const auto output = algoExpert::recursion::getNthFib(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NthFibonacci, Case09)
	{
		int n = 9;
		const auto expected = 21;
		const auto output = algoExpert::recursion::getNthFib(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NthFibonacci, Case10)
	{
		int n = 10;
		const auto expected = 34;
		const auto output = algoExpert::recursion::getNthFib(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NthFibonacci, Case11)
	{
		int n = 11;
		const auto expected = 55;
		const auto output = algoExpert::recursion::getNthFib(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NthFibonacci, Case12)
	{
		int n = 12;
		const auto expected = 89;
		const auto output = algoExpert::recursion::getNthFib(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NthFibonacci, Case13)
	{
		int n = 13;
		const auto expected = 144;
		const auto output = algoExpert::recursion::getNthFib(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NthFibonacci, Case14)
	{
		int n = 14;
		const auto expected = 233;
		const auto output = algoExpert::recursion::getNthFib(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NthFibonacci, Case15)
	{
		int n = 15;
		const auto expected = 377;
		const auto output = algoExpert::recursion::getNthFib(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NthFibonacci, Case16)
	{
		int n = 16;
		const auto expected = 610;
		const auto output = algoExpert::recursion::getNthFib(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NthFibonacci, Case17)
	{
		int n = 17;
		const auto expected = 987;
		const auto output = algoExpert::recursion::getNthFib(n);
		EXPECT_EQ(expected, output);
	}
	TEST(NthFibonacci, Case18)
	{
		int n = 18;
		const auto expected = 1597;
		const auto output = algoExpert::recursion::getNthFib(n);
		EXPECT_EQ(expected, output);
	}
}

