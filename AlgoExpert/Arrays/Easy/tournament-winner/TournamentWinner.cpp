#include <map>
#include <utility>
#include <algorithm>
#include "TournamentWinner.h"

namespace algoExpert::arrays {
    using std::string, std::vector, std::map, std::make_pair, std::max;

    string tournamentWinner(
            vector<vector<string>> competitions,
            vector<int> results)
    {
        if (competitions.empty() || results.empty()) return "";
        if (competitions.size() != results.size()) return "";

        map<string, int> team2wins;
        int max_wins = 0;
        string team_first_place;
        auto pos_r = results.begin();
        for (const auto & game : competitions) {
            const auto team_win_id = 1 - *pos_r++;
            const auto& team_win = game[team_win_id];
            auto tw_pair_pos = team2wins.find(team_win);
            if (tw_pair_pos == team2wins.end()) {
                team2wins.insert(make_pair(team_win, 1));
                if (max_wins < 1) {
                    max_wins = 1;
                    team_first_place = team_win;
                }
            }
            else {
                tw_pair_pos->second++;
                if (max_wins < tw_pair_pos->second) {
                    max_wins = tw_pair_pos->second;
                    team_first_place = team_win;
                }
            }
        }
        return team_first_place;
    }
}
