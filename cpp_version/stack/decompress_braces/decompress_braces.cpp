#include <algorithm>
#include <cmath>
#include <ctype.h>
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
// decompress braces
// Write a function, decompressBraces, that takes in a compressed string as an argument.
//  The function should return the string decompressed.

// The compression format of the input string is 'n{subString}', where the subString within
// braces should be repeated n times.

// You may assume that every number n is guaranteed to be an integer between 1 through 9.

// You may assume that the input is valid and the decompressed string
//  will only contain alphabetic characters.

std::string decompressBraces(std::string str) {
    std::string result = "";


    return result;
}

int main() {

    std::cout << decompressBraces("2{q}3{tu}v") << std::endl;
    // -> qqtututuv
    std::cout << decompressBraces("ch3{ao}") << std::endl;
    // -> chaoaoao
    std::cout << decompressBraces("2{y3{o}}s") << std::endl;
    // -> yoooyooos
    std::cout << decompressBraces("z3{a2{xy}b}") << std::endl;
    // -> zaxyxybaxyxybaxyxyb
    std::cout << decompressBraces("2{3{r4{e}r}io}") << std::endl;
    // -> reeeerreeeerreeeerioreeeerreeeerreeeerio
    std::cout << decompressBraces("go3{spinn2{ing}s}") << std::endl;
    // -> gospinningingsspinningingsspinningings
    std::cout << decompressBraces("2{l2{if}azu}l") << std::endl;
    // -> lififazulififazul
    std::cout << decompressBraces("3{al4{ec}2{icia}}") << std::endl;
    // -> alececececiciaiciaalececececiciaiciaalececececiciaicia

    return 0;
}