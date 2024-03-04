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

// connected components count
// Write a function, connectedComponentsCount, that takes in the adjacency
//  list of an undirected graph. The function should return the number of connected components within the graph.

int connectedComponentsCount(std::unordered_map<int, std::vector<int>>);
bool hasPath(std::unordered_map<int, std::vector<int>>, int, std::unordered_set<int> &);

int connectedComponentsCount(std::unordered_map<int, std::vector<int>> graph) {
    // todo
    int count = 0;
    
    return count;
}

bool hasPath(std::unordered_map<int, std::vector<int>> graph, int curr_node, std::unordered_set<int> &visitedNodes) {

    return true;
}

int main() {
    std::unordered_map<int, std::vector<int>> graph{
        {0, {8, 1, 5}},
        {1, {0}},
        {5, {0, 8}},
        {8, {0, 5}},
        {2, {3, 4}},
        {3, {2, 4}},
        {4, {3, 2}}};
    std::cout << connectedComponentsCount(graph) << std::endl; // -> 2
    graph = {
        {1, {2}},
        {2, {1, 8}},
        {6, {7}},
        {9, {8}},
        {7, {6, 8}},
        {8, {9, 7, 2}}};
    std::cout << connectedComponentsCount(graph) << std::endl; // -> 1
    graph = {
        {3, {}},
        {4, {6}},
        {6, {4, 5, 7, 8}},
        {8, {6}},
        {7, {6}},
        {5, {6}},
        {1, {2}},
        {2, {1}}};
    std::cout << connectedComponentsCount(graph) << std::endl; // -> 3
    graph = {};
    std::cout << connectedComponentsCount(graph) << std::endl; // -> 0
    graph = {
        {0, {4, 7}},
        {1, {}},
        {2, {}},
        {3, {6}},
        {4, {0}},
        {6, {3}},
        {7, {0}},
        {8, {}},
    };
    std::cout << connectedComponentsCount(graph) << std::endl; // -> 5

    return 0;
}