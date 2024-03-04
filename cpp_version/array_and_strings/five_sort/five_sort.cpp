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

// five sort
// Write a function, five_sort, that takes in a list of numbers as an argument.
// The function should rearrange elements of the list such that all 5s appear at the end.
// Your function should perform this operation in-place by mutating the original list.
//  The function should return the list.

// Elements that are not 5 can appear in any order in the output,
//  as long as all 5s are at the end of the list.
// time O(n) using one loop  space is O(1) as we are using input array so no extra space needed

std::vector<int> &fiveSort(std::vector<int> &);
void printVector(std::vector<int>);
std::vector<int> &fiveSort(std::vector<int> &numbers) {
    // todo

    return numbers;
}
void printVector(std::vector<int> vec) {
    for (auto x : vec) {
        std::cout << x << " , ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers{12, 5, 1, 5, 12, 7};
    printVector(fiveSort(numbers));
    // -> [12, 7, 1, 12, 5, 5]
    numbers = {5, 2, 5, 6, 5, 1, 10, 2, 5, 5};
    printVector(fiveSort(numbers));
    // -> [2, 2, 10, 6, 1, 5, 5, 5, 5, 5]
    numbers = {5, 5, 5, 1, 1, 1, 4};
    printVector(fiveSort(numbers));
    // -> [4, 1, 1, 1, 5, 5, 5]
    numbers = {5, 5, 6, 5, 5, 5, 5};
    printVector(fiveSort(numbers));
    // -> [6, 5, 5, 5, 5, 5, 5]
    numbers = {5, 1, 2, 5, 5, 3, 2, 5, 1, 5, 5, 5, 4, 5};
    printVector(fiveSort(numbers));
    // -> [4, 1, 2, 1, 2, 3, 5, 5, 5, 5, 5, 5, 5, 5]
    std::vector<int> fives(20000, 5);
    std::vector<int> fours(20000, 4);
    std::vector<int> nums;
    nums.reserve(fives.size() + fours.size());
    nums.insert(nums.end(), fives.begin(), fives.end());
    nums.insert(nums.end(), fours.begin(), fours.end());
    printVector(fiveSort(nums));
    // twenty-thousand 4s followed by twenty-thousand 5s
    // -> [4, 4, 4, 4, ..., 5, 5, 5, 5]
    return 0;
}