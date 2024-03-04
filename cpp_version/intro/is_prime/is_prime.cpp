#include <iostream>
using namespace std;

// is prime
// Write a function, isPrime, that takes in a number as an argument. The function should
// return a boolean indicating whether or not the given number is prime.

// A prime number is a number that is only divisible by two distinct numbers: 1 and itself.

// For example, 7 is a prime because it is only divisible by 1 and 7. For example, 6 is not
// a prime because it is divisible by 1, 2, 3, and 6.

// You can assume that the input number is a positive integer.

bool isPrime(int n) {

    return true;
}

int main() {

    cout << std::boolalpha << isPrime(2) << endl; // true
    cout << isPrime(3) << endl;                   // true
    cout << isPrime(4) << endl;                   // false
    cout << isPrime(5) << endl;                   // true
    cout << isPrime(6) << endl;                   // false
    cout << isPrime(7) << endl;                   // true
    cout << isPrime(8) << endl;                   // false
    cout << isPrime(25) << endl;                  // false
    cout << isPrime(31) << endl;                  // true
    cout << isPrime(2017) << endl;                // true
    cout << isPrime(2048) << endl;                // false
    cout << isPrime(1) << endl;                   // false
    cout << isPrime(713) << endl;                 // false

    return 0;
}
