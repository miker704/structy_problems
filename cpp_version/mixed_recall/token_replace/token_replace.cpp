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

// token replace
// Write a function, tokenReplace, that takes in an unordered_map of tokens
//  and a string. The function should return a new string where tokens are replaced.

// Tokens are enclosed in a pair of "$". You can assume that the input string
// is properly formatted. Tokens should be replaced from left to right in the string (see test_05).

std::string tokenReplace(std::string s, std::unordered_map<std::string, std::string> tokens) {
    // todo
    std::string result;

    return result;
}

int main() {
    std::unordered_map<std::string, std::string> tokens{
        {"$LOCATION$", "park"},
        {"$ANIMAL$", "dog"}};
    std::cout << tokenReplace("Walk the $ANIMAL$ in the $LOCATION$!", tokens) << std::endl;
    // -> "Walk the dog in the park!"
    tokens = {
        {"$ADJECTIVE$", "quick"},
        {"$VERB$", "hopped"},
        {"$DIRECTION$", "North"}};
    std::cout << tokenReplace("the $ADJECTIVE$ fox $VERB$ $ADJECTIVE$ly $DIRECTION$ward", tokens) << std::endl;
    // -> "the quick fox hopped quickly Northward"
    tokens = {
        {"$greeting$", "hey programmer"}};
    std::cout << tokenReplace("his greeting is always $greeting$.", tokens) << std::endl;
    // -> "his greeting is always hey programmer."
    tokens = {
        {"$A$", "lions"},
        {"$B$", "tigers"},
        {"$C$", "bears"}};
    std::cout << tokenReplace("$A$$B$$C$, oh my.", tokens) << std::endl;
    // -> "lionstigersbears, oh my."
    tokens = {
        {"$A$", "lions"},
        {"$B$", "tigers"},
        {"$C$", "bears"}};
    std::cout << tokenReplace("$B$", tokens) << std::endl;
    // -> "tigers"
    tokens = {
        {"$second$", "beta"},
        {"$first$", "alpha"},
        {"$third$", "gamma"}};
    std::cout << tokenReplace("$first$second$third$", tokens) << std::endl;
    // -> "alphasecondgamma"

    return 0;
}