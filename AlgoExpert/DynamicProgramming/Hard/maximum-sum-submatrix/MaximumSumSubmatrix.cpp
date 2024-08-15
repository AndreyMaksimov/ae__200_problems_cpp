// https://www.algoexpert.io/questions/maximum-sum-submatrix
//
// #DynamicProgramming
// #Hard

#include <limits>
#include "MaximumSumSubmatrix.h"

// This is most likely as an 1D- problem:
// Given 1D array of (integer) numbers
// How to find a sum of numbers between indexes i1 & i2. In a constant time.
// As a solution we create one more array where to put sum of numbers from 0 to i to i-th cell
// So the original task will be solved if we subtract i1-th value of second array from i2-th value of the array

// For a matrix we do tha same - prepare helper matrix where each (i,j) cell will contain a sum of all cells up and
// left including (i,j)

// Formula is following:
// sum(i,j) = value(i,j) + sum(i-1, j) + sum(i, j-1) - sum(i-1, j-1)
// we need to subtract diagonal sum(i-1, j-1) because it is counted twice: both in sum(i-1, j) & sum(i, j-1)


namespace algoExpert::dynamicProgramming {
    using std::numeric_limits;
    int maximumSumSubmatrix(vector<vector<int>> matrix, int size) {
        const int width = static_cast<int>(matrix[0].size());
        const int height = static_cast<int>(matrix.size());

        decltype(matrix) sum_matrix(height, vector<int>(width, 0));

        sum_matrix[0][0] = matrix[0][0];

        // prepare 1-st row
        auto sum = matrix[0][0];
        for (auto j = 1; j < width; ++j) {
            sum += matrix[0][j];
            sum_matrix[0][j] = sum;
        }
        // prepare 1-st column
        sum = matrix[0][0];
        for (auto i = 1; i < height; ++i) {
            sum += matrix[i][0];
            sum_matrix[i][0] = sum;
        }

        // fill in rest of the sum_matrix
        for (auto i = 1; i < height; ++i) {
            for (auto j = 1; j < width; ++j) {
                sum_matrix[i][j] = matrix[i][j] + sum_matrix[i-1][j] + sum_matrix[i][j-1] - sum_matrix[i-1][j-1];
            }
        }

        // we assume that submatrix is inside the matrix ( (i+size < height) && (j+size < height) )
        auto sum_submatrix = [&sum_matrix, &size](const int i, const int j) {
            int sum_up = 0, sum_left = 0, sum_diagonal = 0;
            const auto j_right = j+size-1;
            const auto i_down = i+size-1;
            if (i > 0 && j > 0) { // we have non zero "sum_diagonal"
                sum_diagonal = sum_matrix[i-1][j-1];
            }
            if (i > 0 ) { // we have non zero "sum_up"
                sum_up = sum_matrix[i-1][j_right];
            }
            if (j > 0 ) { // we have non zero "sum_left"
                sum_left = sum_matrix[i_down][j-1];
            }
            return sum_matrix[i_down][j_right] - sum_up - sum_left + sum_diagonal;
        };

        auto max_sum = numeric_limits<int>::min();
        for (auto i = 0; i < (height-size+1); ++i) {
            for (auto j = 0; j < (width-size+1); ++j) {
                const auto sm = sum_submatrix(i, j);
                max_sum = std::max(max_sum, sm);
            }
        }
        return max_sum;
    }
}
