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

// token transform
// Write a function, tokenTransform, that takes in an
// object of tokens and a string. In the object, the replacement values
// for a token may reference other tokens. The function should return a new
// string where tokens are replaced with their fully evaluated string values.

// Tokens are enclosed in a pair of '$'.

// You may assume that there are no circular token dependencies.

std::string tokenTransform(std::string s, std::unordered_map<std::string, std::string> tokens) {
    // todo
    std::string result = "";



    return result;
}

int main() {

    std::unordered_map<std::string, std::string> tokens{
        {"$LOCATION$", "$ANIMAL$ park"},
        {"$ANIMAL$", "dog"},
    };
    std::cout << tokenTransform("Walk the $ANIMAL$ in the $LOCATION$!", tokens) << std::endl;
    // -> "Walk the dog in the dog park!"
    tokens = {
        {"$ADJECTIVE_1$", "quick"},
        {"$ADJECTIVE_2$", "eager"},
        {"$ADVERBS$", "$ADJECTIVE_1$ly and $ADJECTIVE_2$ly"},
        {"$VERB$", "hopped $DIRECTION$"},
        {"$DIRECTION$", "North"},
    };
    std::cout << tokenTransform("the $ADJECTIVE_1$ fox $ADVERBS$ $VERB$ward", tokens) << std::endl;
    // -> "the quick fox quickly and eagerly hopped Northward"
    tokens = {
        {"$B$", "epicly $C$"},
        {"$A$", "pretty $B$ problem $D$"},
        {"$D$", "we have"},
        {"$C$", "clever"},
    };
    std::cout << tokenTransform("What a $A$ here!", tokens) << std::endl;
    // -> "What a pretty epicly clever problem we have here!"
    tokens = {
        {"$1$", "a$2$"},
        {"$2$", "b$3$"},
        {"$3$", "c$4$"},
        {"$4$", "d$5$"},
        {"$5$", "e$6$"},
        {"$6$", "f!"},
    };
    std::cout << tokenTransform("$1$ $1$ $1$ $1$ $1$ $1$ $4$ $4$", tokens) << std::endl;
    // -> "abcdef! abcdef! abcdef! abcdef! abcdef! abcdef! def! def!"
    tokens = {
        {"$0$", "$1$$1$$1$$1$$1$$1$$1$$1$$1$$1$$1$$1$"},
        {"$1$", "$2$$2$$2$$2$$2$$2$$2$$2$$2$"},
        {"$2$", "$3$$3$$3$$3$$3$$3$$3$"},
        {"$3$", "$4$$4$$4$$4$$4$$4$"},
        {"$4$", "$5$$5$$5$$5$$5$"},
        {"$5$", "$6$$6$$6$$6$"},
        {"$6$", "$7$$7$$7$"},
        {"$7$", "$8$$8$"},
        {"$8$", ""},
    };
    std::cout << tokenTransform("z$0$z$0$z$0$z$0$z$0$z$0$z", tokens) << std::endl;
    // -> "zzzzzzz"

    return 0;
}