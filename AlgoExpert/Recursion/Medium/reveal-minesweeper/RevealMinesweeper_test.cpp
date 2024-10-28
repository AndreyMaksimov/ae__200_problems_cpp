#include "RevealMinesweeper.h"
#include "gtest/gtest.h"

namespace
{
	TEST(RevealMinesweeper, Case01)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"H"}
			};
		int column = 0;
		int row = 0;
		std::vector<std::vector<std::string>> expected = 
			{
				{"0"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case02)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"M"}
			};
		int column = 0;
		int row = 0;
		std::vector<std::vector<std::string>> expected = 
			{
				{"X"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case03)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"H", "M"}
			};
		int column = 0;
		int row = 0;
		std::vector<std::vector<std::string>> expected = 
			{
				{"1", "M"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case04)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"H", "H"}
			};
		int column = 0;
		int row = 0;
		std::vector<std::vector<std::string>> expected = 
			{
				{"0", "0"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case05)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"H", "H"},
				{"H", "H"}
			};
		int column = 0;
		int row = 0;
		std::vector<std::vector<std::string>> expected = 
			{
				{"0", "0"},
				{"0", "0"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case06)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"H", "H"},
				{"H", "H"}
			};
		int column = 0;
		int row = 1;
		std::vector<std::vector<std::string>> expected = 
			{
				{"0", "0"},
				{"0", "0"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case07)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"H", "H"},
				{"H", "H"}
			};
		int column = 1;
		int row = 1;
		std::vector<std::vector<std::string>> expected = 
			{
				{"0", "0"},
				{"0", "0"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case08)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"H", "H"},
				{"H", "H"}
			};
		int column = 1;
		int row = 0;
		std::vector<std::vector<std::string>> expected = 
			{
				{"0", "0"},
				{"0", "0"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case09)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"H", "M"},
				{"H", "H"}
			};
		int column = 1;
		int row = 0;
		std::vector<std::vector<std::string>> expected = 
			{
				{"H", "X"},
				{"H", "H"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case10)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"H", "M"},
				{"H", "H"}
			};
		int column = 1;
		int row = 1;
		std::vector<std::vector<std::string>> expected = 
			{
				{"H", "M"},
				{"H", "1"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case11)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"H", "M"},
				{"H", "H"}
			};
		int column = 0;
		int row = 1;
		std::vector<std::vector<std::string>> expected = 
			{
				{"H", "M"},
				{"1", "H"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case12)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"H", "M"},
				{"H", "H"}
			};
		int column = 0;
		int row = 0;
		std::vector<std::vector<std::string>> expected = 
			{
				{"1", "M"},
				{"H", "H"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case13)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"M", "M"},
				{"M", "M"}
			};
		int column = 0;
		int row = 0;
		std::vector<std::vector<std::string>> expected = 
			{
				{"X", "M"},
				{"M", "M"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case14)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"M", "M"},
				{"M", "M"}
			};
		int column = 0;
		int row = 1;
		std::vector<std::vector<std::string>> expected = 
			{
				{"M", "M"},
				{"X", "M"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case15)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"M", "M"},
				{"H", "H"},
				{"H", "H"}
			};
		int column = 0;
		int row = 0;
		std::vector<std::vector<std::string>> expected = 
			{
				{"X", "M"},
				{"H", "H"},
				{"H", "H"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case16)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"M", "M"},
				{"H", "H"},
				{"H", "H"}
			};
		int column = 0;
		int row = 1;
		std::vector<std::vector<std::string>> expected = 
			{
				{"M", "M"},
				{"2", "H"},
				{"H", "H"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case17)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"M", "M"},
				{"H", "H"},
				{"H", "H"}
			};
		int column = 0;
		int row = 2;
		std::vector<std::vector<std::string>> expected = 
			{
				{"M", "M"},
				{"2", "2"},
				{"0", "0"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case18)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"M", "M", "M"},
				{"M", "H", "M"},
				{"M", "M", "M"}
			};
		int column = 1;
		int row = 1;
		std::vector<std::vector<std::string>> expected = 
			{
				{"M", "M", "M"},
				{"M", "8", "M"},
				{"M", "M", "M"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case19)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"M", "M", "M", "M"},
				{"M", "H", "H", "M"},
				{"M", "M", "M", "M"}
			};
		int column = 1;
		int row = 1;
		std::vector<std::vector<std::string>> expected = 
			{
				{"M", "M", "M", "M"},
				{"M", "7", "H", "M"},
				{"M", "M", "M", "M"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case20)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"H", "H", "H", "H", "M"},
				{"H", "H", "M", "H", "H"},
				{"H", "H", "H", "H", "H"},
				{"H", "H", "H", "H", "H"}
			};
		int column = 0;
		int row = 3;
		std::vector<std::vector<std::string>> expected = 
			{
				{"0", "1", "H", "H", "M"},
				{"0", "1", "M", "2", "1"},
				{"0", "1", "1", "1", "0"},
				{"0", "0", "0", "0", "0"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case21)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"H", "H", "H", "H", "M"},
				{"H", "H", "M", "H", "H"},
				{"H", "H", "H", "H", "H"},
				{"H", "H", "H", "H", "H"}
			};
		int column = 4;
		int row = 3;
		std::vector<std::vector<std::string>> expected = 
			{
				{"0", "1", "H", "H", "M"},
				{"0", "1", "M", "2", "1"},
				{"0", "1", "1", "1", "0"},
				{"0", "0", "0", "0", "0"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case22)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"H", "H", "H", "H", "M"},
				{"H", "H", "M", "H", "H"},
				{"H", "H", "H", "H", "H"},
				{"H", "H", "H", "H", "H"}
			};
		int column = 2;
		int row = 0;
		std::vector<std::vector<std::string>> expected = 
			{
				{"H", "H", "1", "H", "M"},
				{"H", "H", "M", "H", "H"},
				{"H", "H", "H", "H", "H"},
				{"H", "H", "H", "H", "H"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case23)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"H", "H", "H", "H", "M"},
				{"H", "1", "M", "H", "1"},
				{"H", "H", "H", "H", "H"},
				{"H", "H", "H", "H", "H"}
			};
		int column = 4;
		int row = 3;
		std::vector<std::vector<std::string>> expected = 
			{
				{"0", "1", "H", "H", "M"},
				{"0", "1", "M", "2", "1"},
				{"0", "1", "1", "1", "0"},
				{"0", "0", "0", "0", "0"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case24)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"H", "H", "M", "H", "H", "M", "H", "H", "H"},
				{"H", "H", "H", "H", "M", "H", "H", "M", "H"},
				{"H", "M", "H", "H", "H", "H", "H", "H", "H"},
				{"H", "H", "H", "M", "H", "M", "H", "H", "M"},
				{"M", "H", "H", "H", "H", "H", "H", "H", "H"},
				{"H", "H", "H", "H", "M", "H", "M", "H", "H"},
				{"H", "H", "M", "H", "H", "H", "H", "H", "H"},
				{"H", "H", "H", "H", "H", "H", "M", "H", "H"},
				{"H", "M", "H", "H", "H", "H", "H", "H", "H"}
			};
		int column = 0;
		int row = 0;
		std::vector<std::vector<std::string>> expected = 
			{
				{"0", "1", "M", "H", "H", "M", "H", "H", "H"},
				{"1", "2", "H", "H", "M", "H", "H", "M", "H"},
				{"H", "M", "H", "H", "H", "H", "H", "H", "H"},
				{"H", "H", "H", "M", "H", "M", "H", "H", "M"},
				{"M", "H", "H", "H", "H", "H", "H", "H", "H"},
				{"H", "H", "H", "H", "M", "H", "M", "H", "H"},
				{"H", "H", "M", "H", "H", "H", "H", "H", "H"},
				{"H", "H", "H", "H", "H", "H", "M", "H", "H"},
				{"H", "M", "H", "H", "H", "H", "H", "H", "H"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case25)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"H", "H", "M", "H", "H", "M", "H", "H", "H"},
				{"H", "H", "H", "H", "M", "H", "H", "M", "H"},
				{"H", "M", "H", "H", "H", "H", "H", "H", "H"},
				{"H", "H", "H", "M", "H", "M", "H", "H", "M"},
				{"M", "H", "H", "H", "H", "H", "H", "H", "H"},
				{"H", "H", "H", "H", "M", "H", "M", "H", "H"},
				{"H", "H", "M", "H", "H", "H", "H", "H", "H"},
				{"H", "H", "H", "H", "H", "H", "M", "H", "H"},
				{"H", "M", "H", "H", "H", "H", "H", "H", "H"}
			};
		int column = 6;
		int row = 3;
		std::vector<std::vector<std::string>> expected = 
			{
				{"H", "H", "M", "H", "H", "M", "H", "H", "H"},
				{"H", "H", "H", "H", "M", "H", "H", "M", "H"},
				{"H", "M", "H", "H", "H", "H", "H", "H", "H"},
				{"H", "H", "H", "M", "H", "M", "1", "H", "M"},
				{"M", "H", "H", "H", "H", "H", "H", "H", "H"},
				{"H", "H", "H", "H", "M", "H", "M", "H", "H"},
				{"H", "H", "M", "H", "H", "H", "H", "H", "H"},
				{"H", "H", "H", "H", "H", "H", "M", "H", "H"},
				{"H", "M", "H", "H", "H", "H", "H", "H", "H"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case26)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"H", "H", "M", "H", "H", "M", "H", "H", "H"},
				{"H", "H", "H", "H", "M", "H", "H", "M", "H"},
				{"H", "M", "H", "H", "H", "H", "H", "H", "H"},
				{"H", "H", "H", "M", "H", "M", "H", "H", "M"},
				{"M", "H", "H", "H", "H", "H", "H", "H", "H"},
				{"H", "H", "H", "H", "M", "H", "M", "H", "H"},
				{"H", "H", "M", "H", "H", "H", "H", "H", "H"},
				{"H", "H", "H", "H", "H", "H", "M", "H", "H"},
				{"H", "M", "H", "H", "H", "H", "H", "H", "H"}
			};
		int column = 4;
		int row = 7;
		std::vector<std::vector<std::string>> expected = 
			{
				{"H", "H", "M", "H", "H", "M", "H", "H", "H"},
				{"H", "H", "H", "H", "M", "H", "H", "M", "H"},
				{"H", "M", "H", "H", "H", "H", "H", "H", "H"},
				{"H", "H", "H", "M", "H", "M", "H", "H", "M"},
				{"M", "H", "H", "H", "H", "H", "H", "H", "H"},
				{"H", "H", "H", "H", "M", "H", "M", "H", "H"},
				{"H", "H", "M", "2", "1", "3", "H", "H", "H"},
				{"H", "H", "2", "1", "0", "1", "M", "H", "H"},
				{"H", "M", "1", "0", "0", "1", "H", "H", "H"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case27)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"H", "M", "H", "H", "H", "H", "M", "H"},
				{"H", "H", "H", "H", "M", "H", "H", "H"},
				{"M", "H", "H", "M", "H", "M", "H", "H"},
				{"H", "H", "H", "H", "H", "H", "H", "H"},
				{"H", "M", "H", "H", "H", "H", "M", "H"},
				{"H", "H", "H", "H", "M", "H", "H", "H"},
				{"H", "H", "H", "H", "H", "H", "H", "M"}
			};
		int column = 0;
		int row = 6;
		std::vector<std::vector<std::string>> expected = 
			{
				{"H", "M", "H", "H", "H", "H", "M", "H"},
				{"H", "H", "H", "H", "M", "H", "H", "H"},
				{"M", "H", "H", "M", "H", "M", "H", "H"},
				{"H", "H", "H", "H", "H", "H", "H", "H"},
				{"H", "M", "H", "H", "H", "H", "M", "H"},
				{"1", "1", "1", "1", "M", "H", "H", "H"},
				{"0", "0", "0", "1", "H", "H", "H", "M"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case28)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"H", "M", "1", "H", "1", "H", "M", "1"},
				{"H", "H", "H", "H", "M", "H", "2", "H"},
				{"M", "H", "H", "M", "H", "M", "H", "H"},
				{"H", "H", "H", "H", "H", "H", "H", "H"},
				{"1", "M", "H", "H", "H", "H", "M", "H"},
				{"H", "H", "H", "H", "M", "H", "H", "H"},
				{"H", "H", "H", "H", "H", "H", "H", "M"}
			};
		int column = 0;
		int row = 6;
		std::vector<std::vector<std::string>> expected = 
			{
				{"H", "M", "1", "H", "1", "H", "M", "1"},
				{"H", "H", "H", "H", "M", "H", "2", "H"},
				{"M", "H", "H", "M", "H", "M", "H", "H"},
				{"H", "H", "H", "H", "H", "H", "H", "H"},
				{"1", "M", "H", "H", "H", "H", "M", "H"},
				{"1", "1", "1", "1", "M", "H", "H", "H"},
				{"0", "0", "0", "1", "H", "H", "H", "M"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case29)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"H", "M", "1", "H", "1", "H", "M", "1"},
				{"H", "H", "H", "H", "M", "H", "2", "H"},
				{"M", "H", "H", "M", "H", "M", "H", "H"},
				{"H", "H", "H", "H", "H", "H", "H", "H"},
				{"1", "M", "H", "H", "H", "H", "M", "H"},
				{"1", "1", "H", "H", "M", "H", "H", "H"},
				{"H", "H", "H", "H", "H", "H", "H", "M"}
			};
		int column = 0;
		int row = 6;
		std::vector<std::vector<std::string>> expected = 
			{
				{"H", "M", "1", "H", "1", "H", "M", "1"},
				{"H", "H", "H", "H", "M", "H", "2", "H"},
				{"M", "H", "H", "M", "H", "M", "H", "H"},
				{"H", "H", "H", "H", "H", "H", "H", "H"},
				{"1", "M", "H", "H", "H", "H", "M", "H"},
				{"1", "1", "1", "1", "M", "H", "H", "H"},
				{"0", "0", "0", "1", "H", "H", "H", "M"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case30)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"H", "M", "H", "H", "H", "H", "M", "H"},
				{"H", "H", "H", "H", "M", "H", "H", "H"},
				{"M", "H", "H", "M", "H", "M", "H", "H"},
				{"H", "H", "H", "H", "H", "H", "H", "H"},
				{"H", "M", "H", "H", "H", "H", "M", "H"},
				{"H", "H", "H", "H", "M", "H", "H", "H"},
				{"H", "H", "H", "H", "H", "H", "H", "M"}
			};
		int column = 7;
		int row = 6;
		std::vector<std::vector<std::string>> expected = 
			{
				{"H", "M", "H", "H", "H", "H", "M", "H"},
				{"H", "H", "H", "H", "M", "H", "H", "H"},
				{"M", "H", "H", "M", "H", "M", "H", "H"},
				{"H", "H", "H", "H", "H", "H", "H", "H"},
				{"H", "M", "H", "H", "H", "H", "M", "H"},
				{"H", "H", "H", "H", "M", "H", "H", "H"},
				{"H", "H", "H", "H", "H", "H", "H", "X"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case31)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"H", "H", "H", "H", "H", "H", "H", "H", "H", "H", "H", "H"},
				{"H", "H", "H", "H", "H", "H", "H", "H", "H", "H", "M", "H"},
				{"H", "H", "H", "H", "M", "H", "H", "H", "H", "H", "H", "H"},
				{"H", "H", "H", "H", "H", "H", "M", "H", "H", "H", "H", "H"},
				{"H", "H", "M", "H", "H", "H", "H", "H", "H", "H", "M", "H"},
				{"H", "H", "H", "H", "M", "H", "H", "H", "H", "M", "H", "H"},
				{"M", "H", "H", "H", "H", "H", "H", "H", "H", "H", "H", "H"},
				{"H", "H", "H", "H", "H", "H", "H", "M", "H", "H", "H", "H"}
			};
		int column = 2;
		int row = 6;
		std::vector<std::vector<std::string>> expected = 
			{
				{"H", "H", "H", "H", "H", "H", "H", "H", "H", "H", "H", "H"},
				{"H", "H", "H", "H", "H", "H", "H", "H", "H", "H", "M", "H"},
				{"H", "H", "H", "H", "M", "H", "H", "H", "H", "H", "H", "H"},
				{"H", "H", "H", "H", "H", "H", "M", "H", "H", "H", "H", "H"},
				{"H", "H", "M", "H", "H", "H", "H", "H", "H", "H", "M", "H"},
				{"H", "2", "1", "2", "M", "H", "H", "H", "H", "M", "H", "H"},
				{"M", "1", "0", "1", "1", "1", "1", "H", "H", "H", "H", "H"},
				{"H", "1", "0", "0", "0", "0", "1", "M", "H", "H", "H", "H"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case32)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "H", "H", "H", "H", "M", "M", "M"},
				{"M", "M", "M", "H", "H", "H", "H", "M", "M", "M"},
				{"M", "M", "M", "H", "H", "H", "H", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"}
			};
		int column = 3;
		int row = 4;
		std::vector<std::vector<std::string>> expected = 
			{
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "5", "H", "H", "H", "M", "M", "M"},
				{"M", "M", "M", "H", "H", "H", "H", "M", "M", "M"},
				{"M", "M", "M", "H", "H", "H", "H", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case33)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "H", "H", "H", "H", "M", "M", "M"},
				{"M", "M", "M", "H", "H", "H", "H", "M", "M", "M"},
				{"M", "M", "M", "H", "H", "H", "H", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"}
			};
		int column = 5;
		int row = 5;
		std::vector<std::vector<std::string>> expected = 
			{
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "5", "3", "3", "5", "M", "M", "M"},
				{"M", "M", "M", "3", "0", "0", "3", "M", "M", "M"},
				{"M", "M", "M", "5", "3", "3", "5", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
	TEST(RevealMinesweeper, Case34)
	{
		std::vector<std::vector<std::string>> board = 
			{
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "5", "3", "3", "5", "M", "M", "M"},
				{"M", "M", "M", "H", "H", "H", "H", "M", "M", "M"},
				{"M", "M", "M", "H", "H", "H", "H", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"}
			};
		int column = 5;
		int row = 5;
		std::vector<std::vector<std::string>> expected = 
			{
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "5", "3", "3", "5", "M", "M", "M"},
				{"M", "M", "M", "3", "0", "0", "3", "M", "M", "M"},
				{"M", "M", "M", "5", "3", "3", "5", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"},
				{"M", "M", "M", "M", "M", "M", "M", "M", "M", "M"}
			};
		const auto output = algoExpert::recursion::revealMinesweeper(board, row, column);
		EXPECT_EQ(expected, output);
	}
}
