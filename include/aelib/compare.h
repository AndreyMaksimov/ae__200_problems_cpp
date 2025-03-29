#pragma once

#include <vector>
#include <algorithm>
#include <unordered_set>
#include <memory>

namespace aelib {
    /**
     * Custom comparator for some tests
     * This function was inspirited of problem https://www.algoexpert.io/questions/four-number-sum
     * When the result of calculation is type of vector<vector<int>>
     * Suggested expected value is vector of unsorted vectors.
     * So to apply EXPECT_* test we need
     * 1) to sort each vector<int>
     * 2) try to find equal pairs in v1 vs v2
     * @tparam T
     * @param v1
     * @param v2
     * @param to_sort - true if we need to sort vector<T> in both v1 and v2
     * @return
     */
    template <typename T>
    bool compare_unsorted_vectors(const std::vector<T>& v1, const std::vector<T>& v2, const bool to_sort = true) {
        using std::vector, std::sort, std::unordered_set, std::make_unique, std::unique_ptr;
        if (v1.size() != v2.size()) return false;
        if (v1.empty()) return true;
        unordered_set<int> acquired_indices;
        for (const auto& a1 : v1) {
            bool found_pair_for_a1 = false;
            for (auto i = 0 ; i < size(v1); i++) {
                if (acquired_indices.contains(i)) continue;
                const auto& a2 = v2[i];
                auto a1_ptr = &a1;
                auto a2_ptr = &a2;
                unique_ptr<T> a1_u_ptr, a2_u_ptr;
                if (to_sort) { // we need to create copies of input vectors
                    a1_u_ptr = make_unique<T>(T(a1));
                    a2_u_ptr = make_unique<T>(T(a2));
                    sort(begin(*a1_u_ptr), end(*a1_u_ptr));
                    sort(begin(*a2_u_ptr), end(*a2_u_ptr));
                    a1_ptr = a1_u_ptr.get();
                    a2_ptr = a2_u_ptr.get();
                }
                if (*a1_ptr == *a2_ptr) {
                    acquired_indices.insert(i);
                    found_pair_for_a1 = true;
                    break;
                }
            }
            if (!found_pair_for_a1) return false;
        }
        return true;
    }
}
