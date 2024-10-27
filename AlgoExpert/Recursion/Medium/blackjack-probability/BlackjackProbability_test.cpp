#include "BlackjackProbability.h"
#include "gtest/gtest.h"

namespace
{
	TEST(BlackjackProbability, Case01)
	{
		int startingHand = 16;
		int target = 21;
		const float expected = 0.5f;
		const auto output = algoExpert::recursion::blackjackProbability( target, startingHand);
		EXPECT_EQ(expected, output);
	}
	TEST(BlackjackProbability, Case02)
	{
		int startingHand = 21;
		int target = 21;
		const float expected = 0;
		const auto output = algoExpert::recursion::blackjackProbability( target, startingHand);
		EXPECT_EQ(expected, output);
	}
	TEST(BlackjackProbability, Case03)
	{
		int startingHand = 20;
		int target = 21;
		const float expected = 0;
		const auto output = algoExpert::recursion::blackjackProbability( target, startingHand);
		EXPECT_EQ(expected, output);
	}
	TEST(BlackjackProbability, Case04)
	{
		int startingHand = 17;
		int target = 21;
		const float expected = 0;
		const auto output = algoExpert::recursion::blackjackProbability( target, startingHand);
		EXPECT_EQ(expected, output);
	}
	TEST(BlackjackProbability, Case05)
	{
		int startingHand = 15;
		int target = 21;
		const float expected = 0.44999998807907104f;
		const auto output = algoExpert::recursion::blackjackProbability( target, startingHand);
		EXPECT_EQ(expected, output);
	}
	TEST(BlackjackProbability, Case06)
	{
		int startingHand = 12;
		int target = 21;
		const float expected = 0.2680000066757202f;
		const auto output = algoExpert::recursion::blackjackProbability( target, startingHand);
		EXPECT_EQ(expected, output);
	}
	TEST(BlackjackProbability, Case07)
	{
		int startingHand = 5;
		int target = 21;
		const float expected = 0.29499998688697815f;
		const auto output = algoExpert::recursion::blackjackProbability( target, startingHand);
		EXPECT_EQ(expected, output);
	}
	TEST(BlackjackProbability, Case08)
	{
		int startingHand = 1;
		int target = 21;
		const float expected = 0.26100000739097595f;
		const auto output = algoExpert::recursion::blackjackProbability( target, startingHand);
		EXPECT_EQ(expected, output);
	}
	TEST(BlackjackProbability, Case09)
	{
		int startingHand = 95;
		int target = 100;
		const float expected = 0.5f;
		const auto output = algoExpert::recursion::blackjackProbability( target, startingHand);
		EXPECT_EQ(expected, output);
	}
	TEST(BlackjackProbability, Case10)
	{
		int startingHand = 90;
		int target = 100;
		const float expected = 0.19499999284744263f;
		const auto output = algoExpert::recursion::blackjackProbability( target, startingHand);
		EXPECT_EQ(expected, output);
	}
	TEST(BlackjackProbability, Case11)
	{
		int startingHand = 20;
		int target = 100;
		const float expected = 0.27300000190734863f;
		const auto output = algoExpert::recursion::blackjackProbability( target, startingHand);
		EXPECT_EQ(expected, output);
	}
	TEST(BlackjackProbability, Case12)
	{
		int startingHand = 100;
		int target = 100;
		const float expected = 0;
		const auto output = algoExpert::recursion::blackjackProbability( target, startingHand);
		EXPECT_EQ(expected, output);
	}
	TEST(BlackjackProbability, Case13)
	{
		int startingHand = 1;
		int target = 10;
		const float expected = 0.2680000066757202f;
		const auto output = algoExpert::recursion::blackjackProbability( target, startingHand);
		EXPECT_EQ(expected, output);
	}
	TEST(BlackjackProbability, Case14)
	{
		int startingHand = 3;
		int target = 10;
		const float expected = 0.39500001072883606f;
		const auto output = algoExpert::recursion::blackjackProbability( target, startingHand);
		EXPECT_EQ(expected, output);
	}
	TEST(BlackjackProbability, Case15)
	{
		int startingHand = 3;
		int target = 30;
		const float expected = 0.2709999978542328f;
		const auto output = algoExpert::recursion::blackjackProbability( target, startingHand);
		EXPECT_EQ(expected, output);
	}
	TEST(BlackjackProbability, Case16)
	{
		int startingHand = 7;
		int target = 30;
		const float expected = 0.2759999930858612f;
		const auto output = algoExpert::recursion::blackjackProbability( target, startingHand);
		EXPECT_EQ(expected, output);
	}
	TEST(BlackjackProbability, Case17)
	{
		int startingHand = 15;
		int target = 30;
		const float expected = 0.3140000104904175f;
		const auto output = algoExpert::recursion::blackjackProbability( target, startingHand);
		EXPECT_EQ(expected, output);
	}
	TEST(BlackjackProbability, Case18)
	{
		int startingHand = 25;
		int target = 30;
		const float expected = 0.5f;
		const auto output = algoExpert::recursion::blackjackProbability( target, startingHand);
		EXPECT_EQ(expected, output);
	}
}
