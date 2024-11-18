#include "RunLengthEncoding.h"
#include "gtest/gtest.h"

namespace
{
	TEST(RunLengthEncoding, Case01)
	{
		std::string str = "AAAAAAAAAAAAABBCCCCDD";
		const std::string expected = "9A4A2B4C2D";
		const auto output = algoExpert::strings::runLengthEncoding(str);
		EXPECT_EQ(expected, output);
	}
	TEST(RunLengthEncoding, Case02)
	{
		std::string str = "aA";
		const std::string expected = "1a1A";
		const auto output = algoExpert::strings::runLengthEncoding(str);
		EXPECT_EQ(expected, output);
	}
	TEST(RunLengthEncoding, Case03)
	{
		std::string str = "122333";
		const auto expected = "112233";
		const auto output = algoExpert::strings::runLengthEncoding(str);
		EXPECT_EQ(expected, output);
	}
	TEST(RunLengthEncoding, Case04)
	{
		std::string str = "************^^^^^^^$$$$$$%%%%%%%!!!!!!AAAAAAAAAAAAAAAAAAAA";
		const std::string expected = "9*3*7^6$7%6!9A9A2A";
		const auto output = algoExpert::strings::runLengthEncoding(str);
		EXPECT_EQ(expected, output);
	}
	TEST(RunLengthEncoding, Case05)
	{
		std::string str = "aAaAaaaaaAaaaAAAABbbbBBBB";
		const std::string expected = "1a1A1a1A5a1A3a4A1B3b4B";
		const auto output = algoExpert::strings::runLengthEncoding(str);
		EXPECT_EQ(expected, output);
	}
	TEST(RunLengthEncoding, Case06)
	{
		std::string str = "                          ";
		const std::string expected = "9 9 8";
		const auto output = algoExpert::strings::runLengthEncoding(str);
		EXPECT_EQ(expected, output);
	}
	TEST(RunLengthEncoding, Case07)
	{
		std::string str = "1  222 333    444  555";
		const std::string expected = "112 321 334 342 35";
		const auto output = algoExpert::strings::runLengthEncoding(str);
		EXPECT_EQ(expected, output);
	}
	TEST(RunLengthEncoding, Case08)
	{
		std::string str = "1A2BB3CCC4DDDD";
		const std::string expected = "111A122B133C144D";
		const auto output = algoExpert::strings::runLengthEncoding(str);
		EXPECT_EQ(expected, output);
	}
	TEST(RunLengthEncoding, Case09)
	{
		std::string str = "........______=========AAAA   AAABBBB   BBB";
		const std::string expected = "8.6_9=4A3 3A4B3 3B";
		const auto output = algoExpert::strings::runLengthEncoding(str);
		EXPECT_EQ(expected, output);
	}
	TEST(RunLengthEncoding, Case10)
	{
		std::string str = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
		const std::string expected = "9a9a9a9a9a9a9a9a9a9a9a9a9a9a9a9a9a9a9a9a9a9a9a1a";
		const auto output = algoExpert::strings::runLengthEncoding(str);
		EXPECT_EQ(expected, output);
	}
	TEST(RunLengthEncoding, Case11)
	{
		std::string str = "        aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
		const std::string expected = "8 9a9a9a9a9a4a";
		const auto output = algoExpert::strings::runLengthEncoding(str);
		EXPECT_EQ(expected, output);
	}
	TEST(RunLengthEncoding, Case12)
	{
		std::string str = " ";
		const std::string expected = "1 ";
		const auto output = algoExpert::strings::runLengthEncoding(str);
		EXPECT_EQ(expected, output);
	}
	TEST(RunLengthEncoding, Case13)
	{
		std::string str = "[(aaaaaaa,bbbbbbb,ccccc,dddddd)]";
		const std::string expected = "1[1(7a1,7b1,5c1,6d1)1]";
		const auto output = algoExpert::strings::runLengthEncoding(str);
		EXPECT_EQ(expected, output);
	}
	TEST(RunLengthEncoding, Case14)
	{
		std::string str = ";;;;;;;;;;;;''''''''''''''''''''1233333332222211112222111s";
		const std::string expected = "9;3;9'9'2'111273524142311s";
		const auto output = algoExpert::strings::runLengthEncoding(str);
		EXPECT_EQ(expected, output);
	}
	TEST(RunLengthEncoding, Case15)
	{
		std::string str = "AAAAAAAAAAAAABBCCCCDDDDDDDDDDD";
		const std::string expected = "9A4A2B4C9D2D";
		const auto output = algoExpert::strings::runLengthEncoding(str);
		EXPECT_EQ(expected, output);
	}
}

