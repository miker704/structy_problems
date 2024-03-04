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

// most frequent char
// Write a function, mostFrequentChar, that takes in a string as an argument.
// The function should return the most frequent character of the string.
// If there are ties, return the character that appears earlier in the string.

// You can assume that the input string is non-empty.

char mostFrequentChar(std::string s) {
    // todo
    std::unordered_map<char, int> hash;
    
    char maxChar = '\0';

    return maxChar;
}

int main() {
    std::cout << mostFrequentChar("bookeeper") << std::endl;     // -> 'e'
    std::cout << mostFrequentChar("david") << std::endl;         // -> 'd'
    std::cout << mostFrequentChar("abby") << std::endl;          // -> 'b'
    std::cout << mostFrequentChar("mississippi") << std::endl;   // -> 'i'
    std::cout << mostFrequentChar("potato") << std::endl;        // -> 'o'
    std::cout << mostFrequentChar("eleventennine") << std::endl; // -> 'e'
    std::cout << mostFrequentChar("riverbed") << std::endl;      // -> 'r'
    return 0;
}