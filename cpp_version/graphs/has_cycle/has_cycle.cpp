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

// has cycle
// Write a function, hasCycle, that takes in an unordered map representing the adjacency
// list of a directed graph. The function should return a boolean indicating whether
// or not the graph contains a cycle.
bool hasCycle(std::unordered_map<char, std::vector<char>>);

bool _hasCycle(std::unordered_map<char, std::vector<char>>, std::unordered_set<char>, std::unordered_set<char>, char);

bool hasCycle(std::unordered_map<char, std::vector<char>> graph) {
    // todo


    return false;
}

bool _hasCycle(std::unordered_map<char, std::vector<char>> graph, std::unordered_set<char> grey, std::unordered_set<char> black, char node) {
    // todo

    return false;
}

int main() {

    std::unordered_map<char, std::vector<char>>
        graph{{'a', {'b'}}, {'b', {'c'}}, {'c', {'a'}}};
    std::cout << std::boolalpha << hasCycle(graph) << std::endl; // -> 1 (true)
    graph = {
        {'a', {'b', 'c'}},
        {'b', {'c'}},
        {'c', {'d'}},
        {'d', {}}};
    std::cout << hasCycle(graph) << std::endl; // -> 0 (false)
    graph = {
        {'a', {'b', 'c'}},
        {'b', {}},
        {'c', {}},
        {'e', {'f'}},
        {'f', {'e'}}};
    std::cout << hasCycle(graph) << std::endl; // -> 1 (true)
    graph = {
        {'q', {'r', 's'}},
        {'r', {'t', 'u'}},
        {'s', {}},
        {'t', {}},
        {'u', {}},
        {'v', {'w'}},
        {'w', {}},
        {'x', {'w'}}};
    std::cout << hasCycle(graph) << std::endl; // -> 0 (false)
    graph = {
        {'a', {'b'}},
        {'b', {'c'}},
        {'c', {'a'}},
        {'g', {}}};
    std::cout << hasCycle(graph) << std::endl; // -> 1 (true)
    graph = {
        {'a', {'b'}},
        {'b', {'c'}},
        {'c', {'d'}},
        {'d', {'b'}}};
    std::cout << hasCycle(graph) << std::endl; // -> 1 (true)
    return 0;
}