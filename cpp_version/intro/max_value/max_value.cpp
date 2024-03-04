// Max Value
// Write a function, maxValue, that takes in array of numbers as an argument.
// The function should return the largest number in the array.

// Solve this without using any built-in array methods.

// You can assume that the array is non-empty.
#include <iostream>
#include <vector>
using namespace std;

float maxValue(std::vector<float> array) {
    float max = array[0];

    return max;
}

int main() {

    std::vector<float> array = {10, 5, 40, 40.3};
    cout << maxValue(array) << endl; // 40.3
    array.clear();
    array = {-5, -2, -1, -11};
    cout << maxValue(array) << endl; // -1
    array = {42};
    cout << maxValue(array) << endl; // 42
    array = {1000, 8};
    cout << maxValue(array) << endl; // 1000
    array = {1000, 8, 9000};
    cout << maxValue(array) << endl; // 9000
    array = {2, 5, 1, 1, 4};
    cout << maxValue(array) << endl; // 5
    return 0;
}