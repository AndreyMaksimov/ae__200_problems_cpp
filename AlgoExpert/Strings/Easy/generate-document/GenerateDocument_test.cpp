#include "GenerateDocument.h"
#include "gtest/gtest.h"

namespace
{
	TEST(GenerateDocument, Case01)
	{
		std::string characters = "Bste!hetsi ogEAxpelrt x ";
		std::string document = "AlgoExpert is the Best!";
		const auto expected = true;
		const auto output = algoExpert::strings::generateDocument(characters, document);
		EXPECT_EQ(expected, output);
	}
	TEST(GenerateDocument, Case02)
	{
		std::string characters = "A";
		std::string document = "a";
		const auto expected = false;
		const auto output = algoExpert::strings::generateDocument(characters, document);
		EXPECT_EQ(expected, output);
	}
	TEST(GenerateDocument, Case03)
	{
		std::string characters = "a";
		std::string document = "a";
		const auto expected = true;
		const auto output = algoExpert::strings::generateDocument(characters, document);
		EXPECT_EQ(expected, output);
	}
	TEST(GenerateDocument, Case04)
	{
		std::string characters = "a hsgalhsa sanbjksbdkjba kjx";
		std::string document = "";
		const auto expected = true;
		const auto output = algoExpert::strings::generateDocument(characters, document);
		EXPECT_EQ(expected, output);
	}
	TEST(GenerateDocument, Case05)
	{
		std::string characters = " ";
		std::string document = "hello";
		const auto expected = false;
		const auto output = algoExpert::strings::generateDocument(characters, document);
		EXPECT_EQ(expected, output);
	}
	TEST(GenerateDocument, Case06)
	{
		std::string characters = "     ";
		std::string document = "     ";
		const auto expected = true;
		const auto output = algoExpert::strings::generateDocument(characters, document);
		EXPECT_EQ(expected, output);
	}
	TEST(GenerateDocument, Case07)
	{
		std::string characters = "aheaollabbhb";
		std::string document = "hello";
		const auto expected = true;
		const auto output = algoExpert::strings::generateDocument(characters, document);
		EXPECT_EQ(expected, output);
	}
	TEST(GenerateDocument, Case08)
	{
		std::string characters = "aheaolabbhb";
		std::string document = "hello";
		const auto expected = false;
		const auto output = algoExpert::strings::generateDocument(characters, document);
		EXPECT_EQ(expected, output);
	}
	TEST(GenerateDocument, Case09)
	{
		std::string characters = "estssa";
		std::string document = "testing";
		const auto expected = false;
		const auto output = algoExpert::strings::generateDocument(characters, document);
		EXPECT_EQ(expected, output);
	}
	TEST(GenerateDocument, Case10)
	{
		std::string characters = "Bste!hetsi ogEAxpert";
		std::string document = "AlgoExpert is the Best!";
		const auto expected = false;
		const auto output = algoExpert::strings::generateDocument(characters, document);
		EXPECT_EQ(expected, output);
	}
	TEST(GenerateDocument, Case11)
	{
		std::string characters = "helloworld ";
		std::string document = "hello wOrld";
		const auto expected = false;
		const auto output = algoExpert::strings::generateDocument(characters, document);
		EXPECT_EQ(expected, output);
	}
	TEST(GenerateDocument, Case12)
	{
		std::string characters = "helloworldO";
		std::string document = "hello wOrld";
		const auto expected = false;
		const auto output = algoExpert::strings::generateDocument(characters, document);
		EXPECT_EQ(expected, output);
	}
	TEST(GenerateDocument, Case13)
	{
		std::string characters = "helloworldO ";
		std::string document = "hello wOrld";
		const auto expected = true;
		const auto output = algoExpert::strings::generateDocument(characters, document);
		EXPECT_EQ(expected, output);
	}
	TEST(GenerateDocument, Case14)
	{
		std::string characters = "&*&you^a%^&8766 _=-09     docanCMakemthisdocument";
		std::string document = "Can you make this document &";
		const auto expected = true;
		const auto output = algoExpert::strings::generateDocument(characters, document);
		EXPECT_EQ(expected, output);
	}
	TEST(GenerateDocument, Case15)
	{
		std::string characters = "abcabcabcacbcdaabc";
		std::string document = "bacaccadac";
		const auto expected = true;
		const auto output = algoExpert::strings::generateDocument(characters, document);
		EXPECT_EQ(expected, output);
	}
}
