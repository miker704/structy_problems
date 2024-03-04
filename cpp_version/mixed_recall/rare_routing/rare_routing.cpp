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

// rare routing
// Write a function, rareRouting, that takes in a number of cities (n)
// and a two dimensional
// array where each subarray represents a direct road that connects a pair of cities.
//  The function should return a boolean indicating whether or not there exists a unique
//   route for every pair of cities. A route is a sequence of roads that does not
//    visit a city more than once.

// Cities will be numbered 0 to n - 1.

// You can assume that all roads are two-way roads. This means if there is a road between A and B,
// then you can use that road to go from A to B or go from B to A.

// For example, given these roads:

// 0 --- 1
// | \
// |  \
// |   \
// 2    3

// There is a unique route for between every pair of cities.
// So the answer is true.

// For example, given these roads:

// 0 --- 1
// | \
// |  \
// |   \
// 2 -- 3

// There are two routes that can be used to travel from city 1 to city 2:
// - first route:  1, 0, 2
// - second route: 1, 0, 3, 2
// The answer is false, because routes should be unique.
bool rareRouting(int, std::vector<std::vector<int>>);
bool pathChecker(std::unordered_map<int, std::vector<int>>, std::unordered_set<int> &, int, int);
std::unordered_map<int, std::vector<int>> buildGraph(int, std::vector<std::vector<int>>);

bool rareRouting(int n, std::vector<std::vector<int>> roads) {
    // TODO

    return true 
}

bool pathChecker(std::unordered_map<int, std::vector<int>> graph, std::unordered_set<int> &visited, int currNode, int prevNode) {
    
    return true;
}

std::unordered_map<int, std::vector<int>> buildGraph(int n, std::vector<std::vector<int>> roads) {
    std::unordered_map<int, std::vector<int>> graph;

    return graph;
}

int main() {

    std::cout << std::boolalpha << rareRouting(4, std::vector<std::vector<int>>{{0, 1}, {0, 2}, {0, 3}})
              << std::endl; // -> 1 (true)
    std::cout << rareRouting(4, std::vector<std::vector<int>>{
                                    {0, 1},
                                    {0, 2},
                                    {0, 3},
                                    {3, 2}})
              << std::endl; // -> 0 (false)
    std::cout << rareRouting(6, std::vector<std::vector<int>>{
                                    {1, 2},
                                    {5, 4},
                                    {3, 0},
                                    {0, 1},
                                    {0, 4},
                                })
              << std::endl; // -> 1 (true)
    std::cout << rareRouting(6, std::vector<std::vector<int>>{
                                    {1, 2},
                                    {4, 1},
                                    {5, 4},
                                    {3, 0},
                                    {0, 1},
                                    {0, 4},
                                })
              << std::endl; // -> 0 (false)
    std::cout << rareRouting(4, std::vector<std::vector<int>>{
                                    {0, 1},
                                    {3, 2},
                                })
              << std::endl; // -> 0 (false)

    return 0;
}