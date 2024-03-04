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

// pair sum
// Write a function, pairSum, that takes in a vector of numbers and a target sum as arguments.
// The function should return a std::array containing a pair of indices whose elements
// sum to the given target. The indices returned must be unique.

// Be sure to return the indices, not the elements themselves.

// There is guaranteed to be one such pair that sums to the target.
std::array<int, 2> pairSum(std::vector<int>, int);
void printArray(std::array<int, 2>);
// quadratic time due to nested loop
//  std::array<int, 2> pairSum(std::vector<int> numbers, int target) {
//// todo
//     std::array<int, 2> array;
//     int i = 0;
//     int j = 0;
//     while (j < numbers.size()) {
//         int curr = numbers[j];
//         for (int x = j+1; x < numbers.size(); x++) {
//             if(curr + numbers[x] == target){
//                 array[0]=j;
//                 array[1]=x;
//                 return array;
//             }
//         }
//         j++;
//     }

//     return array;
// }
// optimized
std::array<int, 2> pairSum(std::vector<int> numbers, int target) {
    // todo
    std::array<int, 2> array;
    
    return array;
}

void printArray(std::array<int, 2> array) {
    for (int i = 0; i < 2; i++) {
        std::cout << array[i] << " , ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers{3, 2, 5, 4, 1};
    printArray(pairSum(numbers, 8)); // -> [0, 2]
    numbers = {4, 7, 9, 2, 5, 1};
    printArray(pairSum(numbers, 5)); // -> [0, 5]
    numbers = {4, 7, 9, 2, 5, 1};
    printArray(pairSum(numbers, 3)); // -> [3, 5]
    numbers = {1, 6, 7, 2};
    printArray(pairSum(numbers, 13)); // -> [1, 2]
    numbers = {9, 9};
    printArray(pairSum(numbers, 18)); // -> [0, 1]
    numbers = {6, 4, 2, 8};
    printArray(pairSum(numbers, 12)); // -> [1, 3]
    return 0;
}