#include "CaesarCipherEncryptor.h"
#include "gtest/gtest.h"

namespace
{
	TEST(CaesarCipherEncryptor, Case01)
	{
		int key = 2;
		std::string str = "xyz";
		const std::string expected = "zab";
		const auto output = algoExpert::strings::caesarCypherEncryptor(str, key);
		EXPECT_EQ(expected, output);
	}
	TEST(CaesarCipherEncryptor, Case02)
	{
		int key = 0;
		std::string str = "abc";
		const std::string expected = "abc";
		const auto output = algoExpert::strings::caesarCypherEncryptor(str, key);
		EXPECT_EQ(expected, output);
	}
	TEST(CaesarCipherEncryptor, Case03)
	{
		int key = 3;
		std::string str = "abc";
		const std::string expected = "def";
		const auto output = algoExpert::strings::caesarCypherEncryptor(str, key);
		EXPECT_EQ(expected, output);
	}
	TEST(CaesarCipherEncryptor, Case04)
	{
		int key = 5;
		std::string str = "xyz";
		const std::string expected = "cde";
		const auto output = algoExpert::strings::caesarCypherEncryptor(str, key);
		EXPECT_EQ(expected, output);
	}
	TEST(CaesarCipherEncryptor, Case05)
	{
		int key = 26;
		std::string str = "abc";
		const std::string expected = "abc";
		const auto output = algoExpert::strings::caesarCypherEncryptor(str, key);
		EXPECT_EQ(expected, output);
	}
	TEST(CaesarCipherEncryptor, Case06)
	{
		int key = 52;
		std::string str = "abc";
		const std::string expected = "abc";
		const auto output = algoExpert::strings::caesarCypherEncryptor(str, key);
		EXPECT_EQ(expected, output);
	}
	TEST(CaesarCipherEncryptor, Case07)
	{
		int key = 57;
		std::string str = "abc";
		const std::string expected = "fgh";
		const auto output = algoExpert::strings::caesarCypherEncryptor(str, key);
		EXPECT_EQ(expected, output);
	}
	TEST(CaesarCipherEncryptor, Case08)
	{
		int key = 25;
		std::string str = "xyz";
		const std::string expected = "wxy";
		const auto output = algoExpert::strings::caesarCypherEncryptor(str, key);
		EXPECT_EQ(expected, output);
	}
	TEST(CaesarCipherEncryptor, Case09)
	{
		int key = 25;
		std::string str = "iwufqnkqkqoolxzzlzihqfm";
		const std::string expected = "hvtepmjpjpnnkwyykyhgpel";
		const auto output = algoExpert::strings::caesarCypherEncryptor(str, key);
		EXPECT_EQ(expected, output);
	}
	TEST(CaesarCipherEncryptor, Case10)
	{
		int key = 52;
		std::string str = "ovmqkwtujqmfkao";
		const std::string expected = "ovmqkwtujqmfkao";
		const auto output = algoExpert::strings::caesarCypherEncryptor(str, key);
		EXPECT_EQ(expected, output);
	}
	TEST(CaesarCipherEncryptor, Case11)
	{
		int key = 7;
		std::string str = "mvklahvjcnbwqvtutmfafkwiuagjkzmzwgf";
		const std::string expected = "tcrshocqjuidxcabatmhmrdpbhnqrgtgdnm";
		const auto output = algoExpert::strings::caesarCypherEncryptor(str, key);
		EXPECT_EQ(expected, output);
	}
	TEST(CaesarCipherEncryptor, Case12)
	{
		int key = 15;
		std::string str = "kjwmntauvjjnmsagwgawkagfuaugjhawgnawgjhawjgawbfawghesh";
		const std::string expected = "zylbcipjkyycbhpvlvplzpvujpjvywplvcplvywplyvplquplvwthw";
		const auto output = algoExpert::strings::caesarCypherEncryptor(str, key);
		EXPECT_EQ(expected, output);
	}
}

