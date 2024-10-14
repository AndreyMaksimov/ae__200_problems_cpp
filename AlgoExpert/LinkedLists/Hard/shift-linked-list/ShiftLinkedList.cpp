// https://www.algoexpert.io/questions/shift-linked-list
//
// #LinkedLists
// #Hard

#include "ShiftLinkedList.h"

namespace algoExpert::linkedLists {
    class LinkedList {
    public:
        int value;
        LinkedList* next;

        LinkedList(int value) {
            this->value = value;
            next = nullptr;
        }
    };

    LinkedList* shiftLinkedList(LinkedList* head, int k) {
        if (k == 0) return head;
        int length = 1;
        decltype(head) tail = head;

        // Count the list's length
        while (tail->next != nullptr) {
            ++length;
            tail = tail->next;
        }
        k = -k % length;
        if (k == 0) return head;

        // make the list looped
        tail->next = head;

        if (k < 0) k += length;
        // Run over the loop till the new tail/head pair
        for (int i = 1; i < k; ++i) {
            head = head->next;
        }
        tail = head;
        // Make new head & cut between tail & head
        head = head->next;
        tail->next = nullptr;

        return head;
    }
}
