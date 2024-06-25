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
    TEST(TournamentWinner, Case02)
    {
        const std::vector<std::vector<std::string>> competitions =
                {
                        {"HTML", "Java"},
                        {"Java", "Python"},
                        {"Python", "HTML"}
                };
        const std::vector<int> results = {0, 1, 1};
        const std::string expected = "Java";
        std::string output = algoExpert::arrays::tournamentWinner(competitions, results);
        EXPECT_EQ(expected, output);
    }
    TEST(TournamentWinner, Case03)
    {
        const std::vector<std::vector<std::string>> competitions =
                {
                        {"HTML", "Java"},
                        {"Java", "Python"},
                        {"Python", "HTML"},
                        {"C#", "Python"},
                        {"Java", "C#"},
                        {"C#", "HTML"}
                };
        const std::vector<int> results = {0, 1, 1, 1, 0, 1};
        const std::string expected = "C#";
        std::string output = algoExpert::arrays::tournamentWinner(competitions, results);
        EXPECT_EQ(expected, output);
    }
    TEST(TournamentWinner, Case04)
    {
        const std::vector<std::vector<std::string>> competitions =
                {
                        {"HTML", "Java"},
                        {"Java", "Python"},
                        {"Python", "HTML"},
                        {"C#", "Python"},
                        {"Java", "C#"},
                        {"C#", "HTML"},
                        {"SQL", "C#"},
                        {"HTML", "SQL"},
                        {"SQL", "Python"},
                        {"SQL", "Java"}
                };
        const std::vector<int> results = {0, 1, 1, 1, 0, 1, 0, 1, 1, 0};
        const std::string expected = "C#";
        std::string output = algoExpert::arrays::tournamentWinner(competitions, results);
        EXPECT_EQ(expected, output);
    }
    TEST(TournamentWinner, Case05)
    {
        const std::vector<std::vector<std::string>> competitions =
                {
                        {"Bulls", "Eagles"}
                };
        const std::vector<int> results = {1};
        const std::string expected = "Bulls";
        std::string output = algoExpert::arrays::tournamentWinner(competitions, results);
        EXPECT_EQ(expected, output);
    }
    TEST(TournamentWinner, Case06)
    {
        const std::vector<std::vector<std::string>> competitions =
                {
                        {"Bulls", "Eagles"},
                        {"Bulls", "Bears"},
                        {"Bears", "Eagles"}
                };
        const std::vector<int> results = {0, 0, 0};
        const std::string expected = "Eagles";
        std::string output = algoExpert::arrays::tournamentWinner(competitions, results);
        EXPECT_EQ(expected, output);
    }
    TEST(TournamentWinner, Case07)
    {
        const std::vector<std::vector<std::string>> competitions =
                {
                        {"Bulls", "Eagles"},
                        {"Bulls", "Bears"},
                        {"Bulls", "Monkeys"},
                        {"Eagles", "Bears"},
                        {"Eagles", "Monkeys"},
                        {"Bears", "Monkeys"}
                };
        const std::vector<int> results = {1, 1, 1, 1, 1, 1};
        const std::string expected = "Bulls";
        std::string output = algoExpert::arrays::tournamentWinner(competitions, results);
        EXPECT_EQ(expected, output);
    }
    TEST(TournamentWinner, Case08)
    {
        const std::vector<std::vector<std::string>> competitions =
                {
                        {"AlgoMasters", "FrontPage Freebirds"},
                        {"Runtime Terror", "Static Startup"},
                        {"WeC#", "Hypertext Assassins"},
                        {"AlgoMasters", "WeC#"},
                        {"Static Startup", "Hypertext Assassins"},
                        {"Runtime Terror", "FrontPage Freebirds"},
                        {"AlgoMasters", "Runtime Terror"},
                        {"Hypertext Assassins", "FrontPage Freebirds"},
                        {"Static Startup", "WeC#"},
                        {"AlgoMasters", "Static Startup"},
                        {"FrontPage Freebirds", "WeC#"},
                        {"Hypertext Assassins", "Runtime Terror"},
                        {"AlgoMasters", "Hypertext Assassins"},
                        {"WeC#", "Runtime Terror"},
                        {"FrontPage Freebirds", "Static Startup"}
                };
        const std::vector<int> results = {1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0};
        const std::string expected = "AlgoMasters";
        std::string output = algoExpert::arrays::tournamentWinner(competitions, results);
        EXPECT_EQ(expected, output);
    }
    TEST(TournamentWinner, Case09)
    {
        const std::vector<std::vector<std::string>> competitions =
                {
                        {"HTML", "Java"},
                        {"Java", "Python"},
                        {"Python", "HTML"},
                        {"C#", "Python"},
                        {"Java", "C#"},
                        {"C#", "HTML"},
                        {"SQL", "C#"},
                        {"HTML", "SQL"},
                        {"SQL", "Python"},
                        {"SQL", "Java"}
                };
        const std::vector<int> results = {0, 0, 0, 0, 0, 0, 1, 0, 1, 1};
        const std::string expected = "SQL";
        std::string output = algoExpert::arrays::tournamentWinner(competitions, results);
        EXPECT_EQ(expected, output);
    }
    TEST(TournamentWinner, Case10)
    {
        const std::vector<std::vector<std::string>> competitions =
                {
                        {"A", "B"}
                };
        const std::vector<int> results = {0};
        const std::string expected = "B";
        std::string output = algoExpert::arrays::tournamentWinner(competitions, results);
        EXPECT_EQ(expected, output);
    }
}
