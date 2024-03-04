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

// topological order
// Write a function, topologicalOrder, that takes in an
// object representing the adjacency list for a directed-acyclic graph.
//  The function should return an array containing the topological-order of the graph.
//  https://en.wikipedia.org/wiki/Topological_sorting
// The topological ordering of a graph is a sequence where "parent nodes"
//  appear before their "children" within the sequence.
void printVector(std::vector<std::string>);
void printMap(std::unordered_map<std::string, int>);

/*
how this topological order / sorting works
we traverse the graph obtaining all nodes as keys
and assigning the parent value of them to zero
while we are visiting the same node we increase the parent count by one
for each parent of the node in the array

push all nodes with a parent count of zero into a new vector
then proceed to pop that value from the back
into another array then loop through the vec of nodes contained by the node in the
graph and with each node we go through in that nodes values subtract 1 from the parent
count of each node
if the count hits zero add it to the vector containing the zero count nodes
the repeat the process all over again


*/

std::vector<std::string> topologicalOrder(std::unordered_map<std::string, std::vector<std::string>>);
std::vector<std::string> topologicalOrder(std::unordered_map<std::string, std::vector<std::string>> graph) {
    // todo
    std::vector<std::string> result;
    std::unordered_map<std::string, int> numOfParents;

    std::vector<std::string> order;


    return order;
}

void printMap(std::unordered_map<std::string, int> numOfParents) {
    std::cout << " { ";

    for (auto x : numOfParents) {
        std::cout << " { " << x.first << " , " << x.second << " } ";
    }
    std::cout << " } " << std::endl;
}

void printVector(std::vector<std::string> vec) {
    for (auto x : vec) {
        std::cout << x << " , ";
    }
    std::cout << std::endl;
}

int main() {

    printVector(topologicalOrder(std::unordered_map<std::string, std::vector<std::string>>{
        {"a", {"f"}},
        {"b", {"d"}},
        {"c", {"a", "f"}},
        {"d", {"e"}},
        {"e", {}},
        {"f", {"b", "e"}},
    })); // -> ["c", "a", "f", "b", "d", "e"]
    printVector(topologicalOrder(std::unordered_map<std::string, std::vector<std::string>>{
        {"h", {"l", "m"}},
        {"i", {"k"}},
        {"j", {"k", "i"}},
        {"k", {"h", "m"}},
        {"l", {"m"}},
        {"m", {}},
    })); // -> ["j", "i", "k", "h", "l", "m"]
    printVector(topologicalOrder(std::unordered_map<std::string, std::vector<std::string>>{
        {"q", {}},
        {"r", {"q"}},
        {"s", {"r"}},
        {"t", {"s"}},
    })); // -> ["t", "s", "r", "q"]
    printVector(topologicalOrder(std::unordered_map<std::string, std::vector<std::string>>{
        {"v", {"z", "w"}},
        {"w", {}},
        {"x", {"w", "v", "z"}},
        {"y", {"x"}},
        {"z", {"w"}},
    })); // -> ["y", "x", "v", "z", "w"]

    return 0;
}