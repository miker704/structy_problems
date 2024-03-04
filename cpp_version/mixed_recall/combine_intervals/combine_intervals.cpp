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

// combine intervals
// Write a function, combineIntervals, that takes in a vector of intervals as an argument.
//  Each interval is a vector containing a pair of numbers representing a start and end time.
//  Your function should combine overlapping intervals and return a vector containing the
//  combined intervals.

// For example:

// Given two intervals:

// {1, 4} and {3, 7}

// The intervals overlap and
// should be combined into:

// {1, 7}
// You may return the combined intervals in any order.

// You can assume that the input vector contains at least one interval and all
//  intervals are valid with start < end.
void printVector(std::vector<std::tuple<int, int>>);
bool compareIntervals(std::tuple<int, int>, std::tuple<int, int>);
std::vector<std::tuple<int, int>> combineIntervals(std::vector<std::tuple<int, int>>);

bool compareIntervals(std::tuple<int, int> intervalA, std::tuple<int, int> intervalB) {
    return false;
}

std::vector<std::tuple<int, int>> combineIntervals(std::vector<std::tuple<int, int>> intervals) {
    // todo

    std::vector<std::tuple<int, int>> newIntervals{intervals[0]};

    return newIntervals;
}

void printVector(std::vector<std::tuple<int, int>> vec) {

    for (auto x : vec) {
        std::cout << "{ " << std::get<0>(x) << " , " << std::get<1>(x) << " }" << std::endl;
    }
    std::cout << std::endl;
}

int main() {

    std::vector<std::tuple<int, int>> intervals{
        {1, 4},
        {12, 15},
        {3, 7},
        {8, 13},
    };
    printVector(combineIntervals(intervals));
    // -> { {1, 7}, {8, 15} }
    intervals = {
        {6, 8},
        {2, 9},
        {10, 12},
        {20, 24},
    };
    printVector(combineIntervals(intervals));
    // -> { {2, 9}, {10, 12}, {20, 24} }
    intervals = {
        {3, 7},
        {5, 8},
        {1, 5},
    };
    printVector(combineIntervals(intervals));
    // // -> { {1, 8} }
    intervals = {
        {3, 7},
        {10, 13},
        {5, 8},
        {27, 31},
        {1, 5},
        {12, 16},
        {20, 22},
    };
    printVector(combineIntervals(intervals));
    // -> { {1, 8}, {10, 16}, {20, 22}, {27, 31} }
    intervals = {
        {3, 7},
        {10, 13},
        {5, 8},
        {27, 31},
        {1, 5},
        {12, 16},
        {20, 32},
    };
    printVector(combineIntervals(intervals));
    // // -> { {1, 8}, {10, 16}, {20, 32} }
    intervals = {
        {64, 70},
        {50, 55},
        {62, 65},
        {12, 50},
        {72, 300000},
    };
    printVector(combineIntervals(intervals));
    // -> { {12, 55}, {62, 70}, {72, 300000} }

    return 0;
}