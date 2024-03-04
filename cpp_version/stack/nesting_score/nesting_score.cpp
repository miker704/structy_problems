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

// nesting score
// Write a function, nestingScore, that takes in a string of brackets as
// an argument. The function should return the score of the string according
// to the following rules:

// [] is worth 1 point
// XY is worth m + n points where X, Y are substrings of well-formed brackets and
// m, n are their respective scores
// [S] is worth 2 * k points where S is a substring of well-formed brackets and k
//  is the score of that substring
// You may assume that the input only contains well-formed square brackets.
void printStack(std::stack<char>);
int nestingScore(std::string);
void printVector(std::vector<int>);

// int nestingScore(std::string str) {

//     std::stack<char> stack;
//     int score = 0;
//     int multiplier = 1;
//     for (char brace : str) {
//         if (brace == ']') {
//             if (stack.top() == '[') {
//                 // stack.pop();
//                 score++;
//                 std::cout << "score = " << score << std::endl;

//             } else {
//                 multiplier++;
//                 stack.push(brace);
//                 std::cout << "multi = " << multiplier << std::endl;
//             }
//         }
//         if (brace == '[') {
//             stack.push(brace);
//         }
//     }
//     printStack(stack);
//     std::cout << "score * multiplier = " << score + 2 * multiplier << std::endl;

//     return score;
// }

// int nestingScore(std::string str) {

//     std::vector<std::string> stack;
//     int score = 0;
//     int multiplier = 1;
//     for (char brace : str) {

//         std::string buildBracePair = "";
//         if (brace == '[') {
//             stack.push_back(std::string(1, brace));
//             multiplier++;
//         } else if (brace == ']' && stack[stack.size() - 1] == "[") {
//             buildBracePair = stack[stack.size() - 1];
//             stack.pop_back();
//             buildBracePair += std::string(1, brace);
//             stack.push_back(buildBracePair);
//             score++;
//         } else {
//             stack.push_back(std::string(1, brace));
//         }
//     }
//     printVector(stack);
//     std::cout << "score * multiplier = " << score + 2 * multiplier << std::endl;

//     score = 0;
//     multiplier = 0;
//     for(std::string bracePair: stack){
//         if(bracePair == "[]"){

//         }
//     }

//     return score;
// }

int nestingScore(std::string str) {

    std::vector<int> stack;


    return stack[0];
}

void printStack(std::stack<char> stack) {
    std::stack<char> temp = stack;
    std::cout << "Stack = " << std::endl;

    while (!temp.empty()) {
        char s = temp.top();
        std::cout << "_____" << std::endl;
        std::cout << "  " << s << "  " << std::endl;
        temp.pop();
    }

    std::cout << "_____" << std::endl;
}

void printVector(std::vector<int> vec) {
    for (auto x : vec) {
        std::cout << x << " , ";
    }
    std::cout << std::endl;
}

int main() {

    std::cout << nestingScore("[]") << std::endl;                 // -> 1
    std::cout << nestingScore("[][][]") << std::endl;             // -> 3
    std::cout << nestingScore("[[]]") << std::endl;               // -> 2
    std::cout << nestingScore("[[][]]") << std::endl;             // -> 4
    std::cout << nestingScore("[[][][]]") << std::endl;           // -> 6
    std::cout << nestingScore("[[][]][]") << std::endl;           // -> 5
    std::cout << nestingScore("[][[][]][[]]") << std::endl;       // -> 7
    std::cout << nestingScore("[[[[[[[][]]]]]]][]") << std::endl; // -> 129

    return 0;
}