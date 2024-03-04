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

// overlap subsequence
// Write a function, overlapSubsequence, that takes in two strings as arguments.
//  The function should return the length of the longest overlapping subsequence.

// A subsequence of a string can be created by deleting any characters of the string,
//  while maintaining the relative order of characters.

int overlapSubsequence(std::string, std::string);
int _overlapSubsequence(std::string, std::string, int, int, std::unordered_map<std::string, int> &);

int overlapSubsequence(std::string s1, std::string s2) {
    std::unordered_map<std::string, int> indexs;
    return _overlapSubsequence(s1, s2, 0, 0, indexs);
}

int _overlapSubsequence(std::string s1, std::string s2, int i, int j, std::unordered_map<std::string, int> &indexs) {
    // todo
    
        return 0;

}

int main() {

    std::cout << overlapSubsequence("dogs", "daogt") << std::endl;                                  // -> 3
    std::cout << overlapSubsequence("xcyats", "criaotsi") << std::endl;                             // -> 4
    std::cout << overlapSubsequence("xfeqortsver", "feeeuavoeqr") << std::endl;                     // -> 5
    std::cout << overlapSubsequence("kinfolklivemustache", "bespokekinfolksnackwave") << std::endl; // -> 11
    std::cout << overlapSubsequence(
                     "mumblecorebeardleggingsauthenticunicorn",
                     "succulentspughumblemeditationlocavore")
              << std::endl; // -> 15
    return 0;
}