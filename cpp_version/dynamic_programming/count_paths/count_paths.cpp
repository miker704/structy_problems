// count paths
// Write a function, countPaths, that takes in a grid as an argument.
// In the grid, 'X' represents walls and 'O' represents open spaces.
// You may only move down or to the right and cannot pass through walls.
// The function should return the number
// of ways possible to travel from the top-left corner of the grid to the bottom-right corner.
// example
// std::vector<std::vector<char>> grid {
//     {'O', 'O'},
//     {'O', 'O'}
//   };
//   countPaths(grid); // -> 2 ([0][0] -> right [0][1] -> down [1][1])
//&& ([0][0]->down[1][0] -> right [1],[1])

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int countPaths(std::vector<std::vector<char>>);
// int _countPaths(std::vector<std::vector<char>>, int, int);

int _countPaths(std::vector<std::vector<char>>, int, int, std::unordered_map<std::string, int> &);
// std::unordered_map<std::string, int>

// optimized method using memoization runs at O(r*c) space complexity O(r*c)

int _countPaths(std::vector<std::vector<char>> grid, int row, int col, std::unordered_map<std::string, int> &u_map) {

    return 0;
}

// optimized method using memoization runs at O(r*c) space complexity O(r*c)
int countPaths(std::vector<std::vector<char>> grid) {
    std::unordered_map<std::string, int> u_map;
    return _countPaths(grid, 0, 0, u_map);
}
int main() {
    std::vector<std::vector<char>> grid{
        {'O', 'O'},
        {'O', 'O'}};

    std::cout << countPaths(grid) << std::endl; // -> 2
    grid.clear();
    grid = {
        {'O', 'O', 'X'},
        {'O', 'O', 'O'},
        {'O', 'O', 'O'}};
    std::cout << countPaths(grid) << std::endl; // -> 5
    grid.clear();

    grid = {
        {'O', 'O', 'O'},
        {'O', 'O', 'X'},
        {'O', 'O', 'O'}};

    std::cout << countPaths(grid) << std::endl; // -> 3
    grid.clear();

    grid = {
        {'O', 'O', 'O'},
        {'O', 'X', 'X'},
        {'O', 'O', 'O'}};

    std::cout << countPaths(grid) << std::endl; // -> 1
    grid.clear();

    grid = {
        {'O', 'O', 'X', 'O', 'O', 'O'},
        {'O', 'O', 'X', 'O', 'O', 'O'},
        {'X', 'O', 'X', 'O', 'O', 'O'},
        {'X', 'X', 'X', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O'}};

    std::cout << countPaths(grid) << std::endl; // -> 0
    grid.clear();

    grid = {
        {'O', 'O', 'X', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'X'},
        {'X', 'O', 'O', 'O', 'O', 'O'},
        {'X', 'X', 'X', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O'}};

    std::cout << countPaths(grid) << std::endl; // -> 42
    grid.clear();

    grid = {
        {'O', 'O', 'X', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'X'},
        {'X', 'O', 'O', 'O', 'O', 'O'},
        {'X', 'X', 'X', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'X'}};
    std::cout << countPaths(grid) << std::endl; // -> 0
    grid.clear();

    grid = {
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'}};
    std::cout << countPaths(grid) << std::endl; // -> 40116600

    grid.clear();

    grid = {
        {'O', 'O', 'X', 'X', 'O', 'O', 'O', 'X', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'X', 'X', 'O', 'O', 'O', 'X', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'X', 'O', 'O', 'O', 'X', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'X', 'O', 'O', 'O', 'O', 'O', 'O', 'X', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'X', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'X', 'X', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'X', 'O', 'O', 'O', 'O', 'O', 'X', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'X', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'X', 'X', 'X', 'O', 'O', 'O', 'O', 'O', 'O', 'X', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'X', 'X', 'O', 'O', 'O', 'O', 'X', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'X', 'X', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'X', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'X', 'O', 'O', 'O', 'O', 'O', 'O'}};
    std::cout << countPaths(grid) << std::endl; // -> 3190434

    return 0;
}
