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

// permutations
// Write a function, permutations, that takes in a list an argument. The function should
// return a 2D list where each sublist represents one of the possible permutations of the list.

// The sublists may be returned in any order.

// You may assume that the input list contains unique items.
void printVector(std::vector<std::vector<std::string>>);
std::vector<std::vector<std::string>> permutations(std::vector<std::string>);
std::vector<std::vector<std::string>> permutations(std::vector<std::string> elements) {
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

    printVector(permutations(std::vector<std::string>{"a", "b", "c"})); // ->
    // [
    //   [ "a", "b", "c" ],
    //   [ "b", "a", "c" ],
    //   [ "b", "c", "a" ],
    //   [ "a", "c", "b" ],
    //   [ "c", "a", "b" ],
    //   [ "c", "b", "a" ]
    // ]
    printVector(permutations(std::vector<std::string>{"red", "blue"})); // ->
    // [
    //   [ "red", "blue" ],
    //   [ "blue", "red" ]
    // ]
    printVector(permutations(std::vector<std::string>{"8", "2", "1", "4"})); // ->
    // [
    //   [ "8", "2", "1", "4" ], [ "2", "8", "1", "4" ],
    //   [ "2", "1", "8", "4" ], [ "2", "1", "4", "8" ],
    //   [ "8", "1", "2", "4" ], [ "1", "8", "2", "4" ],
    //   [ "1", "2", "8", "4" ], [ "1", "2", "4", "8" ],
    //   [ "8", "1", "4", "2" ], [ "1", "8", "4", "2" ],
    //   [ "1", "4", "8", "2" ], [ "1", "4", "2", "8" ],
    //   [ "8", "2", "4", "1" ], [ "2", "8", "4", "1" ],
    //   [ "2", "4", "8", "1" ], [ "2", "4", "1", "8" ],
    //   [ "8", "4", "2", "1" ], [ "4", "8", "2", "1" ],
    //   [ "4", "2", "8", "1" ], [ "4", "2", "1", "8" ],
    //   [ "8", "4", "1", "2" ], [ "4", "8", "1", "2" ],
    //   [ "4", "1", "8", "2" ], [ "4", "1", "2", "8" ]
    // ]
    printVector(permutations(std::vector<std::string>{})); // ->
                                                           // [
                                                           //  [ ]
                                                           // ]
    return 0;
}