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

// paired parentheses
// Write a function, pairedParentheses, that takes in a string as an argument.
// The function should return a boolean indicating whether or not the string has well-formed parentheses.

// You may assume the string contains only alphabetic characters, '(', or ')'.

// using stack time complexity = o(n) and space o(n)
//  bool pairedParentheses(std::string str) {
//      // todo
//      if (str.length() == 0) {
//          return true;
//      }
//      std::stack<char> stack;
//      int top = -1;
//      for (char s : str) {
//          if (s == '(') {
//              stack.push(s);
//              top++;
//          }
//          if(top == -1){
//              return false;
//          }
//          if (s == ')') {
//              if (stack.top() == '(') {
//                  stack.pop();
//                  top--;
//              }
//          }
//      }

//     return stack.empty() ? true : false;
//     // return top == -1 ? true : false;
// }
// not using stack time complexity = o(n) and space o(1)

bool pairedParentheses(std::string str) {
    // todo

    int top = -1;


    return top == -1 ? true : false;
}

int main() {

    std::cout << std::boolalpha << pairedParentheses("(david)((abby))") << std::endl; // -> 1 (true)
    std::cout << pairedParentheses("()rose(jeff") << std::endl;                       // -> 0 (false)
    std::cout << pairedParentheses(")(") << std::endl;                                // -> 0 (false)
    std::cout << pairedParentheses("()") << std::endl;                                // -> 1 (true)
    std::cout << pairedParentheses("(((potato())))") << std::endl;                    // -> 1 (true)
    std::cout << pairedParentheses("(())(water)()") << std::endl;                     // -> 1 (true)
    std::cout << pairedParentheses("(())(water()()") << std::endl;                    // -> 0 (false)
    std::cout << pairedParentheses("") << std::endl;                                  // -> 1 (true)
    std::cout << pairedParentheses("))()") << std::endl;                              // -> 0 (false)

    return 0;
}