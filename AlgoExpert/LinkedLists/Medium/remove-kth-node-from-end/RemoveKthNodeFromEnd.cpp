// https://www.algoexpert.io/questions/remove-kth-node-from-end
//
// #LinkedLists
// #Medium

#include "RemoveKthNodeFromEnd.h"

namespace algoExpert::linkedLists {
    using namespace std;

    class LinkedList {
    public:
        int value;
        LinkedList* next;

        LinkedList(int value);
        void addMany(vector<int> values);
        vector<int> getNodesInArray();
    };

    // The problem is quite similar as 'middle-node' one
    // We'll create a second pointer which will be k steps behind 1-st one
    void removeKthNodeFromEnd(LinkedList* head, int k) {
        auto ptr1 = head;
        auto ptr2 = head;
        for (int i = 0; i < k; i++) {
            ptr1 = ptr1->next;
        }
        const auto bEndOfList = (ptr1 == nullptr);
        while (ptr1 != nullptr) {
            ptr1 = ptr1->next;
            if (ptr1 != nullptr) ptr2 = ptr2->next;
        }
        if (bEndOfList) { // we need substitute a head value with keep pointer
            head->value = head->next->value;
            head->next = head->next->next;
        }
        else {
            if (ptr2->next != nullptr) ptr2->next = ptr2->next->next;
        }
    }
}
