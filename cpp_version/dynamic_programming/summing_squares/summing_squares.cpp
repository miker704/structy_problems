// summing squares
// Write a function, summingSquares, that takes a target number as
// an argument. The function should return the minimum number of perfect squares
// that sum to the target. A perfect square is a number of the form (i*i) where i >= 1.

// For example: 1, 4, 9, 16 are perfect squares, but 8 is not perfect square.

// Given 12:

// summingSquares(12) -> 3

// The minimum squares required for 12 is three, by doing 4 + 4 + 4.

// Another way to make 12 is 9 + 1 + 1 + 1, but that requires four perfect squares.
#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int summingSquares(int n);
int _summingSquares(int n, std::unordered_map<int, int> &);

// normal recursion brute force method time complexity is O(sqrt(n)^n) space O(n)
// int summingSquares(int n) {
//     if (n == 0) {
//         return 0;
//     }
//     int min = INT32_MAX;
//     // int min = 0;
//     for (int i = 1; i <= std::sqrt(n); i++) {
//         int sq = i * i;
//         int sub = 1 + summingSquares(n - sq);
//         // if (min == 0 || min > sub) {
//         //     min = sub;
//         // }
//         min = std::min(sub, min);
//     }
//     return min;
// }
// optimized recursion with memoization method time complexity is O(sqrt(n)*n) space O(n)

int summingSquares(int n) {
    std::unordered_map<int, int> u_map;
    return _summingSquares(n, u_map);
}

int _summingSquares(int n, std::unordered_map<int, int> &u_map) {
    int min = INT32_MAX;

    return min;
}

int main() {

    std::cout << summingSquares(8) << std::endl;  // -> 2
    std::cout << summingSquares(9) << std::endl;  // -> 1
    std::cout << summingSquares(12) << std::endl; // -> 3
    std::cout << summingSquares(1) << std::endl;  // -> 1
    std::cout << summingSquares(31) << std::endl; // -> 4
    std::cout << summingSquares(50) << std::endl; // -> 2
    std::cout << summingSquares(68) << std::endl; // -> 2
    std::cout << summingSquares(87) << std::endl; // -> 4
}
