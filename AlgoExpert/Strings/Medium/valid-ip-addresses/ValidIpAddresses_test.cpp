#include "ValidIpAddresses.h"
#include "gtest/gtest.h"

namespace
{
	TEST(ValidIpAddresses, Case01)
	{
		std::string string = "1921680";
		const std::vector<std::string> expected = {"1.9.216.80", "1.92.16.80", "1.92.168.0", "19.2.16.80", "19.2.168.0", "19.21.6.80", "19.21.68.0", "19.216.8.0", "192.1.6.80", "192.1.68.0", "192.16.8.0"};
		const auto output = algoExpert::strings::validIPAddresses(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidIpAddresses, Case02)
	{
		std::string string = "3700100";
		const std::vector<std::string> expected = {"3.70.0.100", "37.0.0.100"};
		const auto output = algoExpert::strings::validIPAddresses(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidIpAddresses, Case03)
	{
		std::string string = "9743";
		const std::vector<std::string> expected = {"9.7.4.3"};
		const auto output = algoExpert::strings::validIPAddresses(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidIpAddresses, Case04)
	{
		std::string string = "97430";
		const std::vector<std::string> expected = {"9.7.4.30", "9.7.43.0", "9.74.3.0", "97.4.3.0"};
		const auto output = algoExpert::strings::validIPAddresses(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidIpAddresses, Case05)
	{
		std::string string = "997430";
		const std::vector<std::string> expected = {"9.9.74.30", "9.97.4.30", "9.97.43.0", "99.7.4.30", "99.7.43.0", "99.74.3.0"};
		const auto output = algoExpert::strings::validIPAddresses(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidIpAddresses, Case06)
	{
		std::string string = "255255255255";
		const std::vector<std::string> expected = {"255.255.255.255"};
		const auto output = algoExpert::strings::validIPAddresses(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidIpAddresses, Case07)
	{
		std::string string = "255255255256";
		const std::vector<std::string> expected = {};
		const auto output = algoExpert::strings::validIPAddresses(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidIpAddresses, Case08)
	{
		std::string string = "99999999";
		const std::vector<std::string> expected = {"99.99.99.99"};
		const auto output = algoExpert::strings::validIPAddresses(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidIpAddresses, Case09)
	{
		std::string string = "33133313";
		const std::vector<std::string> expected = {"33.13.33.13", "33.133.3.13", "33.133.31.3"};
		const auto output = algoExpert::strings::validIPAddresses(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidIpAddresses, Case10)
	{
		std::string string = "00010";
		const std::vector<std::string> expected = {"0.0.0.10"};
		const auto output = algoExpert::strings::validIPAddresses(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidIpAddresses, Case11)
	{
		std::string string = "100100";
		const std::vector<std::string> expected = {"1.0.0.100", "10.0.10.0", "100.1.0.0"};
		const auto output = algoExpert::strings::validIPAddresses(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidIpAddresses, Case12)
	{
		std::string string = "1072310";
		const std::vector<std::string> expected = {"10.7.23.10", "10.7.231.0", "10.72.3.10", "10.72.31.0", "107.2.3.10", "107.2.31.0", "107.23.1.0"};
		const auto output = algoExpert::strings::validIPAddresses(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidIpAddresses, Case13)
	{
		std::string string = "1";
		const std::vector<std::string> expected = {};
		const auto output = algoExpert::strings::validIPAddresses(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidIpAddresses, Case14)
	{
		std::string string = "11";
		const std::vector<std::string> expected = {};
		const auto output = algoExpert::strings::validIPAddresses(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidIpAddresses, Case15)
	{
		std::string string = "111";
		const std::vector<std::string> expected = {};
		const auto output = algoExpert::strings::validIPAddresses(string);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidIpAddresses, Case16)
	{
		std::string string = "00001";
		const std::vector<std::string> expected = {};
		const auto output = algoExpert::strings::validIPAddresses(string);
		EXPECT_EQ(expected, output);
	}
}

