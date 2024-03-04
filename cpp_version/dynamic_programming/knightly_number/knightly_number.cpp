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

// knightly number
// A knight is on a chess board. Can you figure out the total number of ways the knight can move to a
//  target position in exactly m moves?
//  On a single move, the knight can move in an "L" shape; two spaces in any direction,
// then one space in a perpendicular direction. This means that on a single move, a knight has eight possible positions it can move to.

// Write a function, knightlyNumber, that takes in 6 arguments:

// n, m, kr, kc, pr, pc

// n = the length of the chess board
// m = the number of moves that must be used
// kr = the starting row of the knight
// kc = the starting column of the knight
// pr = the target row
// pc = the target column
// The function should return the number of different ways the
// knight can move to the target in exactly m moves. The knight can revisit
// positions of the board if needed. The knight cannot move out-of-bounds of the board.
// You can assume that rows and columns are 0-indexed. This means that if n = 8, there are 8 rows and 8 columns numbered 0 to 7.

// bool isBoardBound(int, int, int);
int knightlyNumber(int, int, int, int, int, int);
int _knightlyNumber(int, int, int, int, int, int, std::unordered_map<std::string, int> &);
// std::vector<std::tuple<int, int>> knightMovement(int, int, int);

int knightlyNumber(int n, int m, int kr, int kc, int pr, int pc) {
    std::unordered_map<std::string, int> hash;
    return _knightlyNumber(n, m, kr, kc, pr, pc, hash);
}
// int _knightlyNumber(int n, int m, int kr, int kc, int pr, int pc, std::unordered_map<std::string, int> &hash) {
//     std::string pos = std::to_string(m) + "," + std::to_string(kr) + "," + std::to_string(kc);
//     if (hash.count(pos) > 0) {
//         return hash[pos];
//     }
//     if (m == 0) {
//         if (kr == pr && kc == pc) {
//             return 1;
//         } else {
//             return 0;
//         }
//     }

//     int count = 0;
//     std::vector<std::tuple<int, int>> horseyMoves = knightMovement(n, kr, kc);
//     for (std::tuple<int, int> move : horseyMoves) {
//         int row = std::get<0>(move);
//         int col = std::get<1>(move);
//         count += _knightlyNumber(n, m - 1, row, col, pr, pc, hash);
//     }
//     hash[pos] = count;
//     return hash[pos];
// }
// std::vector<std::tuple<int, int>> knightMovement(int n, int kr, int kc) {
//     std::vector<std::tuple<int, int>> validMoves = {
//         {kr + -2, kc + 1},
//         {kr + -2, kc + -1},
//         {kr + 2, kc + 1},
//         {kr + 2, kc + -1},
//         {kr + -1, kc + 2},
//         {kr + -1, kc + -2},
//         {kr + 1, kc + 2},
//         {kr + 1, kc + -2},

//     };
//     std::vector<std::tuple<int, int>> horseyMoves = {};
//     for (std::tuple<int, int> move : validMoves) {
//         int row = std::get<0>(move);
//         int col = std::get<1>(move);
//         if (isBoardBound(n, row, col) == true) {
//             horseyMoves.push_back(move);
//         }
//     }
//     return horseyMoves;
// }
// bool isBoardBound(int n, int kr, int kc) {
//     bool rBound = 0 <= kr && kr < n;
//     bool cBound = 0 <= kc && kc < n;
//     return rBound && cBound;
// }

int _knightlyNumber(int n, int m, int kr, int kc, int pr, int pc, std::unordered_map<std::string, int> &hash) {
    std::string pos = std::to_string(m) + "," + std::to_string(kr) + "," + std::to_string(kc);
    
    return hash[pos];
}

int main() {

    std::cout << knightlyNumber(8, 2, 4, 4, 5, 5) << std::endl;     // -> 2
    std::cout << knightlyNumber(8, 2, 7, 1, 7, 1) << std::endl;     // -> 3
    std::cout << knightlyNumber(8, 2, 5, 4, 5, 4) << std::endl;     // -> 8
    std::cout << knightlyNumber(8, 3, 5, 2, 4, 4) << std::endl;     // -> 21
    std::cout << knightlyNumber(20, 6, 18, 7, 10, 15) << std::endl; // -> 60
    std::cout << knightlyNumber(20, 12, 8, 3, 9, 14) << std::endl;  // -> 98410127
    std::cout << knightlyNumber(8, 2, 0, 0, 1, 1) << std::endl;     // -> 0
    return 0;
}