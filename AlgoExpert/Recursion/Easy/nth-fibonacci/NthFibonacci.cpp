// https://www.algoexpert.io/questions/nth-fibonacci
//
// #Recursion
// #Easy

#include "NthFibonacci.h"

namespace algoExpert::recursion {
    int getNthFib(int n) {
        if (n < 2) return 0;
        if (n==2) return 1;
        return getNthFib(n-1) + getNthFib(n-2);
    }
}
