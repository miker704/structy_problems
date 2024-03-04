#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

// counting change

// Write a function, countingChange, that takes in an amount and a vector of coins. The function should
// return the number of different ways it is possible to make change for the given amount using the coins.

// You may reuse a coin as many times as necessary.

// For example,

// countingChange(4, std::vector<int> {1,2,3}) -> 4

// There are four different ways to make an amount of 4:

// 1. 1 + 1 + 1 + 1
// 2. 1 + 1 + 2
// 3. 1 + 3
// 4. 2 + 2
/*
 * normal recusion time complexity is O(2^n) exponential where branch^depth
 * where branch is the number of elements in the coins array and depth is the amount to achieve
 * O(coinslength ^amountofChange)
 * space complexity is O(coinslength *amountofChange) where n is the amountOfChange #`s deep in the stack tree
 *
 * optimized method using recusion and memoization will
 * be time complexity of O(amount*coins.length)
 *  is space complexity is O(coinslength *amountofChange)
 *
 */

// normal recusion method
int countingChange(int, std::vector<int>);
int _countingChange(int, std::vector<int>, int, std::unordered_map<std::string, int> &);

// int countingChange(int amount, std::vector<int> coins, int idx = 0) {
//     if (amount == 0) {
//         return 1;
//     }
//     if (amount < 0) {
//         return 0;
//     }
//     if (idx >= coins.size()) {
//         return 0;
//     }

//     int exclude = countingChange(amount, coins, idx + 1);
//     int include = countingChange(amount - coins[idx], coins, idx);
//     return exclude + include;
// }

int countingChange(int amount, std::vector<int> coins) {
    std::unordered_map<std::string, int> u_map;
    return _countingChange(amount, coins, 0, u_map);
}

int _countingChange(int amount, std::vector<int> coins, int idx, std::unordered_map<std::string, int> &u_map) {
return 0;
}

int main() {

    std::cout << countingChange(4, std::vector<int>{1, 2, 3}) << std::endl;                     // -> 4
    std::cout << countingChange(8, std::vector<int>{1, 2, 3}) << std::endl;                     // -> 10
    std::cout << countingChange(24, std::vector<int>{5, 7, 3}) << std::endl;                    // -> 5
    std::cout << countingChange(13, std::vector<int>{2, 6, 12, 10}) << std::endl;               // -> 0
    std::cout << countingChange(512, std::vector<int>{1, 5, 10, 25}) << std::endl;              // -> 20119
    std::cout << countingChange(1000, std::vector<int>{1, 5, 10, 25}) << std::endl;             // -> 142511
    std::cout << countingChange(240, std::vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9}) << std::endl; // -> 1525987916

    return 0;
}