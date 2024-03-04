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

// detect dictionary
// Write a function, detectDictionary, that takes in a dictionary of words
//  and an alphabet string. The function should return a boolean indicating
//  whether or not all words of the dictionary are lexically-ordered
//  according to the alphabet.
// https://en.wikipedia.org/wiki/Lexicographic_order
// You can assume that all characters are lowercase a-z.

// You can assume that the alphabet contains all 26 letters.
bool detectDictionary(std::vector<std::string>, std::string);
bool lexicalOrder(std::string, std::string, std::string);
bool detectDictionary(std::vector<std::string> dictionary, std::string alphabet) {
    // todo


    return true;
}

bool lexicalOrder(std::string word1, std::string word2, std::string alphabet) {


    return true;
}

int main() {

    std::vector<std::string> dictionary{"zoo", "tick", "tack", "door"};
    std::string alphabet = "ghzstijbacdopnfklmeqrxyuvw";
    std::cout << std::boolalpha << detectDictionary(dictionary, alphabet) << std::endl; // -> 1 (true)
    dictionary = {"zoo", "tack", "tick", "door"};
    alphabet = "ghzstijbacdopnfklmeqrxyuvw";
    std::cout << detectDictionary(dictionary, alphabet) << std::endl; // -> 0 (false)
    dictionary = {"zoos", "zoo", "tick", "tack", "door"};
    alphabet = "ghzstijbacdopnfklmeqrxyuvw";
    std::cout << detectDictionary(dictionary, alphabet) << std::endl; // -> 0 (false)
    dictionary = {"miles", "milestone", "proper", "process", "goal"};
    alphabet = "mnoijpqrshkltabcdefguvwzxy";
    std::cout << detectDictionary(dictionary, alphabet) << std::endl; // -> 1 (true)
    dictionary = {"miles", "milestone", "pint", "proper", "process", "goal"};
    alphabet = "mnoijpqrshkltabcdefguvwzxy";
    std::cout << detectDictionary(dictionary, alphabet) << std::endl; // -> 1 (true)
    dictionary = {"miles", "milestone", "pint", "proper", "process", "goal", "apple"};
    alphabet = "mnoijpqrshkltabcdefguvwzxy";
    std::cout << detectDictionary(dictionary, alphabet) << std::endl; // -> 0 (false)

    return 0;
}