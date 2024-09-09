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

    void removeKthNodeFromEnd(LinkedList* head, int k) {
        // Write your code here.
    }
}
