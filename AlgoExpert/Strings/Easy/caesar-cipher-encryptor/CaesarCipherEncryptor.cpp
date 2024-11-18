// https://www.algoexpert.io/questions/caesar-cipher-encryptor
//
// #Strings
// #Easy

#include "CaesarCipherEncryptor.h"

namespace algoExpert::strings {
    constexpr char a_ascii = 'a';
    constexpr int ascii_len = 26;
    string caesarCypherEncryptor(string str, int key) {
        for (auto& a : str) {
            a = (a - a_ascii + key) % ascii_len + a_ascii;
        }
        return str;
    }
}
