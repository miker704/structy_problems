#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits.h>
#include <math.h>
#include <queue>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <vector>

// anagrams
// Write a function, anagrams, that takes in two strings as arguments. The function should return
//  a boolean indicating whether or not the strings are anagrams. Anagrams are strings that
//  contain the same characters, but in any order.
bool anagrams(std::string, std::string);
std::unordered_map<char, int> hashIt(std::string);
bool anagrams(std::string s1, std::string s2) {
    // todo
        return false;
}

std::unordered_map<char, int> hashIt(std::string str) {
    std::unordered_map<char, int> hash;

    return hash;
}

int main() {
    std::cout << std::boolalpha << anagrams("restful", "fluster") << std::endl; // -> true
    std::cout << anagrams("cats", "tocs") << std::endl;                         // -> false
    std::cout << anagrams("monkeyswrite", "newyorktimes") << std::endl;         // -> true
    std::cout << anagrams("paper", "reapa") << std::endl;                       // -> false
    std::cout << anagrams("elbow", "below") << std::endl;                       // -> true
    std::cout << anagrams("tax", "taxi") << std::endl;                          // -> false
    std::cout << anagrams("taxi", "tax") << std::endl;                          // -> false
    std::cout << anagrams("night", "thing") << std::endl;                       // -> true
    std::cout << anagrams("abbc", "aabc") << std::endl;                         // -> false
    std::cout << anagrams("po", "popp") << std::endl;                           // -> false
    std::cout << anagrams("pp", "oo") << std::endl;                             // -> false
    return 0;
}