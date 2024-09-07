// https://www.algoexpert.io/questions/middle-node
//
// #LinkedLists
// #Easy

#include "MiddleNode.h"

namespace algoExpert::linkedLists {
    // This is an input struct. Do not edit.
    class LinkedList {
    public:
        int value;
        LinkedList* next = nullptr;

        LinkedList(int value) { this->value = value; }
    };

    // The idea is to run 2 pointers through the list
    // 1-st one - in regular manner
    // 2-nd - with double "speed"
    // the 1st will be right at the middle when the 2nd finishes
    LinkedList* middleNode(LinkedList* linkedList) {
        auto ptr1 = linkedList;
        auto ptr2 = linkedList;
        while (ptr2->next != nullptr) {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
            if (ptr2->next == nullptr) break;
            ptr2 = ptr2->next;
        }
        return ptr1;
    }
}
