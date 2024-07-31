#include "DiceThrows.h"
#include "gtest/gtest.h"

namespace
{
	TEST(DiceThrows, Case01)
	{
		int numDice = 1;
		int numSides = 6;
		int target = 7;
		const auto expected = 0;
		const auto output = algoExpert::dynamicProgramming::diceThrows(numDice, numSides, target);
		EXPECT_EQ(expected, output);
	}
	TEST(DiceThrows, Case02)
	{
		int numDice = 2;
		int numSides = 1;
		int target = 3;
		const auto expected = 0;
		const auto output = algoExpert::dynamicProgramming::diceThrows(numDice, numSides, target);
		EXPECT_EQ(expected, output);
	}
	TEST(DiceThrows, Case03)
	{
		int numDice = 1;
		int numSides = 6;
		int target = 5;
		const auto expected = 1;
		const auto output = algoExpert::dynamicProgramming::diceThrows(numDice, numSides, target);
		EXPECT_EQ(expected, output);
	}
	TEST(DiceThrows, Case04)
	{
		int numDice = 2;
		int numSides = 6;
		int target = 12;
		const auto expected = 1;
		const auto output = algoExpert::dynamicProgramming::diceThrows(numDice, numSides, target);
		EXPECT_EQ(expected, output);
	}
	TEST(DiceThrows, Case05)
	{
		int numDice = 2;
		int numSides = 6;
		int target = 7;
		const auto expected = 6;
		const auto output = algoExpert::dynamicProgramming::diceThrows(numDice, numSides, target);
		EXPECT_EQ(expected, output);
	}
	TEST(DiceThrows, Case06)
	{
		int numDice = 3;
		int numSides = 10;
		int target = 12;
		const auto expected = 55;
		const auto output = algoExpert::dynamicProgramming::diceThrows(numDice, numSides, target);
		EXPECT_EQ(expected, output);
	}
	TEST(DiceThrows, Case07)
	{
		int numDice = 12;
		int numSides = 9;
		int target = 108;
		const auto expected = 1;
		const auto output = algoExpert::dynamicProgramming::diceThrows(numDice, numSides, target);
		EXPECT_EQ(expected, output);
	}
	TEST(DiceThrows, Case08)
	{
		int numDice = 12;
		int numSides = 9;
		int target = 12;
		const auto expected = 1;
		const auto output = algoExpert::dynamicProgramming::diceThrows(numDice, numSides, target);
		EXPECT_EQ(expected, output);
	}
	TEST(DiceThrows, Case09)
	{
		int numDice = 7;
		int numSides = 5;
		int target = 22;
		const auto expected = 7875;
		const auto output = algoExpert::dynamicProgramming::diceThrows(numDice, numSides, target);
		EXPECT_EQ(expected, output);
	}
	TEST(DiceThrows, Case10)
	{
		int numDice = 4;
		int numSides = 6;
		int target = 15;
		const auto expected = 140;
		const auto output = algoExpert::dynamicProgramming::diceThrows(numDice, numSides, target);
		EXPECT_EQ(expected, output);
	}
	TEST(DiceThrows, Case11)
	{
		int numDice = 3;
		int numSides = 9;
		int target = 11;
		const auto expected = 45;
		const auto output = algoExpert::dynamicProgramming::diceThrows(numDice, numSides, target);
		EXPECT_EQ(expected, output);
	}
	TEST(DiceThrows, Case12)
	{
		int numDice = 6;
		int numSides = 6;
		int target = 20;
		const auto expected = 4221;
		const auto output = algoExpert::dynamicProgramming::diceThrows(numDice, numSides, target);
		EXPECT_EQ(expected, output);
	}
	TEST(DiceThrows, Case13)
	{
		int numDice = 11;
		int numSides = 9;
		int target = 32;
		const auto expected = 37254789;
		const auto output = algoExpert::dynamicProgramming::diceThrows(numDice, numSides, target);
		EXPECT_EQ(expected, output);
	}
}
