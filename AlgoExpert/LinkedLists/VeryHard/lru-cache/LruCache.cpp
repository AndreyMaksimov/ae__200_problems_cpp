// https://www.algoexpert.io/questions/lru-cache
//
// #LinkedLists
// #VeryHard

#include <list>
#include <string>
#include <utility>
#include <unordered_map>
#include "LruCache.h"

namespace algoExpert::linkedLists {
    using std::list, std::unordered_map, std::string, std::pair, std::make_pair;
    // We'll use 2 containers
    // 1) "list" to keep pairs (string, int)
    // 2) hash ("unordered_map") to keep [ key (string) -> pointer (iterator) to lists's item ]
    class LRUCache {
        typedef pair<string, int> pair_t;
        typedef list<pair_t> list_t;
        typedef list_t::iterator iter_t;
        unordered_map<string, iter_t> m_hash;
        list_t m_list;
        int m_size {0};

        void moveToFront(const iter_t it_list) {
            if (it_list == m_list.begin()) return;
            const auto key = it_list->first;
            const auto list_item = *it_list;
            m_list.erase(it_list);
            m_list.push_front(list_item);
            const auto it_hash = m_hash.find(key);
            it_hash->second = m_list.begin();
        }
    public:
        int maxSize;

        LRUCache(int maxSize) { this->maxSize = maxSize > 1 ? maxSize : 1; }

        void insertKeyValuePair(string key, int value) {
            const auto it_hash = m_hash.find(key);
            if (it_hash != m_hash.end()) {
                it_hash->second->second = value;
                moveToFront(it_hash->second);
                return;
            }
            if (m_size == maxSize) {
                const auto it_list_back = m_list.back();
                const auto key_back = it_list_back.first;
                m_hash.erase(key_back);
                m_list.pop_back();
            }
            else {
                ++m_size;
            }
            m_list.emplace_front(key, value);
            const auto it_list = m_list.begin();
            m_hash.insert({key, it_list});
        }

        int* getValueFromKey(string key) {
            const auto it_hash = m_hash.find(key);
            if (it_hash == m_hash.end()) return nullptr;
            const auto it_list = it_hash->second;
            moveToFront(it_list);
            return &(m_list.begin()->second);
        }

        string getMostRecentKey() {
            if (m_size == 0) return "";
            return m_list.front().first;
        }
    };
}
