/**

min change
Write a function minChange that takes in an amount and a vector of coins.
The function should return the minimum number of coins required to create
the amount. You may use each coin as many times as necessary.
If it is not possible to create the amount, then return -1.

+*
*/

#include <algorithm>
#include <iostream>
#include <limits.h>
#include <math.h>
#include <unordered_map>
#include <vector>

// predefine these functions for later
int minChanger(int amount, std::vector<int> coins);
int minChange(int, std::vector<int>);
int _minChange(int, std::vector<int>, std::unordered_map<int, int> &);

// method using recursion without memoization runs at around 0(coins_array_length ^amount) exponential runtime
// however even though we have logic for cutting down the number of branches by ignoring functions calls for numbers greater
// than the current amount we still suffer from the problem 'overlapping subproblems property' and it occurs enough to keep
// our performance capped at exponential even with our condition to avoid computing amount - coin where coin is > amount
int minChanger(int amount, std::vector<int> coins) {
        return 0;

}

// optimized recursive method using memoizartion with a hash table
// it is nearly identically to the original method except a hash table
// is used to eliminate the overlapping subproblems property from occuring
// making the algorithim run around O(coins.length * amount)

int minChange(int amount, std::vector<int> coins) {
    std::unordered_map<int, int> u_map;
    int result = _minChange(amount, coins, u_map);
    return result;
}

int _minChange(int amount, std::vector<int> coins, std::unordered_map<int, int> &u_map) {

        return 0;

}

int main() {

    std::unordered_map<int, int> u_map;

    // std::cout << minChanger(4, {1, 2, 3}) << std::endl;          // -> 2, because 4+4 is the minimum coins possible
    // std::cout << minChanger(8, {1, 5, 4, 12}) << std::endl;      // -> 2, because 4+4 is the minimum coins possible
    // std::cout << minChanger(13, {1, 9, 5, 14, 30}) << std::endl; // -> 5
    // std::cout << minChanger(23, {2, 5, 7}) << std::endl;         // -> 4
    // std::cout << minChanger(102, {1, 5, 10, 25}) << std::endl;   // -> 6
    // std::cout << minChanger(200, {1, 5, 10, 25}) << std::endl;   // -> 8
    // std::cout << minChanger(2017, {4, 2, 10}) << std::endl;      // -> -1
    // std::cout << minChanger(271, {10, 8, 265, 24}) << std::endl; // -> -1
    // std::cout << minChanger(0, {4, 2, 10}) << std::endl;         // -> 0
    // std::cout << minChanger(0, {}) << std::endl;                 // -> 0

    std::cout << minChange(4, {1, 2, 3}) << std::endl;          // -> 2, because 4+4 is the minimum coins possible
    std::cout << minChange(8, {1, 5, 4, 12}) << std::endl;      // -> 2, because 4+4 is the minimum coins possible
    std::cout << minChange(13, {1, 9, 5, 14, 30}) << std::endl; // -> 5
    std::cout << minChange(23, {2, 5, 7}) << std::endl;         // -> 4
    std::cout << minChange(102, {1, 5, 10, 25}) << std::endl;   // -> 6
    std::cout << minChange(200, {1, 5, 10, 25}) << std::endl;   // -> 8
    std::cout << minChange(2017, {4, 2, 10}) << std::endl;      // -> -1
    std::cout << minChange(271, {10, 8, 265, 24}) << std::endl; // -> -1
    std::cout << minChange(0, {4, 2, 10}) << std::endl;         // -> 0
    std::cout << minChange(0, {}) << std::endl;                 // -> 0

    return 0;
}
