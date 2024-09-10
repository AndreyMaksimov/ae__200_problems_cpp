// https://www.algoexpert.io/questions/reverse-linked-list
//
// #LinkedLists
// #Hard

#include <iostream>
#include "ReverseLinkedList.h"

namespace algoExpert::linkedLists {
    class LinkedList {
    public:
        int value;
        LinkedList* next;

        LinkedList(int value) {
            this->value = value;
            this->next = nullptr;
        }
    };

    LinkedList* reverseLinkedList(LinkedList* head) {
        decltype(head) prev = nullptr;
        decltype(head) curr = head;
        decltype(head) next = nullptr;
        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
}
