/*
fib
Write a function fib that takes in a number argument, n, and
returns the n-th number of the Fibonacci sequence.
The 0-th number of the sequence is 0.
The 1-st number of the sequence is 1.
To generate further numbers of the sequence, calculate
the sum of previous two numbers.
Solve this recursively.

*/
#include <iostream>
#include <unordered_map>
using namespace std;
// brute force method 0(n^2) exponential time via branch ^ depth (number of return branches ^ n)_

// int fib(int num) {
//     if (num == 0) {
//         return 0;
//     }
//     if (num == 1) {
//         return 1;
//     }
//     return fib(num - 2) + fib(num - 1);
// }

//optimized method using memoization

int fib(int num, unordered_map<int, int> &u_map) {

    return u_map[num];
}

int main() {
    std::unordered_map<int,int>u_map;
    cout << fib(0,u_map) << endl;  // 0
    cout << fib(1,u_map) << endl;  // 1
    cout << fib(2,u_map) << endl;  // 1
    cout << fib(3,u_map) << endl;  // 2
    cout << fib(4,u_map) << endl;  // 3
    cout << fib(5,u_map) << endl;  // 5
    cout << fib(35,u_map) << endl; // 9227465
    cout << fib(46,u_map) << endl; // 1836311903
}