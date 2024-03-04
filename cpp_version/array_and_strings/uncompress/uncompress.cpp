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

// uncompress
// Write a function, uncompress, that takes in a string as an argument. The input string
// will be formatted into multiple groups according to the following pattern:

// <number><char>

// for example, '2c' or '3a'.
// The function should return an uncompressed version of the string where each 'char' of a group is repeated 'number' times consecutively.
// You may assume that the input string is well-formed according to the previously mentioned pattern.

std::string uncompress(std::string s) {
    // todo

    std::string result = "";

    return result;
}

int main() {

    std::cout << uncompress("2c3a1t") << std::endl;  // -> "ccaaat"
    std::cout << uncompress("4s2b") << std::endl;    // -> "ssssbb"
    std::cout << uncompress("2p1o5p") << std::endl;  // -> "ppoppppp"
    std::cout << uncompress("3n12e2z") << std::endl; // -> "nnneeeeeeeeeeeezz"
    std::cout << uncompress("127y") << std::endl;
    // ->"yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy"

    return 0;
}