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

// befitting brackets
// Write a function, befittingBrackets, that takes in a string as an argument.
// The function should return a boolean indicating whether or not the string
// contains correctly matched brackets.

// You may assume the string contains only characters: ( ) [ ] { }

bool befittingBrackets(std::string str) {
    // todo
    

    std::stack<char> stack;


    return stack.empty() ? true : false;
}

int main() {

    std::cout << std::boolalpha << befittingBrackets("(){}[](())") << std::endl; // -> 1 (true)
    std::cout << befittingBrackets("({[]})") << std::endl;                       // -> 1 (true)
    std::cout << befittingBrackets("[][}") << std::endl;                         // -> 0 (false)
    std::cout << befittingBrackets("{[]}({}") << std::endl;                      // -> 0 (false)
    std::cout << befittingBrackets("[]{}(}[]") << std::endl;                     // -> 0 (false)
    std::cout << befittingBrackets("[]{}()[]") << std::endl;                     // -> 1 (true)
    std::cout << befittingBrackets("]{}") << std::endl;                          // -> 0 (false)
    std::cout << befittingBrackets("") << std::endl;                             // -> 1 (true)
    std::cout << befittingBrackets("{[(}])") << std::endl;                       // -> 0 (false)
    return 0;
}