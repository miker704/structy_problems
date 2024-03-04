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

// max increasing subseq
// Write a function, maxIncreasingSubseq,
// that takes in a vector of numbers as an argument. The function should
// return the length of the longest subsequence of strictly increasing numbers.

// A subsequence of a vector can be created by deleting any elements of the vector,
// while maintaining the relative order of elements.
int maxIncreasingSubseq(std::vector<int>);
int _maxIncreasingSubseq(std::vector<int>, std::unordered_map<std::string, int> &, int, int);

int maxIncreasingSubseq(std::vector<int> numbers) {
    // todo
    std::unordered_map<std::string, int> hash;
    return _maxIncreasingSubseq(numbers, hash, 0, -1);
}
int _maxIncreasingSubseq(std::vector<int> numbers, std::unordered_map<std::string, int> &hash, int i, int prev) {

        return 0;

}

int main() {

    std::vector<int> numbers{4, 18, 20, 10, 12, 15, 19};
    std::cout << maxIncreasingSubseq(numbers) << std::endl; // -> 5
    numbers = {12, 9, 2, 5, 4, 32, 90, 20};
    std::cout << maxIncreasingSubseq(numbers) << std::endl; // -> 4
    numbers = {42, 50, 51, 60, 55, 70, 4, 5, 70};
    std::cout << maxIncreasingSubseq(numbers) << std::endl; // -> 5
    numbers = {7, 14, 10, 12};
    std::cout << maxIncreasingSubseq(numbers) << std::endl; // -> 3
    numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21};
    std::cout << maxIncreasingSubseq(numbers) << std::endl; // -> 21
    numbers = {
        1,
        2,
        3,
        4,
        5,
        12,
        6,
        30,
        7,
        8,
        9,
        10,
        11,
        12,
        13,
        10,
        18,
        14,
        15,
        16,
        17,
        18,
        19,
        20,
        21,
        100,
        104,
    };
    std::cout << maxIncreasingSubseq(numbers) << std::endl; // -> 23
    numbers = {
        1, 2, 300, 3, 4, 305, 5, 12, 6, 30, 7, 8, 9, 10, 10, 10, 15, 11, 12, 13, 10, 18, 14, 15, 16,
        17, 18, 19, 20, 21, 100, 101, 102, 103, 104, 105};
    std::cout << maxIncreasingSubseq(numbers) << std::endl; // -> 27

    return 0;
}