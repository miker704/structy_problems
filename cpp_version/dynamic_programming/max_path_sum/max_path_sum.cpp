// max path sum
// Write a function, maxPathSum, that takes in a
// grid as an argument. The function should return the maximum sum
// possible by traveling a path from the top-left corner to the bottom-right corner.
// You may only travel through the grid by moving down or right.

// You can assume that all numbers are non-negative.

#include <iostream>
#include <unordered_map>
#include <vector>
#include <cmath>
#include <string>

int maxPathSum(std::vector<std::vector<int>>);
// int _maxPathSum(std::vector<std::vector<int>> grid, int, int);
int _maxPathSum(std::vector<std::vector<int>> grid, int, int,std::unordered_map<std::string,int>&);



//unoptimized method running at O(2^(r+c)) where 2 is the number of branches right and down directions
// r is the number of rows and c is the number of columns in the 2d array space complixity is O(r+c)
// int maxPathSum(std::vector<std::vector<int>> grid) {
//     return _maxPathSum(grid, 0, 0);
// }
// int _maxPathSum(std::vector<std::vector<int>> grid, int row, int col) {
//     if (row == grid.size() || col == grid[0].size()) {
//         return 0;
//     }

//     int maxSum = 0;
//     if (row <= grid.size() - 1 && col <= grid[0].size() - 1) {
//         // int down = _maxPathSum(grid, row + 1, col);
//         // int right = _maxPathSum(grid, row, col + 1);
//         int current_sum = std::max(_maxPathSum(grid, row + 1, col),_maxPathSum(grid, row, col + 1));
//         maxSum += grid[row][col]+ current_sum; 
    
//     }
//     return maxSum;
// }

//using memoization more optimized method
//running at O((r*c)) where 2 is the number of branches right and down directions
// r is the number of rows and c is the number of columns in the 2d array space complixity is O(r*c)
int maxPathSum(std::vector<std::vector<int>> grid) {
    std::unordered_map<std::string,int>u_map;
    return _maxPathSum(grid, 0, 0,u_map);
}
int _maxPathSum(std::vector<std::vector<int>> grid, int row, int col,std::unordered_map<std::string,int>&u_map) {
        return 0;
}
int main() {
    std::vector<std::vector<int>> grid{
        {1, 3, 12},
        {5, 1, 1},
        {3, 6, 1}};
    std::cout << maxPathSum(grid) << std::endl; // -> 18
    grid = {
        {1, 2, 8, 1},
        {3, 1, 12, 10},
        {4, 0, 6, 3}};
    std::cout << maxPathSum(grid) << std::endl; // -> 36
    grid = {
        {1, 2, 8, 1},
        {3, 10, 12, 10},
        {4, 0, 6, 3}};
    std::cout << maxPathSum(grid) << std::endl; // -> 39
    grid = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
    std::cout << maxPathSum(grid) << std::endl; // -> 27
    grid = {
        {1, 1, 3, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 2, 1, 1, 6, 1, 1, 5, 1, 1, 0, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 5, 1, 1, 1, 1, 0, 1, 1, 1, 1},
        {2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {2, 1, 1, 1, 1, 8, 1, 1, 1, 1, 1, 1, 1},
        {2, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 9, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 8, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
    std::cout << maxPathSum(grid) << std::endl; // -> 56

    return 0;
}
