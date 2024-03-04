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

// quickest concat
// Write a function, quickest_concat, that takes in a string and a list of words as arguments.
// The function should return the minimum number of words needed to build the string by concatenating words of the list.

// You may use words of the list as many times as needed.
int quickestConcat(std::string, std::vector<std::string>);
int _quickestConcat(std::string, std::vector<std::string>, std::unordered_map<std::string, int> &);

int quickestConcat(std::string str, std::vector<std::string> words) {
    // todo
    std::unordered_map<std::string, int> hash;
    return _quickestConcat(str, words, hash);
}
int _quickestConcat(std::string str, std::vector<std::string> words, std::unordered_map<std::string, int> &hash) {
    // todo
        return 0;

}
int main() {

    std::cout << quickestConcat("caution", std::vector<std::string>{"ca", "ion", "caut", "ut"}) << std::endl;                                 // -> 2
    std::cout << quickestConcat("caution", std::vector<std::string>{"ion", "caut", "caution"}) << std::endl;                                  // -> 1
    std::cout << quickestConcat("respondorreact", std::vector<std::string>{"re", "or", "spond", "act", "respond"}) << std::endl;              // -> 4
    std::cout << quickestConcat("simchacindy", std::vector<std::string>{"sim", "simcha", "acindy", "ch"}) << std::endl;                       // -> 3
    std::cout << quickestConcat("simchacindy", std::vector<std::string>{"sim", "simcha", "acindy"}) << std::endl;                             // -> -1
    std::cout << quickestConcat("uuuuuu", std::vector<std::string>{"u", "uu", "uuu", "uuuu"}) << std::endl;                                   // -> 2
    std::cout << quickestConcat("rongbetty", std::vector<std::string>{"wrong", "bet"}) << std::endl;                                          // -> -1
    std::cout << quickestConcat("uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", std::vector<std::string>{"u", "uu", "uuu", "uuuu", "uuuuu"}) << std::endl; // -> 7
    return 0;
}