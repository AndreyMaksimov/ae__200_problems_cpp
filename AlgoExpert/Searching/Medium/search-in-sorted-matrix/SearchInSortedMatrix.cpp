// https://www.algoexpert.io/questions/search-in-sorted-matrix
//
// #Searching
// #Medium

#include <algorithm>
#include <utility>
#include "SearchInSortedMatrix.h"

namespace algoExpert::searching {
    using std::min;
    using std::pair;

    using point_t = pair<int, int>;
    using rect_t = pair<int, int>;
    static const vector<int> no_result{-1, -1};

    class SubRect
    {
        const vector<vector<int>>& _matrix;
        point_t _topLeft;
        rect_t _size;
        rect_t _shift_to_main;

    public:
        SubRect() = delete;
        ~SubRect() = default;
        explicit SubRect(const vector<vector<int>>& matrix):
        _matrix(matrix),
        _topLeft(0, 0),
        _size(matrix[0].size(), matrix.size())
        {}

        [[nodiscard]] int valueAt(const int x, const int y) const {
            return _matrix[y + _shift_to_main.second][x + _shift_to_main.first];
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
            return {_shift_to_main.first, _shift_to_main.second};
        }
        using two_rects_t = std::pair<SubRect, SubRect>;
        [[nodiscard]] two_rects_t createByX() const {
            return {*this, *this};
        }
        [[nodiscard]] two_rects_t createByY() const {
            return {*this, *this};
        }
    };
    bool search_helper(const SubRect sr, const int& target, const bool divide_rect_Ydirection, vector<int>& r) {
        if (r != no_result) return true;
        if (!sr.may_contain(target)) return false;
        if (sr.is_one_cell()) {
            if (sr.valueAt(0, 0) == target) r = sr.top_left_corner();
            return true;
        }
        if (sr.is_one_row()) {
            const auto two_sr = sr.createByX();
            if (search_helper(two_sr.first, target, false, r)) return true;
            if (search_helper(two_sr.second, target, false, r)) return true;
        }
        else if (sr.is_one_column()) {
            const auto two_sr = sr.createByY();
            if (search_helper(two_sr.first, target, true, r)) return true;
            if (search_helper(two_sr.second, target, true, r)) return true;
        }
        else {
            const auto two_sr = divide_rect_Ydirection ? sr.createByY() : sr.createByX();
            if (search_helper(two_sr.first, target, !divide_rect_Ydirection, r)) return true;
            if (search_helper(two_sr.second, target, !divide_rect_Ydirection, r)) return true;
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
