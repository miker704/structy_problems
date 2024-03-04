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

// compress
// Write a function, compress, that takes in a string as an argument. The function should return a compressed version
//  of the string where consecutive occurrences of the same characters are compressed into the number of occurrences followed by the
//   character. Single character occurrences should not be changed.

// 'aaa' compresses to '3a'
// 'cc' compresses to '2c'
// 't' should remain as 't'
// You can assume that the input only contains alphabetic characters.

std::string compress(std::string s) {
    // todo
    std::string result = "";


    return result;
}

int main() {
    std::cout << compress("ccaaatsss") << std::endl;         // -> "2c3at3s"
    std::cout << compress("ssssbbz") << std::endl;           // -> "4s2bz"
    std::cout << compress("ppoppppp") << std::endl;          // -> "2po5p"
    std::cout << compress("nnneeeeeeeeeeeezz") << std::endl; // -> "3n12e2z"
    std::cout << compress("yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy") << std::endl;
    // -> "127y"
    return 0;
}