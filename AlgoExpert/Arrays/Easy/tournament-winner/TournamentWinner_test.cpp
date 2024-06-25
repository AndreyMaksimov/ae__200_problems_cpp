#include "TournamentWinner.h"
#include "gtest/gtest.h"

namespace {
    TEST(TournamentWinner, Case01)
    {
        const std::vector<std::vector<std::string>> competitions =
                {{"HTML", "C#"}, {"C#", "Python"}, {"Python", "HTML"}};
        const std::vector<int> results = {0, 0, 1};
        const std::string expected = "Python";
        std::string output = algoExpert::arrays::tournamentWinner(competitions, results);
        EXPECT_EQ(expected, output);
    }
}

/*

 class ProgramTest : public TestSuite {
 public:
  void Run() {
    RunTest("Test Case 1", []() {
      vector<vector<string>> competitions = {
        {"HTML", "C#"}, {"C#", "Python"}, {"Python", "HTML"}};
      vector<int> results = {0, 0, 1};
      string expected = "Python";
      auto actual = tournamentWinner(competitions, results);
      assert(expected == actual);
    });
  }
};



 */