#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// sum possible
// Write a function sumPossible that takes in an amount
//  and a list of positive numbers. The function should return a boolean
//  indicating whether or not it is possible to create the amount by summing
//   numbers of the list. You may reuse numbers of the list as many times as necessary.

// You may assume that the target amount is non-negative.

// brute force running at O(n^2) exponential time
// more specifically O(n^a) where n is the array length and a is the amount
//  branch ^ depth upon reaching a certain amount of 'a' as input the depth of
//  calls on the stack become extremely massive in addition to the length of the input array itself
//   causes the calculation to take minutes
//  at a time to complete reaching slower than calulating fibonacci of 46 using brute force method
//  combinations for an array of 2 elements for an amount of 100 can generate nonillion combinations

// # optimized version cuts of majority of the exponential growth of calls
// # O(a*n) where 'a' represents the amount to reach and 'n' is the length
// # meaning the 'a' is the depth and 'n' is the branches
// # but this time each level can only have a*n # of nodes max

bool sumPossible(int amount, std::vector<int> numbers, std::unordered_map<int, int> &u_map) {

    return false;
}

int main() {
    std::unordered_map<int, int> u_map;
    std::vector<int> numbers = {};

    cout << std::boolalpha << sumPossible(8, {5, 12, 4}, u_map) << endl; // true
    //std::boolalpha using this as this vscode cpp version 20 returns numeric true/false 
    // bool alpha prints the word version
    cout << sumPossible(15, {6, 2, 10, 19}, u_map) << endl;    // false
    cout << sumPossible(13, {6, 2, 1}, u_map) << endl;         // true
    cout << sumPossible(103, {6, 20, 1}, u_map) << endl;       // true
    cout << sumPossible(12, {}, u_map) << endl;                // false
    cout << sumPossible(12, {12}, u_map) << endl;              // true
    cout << sumPossible(0, {}, u_map) << endl;                 // true
    cout << sumPossible(271, {10, 8, 265, 24}, u_map) << endl; // false
    cout << sumPossible(2017, {4, 2, 10}, u_map) << endl;      // false
    cout << sumPossible(13, {3, 5}, u_map) << endl;            // true
    return 0;
}
