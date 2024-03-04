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

// binary search
// Write a function, binarySearch, that takes in a sorted array of numbers and a target.
// The function should return the index where the target can be found within the array.
// If the target is not found in the array, then return -1.

// You may assume that the input array contains unique numbers sorted in increasing order.

// Your function must implement the binary search algorithm.
// https://en.wikipedia.org/wiki/Binary_search_algorithm
int rbs(std::vector<int>, int);
int _rbs(std::vector<int>, int, int, int);
int binarySearch(std::vector<int>, int);
int recursiveBinarySearch(std::vector<int>, int);

int binarySearch(std::vector<int> numbers, int target) {
    // TODO

    return -1;
}

// recusive binary search old method
int rbs(std::vector<int> numbers, int target) {
    if (numbers.size() == 0) {
        return -1;
    }
    return _rbs(numbers, target, 0, numbers.size() - 1);
}

int _rbs(std::vector<int> numbers, int target, int first, int last) {



    return -1;
}

// recursive binary search 2 params
int recursiveBinarySearch(std::vector<int> numbers, int target) {
    

    return -1;
}

int main() {
    std::cout << binarySearch(std::vector<int>{0, 1, 2, 3, 4, 5, 6, 7, 8}, 6) << std::endl;        // -> 6
    std::cout << binarySearch(std::vector<int>{0, 6, 8, 12, 16, 19, 20, 24, 28}, 27) << std::endl; // -> -1
    std::cout << binarySearch(std::vector<int>{0, 6, 8, 12, 16, 19, 20, 28}, 8) << std::endl;      // -> 2
    std::cout << binarySearch(std::vector<int>{0, 6, 8, 12, 16, 19, 20, 24, 28}, 28) << std::endl; // -> 8
    std::cout << binarySearch(std::vector<int>{7, 9}, 7) << std::endl;                             // -> 0
    std::cout << binarySearch(std::vector<int>{7, 9}, 9) << std::endl;                             // -> 1
    std::cout << binarySearch(std::vector<int>{7, 9}, 12) << std::endl;                            // -> -1
    std::cout << binarySearch(std::vector<int>{7}, 7) << std::endl;                                // -> 0
    std::cout << binarySearch(std::vector<int>{}, 7) << std::endl;                                 // -> -1

    std::cout << "=============== RBS ====================" << std::endl;
    std::cout << rbs(std::vector<int>{0, 1, 2, 3, 4, 5, 6, 7, 8}, 6) << std::endl;        // -> 6
    std::cout << rbs(std::vector<int>{0, 6, 8, 12, 16, 19, 20, 24, 28}, 27) << std::endl; // -> -1
    std::cout << rbs(std::vector<int>{0, 6, 8, 12, 16, 19, 20, 28}, 8) << std::endl;      // -> 2
    std::cout << rbs(std::vector<int>{0, 6, 8, 12, 16, 19, 20, 24, 28}, 28) << std::endl; // -> 8
    std::cout << rbs(std::vector<int>{7, 9}, 7) << std::endl;                             // -> 0
    std::cout << rbs(std::vector<int>{7, 9}, 9) << std::endl;                             // -> 1
    std::cout << rbs(std::vector<int>{7, 9}, 12) << std::endl;                            // -> -1
    std::cout << rbs(std::vector<int>{7}, 7) << std::endl;                                // -> 0
    std::cout << rbs(std::vector<int>{}, 7) << std::endl;                                 // -> -1

    std::cout << "=============== RECURSIVE_BINARY_SEARCH ====================" << std::endl;

    std::cout << recursiveBinarySearch(std::vector<int>{0, 1, 2, 3, 4, 5, 6, 7, 8}, 6) << std::endl;        // -> 6
    std::cout << recursiveBinarySearch(std::vector<int>{0, 6, 8, 12, 16, 19, 20, 24, 28}, 27) << std::endl; // -> -1
    std::cout << recursiveBinarySearch(std::vector<int>{0, 6, 8, 12, 16, 19, 20, 28}, 8) << std::endl;      // -> 2
    std::cout << recursiveBinarySearch(std::vector<int>{0, 6, 8, 12, 16, 19, 20, 24, 28}, 28) << std::endl; // -> 8
    std::cout << recursiveBinarySearch(std::vector<int>{7, 9}, 7) << std::endl;                             // -> 0
    std::cout << recursiveBinarySearch(std::vector<int>{7, 9}, 9) << std::endl;                             // -> 1
    std::cout << recursiveBinarySearch(std::vector<int>{7, 9}, 12) << std::endl;                            // -> -1
    std::cout << recursiveBinarySearch(std::vector<int>{7}, 7) << std::endl;                                // -> 0
    std::cout << recursiveBinarySearch(std::vector<int>{}, 7) << std::endl;                                 // -> -1

    return 0;
}