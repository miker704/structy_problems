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

// has path
//     Write a function,
//     hasPath, that takes in an unordered map representing the adjacency list of a directed acyclic graph and two nodes(src, dst).The function should return a boolean indicating whether or not there exists a directed path between the source and destination nodes.

//                                                                                                                                                                                                                                                    Hey.This is our first graph problem,
//     so you should be liberal with watching the
//     Approach and Walkthrough.Be productive,
//     not stubborn.- AZ

bool hasPathDFS(std::unordered_map<std::string, std::vector<std::string>> graph, std::string src, std::string dst) {


    // todo
    return false;
}

bool hasPathBFS(std::unordered_map<std::string, std::vector<std::string>> graph, std::string src, std::string dst) {
    // todo

    

    return false;
}

int main() {

    std::unordered_map<std::string, std::vector<std::string>> graph{
        {"f", {"g", "i"}},
        {"g", {"h"}},
        {"h", {}},
        {"i", {"g", "k"}},
        {"j", {"i"}},
        {"k", {}}};

    std::cout << "DFS" << std::endl;
    std::cout << std::boolalpha << hasPathDFS(graph, "f", "k") << std::endl; // 1 (true)
    std::cout << "BFS" << std::endl;
    std::cout << hasPathBFS(graph, "f", "k") << std::endl; // 1 (true)

    graph = {
        {"f", {"g", "i"}},
        {"g", {"h"}},
        {"h", {}},
        {"i", {"g", "k"}},
        {"j", {"i"}},
        {"k", {}}};
    std::cout << "DFS" << std::endl;
    std::cout << hasPathDFS(graph, "f", "j") << std::endl; // 0 (false)
    std::cout << "BFS" << std::endl;
    std::cout << hasPathBFS(graph, "f", "j") << std::endl; // 0 (false)

    graph = {
        {"f", {"g", "i"}},
        {"g", {"h"}},
        {"h", {}},
        {"i", {"g", "k"}},
        {"j", {"i"}},
        {"k", {}}};
    std::cout << "DFS" << std::endl;
    std::cout << hasPathDFS(graph, "i", "h") << std::endl; // 1 (true)
    std::cout << "BFS" << std::endl;
    std::cout << hasPathBFS(graph, "i", "h") << std::endl; // 1 (true)

    graph = {
        {"v", {"x", "w"}},
        {"w", {}},
        {"x", {}},
        {"y", {"z"}},
        {"z", {}}};
    std::cout << "DFS" << std::endl;
    std::cout << hasPathDFS(graph, "v", "w") << std::endl; // 1 (true)
    std::cout << "BFS" << std::endl;
    std::cout << hasPathBFS(graph, "v", "w") << std::endl; // 1 (true)

    graph = {
        {"v", {"x", "w"}},
        {"w", {}},
        {"x", {}},
        {"y", {"z"}},
        {"z", {}}};
    std::cout << "DFS" << std::endl;
    std::cout << hasPathDFS(graph, "v", "z") << std::endl; // 0 (false)
    std::cout << "BFS" << std::endl;
    std::cout << hasPathBFS(graph, "v", "z") << std::endl; // 0 (false)

    return 0;
}