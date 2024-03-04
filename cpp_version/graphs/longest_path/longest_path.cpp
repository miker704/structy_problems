#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits.h>
#include <math.h>
#include <queue>
#include <stack>
#include <string>
#include <tuple>
#include <typeinfo>
#include <unordered_map>
#include <unordered_set>
#include <vector>
// longest path
// Write a function, longestPath, that takes in an adjacency list for a
// directed acyclic graph. The function should return the length of the
// longest path within the graph.
//  A path may start and end at any two nodes. The length of a path is considered
//  the number of edges in the path, not the number of nodes.

int hasPath(std::unordered_map<char, std::vector<char>>, char, std::unordered_map<char, int>);
int longestPath(std::unordered_map<char, std::vector<char>>);

int longestPath(std::unordered_map<char, std::vector<char>> graph) {
    // todo
    int max_path = 0;
    

    return max_path;
}

int hasPath(std::unordered_map<char, std::vector<char>> graph, char node, std::unordered_map<char, int> visited) {

    
    return visited[node];
}

int main() {

    std::unordered_map<char, std::vector<char>> graph{
        {'a', {'c', 'b'}},
        {'b', {'c'}},
        {'c', {}}};
    std::cout << longestPath(graph) << std::endl; // -> 2
    graph = {
        {'a', {'c', 'b'}},
        {'b', {'c'}},
        {'c', {}},
        {'q', {'r'}},
        {'r', {'s', 'u', 't'}},
        {'s', {'t'}},
        {'t', {'u'}},
        {'u', {}}};
    std::cout << longestPath(graph) << std::endl; // -> 4
    graph = {
        {'h', {'i', 'j', 'k'}},
        {'g', {'h'}},
        {'i', {}},
        {'j', {}},
        {'k', {}},
        {'x', {'y'}},
        {'y', {}}};
    std::cout << longestPath(graph) << std::endl; // -> 2
    graph = {
        {'a', {'b'}},
        {'b', {'c'}},
        {'c', {}},
        {'e', {'f'}},
        {'f', {'g'}},
        {'g', {'h'}},
        {'h', {}}};
    std::cout << longestPath(graph) << std::endl; // -> 3
    return 0;
}