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

// create combinations
// Write a function, createCombinations, that takes in an vector and a size as arguments.
//  The function should return a 2D vector representing all of the combinations of the specifized size.

// The items within the combinations and the combinations themselves may be returned in any order.

// You may assume that the input vector contains unique elements and 1 <= k <= items.size()
void printVector(std::vector<std::vector<std::string>>);
std::vector<std::vector<std::string>> createCombinations(std::vector<std::string>, int);
std::vector<std::vector<std::string>> createCombinations(std::vector<std::string> items, int size) {
    // todo


    std::vector<std::vector<std::string>> result;
    
    return result;
}

void printVector(std::vector<std::vector<std::string>> vec) {
    for (auto x : vec) {

        for (auto y : x) {
            std::cout << y << " , ";
        }
    }
    std::cout << std::endl;
}

int main() {

    std::cout << std::endl;

    printVector(createCombinations(std::vector<std::string>{"a", "b", "c"}, 2)); // ->
    // [
    //   [ "a", "b" ],
    //   [ "a", "c" ],
    //   [ "b", "c" ]
    // ]
    printVector(createCombinations(std::vector<std::string>{"q", "r", "s", "t"}, 2)); // ->
    // [
    //   [ "q", "r" ],
    //   [ "q", "s" ],
    //   [ "q", "t" ],
    //   [ "r", "s" ],
    //   [ "r", "t" ],
    //   [ "s", "t" ]
    // ]
    printVector(createCombinations(std::vector<std::string>{"q", "r", "s", "t"}, 3)); // ->
    // [
    //   [ "q", "r", "s" ],
    //   [ "q", "r", "t" ],
    //   [ "q", "s", "t" ],
    //   [ "r", "s", "t" ]
    // ]
    printVector(createCombinations(std::vector<std::string>{"1", "28", "94"}, 3)); // ->
                                                                                   // [
                                                                                   //   [ "1", "28", "94" ]
                                                                                   // ]
    return 0;
}