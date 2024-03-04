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

// can concat
// Write a function, canConcat, that takes in a string and an array of words as arguments.
//  The function should return boolean indicating whether or not it is possible
//   to concatenate words of the array together to form the string.

// You may reuse words of the array as many times as needed.
bool canConcat(std::string, std::vector<std::string>);
bool _canConcat(std::string, std::vector<std::string>, std::unordered_map<std::string, bool> &);

bool canConcat(std::string str, std::vector<std::string> words) {
    std::unordered_map<std::string, bool> hash;
    return _canConcat(str, words, hash);
}
bool _canConcat(std::string str, std::vector<std::string> words, std::unordered_map<std::string, bool> &hash) {
    // todo


    return false;
}

int main() {

    std::cout << std::endl;
    std::cout << std::boolalpha << canConcat("oneisnone", std::vector<std::string>{"one", "none", "is"}) << std::endl;                         // -> 1 (true)
    std::cout << canConcat("oneisnone", std::vector<std::string>{"on", "e", "is"}) << std::endl;                                               // -> 0 (false)
    std::cout << canConcat("oneisnone", std::vector<std::string>{"on", "e", "is", "n"}) << std::endl;                                          // -> 1 (true)
    std::cout << canConcat("foodisgood", std::vector<std::string>{"is", "g", "ood", "f"}) << std::endl;                                        // -> 1 (true)
    std::cout << canConcat("santahat", std::vector<std::string>{"santah", "hat"}) << std::endl;                                                // -> 0 (false)
    std::cout << canConcat("santahat", std::vector<std::string>{"santah", "san", "hat", "tahat"}) << std::endl;                                // -> 1 (true)
    std::cout << canConcat("rrrrrrrrrrrrrrrrrrrrrrrrrrx", std::vector<std::string>{"r", "rr", "rrr", "rrrr", "rrrrr", "rrrrrr"}) << std::endl; // -> 0 (false)
    std::cout << canConcat("fooisgood", std::vector<std::string>{"foo", "is", "g", "ood", "f"}) << std::endl;                                  // -> 1 (true)
    return 0;
}