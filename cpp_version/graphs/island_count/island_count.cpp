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

// island count
// Write a function, island_count, that takes in a grid containing Ws and Ls. W represents water and L represents land.
// The function should return the number of islands on the grid. An island is a vertically or
// horizontally connected region of land.

int islandCount(std::vector<std::vector<char>>);
bool hasPath(std::vector<std::vector<char>>, int, int, std::unordered_set<std::string> &);

int islandCount(std::vector<std::vector<char>> grid) {
    int total = 0;

    return total;
}
bool hasPath(std::vector<std::vector<char>> grid, int row, int col, std::unordered_set<std::string> &visited) {
    
    return true;
}

int main() {

    std::vector<std::vector<char>> grid{
        {'W', 'L', 'W', 'W', 'W'},
        {'W', 'L', 'W', 'W', 'W'},
        {'W', 'W', 'W', 'L', 'W'},
        {'W', 'W', 'L', 'L', 'W'},
        {'L', 'W', 'W', 'L', 'L'},
        {'L', 'L', 'W', 'W', 'W'}};
    std::cout << islandCount(grid) << std::endl; // -> 3
    grid = {
        {'L', 'W', 'W', 'L', 'W'},
        {'L', 'W', 'W', 'L', 'L'},
        {'W', 'L', 'W', 'L', 'W'},
        {'W', 'W', 'W', 'W', 'W'},
        {'W', 'W', 'L', 'L', 'L'}};
    std::cout << islandCount(grid) << std::endl; // -> 4
    grid = {
        {'L', 'L', 'L'},
        {'L', 'L', 'L'},
        {'L', 'L', 'L'}};
    std::cout << islandCount(grid) << std::endl; // -> 1
    grid = {
        {'W', 'W'},
        {'W', 'W'},
        {'W', 'W'}};
    std::cout << islandCount(grid) << std::endl; // -> 0
    return 0;
}