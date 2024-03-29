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

// parenthetical possibilities
// Write a function, parentheticalPossibilities, that takes in a string as an argument.
//  The function should return an array containing all of the strings that could be
//  generated by expanding all parentheses of the string into its possibilities.

// For example, the possibilities for 'x(mn)yz' are 'xmyz', 'xnyz'.

void printVector(std::vector<std::string>);
std::vector<std::string> parentheticalPossibilities(std::string);
std::vector<std::string> _parentheticalPossibilities(std::string, int);

std::tuple<std::string, int> getOptions(std::string, int);
std::vector<std::string> parentheticalPossibilities(std::string str) {
    // todo
    return _parentheticalPossibilities(str, 0);
}
std::vector<std::string> _parentheticalPossibilities(std::string str, int pos) {
    // todo
        return std::vector<std::string>{""};
}

std::tuple<std::string, int> getOptions(std::string str, int pos) {

        return std::tuple{std::string(1, str[pos]), pos + 1};
}

void printVector(std::vector<std::string> vec) {
    for (auto x : vec) {
        std::cout << x << " , ";
    }
    std::cout << std::endl;
}

int main() {

    printVector(parentheticalPossibilities("x(mn)yz")); // ->
    // [ "xmyz", "xnyz" ]
    printVector(parentheticalPossibilities("(qr)ab(stu)c")); // ->
    // [ "qabsc", "qabtc", "qabuc", "rabsc", "rabtc", "rabuc" ]
    printVector(parentheticalPossibilities("taco")); // ->
    // ["taco"]
    printVector(parentheticalPossibilities("")); // ->
    // [""]
    printVector(parentheticalPossibilities("(etc)(blvd)(cat)")); // ->
                                                                 // [
                                                                 //  "ebc", "eba", "ebt", "elc", "ela",
                                                                 //  "elt", "evc", "eva", "evt", "edc",
                                                                 //  "eda", "edt", "tbc", "tba", "tbt",
                                                                 //  "tlc", "tla", "tlt", "tvc", "tva",
                                                                 //  "tvt", "tdc", "tda", "tdt", "cbc",
                                                                 //  "cba", "cbt", "clc", "cla", "clt",
                                                                 //  "cvc", "cva", "cvt", "cdc", "cda",
                                                                 //  "cdt"
                                                                 // ]
    return 0;
}