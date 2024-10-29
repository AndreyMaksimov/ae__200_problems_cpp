#include "InterweavingStrings.h"
#include "gtest/gtest.h"

namespace
{
	TEST(InterweavingStrings, Case01)
	{
		std::string one = "algoexpert";
		std::string three = "your-algodream-expertjob";
		std::string two = "your-dream-job";
		const auto expected = true;
		const auto output = algoExpert::recursion::interweavingStrings(one, two, three);
		EXPECT_EQ(expected, output);
	}
	TEST(InterweavingStrings, Case02)
	{
		std::string one = "a";
		std::string three = "ab";
		std::string two = "b";
		const auto expected = true;
		const auto output = algoExpert::recursion::interweavingStrings(one, two, three);
		EXPECT_EQ(expected, output);
	}
	TEST(InterweavingStrings, Case03)
	{
		std::string one = "a";
		std::string three = "ba";
		std::string two = "b";
		const auto expected = true;
		const auto output = algoExpert::recursion::interweavingStrings(one, two, three);
		EXPECT_EQ(expected, output);
	}
	TEST(InterweavingStrings, Case04)
	{
		std::string one = "a";
		std::string three = "ac";
		std::string two = "b";
		const auto expected = false;
		const auto output = algoExpert::recursion::interweavingStrings(one, two, three);
		EXPECT_EQ(expected, output);
	}
	TEST(InterweavingStrings, Case05)
	{
		std::string one = "abc";
		std::string three = "abcdef";
		std::string two = "def";
		const auto expected = true;
		const auto output = algoExpert::recursion::interweavingStrings(one, two, three);
		EXPECT_EQ(expected, output);
	}
	TEST(InterweavingStrings, Case06)
	{
		std::string one = "abc";
		std::string three = "adbecf";
		std::string two = "def";
		const auto expected = true;
		const auto output = algoExpert::recursion::interweavingStrings(one, two, three);
		EXPECT_EQ(expected, output);
	}
	TEST(InterweavingStrings, Case07)
	{
		std::string one = "abc";
		std::string three = "deabcf";
		std::string two = "def";
		const auto expected = true;
		const auto output = algoExpert::recursion::interweavingStrings(one, two, three);
		EXPECT_EQ(expected, output);
	}
	TEST(InterweavingStrings, Case08)
	{
		std::string one = "aabcc";
		std::string three = "aadbbcbcac";
		std::string two = "dbbca";
		const auto expected = true;
		const auto output = algoExpert::recursion::interweavingStrings(one, two, three);
		EXPECT_EQ(expected, output);
	}
	TEST(InterweavingStrings, Case09)
	{
		std::string one = "aabcc";
		std::string three = "aadbbbaccc";
		std::string two = "dbbca";
		const auto expected = false;
		const auto output = algoExpert::recursion::interweavingStrings(one, two, three);
		EXPECT_EQ(expected, output);
	}
	TEST(InterweavingStrings, Case10)
	{
		std::string one = "algoexpert";
		std::string three = "ayloguore-xdpreeratm-job";
		std::string two = "your-dream-job";
		const auto expected = true;
		const auto output = algoExpert::recursion::interweavingStrings(one, two, three);
		EXPECT_EQ(expected, output);
	}
	TEST(InterweavingStrings, Case11)
	{
		std::string one = "aaaaaaa";
		std::string three = "aaaaaaaaaaaaaab";
		std::string two = "aaaabaaa";
		const auto expected = false;
		const auto output = algoExpert::recursion::interweavingStrings(one, two, three);
		EXPECT_EQ(expected, output);
	}
	TEST(InterweavingStrings, Case12)
	{
		std::string one = "aaaaaaa";
		std::string three = "aaaaaaaaaaaaaa";
		std::string two = "aaaaaaa";
		const auto expected = true;
		const auto output = algoExpert::recursion::interweavingStrings(one, two, three);
		EXPECT_EQ(expected, output);
	}
	TEST(InterweavingStrings, Case13)
	{
		std::string one = "aacaaaa";
		std::string three = "aaaabacaaaaaaa";
		std::string two = "aaabaaa";
		const auto expected = true;
		const auto output = algoExpert::recursion::interweavingStrings(one, two, three);
		EXPECT_EQ(expected, output);
	}
	TEST(InterweavingStrings, Case14)
	{
		std::string one = "aacaaaa";
		std::string three = "aaaacabaaaaaaa";
		std::string two = "aaabaaa";
		const auto expected = true;
		const auto output = algoExpert::recursion::interweavingStrings(one, two, three);
		EXPECT_EQ(expected, output);
	}
	TEST(InterweavingStrings, Case15)
	{
		std::string one = "aacaaaa";
		std::string three = "aaaaaacbaaaaaa";
		std::string two = "aaabaaa";
		const auto expected = false;
		const auto output = algoExpert::recursion::interweavingStrings(one, two, three);
		EXPECT_EQ(expected, output);
	}
	TEST(InterweavingStrings, Case16)
	{
		std::string one = "algoexpert";
		std::string three = "1your-algodream-expertjob";
		std::string two = "your-dream-job";
		const auto expected = false;
		const auto output = algoExpert::recursion::interweavingStrings(one, two, three);
		EXPECT_EQ(expected, output);
	}
	TEST(InterweavingStrings, Case17)
	{
		std::string one = "algoexpert";
		std::string three = "your-algodream-expertjob1";
		std::string two = "your-dream-job";
		const auto expected = false;
		const auto output = algoExpert::recursion::interweavingStrings(one, two, three);
		EXPECT_EQ(expected, output);
	}
	TEST(InterweavingStrings, Case18)
	{
		std::string one = "algoexpert";
		std::string three = "your-algodream-expertjo";
		std::string two = "your-dream-job";
		const auto expected = false;
		const auto output = algoExpert::recursion::interweavingStrings(one, two, three);
		EXPECT_EQ(expected, output);
	}
	TEST(InterweavingStrings, Case19)
	{
		std::string one = "ae";
		std::string three = "see";
		std::string two = "e";
		const auto expected = false;
		const auto output = algoExpert::recursion::interweavingStrings(one, two, three);
		EXPECT_EQ(expected, output);
	}
	TEST(InterweavingStrings, Case20)
	{
		std::string one = "algo";
		std::string three = "fralgogo";
		std::string two = "frog";
		const auto expected = true;
		const auto output = algoExpert::recursion::interweavingStrings(one, two, three);
		EXPECT_EQ(expected, output);
	}
}

