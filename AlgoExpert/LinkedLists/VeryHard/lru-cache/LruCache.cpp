// https://www.algoexpert.io/questions/lru-cache
//
// #LinkedLists
// #VeryHard

#include "LruCache.h"

namespace algoExpert::linkedLists {
    class LRUCache {
    public:
        int maxSize;

        LRUCache(int maxSize) { this->maxSize = maxSize > 1 ? maxSize : 1; }

        void insertKeyValuePair(string key, int value) {
            // Write your code here.
        }

        int* getValueFromKey(string key) {
            // Write your code here.
            return nullptr;
        }

        string getMostRecentKey() {
            // Write your code here.
            return "";
        }
    };
}
