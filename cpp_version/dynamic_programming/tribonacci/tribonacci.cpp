// tribonacci
// Write a function tribonacci that takes in a number argument, n,
// and returns the n-th number of the Tribonacci sequence.

// The 0-th and 1-st numbers of the sequence are both 0.

// The 2-nd number of the sequence is 1.

// To generate further numbers of the sequence, calculate the sum of previous three numbers.

// Solve this recursively.
#include <iostream>
#include <unordered_map>
using namespace std;

int tribonacci(int n, std::unordered_map<int, int> &u_map) {

    return u_map[n];
}

int main() {
    std::unordered_map<int, int> u_map;
    cout << tribonacci(0, u_map) << endl;  // 0
    cout << tribonacci(1, u_map) << endl;  // 0
    cout << tribonacci(2, u_map) << endl;  // 1
    cout << tribonacci(5, u_map) << endl;  // 4
    cout << tribonacci(7, u_map) << endl;  // 13
    cout << tribonacci(14, u_map) << endl; // 927
    cout << tribonacci(20, u_map) << endl; // 35890
    cout << tribonacci(37, u_map) << endl; // 1132436852
    return 0;
}