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

// lexical order
// Write a function, lexicalOrder, that takes in 2 words and an alphabet
//  string as an argument. The function should return true if the first word
//   should appear before the second word if lexically-ordered according to
//   the given alphabet order. If the second word should appear first, then return false.
// https://en.wikipedia.org/wiki/Lexicographic_order
// Note that the alphabet string may be any arbitrary string.

// Intuitively, Lexical Order is like "dictionary" order:

// You can assume that all characters are lowercase a-z.

// You can assume that the alphabet contains all 26 letters.

bool lexicalOrder(std::string word1, std::string word2, std::string alphabet) {
    // todo


    return true;
}

int main() {

    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::cout << std::boolalpha << lexicalOrder("apple", "dock", alphabet) << std::endl; // -> 1 (true)
    alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::cout << lexicalOrder("apple", "ample", alphabet) << std::endl; // -> 0 (false)
    alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::cout << lexicalOrder("app", "application", alphabet) << std::endl; // -> 1 (true)
    alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::cout << lexicalOrder("backs", "backdoor", alphabet) << std::endl; // -> 0 (false)
    alphabet = "ghzstijbacdopnfklmeqrxyuvw";
    std::cout << lexicalOrder("zoo", "dinner", alphabet) << std::endl; // -> 1 (true)
    alphabet = "ghzstijbacdopnfklmeqrxyuvw";
    std::cout << lexicalOrder("leaper", "leap", alphabet) << std::endl; // -> 0 (false)
    alphabet = "ghzstijbacdopnfklmeqrxyuvw";
    std::cout << lexicalOrder("backs", "backdoor", alphabet) << std::endl; // -> 1 (true)
    alphabet = "ghzstijbacdopnfklmeqrxyuvw";
    std::cout << lexicalOrder("semper", "semper", alphabet) << std::endl; // -> 1 (true)
    return 0;
}