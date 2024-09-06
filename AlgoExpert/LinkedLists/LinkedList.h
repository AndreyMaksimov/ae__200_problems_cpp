#pragma once
#include <string>
#include <vector>

namespace algoExpert::linkedLists {
    using std::string, std::vector;
    struct Node {
        string id;
        string next;
        int value;
    };

    class LinkedList {
    public:
        int value;
        LinkedList* next = nullptr;

        LinkedList(int value) { this->value = value; }
        static LinkedList* createList(vector<Node> nodes);
    };
}
