// https://www.algoexpert.io/questions/nth-fibonacci
//
// #Recursion
// #Easy

#include <unordered_map>
#include "NthFibonacci.h"

namespace algoExpert::recursion {
    // Recursion approach
    int getNthFib_recursive(int n) {
        if (n < 2) return 0;
        if (n==2) return 1;
        return getNthFib_recursive(n-1) + getNthFib_recursive(n-2);
    }

    // Iterative approach
    int getNthFib_iter(int n) {
        if (n < 2) return 0;
        if (n==2) return 1;
        int n1 = 0;
        int n2 = 1;
        int sum = 0;
        for (int i = 3; i <= n; i++) {
            sum = n1 + n2;
            n1 = n2;
            n2 = sum;
        }
        return sum;
    }

    using std::unordered_map;
    unordered_map <int, int> fib_memo {{1, 0}, {2, 1}};
    int getNthFib_with_memoization(int n) {
        const auto it = fib_memo.find(n);
        if (it != fib_memo.end()) return it->second;
        else {
            const int result = getNthFib_with_memoization(n-1) + getNthFib_with_memoization(n-2);
            fib_memo[n] = result;
            return result;
        }
    }

    int getNthFib (int n) {
        return getNthFib_iter(n);
        // return getNthFib_recursive(n);
        // return getNthFib_with_memoization(n);
    }
}
