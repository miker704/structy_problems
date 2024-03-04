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

// undirected path
// Write a function, undirectedPath, that takes in a vector of edges for an undirected graph and two nodes (nodeA, nodeB).
//  The function should return a boolean indicating whether or not there exists a path between nodeA and nodeB.
// dfs
// predefine fucts
bool undirectedPath(std::vector<std::tuple<std::string, std::string>>, std::string, std::string);
std::unordered_map<std::string, std::vector<std::string>> buildUndirectedGraph(std::vector<std::tuple<std::string, std::string>>);
bool hasPath(std::unordered_map<std::string, std::vector<std::string>>, std::string, std::string, std::unordered_set<std::string>);

bool undirectedPath(std::vector<std::tuple<std::string, std::string>> edges, std::string src, std::string dst) {
    // todo
    std::unordered_map<std::string, std::vector<std::string>> graph = buildUndirectedGraph(edges);
    std::unordered_set<std::string> visitedNodes;
    return hasPath(graph, src, dst, visitedNodes);
}

std::unordered_map<std::string, std::vector<std::string>> buildUndirectedGraph(std::vector<std::tuple<std::string, std::string>> edges) {
    std::unordered_map<std::string, std::vector<std::string>> graph;

    return graph;
}

bool hasPath(std::unordered_map<std::string, std::vector<std::string>> graph, std::string src, std::string dst, std::unordered_set<std::string> visitedNodes) {


    return false;
}

int main() {

    std::vector<std::tuple<std::string, std::string>> edges{
        {"i", "j"},
        {"k", "i"},
        {"m", "k"},
        {"k", "l"},
        {"o", "n"}};

    std::cout << std::boolalpha << undirectedPath(edges, "j", "m") << std::endl; // -> 1 (true)
    edges = {
        {"i", "j"},
        {"k", "i"},
        {"m", "k"},
        {"k", "l"},
        {"o", "n"}};
    std::cout << undirectedPath(edges, "m", "j") << std::endl; // -> 1 (true)

    edges = {
        {"i", "j"},
        {"k", "i"},
        {"m", "k"},
        {"k", "l"},
        {"o", "n"}};

    std::cout << undirectedPath(edges, "l", "j") << std::endl; // -> 1 (true)
    edges = {
        {"i", "j"},
        {"k", "i"},
        {"m", "k"},
        {"k", "l"},
        {"o", "n"}};
    std::cout << undirectedPath(edges, "k", "o") << std::endl; // -> 0 (false)
    edges = {
        {"i", "j"},
        {"k", "i"},
        {"m", "k"},
        {"k", "l"},
        {"o", "n"}};
    std::cout << undirectedPath(edges, "i", "o") << std::endl; // -> 0 (false)
    edges = {
        {"b", "a"},
        {"c", "a"},
        {"b", "c"},
        {"q", "r"},
        {"q", "s"},
        {"q", "u"},
        {"q", "t"}};
    std::cout << undirectedPath(edges, "a", "b") << std::endl; // -> 1 (true)
    edges = {
        {"b", "a"},
        {"c", "a"},
        {"b", "c"},
        {"q", "r"},
        {"q", "s"},
        {"q", "u"},
        {"q", "t"}};
    std::cout << undirectedPath(edges, "a", "c") << std::endl; // -> 1 (true)
    edges = {
        {"b", "a"},
        {"c", "a"},
        {"b", "c"},
        {"q", "r"},
        {"q", "s"},
        {"q", "u"},
        {"q", "t"}};
    std::cout << undirectedPath(edges, "r", "t") << std::endl; // -> 1 (true)
    edges = {
        {"b", "a"},
        {"c", "a"},
        {"b", "c"},
        {"q", "r"},
        {"q", "s"},
        {"q", "u"},
        {"q", "t"}};
    std::cout << undirectedPath(edges, "r", "b") << std::endl; // -> 0 (false)
    edges = {
        {"s", "r"},
        {"t", "q"},
        {"q", "r"}};
    std::cout << undirectedPath(edges, "r", "t") << std::endl; // -> 1 (true)

    return 0;
}