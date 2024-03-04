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

// best bridge
// Write a function, bestBridge, that takes in a grid as an argument.
// The grid contains water (W) and land (L).
// There are exactly two islands in the grid. An island is a vertically or
// horizontally connected region of land.
//  Return the minimum length bridge needed to connect the two islands.
//  A bridge does not need to form a straight line.
int bestBridge(std::vector<std::vector<char>>);
bool isMapBounds(std::vector<std::vector<char>>, int, int);
void getIsland(std::vector<std::vector<char>>, std::unordered_set<std::string> &, std::vector<std::tuple<int, int>> &, int, int);
std::string stringifyPos(int, int);

int bestBridge(std::vector<std::vector<char>> grid) {
    // todo
    
    return 0;
}

void getIsland(std::vector<std::vector<char>> grid, std::unordered_set<std::string> &visited, std::vector<std::tuple<int, int>> &island, int row, int col) {

}

bool isMapBounds(std::vector<std::vector<char>> grid, int row, int col) {
    return false;
}

std::string stringifyPos(int row, int col) {
    return "";
}

int main() {

    std::vector<std::vector<char>> grid{
        {'W', 'W', 'W', 'L', 'L'},
        {'L', 'L', 'W', 'W', 'L'},
        {'L', 'L', 'L', 'W', 'L'},
        {'W', 'L', 'W', 'W', 'W'},
        {'W', 'W', 'W', 'W', 'W'},
        {'W', 'W', 'W', 'W', 'W'}};
    std::cout << bestBridge(grid) << std::endl; // -> 1
    grid = {
        {'W', 'W', 'W', 'W', 'W'},
        {'W', 'W', 'W', 'W', 'W'},
        {'L', 'L', 'W', 'W', 'L'},
        {'W', 'L', 'W', 'W', 'L'},
        {'W', 'W', 'W', 'L', 'L'},
        {'W', 'W', 'W', 'W', 'W'}};
    std::cout << bestBridge(grid) << std::endl; // -> 2
    grid = {
        {'W', 'W', 'W', 'W', 'W'},
        {'W', 'W', 'W', 'L', 'W'},
        {'L', 'W', 'W', 'W', 'W'}};
    std::cout << bestBridge(grid) << std::endl; // -> 3
    grid = {
        {'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W'},
        {'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W'},
        {'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W'},
        {'W', 'W', 'W', 'W', 'W', 'L', 'W', 'W'},
        {'W', 'W', 'W', 'W', 'L', 'L', 'W', 'W'},
        {'W', 'W', 'W', 'W', 'L', 'L', 'L', 'W'},
        {'W', 'W', 'W', 'W', 'W', 'L', 'L', 'L'},
        {'L', 'W', 'W', 'W', 'W', 'L', 'L', 'L'},
        {'L', 'L', 'L', 'W', 'W', 'W', 'W', 'W'},
        {'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W'}};
    std::cout << bestBridge(grid) << std::endl; // -> 3
    grid = {
        {'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L'},
        {'L', 'W', 'W', 'W', 'W', 'W', 'W', 'L'},
        {'L', 'W', 'W', 'W', 'W', 'W', 'W', 'L'},
        {'L', 'W', 'W', 'W', 'W', 'W', 'W', 'L'},
        {'L', 'W', 'W', 'W', 'W', 'W', 'W', 'L'},
        {'L', 'W', 'W', 'W', 'W', 'W', 'W', 'L'},
        {'L', 'W', 'W', 'L', 'W', 'W', 'W', 'L'},
        {'L', 'W', 'W', 'W', 'W', 'W', 'W', 'L'},
        {'L', 'W', 'W', 'W', 'W', 'W', 'W', 'L'},
        {'L', 'W', 'W', 'W', 'W', 'W', 'W', 'L'},
        {'L', 'W', 'W', 'W', 'W', 'W', 'W', 'L'},
        {'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L'}};
    std::cout << bestBridge(grid) << std::endl; // -> 2
    grid = {
        {'W', 'L', 'W', 'W', 'W', 'W', 'W', 'W'},
        {'W', 'L', 'W', 'W', 'W', 'W', 'W', 'W'},
        {'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W'},
        {'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W'},
        {'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W'},
        {'W', 'W', 'W', 'W', 'W', 'W', 'L', 'W'},
        {'W', 'W', 'W', 'W', 'W', 'W', 'L', 'L'},
        {'W', 'W', 'W', 'W', 'W', 'W', 'W', 'L'}};
    std::cout << bestBridge(grid) << std::endl; // -> 8

    return 0;
}