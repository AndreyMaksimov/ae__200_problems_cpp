// https://www.algoexpert.io/questions/search-in-sorted-matrix
//
// #Searching
// #Medium

#include <algorithm>
#include <utility>
#include <iostream>
#include "SearchInSortedMatrix.h"

namespace algoExpert::searching {
    using std::min;
    using std::pair;
    using std::cout, std::endl;

    using point_t = pair<int, int>;
    using rect_t = pair<int, int>;
    static const vector<int> no_result{-1, -1};

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
        [[nodiscard]] two_rects_t createByX() const {
            auto one_r = SubRect(*this);
            one_r._size.first = _size.first / 2;
            auto two_r = SubRect(*this);
            two_r._size.first = _size.first - one_r._size.first;
            two_r._topLeft.first = _topLeft.first + one_r._size.first;
            return {one_r, two_r};
        }
        [[nodiscard]] two_rects_t createByY() const {
            auto one_r = SubRect(*this);
            one_r._size.second = _size.second / 2;
            auto two_r = SubRect(*this);
            two_r._size.second = _size.second - one_r._size.second;
            two_r._topLeft.second = _topLeft.second + one_r._size.second;
            return {one_r, two_r};
        }
        static int count_print;
        static void print_rect(const char* title, const bool bY, const SubRect& rect, const int level) {
            const char* XY = bY ? "Y" : "X";
            cout << "[" << title << "]: " << XY << "  " << level;
            cout << "  top_left = ( " << rect._topLeft.first << ", " << rect._topLeft.second << " ) ";
            cout << "size = ( " << rect._size.first << ", " << rect._size.second << " ) ";
            cout << endl;
            // if (++count_print >= 10) throw 1;
        }
    };

    int SubRect::count_print = 0;

    bool search_helper(const SubRect sr, const int& target, const bool divideByY, vector<int>& r, int level) {
        SubRect::print_rect("search_helper", divideByY, sr, level);
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
            const auto two_sr = sr.createByX();
            if (search_helper(two_sr.first, target, false, r, (level+1))) return true;
            if (search_helper(two_sr.second, target, false, r, (level+1))) return true;
        }
        else if (sr.is_one_column()) {
            const auto two_sr = sr.createByY();
            if (search_helper(two_sr.first, target, true, r, (level+1))) return true;
            if (search_helper(two_sr.second, target, true, r, (level+1))) return true;
        }
        else {
            const auto two_sr = divideByY ? sr.createByY() : sr.createByX();
            if (search_helper(two_sr.first, target, !divideByY, r, (level+1))) return true;
            if (search_helper(two_sr.second, target, !divideByY, r, (level+1))) return true;
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
        search_helper(main_matrix, target, true, result, 1);

        return result;
    }
}
