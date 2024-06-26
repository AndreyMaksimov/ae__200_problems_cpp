// https://www.algoexpert.io/questions/transpose-matrix
//
// #arrays
// #easy
// #std::vector

#include "TransposeMatrix.h"

namespace algoExpert::arrays {
    using std::vector;
    vector<vector<int>> transposeMatrix(vector<vector<int>> matrix) {
        const auto n_rows = matrix.size();
        const auto n_cols = matrix[0].size();
        vector<vector<int>> matrix_result(n_cols);
        for (int i=0; i<n_cols; ++i) {
            matrix_result[i] = vector<int>(n_rows);
            for (int j=0; j<n_rows; ++j) {
                matrix_result[i][j] = matrix[j][i];
            }
        }
        return matrix_result;
    }
}
