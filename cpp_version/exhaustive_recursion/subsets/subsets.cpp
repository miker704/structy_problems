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

// subsets
// Write a function, subsets, that takes in a vector as an argument.
// The function should return a 2D vector where each subvector represents one of the possible subsets of the input vector.

// The elements within the subsets and the subsets themselves may be returned in any order.

// You may assume that the input vector contains unique elements.
void printVector(std::vector<std::vector<std::string>>);
std::vector<std::vector<std::string>> subsets(std::vector<std::string>);
std::vector<std::vector<std::string>> subsets(std::vector<std::string> elements) {
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

    printVector(subsets(std::vector<std::string>{"a", "b"})); // ->
    // [
    //   [],
    //   [ "b" ],
    //   [ "a" ],
    //   [ "a", "b" ]
    // ]
    printVector(subsets(std::vector<std::string>{"a", "b", "c"})); // ->
                                                                   // [
                                                                   //   [],
                                                                   //   [ "c" ],
                                                                   //   [ "b" ],
                                                                   //   [ "b", "c" ],
                                                                   //   [ "a" ],
                                                                   //   [ "a", "c" ],
                                                                   //   [ "a", "b" ],
                                                                   //   [ "a", "b", "c" ]
                                                                   // ]
    printVector(subsets(std::vector<std::string>{"x"}));           // ->
    // [
    //   [],
    //   [ "x" ]
    // ]
    printVector(subsets(std::vector<std::string>{})); // ->
    // [
    //   []
    // ]
    printVector(subsets(std::vector<std::string>{"q", "r", "s", "t"})); // ->
                                                                        // [
                                                                        //   [],
                                                                        //   [ "t" ],
                                                                        //   [ "s" ],
                                                                        //   [ "s", "t" ],
                                                                        //   [ "r" ],
                                                                        //   [ "r", "t" ],
                                                                        //   [ "r", "s" ],
                                                                        //   [ "r", "s", "t" ],
                                                                        //   [ "q" ],
                                                                        //   [ "q", "t" ],
                                                                        //   [ "q", "s" ],
                                                                        //   [ "q", "s", "t" ],
                                                                        //   [ "q", "r" ],
                                                                        //   [ "q", "r", "t" ],
                                                                        //   [ "q", "r", "s" ],
                                                                        //   [ "q", "r", "s", "t" ]
                                                                        // ]

    return 0;
}