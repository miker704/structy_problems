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

// pair product
// Write a function, pairProduct, that takes in an array and a target product as arguments.
// The function should return an array containing a pair of indices whose elements multiply to the
//  given target. The indices returned must be unique.

// Be sure to return the indices, not the elements themselves.

// There is guaranteed to be one such pair whose product is the target.
std::array<int, 2> pairProduct(std::vector<int>, int);
void printArray(std::array<int, 2>);
std::array<int, 2> pairProduct(std::vector<int> numbers, int target) {
    // todo
    
    return std::array<int, 2>{INT_MIN, INT_MIN};
}
void printArray(std::array<int, 2> array) {
    for (int i = 0; i < 2; i++) {
        std::cout << array[i] << " , ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers{3, 2, 5, 4, 1};
    printArray(pairProduct(numbers, 8)); // -> [1, 3]
    numbers = {3, 2, 5, 4, 1};
    printArray(pairProduct(numbers, 10)); // -> [1, 2]
    numbers = {4, 7, 9, 2, 5, 1};
    printArray(pairProduct(numbers, 5)); // -> [4, 5]
    numbers = {4, 7, 9, 2, 5, 1};
    printArray(pairProduct(numbers, 35)); // -> [1, 4]
    numbers = {3, 2, 5, 4, 1};
    printArray(pairProduct(numbers, 10)); // -> [1, 2]
    numbers = {4, 6, 8, 2};
    printArray(pairProduct(numbers, 16)); // -> [2, 3]
    return 0;
}