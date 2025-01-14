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
    };
    vector<int> searchInSortedMatrix(vector<vector<int>> matrix, int target) {
        vector<int> result{-1, -1};
        if (matrix.empty()) return result;
        if (matrix.size() == 1 && matrix[0].size() == 1) {
            if (matrix[0][0] == target) result = {0, 0};
            return result;
        }

        SubRect main_matrix(matrix);
        if (!main_matrix.may_contain(target)) return result;

        return result;
    }
}
