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

// safe cracking
// Oh-no! You forgot the number combination that unlocks your safe.
//  Luckily, you knew that you'd be forgetful so you previously wrote
//   down a bunch of hints that can be used to determine the correct combination. Each hint is a pair
//   of numbers "x, y" that indicates you must enter digit "x" before "y" (but not necessarily immediately before y).

// The keypad on the safe has digits 0-9. You can assume that the hints
//  will generate exactly one working combination and that a digit can occur zero or one time in the answer.

// Write a function, safeCracking, that takes in an array of hints as
//  an argument and determines the combination that will unlock the safe.
//  The function should return a string representing the combination.
std::string safeCracking(std::vector<std::tuple<int, int>>);
std::unordered_map<int, std::vector<int>> buildGraph(std::vector<std::tuple<int, int>>);

std::string safeCracking(std::vector<std::tuple<int, int>> hints) {
    // todo
    std::unordered_map<int, std::vector<int>> graph = buildGraph(hints);
    std::vector<int> result;
    std::string combination = "";
    std::unordered_map<int, int> parentCount;

    return combination;
}
std::unordered_map<int, std::vector<int>> buildGraph(std::vector<std::tuple<int, int>> hints) {
    std::unordered_map<int, std::vector<int>> graph;


    return graph;
}

int main() {

    std::cout << safeCracking(std::vector<std::tuple<int, int>>{
                     {7, 1},
                     {1, 8},
                     {7, 8},
                 })
              << std::endl; // -> "718"
    std::cout << safeCracking(std::vector<std::tuple<int, int>>{
                     {3, 1},
                     {4, 7},
                     {5, 9},
                     {4, 3},
                     {7, 3},
                     {3, 5},
                     {9, 1},
                 })
              << std::endl; // -> "473591"
    std::cout << safeCracking(std::vector<std::tuple<int, int>>{
                     {2, 5},
                     {8, 6},
                     {0, 6},
                     {6, 2},
                     {0, 8},
                     {2, 3},
                     {3, 5},
                     {6, 5},
                 })
              << std::endl; // -> "086235"
    std::cout << safeCracking(std::vector<std::tuple<int, int>>{
                     {0, 1},
                     {6, 0},
                     {1, 8},
                 })
              << std::endl; // -> "6018"
    std::cout << safeCracking(std::vector<std::tuple<int, int>>{
                     {8, 9},
                     {4, 2},
                     {8, 2},
                     {3, 8},
                     {2, 9},
                     {4, 9},
                     {8, 4},
                 })
              << std::endl; // -> "38429"

    return 0;
}