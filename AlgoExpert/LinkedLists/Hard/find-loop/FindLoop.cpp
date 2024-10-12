// https://www.algoexpert.io/questions/find-loop
//
// #LinkedLists
// #Hard

#include <iostream>
#include "FindLoop.h"

namespace algoExpert::linkedLists {
    class LinkedList {
    public:
        int value;
        LinkedList* next;

        LinkedList(int value);
    };

    LinkedList* findLoop(LinkedList* head) {
        if (head == nullptr || head->next == nullptr) return nullptr;
        auto ptr1 = head;
        auto ptr2 = head;
        while (true) { // looking point where ptr2 reach ptr1
            ptr1 = ptr1->next;
            ptr2 = ptr2->next->next;
            if (ptr1 == ptr2) break;
        }
        // now ptr1 is on meet point on the loop
        // ptr1 will continue run on the loop
        ptr2 = head; // ptr2 starts from the begining again
        // ptr1 & ptr2 should meet right at a 1-st node of the loop
        while (ptr1 != ptr2) {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return ptr1;
    }

}
