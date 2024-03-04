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

// closest carrot
// Write a function, closestCarrot, that takes in a grid, a starting row, and a
//  starting column. In the grid, 'X's are walls, 'O's are open spaces, and 'C's are
//  carrots. The function should return a number representing the length of the shortest
//  path from the starting position to a carrot.
// You may move up, down, left, or right, but cannot pass through walls (X). If there is
// no possible path to a carrot, then return -1.

// int closestCarrot(std::vector<std::vector<char>> grid, int startRow, int startCol) {
//     std::queue<std::tuple<int, int, int>> queue;
//     queue.push({startRow, startCol, 0});
//     std::unordered_set<std::string> visited;
//     visited.insert(std::to_string(startRow) + "," + std::to_string(startCol));

//     while (!queue.empty()) {
//         auto [row, col, count] = queue.front();
//         queue.pop();
//         if (grid[row][col] == 'C') {
//             return count;
//         }
//         std::vector<std::tuple<int, int>> vaild_moves = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
//         for (std::tuple<int, int> move : vaild_moves) {
//             auto [next_row, next_col] = move;
//             next_row += row;
//             next_col += col;
//             std::string pos = std::to_string(next_row) + "," + std::to_string(next_col);
//             bool rBound = 0 <= next_row && next_row < grid.size();
//             bool cBound = 0 <= next_col && next_col < grid[0].size();
//             if (rBound && cBound && visited.count(pos) == 0 && grid[next_row][next_col] != 'X') {
//                 visited.insert(pos);
//                 queue.push(std::make_tuple(next_row, next_col, count + 1));
//             }
//         }
//     }
//     return -1;
// }

// rewrite not using auto keyword
int closestCarrot(std::vector<std::vector<char>> grid, int startRow, int startCol) {

    return -1;
}

int main() {
    std::vector<std::vector<char>> grid{
        {'O', 'O', 'O', 'O', 'O'},
        {'O', 'X', 'O', 'O', 'O'},
        {'O', 'X', 'X', 'O', 'O'},
        {'O', 'X', 'C', 'O', 'O'},
        {'O', 'X', 'X', 'O', 'O'},
        {'C', 'O', 'O', 'O', 'O'}};
    std::cout << closestCarrot(grid, 1, 2) << std::endl; // -> 4
    grid = {
        {'O', 'O', 'O', 'O', 'O'},
        {'O', 'X', 'O', 'O', 'O'},
        {'O', 'X', 'X', 'O', 'O'},
        {'O', 'X', 'C', 'O', 'O'},
        {'O', 'X', 'X', 'O', 'O'},
        {'C', 'O', 'O', 'O', 'O'}};
    std::cout << closestCarrot(grid, 0, 0) << std::endl; // -> 5
    grid = {
        {'O', 'O', 'X', 'X', 'X'},
        {'O', 'X', 'X', 'X', 'C'},
        {'O', 'X', 'O', 'X', 'X'},
        {'O', 'O', 'O', 'O', 'O'},
        {'O', 'X', 'X', 'X', 'X'},
        {'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'C', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O'}};
    std::cout << closestCarrot(grid, 3, 4) << std::endl; // -> 9
    grid = {
        {'O', 'O', 'X', 'O', 'O'},
        {'O', 'X', 'X', 'X', 'O'},
        {'O', 'X', 'C', 'C', 'O'},
    };
    std::cout << closestCarrot(grid, 1, 4) << std::endl; // -> 2
    grid = {
        {'O', 'O', 'X', 'O', 'O'},
        {'O', 'X', 'X', 'X', 'O'},
        {'O', 'X', 'C', 'C', 'O'},
    };

    std::cout << closestCarrot(grid, 2, 0) << std::endl; // -> -1
    grid = {
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'X', 'X'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'X', 'C'},
    };

    std::cout << closestCarrot(grid, 0, 0) << std::endl; // -> -1
    grid = {
        {'O', 'O', 'X', 'C', 'O'},
        {'O', 'X', 'X', 'X', 'O'},
        {'C', 'X', 'O', 'O', 'O'}};

    std::cout << closestCarrot(grid, 2, 2) << std::endl; // -> 5

    return 0;
}