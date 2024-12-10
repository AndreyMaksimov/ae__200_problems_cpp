#include "OneEdit.h"
#include "gtest/gtest.h"

namespace
{
	TEST(OneEdit, Case01)
	{
		std::string stringOne = "a";
		std::string stringTwo = "a";
		const auto expected = true;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case02)
	{
		std::string stringOne = "aaa";
		std::string stringTwo = "aaa";
		const auto expected = true;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case03)
	{
		std::string stringOne = "a";
		std::string stringTwo = "b";
		const auto expected = true;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case04)
	{
		std::string stringOne = "ab";
		std::string stringTwo = "b";
		const auto expected = true;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case05)
	{
		std::string stringOne = "abc";
		std::string stringTwo = "b";
		const auto expected = false;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case06)
	{
		std::string stringOne = "ab";
		std::string stringTwo = "a";
		const auto expected = true;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case07)
	{
		std::string stringOne = "b";
		std::string stringTwo = "ab";
		const auto expected = true;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case08)
	{
		std::string stringOne = "bb";
		std::string stringTwo = "a";
		const auto expected = false;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case09)
	{
		std::string stringOne = "a";
		std::string stringTwo = "ab";
		const auto expected = true;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case10)
	{
		std::string stringOne = "bb";
		std::string stringTwo = "ab";
		const auto expected = true;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case11)
	{
		std::string stringOne = "ab";
		std::string stringTwo = "bb";
		const auto expected = true;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case12)
	{
		std::string stringOne = "hello";
		std::string stringTwo = "helo";
		const auto expected = true;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case13)
	{
		std::string stringOne = "hello";
		std::string stringTwo = "heo";
		const auto expected = false;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case14)
	{
		std::string stringOne = "hello";
		std::string stringTwo = "heloo";
		const auto expected = true;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case15)
	{
		std::string stringOne = "hello";
		std::string stringTwo = "heloos";
		const auto expected = false;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case16)
	{
		std::string stringOne = "hello";
		std::string stringTwo = "heloos";
		const auto expected = false;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case17)
	{
		std::string stringOne = "hello";
		std::string stringTwo = "helllo";
		const auto expected = true;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case18)
	{
		std::string stringOne = "hello";
		std::string stringTwo = "helllos";
		const auto expected = false;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case19)
	{
		std::string stringOne = "hello";
		std::string stringTwo = "ello";
		const auto expected = true;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case20)
	{
		std::string stringOne = "hello";
		std::string stringTwo = "llo";
		const auto expected = false;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case21)
	{
		std::string stringOne = "hello";
		std::string stringTwo = "ellos";
		const auto expected = false;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case22)
	{
		std::string stringOne = "hello";
		std::string stringTwo = "elllos";
		const auto expected = false;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case23)
	{
		std::string stringOne = "helo";
		std::string stringTwo = "helle";
		const auto expected = false;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case24)
	{
		std::string stringOne = "abcdefghijklmnopqrstuvwxyz";
		std::string stringTwo = "abcdefghijklmnopqrstuvwxyz";
		const auto expected = true;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case25)
	{
		std::string stringOne = "bcdefghijklmnopqrstuvwxyz";
		std::string stringTwo = "abcdefghijklmnopqrstuvwxyz";
		const auto expected = true;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case26)
	{
		std::string stringOne = "bcdefgijklmnopqrstuvwxyz";
		std::string stringTwo = "abcdefghijklmnopqrstuvwxyz";
		const auto expected = false;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case27)
	{
		std::string stringOne = "bcdefghijklmnopqrstuvwxyz";
		std::string stringTwo = "acdefghijklmnopqrstuvwxyz";
		const auto expected = true;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case28)
	{
		std::string stringOne = "bcdefghijklmnopqrstuvwxyz";
		std::string stringTwo = "abdefghijklmnopqrstuvwxyz";
		const auto expected = false;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case29)
	{
		std::string stringOne = "bcdefghijklmnopqrstuvwxyz";
		std::string stringTwo = "abcdefghijklmnopqrstuvwxy";
		const auto expected = false;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case30)
	{
		std::string stringOne = "bcdefghijklmnopqrstuvwxyz";
		std::string stringTwo = "abcdefghijklmnopqrstuvwxyza";
		const auto expected = false;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case31)
	{
		std::string stringOne = "abcdefghijklmnopqrstuvwxyz";
		std::string stringTwo = "abcdefghijklnopqrstuvwxyz";
		const auto expected = true;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case32)
	{
		std::string stringOne = "abcdefghijklmnopqrstuvwxyz";
		std::string stringTwo = "abcdefghijklmmnopqrstuvwxyz";
		const auto expected = true;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
	TEST(OneEdit, Case33)
	{
		std::string stringOne = "abcdefghijklmnopqrstuvwxyz";
		std::string stringTwo = "abcdefghijklnnopqrstuvwxyz";
		const auto expected = true;
		const auto output = algoExpert::strings::oneEdit(stringOne, stringTwo);
		EXPECT_EQ(expected, output);
	}
}

