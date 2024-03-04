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

// can color
// Write a function, can_color, that takes in a dictionary representing the adjacency
// list of an undirected graph. The function should return a boolean indicating whether
// or not it is possible to color nodes of the graph using two colors in such a way
// that adjacent nodes are always different colors.

// For example, given this graph:

// x-y-z

// It is possible to color the nodes by using red for x and z,
// then use blue for y. So the answer is True.

// For example, given this graph:

//     q
//    / \
//   s - r

// It is not possible to color the nodes without making two
// adjacent nodes the same color. So the answer is False.
bool canColor(std::unordered_map<std::string, std::vector<std::string>>);
bool parsePath(std::unordered_map<std::string, std::vector<std::string>>, std::unordered_map<std::string, bool> &, std::string, bool);

bool canColor(std::unordered_map<std::string, std::vector<std::string>> graph) {
    // TODO


    return true;
}

bool parsePath(std::unordered_map<std::string, std::vector<std::string>> graph, std::unordered_map<std::string, bool> &colorMapping, std::string node, bool currColor) {
    // TODO


    return true;
}

int main() {

    std::cout << std::boolalpha << canColor(std::unordered_map<std::string, std::vector<std::string>>{{"x", {"y"}}, {"y", {"x", "z"}}, {"z", {"y"}}}) << std::endl; // -> 1 (true)

    std::cout << canColor({{"q", {"r", "s"}},
                           {"r", {"q", "s"}},
                           {"s", {"r", "q"}}})
              << std::endl; // -> 0 (false)
    std::cout << canColor({{"a", {"b", "c", "d"}},
                           {"b", {"a"}},
                           {"c", {"a"}},
                           {"d", {"a"}}})
              << std::endl; // -> 1 (true)
    std::cout << canColor({{"a", {"b", "c", "d"}},
                           {"b", {"a"}},
                           {"c", {"a", "d"}},
                           {"d", {"a", "c"}}})
              << std::endl; // -> 0 (false)
    std::cout << canColor({{"h", {"i", "k"}},
                           {"i", {"h", "j"}},
                           {"j", {"i", "k"}},
                           {"k", {"h", "j"}}})
              << std::endl;                          // -> 1 (true)
    std::cout << canColor({{"z", {}}}) << std::endl; // -> 1 (true)
    std::cout << canColor({{"h", {"i", "k"}},
                           {"i", {"h", "j"}},
                           {"j", {"i", "k"}},
                           {"k", {"h", "j"}},
                           {"q", {"r", "s"}},
                           {"r", {"q", "s"}},
                           {"s", {"r", "q"}}})
              << std::endl; // -> 0 (false)

    return 0;
}