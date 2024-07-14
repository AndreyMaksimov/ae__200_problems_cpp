// https://www.algoexpert.io/questions/count-squares
//
// #Arrays
// #Hard
// #std::hash
// #std::equal_to
//

// 1) Create hash for all lines between all ponts pairs
// 2) Find "paired" line to each line to form a square
//

#include <unordered_set>
#include <utility>
#include "CountSquares.h"

namespace algoExpert::arrays {
    using std::unordered_set, std::pair, std::make_pair, std::hash;

    // note from the problem:
    // "You can also assume that no coordinate will be farther than 100 units from the origin."
    typedef pair<int, int> point_t;
    struct point_hash_func {
        size_t operator()(const point_t& p) const {
            const size_t answer = (p.first + 100) | (8 << (p.second + 100));
            return answer;
        }
    };

    typedef pair<point_t, point_t> line_t;
    struct line_hash_func {
        size_t operator()(const line_t& line) const {
            constexpr point_hash_func hfp;
            // narrowing hash. line(p1, p2) will be equal to line (p2, p1)
            const size_t answer = hfp(line.first) + hfp(line.second);
            return answer;
        }
    };

    struct line_equal_to_func {
        bool operator () (const line_t& line1, const line_t& line2) const {
            return (line1.first == line2.first && line1.second == line2.second) ||
                (line1.first == line2.second && line1.second == line2.first);
        }
    };

    auto make_line(vector<int>& point1, vector<int>& point2) {
        const auto p1 = make_pair(point1[0], point1[1]);
        const auto p2 = make_pair(point2[0], point2[1]);
        return make_pair(p1, p2);
    };

    auto make_line(const int x1, const int y1, const int x2, const int y2) {
        const auto p1 = make_pair(x1, y1);
        const auto p2 = make_pair(x2, y2);
        return make_pair(p1, p2);
    };

    auto create_square_pairing_lines(const line_t& line) {
        const auto& p1 = line.first;
        const auto& p2 = line.second;
        const auto& x1 = p1.first;
        const auto& y1 = p1.second;
        const auto& x2 = p2.first;
        const auto& y2 = p2.second;
        const auto dx = y1 - y2;
        const auto dy = x2 - x1;
        const auto line1 = make_line((x1+dx), (y1+dy), (x2+dx), (y2+dy));
        const auto line2 = make_line((x1-dx), (y1-dy), (x2-dx), (y2-dy));
        return make_pair(line1, line2);
    }

    int countSquares(vector<vector<int>> points) {
        const auto size = static_cast<int>(points.size());
        if (size < 4) return 0;

        unordered_set<line_t, line_hash_func, line_equal_to_func> lines_hash;

        for (auto i=0; i<size; ++i) {
            for (auto j=i+1; j<size; ++j) {
                const auto line = make_line(points[i], points[j]);
                lines_hash.insert(line);
            }
        }

        auto count = 0;
        for(const auto line: lines_hash) {
            const auto pairing_lines = create_square_pairing_lines(line);
            // if (lines_hash.contains(pairing_lines.first)) ++count;
            // if (lines_hash.contains(pairing_lines.second)) ++count;
            if (lines_hash.find(pairing_lines.first) != lines_hash.end()) ++count;
            if (lines_hash.find(pairing_lines.second) != lines_hash.end()) ++count;
        }

        return count / 4;
    }
}
