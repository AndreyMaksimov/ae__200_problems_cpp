// https://www.algoexpert.io/questions/reverse-words-in-string
//
// #Strings
// #Medium

#include <list>
#include "ReverseWordsInString.h"

namespace algoExpert::strings {
    using words_chain_t = std::list<std::string>;
    string reverseWordsInString(string str) {
        if (str.empty()) return "";
        words_chain_t words;
        bool b_space = str[0] == ' ';
        string word_maker;
        for (const auto &c : str) {
            // we'll switch between type of char and collect words in revers order (push_front)
            if ( c == ' ') {
                if (!b_space) {
                    words.push_front(word_maker);
                    word_maker.clear();
                    b_space = true;
                }
            }
            else {
                if (b_space) {
                    words.push_front(word_maker);
                    word_maker.clear();
                    b_space = false;
                }
            }
            word_maker.push_back(c);
        }
        words.push_front(word_maker);

        string reversed_words;
        for (const auto &word : words) {
            reversed_words.append(word);
        }
        return reversed_words;
    }
}
