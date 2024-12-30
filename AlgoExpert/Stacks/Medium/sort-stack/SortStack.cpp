// https://www.algoexpert.io/questions/sort-stack
//
// #Stacks
// #Medium

#include <stack>
#include <algorithm>
#include <iostream>
#include "SortStack.h"

namespace algoExpert::stacks {
    using std::cout, std::endl;

    void print_vector(const char* title, std::vector<int>& v) {
        cout << title << ": ";
        for (const auto& i : v) {
            cout << '\t' << i << " ";
        }
        cout << endl;
    }

    int stack_sorter(std::stack<int>& st, int value, bool& swap_done) {
        if (st.empty()) return value;
        auto next_value = st.top();
        st.pop();
        if (next_value < value) {
            std::swap(value, next_value);
            swap_done = true;
        }
        st.push(stack_sorter(st, next_value, swap_done));
        return value;
    }

    void sort_stack(std::stack<int>& st) {
        if (st.empty()) return;
        auto a = st.top();
        st.pop();
        bool swap_done = false;
        a = stack_sorter(st, a, swap_done);
        st.push(a);
    }

    vector<int> sortStack(vector<int>& array) {
        std::stack<int> st;
        for (const auto& element : array) {
            st.push(element);
        }

        sort_stack(st);
        sort_stack(st);
        sort_stack(st);
        sort_stack(st);
        sort_stack(st);
        sort_stack(st);
        sort_stack(st);
        sort_stack(st);
        sort_stack(st);
        sort_stack(st);

        vector<int> result;
        while (!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }

        print_vector(" Input: ", array);
        // std::reverse(result.begin(), result.end());
        print_vector("Output: ", result);
        return result;
    }
}
