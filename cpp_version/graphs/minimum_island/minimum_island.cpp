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

// minimum island
// Write a function, minimumIsland, that takes in a grid containing Ws and Ls.
//  W represents water and L represents land. The function should return the size of the smallest
//  island. An island is a vertically or horizontally connected region of land.

// You may assume that the grid contains at least one island.
int minimumIsland(std::vector<std::vector<char>>);
int hasPath(std::vector<std::vector<char>>, int, int, std::unordered_set<std::string> &);
int minimumIsland(std::vector<std::vector<char>> grid) {
    // todo
    int total = std::numeric_limits<int>::max();


    return total;
}
int hasPath(std::vector<std::vector<char>> grid, int row, int col, std::unordered_set<std::string> &visited) {


    int size = 1;

    return size;
}

int main() {

    std::vector<std::vector<char>> grid{
        {'W', 'L', 'W', 'W', 'W'},
        {'W', 'L', 'W', 'W', 'W'},
        {'W', 'W', 'W', 'L', 'W'},
        {'W', 'W', 'L', 'L', 'W'},
        {'L', 'W', 'W', 'L', 'L'},
        {'L', 'L', 'W', 'W', 'W'}};
    std::cout << minimumIsland(grid) << std::endl; // -> 2
    std::vector<std::vector<char>> grid1{
        {'L', 'W', 'W', 'L', 'W'},
        {'L', 'W', 'W', 'L', 'L'},
        {'W', 'L', 'W', 'L', 'W'},
        {'W', 'W', 'W', 'W', 'W'},
        {'W', 'W', 'L', 'L', 'L'}};
    std::cout << minimumIsland(grid1) << std::endl; // -> 1
    std::vector<std::vector<char>> grid2{
        {'L', 'L', 'L'},
        {'L', 'L', 'L'},
        {'L', 'L', 'L'}};
    std::cout << minimumIsland(grid2) << std::endl; // -> 9
    std::vector<std::vector<char>> grid3{
        {'W', 'W'},
        {'L', 'L'},
        {'W', 'W'},
        {'W', 'L'}};
    std::cout << minimumIsland(grid3) << std::endl; // -> 1
    return 0;
}