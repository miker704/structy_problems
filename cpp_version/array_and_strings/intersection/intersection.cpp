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

// intersection
//     Write a function,
//     intersection, that takes in two vectors, a, b, as arguments.
//     The function should return a new vector containing elements that are in both of the two vectors.

//     You may assume that each input vector does not contain duplicate elements.
std::vector<int> intersection(std::vector<int>, std::vector<int>);
void printVector(std::vector<int>);
std::vector<int> intersection(std::vector<int> a, std::vector<int> b) {
    // todo
    std::vector<int> result = {};
    
    return result;
}

void printVector(std::vector<int> vec) {
    for (auto x : vec) {
        std::cout << x << " , ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> a{4, 2, 1, 6};
    std::vector<int> b{3, 6, 9, 2, 10};
    printVector(intersection(a, b)); // -> [2,6]
    a = {2, 4, 6};
    b = {4, 2};
    printVector(intersection(a, b)); // -> [2,4]
    a = {4, 2, 1};
    b = {1, 2, 4, 6};
    printVector(intersection(a, b)); // -> [1,2,4]
    a = {0, 1, 2};
    b = {10, 11};
    printVector(intersection(a, b)); // -> []
    a = {};
    b = {};
    for (int i = 0; i < 32000; i += 1) {
        a.push_back(i);
        b.push_back(i);
    }
    printVector(intersection(a, b)); // -> [0,1,2,3,..., 31999]
    return 0;
}