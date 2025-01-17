// https://www.algoexpert.io/questions/search-in-sorted-matrix
//
// #Searching
// #Medium

#include <utility>
#include "SearchInSortedMatrix.h"

// The idea is sequentially divide matrix recursively in Y and X directions.
// Check on each step if a target is inside new rectangles (between top left & right bottom values)
// Does it work with complexity O(log(M*N)) = log(M) + log(N) ? Because no guarantee that we half reducing
// amount of data on each step.
// However, in some cases - only one row or only one column it will be definitely log(N)

namespace algoExpert::searching {
    using std::min;
    using std::pair;

    using point_t = pair<int, int>;
    using rect_t = pair<int, int>;
    static const vector no_result{-1, -1};

    class SubRect
    {
        const vector<vector<int>>& _matrix;
        rect_t _size;
        point_t _topLeft;

    public:
        SubRect() = delete;
        ~SubRect() = default;
        SubRect(const SubRect&) = default;
        explicit SubRect(const vector<vector<int>>& matrix):
        _matrix(matrix),
        _size(matrix[0].size(), matrix.size())
        {}

        [[nodiscard]] int valueAt(const int x, const int y) const {
            return _matrix[y + _topLeft.second][x + _topLeft.first];
        }
        [[nodiscard]] int minValue() const {
            return valueAt(0, 0);
        }
        [[nodiscard]] int maxValue() const {
            return valueAt(_size.first-1, _size.second-1);
        }
        [[nodiscard]] bool may_contain(const int target) const {
            return target >= minValue() && target <= maxValue();
        }
        [[nodiscard]] bool is_one_cell() const {
            return _size.first == 1 && _size.second == 1;
        }
        [[nodiscard]] bool is_one_row() const {
            return _size.second == 1;
        }
        [[nodiscard]] bool is_one_column() const {
            return _size.first == 1;
        }
        [[nodiscard]] vector<int> top_left_corner() const {
            return {_topLeft.second, _topLeft.first};
        }
        using two_rects_t = std::pair<SubRect, SubRect>;
        [[nodiscard]] two_rects_t divideInXaxis() const {
            auto one_r = SubRect(*this);
            one_r._size.first = _size.first / 2;
            auto two_r = SubRect(*this);
            two_r._size.first = _size.first - one_r._size.first;
            two_r._topLeft.first = _topLeft.first + one_r._size.first;
            return {one_r, two_r};
        }
        [[nodiscard]] two_rects_t divideInYaxis() const {
            auto one_r = SubRect(*this);
            one_r._size.second = _size.second / 2;
            auto two_r = SubRect(*this);
            two_r._size.second = _size.second - one_r._size.second;
            two_r._topLeft.second = _topLeft.second + one_r._size.second;
            return {one_r, two_r};
        }
    };

    bool search_helper(const SubRect& sr, const int& target, const bool divideInY, vector<int>& r) {
        if (r != no_result)          return true;
        if (!sr.may_contain(target)) return false;
        if (sr.is_one_cell()) {
            if (sr.valueAt(0, 0) == target) {
                r = sr.top_left_corner();
                return true;
            }
            return false;
        }

        if (sr.is_one_row()) {
            const auto& two_sr = sr.divideInXaxis();
            if (search_helper(two_sr.first, target, false, r)) return true;
            if (search_helper(two_sr.second, target, false, r)) return true;
        }
        else if (sr.is_one_column()) {
            const auto& two_sr = sr.divideInYaxis();
            if (search_helper(two_sr.first, target, true, r)) return true;
            if (search_helper(two_sr.second, target, true, r)) return true;
        }
        else {
            const auto& two_sr = divideInY ? sr.divideInYaxis() : sr.divideInXaxis();
            if (search_helper(two_sr.first, target, !divideInY, r)) return true;
            if (search_helper(two_sr.second, target, !divideInY, r)) return true;
        }
        return false;
    }
    vector<int> searchInSortedMatrix(vector<vector<int>> matrix, int target) {
        auto result = no_result;
        if (matrix.empty()) return result;
        if (matrix.size() == 1 && matrix[0].size() == 1) {
            if (matrix[0][0] == target) result = {0, 0};
            return result;
        }

        SubRect main_matrix(matrix);
        search_helper(main_matrix, target, true, result);

        return result;
    }
}
