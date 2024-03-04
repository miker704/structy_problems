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

// shortest path
// Write a function, shortest_path, that takes in a list of edges for an undirected graph and
// two nodes (node_A, node_B). The function should return the length of the shortest path between A and B. Consider
//  the length as
//  the number of edges in the path, not the number of nodes. If there is no path between A and B, then return -1.

// bfs

int shortestPath(std::vector<std::tuple<std::string, std::string>>, std::string, std::string);
std::unordered_map<std::string, std::vector<std::string>> buildGraph(std::vector<std::tuple<std::string, std::string>>);

int shortestPath(std::vector<std::tuple<std::string, std::string>> edges, std::string nodeA, std::string nodeB) {
    // todo

    return -1;
}

std::unordered_map<std::string, std::vector<std::string>> buildGraph(std::vector<std::tuple<std::string, std::string>> edges) {
    std::unordered_map<std::string, std::vector<std::string>> graph;


    return graph;
}

int main() {
    std::vector<std::tuple<std::string, std::string>> edges{
        {"w", "x"},
        {"x", "y"},
        {"z", "y"},
        {"z", "v"},
        {"w", "v"}};
    std::cout << shortestPath(edges, "w", "z") << std::endl; // -> 2
    edges = {
        {"w", "x"},
        {"x", "y"},
        {"z", "y"},
        {"z", "v"},
        {"w", "v"}};
    std::cout << shortestPath(edges, "y", "x") << std::endl; // -> 1
    edges = {
        {"a", "c"},
        {"a", "b"},
        {"c", "b"},
        {"c", "d"},
        {"b", "d"},
        {"e", "d"},
        {"g", "f"}};
    std::cout << shortestPath(edges, "a", "e") << std::endl; // -> 3
    edges = {
        {"a", "c"},
        {"a", "b"},
        {"c", "b"},
        {"c", "d"},
        {"b", "d"},
        {"e", "d"},
        {"g", "f"}};
    std::cout << shortestPath(edges, "e", "c") << std::endl; // -> 2
    edges = {
        {"a", "c"},
        {"a", "b"},
        {"c", "b"},
        {"c", "d"},
        {"b", "d"},
        {"e", "d"},
        {"g", "f"}};
    std::cout << shortestPath(edges, "b", "g") << std::endl; // -> -1
    edges = {
        {"c", "n"},
        {"c", "e"},
        {"c", "s"},
        {"c", "w"},
        {"w", "e"},
    };
    std::cout << shortestPath(edges, "w", "e") << std::endl; // -> 1
    edges = {
        {"c", "n"},
        {"c", "e"},
        {"c", "s"},
        {"c", "w"},
        {"w", "e"},
    };
    std::cout << shortestPath(edges, "n", "e") << std::endl; // -> 2
    edges = {
        {"m", "n"},
        {"n", "o"},
        {"o", "p"},
        {"p", "q"},
        {"t", "o"},
        {"r", "q"},
        {"r", "s"}};
    std::cout << shortestPath(edges, "m", "s") << std::endl; // -> 6
    return 0;
}