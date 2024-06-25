// https://www.algoexpert.io/questions/tournament-winner
//
// #std::map
// #std::vector

#include <map>
#include "TournamentWinner.h"

namespace algoExpert::arrays {
    using std::string, std::vector, std::map;

    string tournamentWinner(vector<vector<string>> competitions, vector<int> results) {
        map<string, int> team2wins;
        int max_wins = 0;
        string team_first_place;
        auto pos_r = results.begin();
        for (const auto &game: competitions) {
            const auto team_win_id = 1 - *pos_r++;
            const auto &team_win = game[team_win_id];
            team2wins[team_win] += 3;
            if (team2wins[team_win] > max_wins) {
                max_wins = team2wins[team_win];
                team_first_place = team_win;
            }
        }
        return team_first_place;
    }
}
