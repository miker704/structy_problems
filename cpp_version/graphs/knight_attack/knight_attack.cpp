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

// knight attack
// A knight and a pawn are on a chess board. Can you figure out the minimum number of moves required for the
//  knight to travel to the same position of the pawn? On a single move, the knight can move in an "L" shape;
//  two spaces in any direction, then one space in a
//  perpendicular direction. This means that on a single move, a knight has eight possible positions it can move to.
// https://structy-static.s3.amazonaws.com/knight-movement.png
// Write a function, std::cout<<knightAttack, that takes in 5 arguments:

// n, kr, kc, pr, pc

// n = the length of the chess board
// kr = the starting row of the knight
// kc = the starting column of the knight
// pr = the row of the pawn
// pc = the column of the pawn
// The function should return an int representing the minimum number of moves required for
//  the knight to land ontop of the pawn. The knight cannot move out-of-bounds of the board.
//   You can assume that rows and columns are 0-indexed. This means that if n = 8,
//   there are 8 rows and 8 columns numbered 0 to 7. If it is not possible for the knight to attack the pawn,
//    then return -1.

int knightAttack(int, int, int, int, int);
std::vector<std::tuple<int, int>> moveHorsey(int, int, int);
// std::vector<std::tuple<int, int>> buildChessBoard(int, int, int, int, int);

// std::vector<std::vector<char>> buildChessBoard(int, int, int, int, int);
// bool isBoardBound(std::vector<std::vector<char>>, int, int);
// void printVector(std::vector<std::vector<char>>);
// std::string stringifyPosition(int, int);

// int knightAttack(int n, int kr, int kc, int pr, int pc) {
//     // todo
//     std::vector<std::vector<char>> chessBoard = buildChessBoard(n, kr, kc, pr, pc);
//     std::queue<std::tuple<int, int, int>> queue;
//     queue.push({kr, kc, 0});

//     std::unordered_set<std::string> visited;
//     visited.insert(std::to_string(kr) + "," + std::to_string(kc));
//     std::vector<std::tuple<int, int>> validHorseyMoves = {{-2, 1}, {-2, -1}, {2, 1}, {2, -1}, {-1, 2}, {1, 2}, {-1, -2}, {1, -2}};
//     while (!queue.empty()) {
//         int row = std::get<0>(queue.front());
//         int col = std::get<1>(queue.front());
//         int count = std::get<2>(queue.front());
//         queue.pop();

//         if (chessBoard[row][col] == 'P') {
//             return count;
//         }
//         for (std::tuple<int, int> validMoves : validHorseyMoves) {
//             int vRow = std::get<0>(validMoves);
//             int vCol = std::get<1>(validMoves);
//             int newRow = row + vRow;
//             int newCol = col + vCol;
//             // std::string newPos = stringifyPosition(newRow, newCol);
//             std::string newPos = std::to_string(newRow) + "," + std::to_string(newCol);
//             if (isBoardBound(chessBoard, newRow, newCol) == true && visited.count(newPos) == 0) {
//                 visited.insert(newPos);
//                 queue.push({newRow, newCol, count + 1});
//             }
//         }
//     }

//     return -1;
// }

// bool isBoardBound(std::vector<std::vector<char>> chessBoard, int row, int col) {
//     bool rBound = 0 <= row && row < chessBoard.size();
//     bool cBound = 0 <= col && col < chessBoard[0].size();
//     return rBound && cBound;
// }

// std::string stringifyPosition(int row, int col) {
//     return std::to_string(row) + "," + std::to_string(col);
// }

// std::vector<std::vector<char>> buildChessBoard(int n, int kr, int kc, int pr, int pc) {
//     std::vector<std::vector<char>> chessBoard(n, std::vector<char>(n, 'X'));
//     chessBoard[kr][kc] = 'H';
//     chessBoard[pr][pc] = 'P';
//     // printVector(chessBoard);
//     return chessBoard;
// }

// void printVector(std::vector<std::vector<char>> vec) {
//     for (auto x : vec) {
//         std::cout << "{ ";

//         for (auto y : x) {

//             std::cout << y << " , ";
//         }
//         std::cout << " } , ";
//     }
//     std::cout << std::endl;
// }

// more faster method getting rid of the build board function decreases space use and increase speed

int knightAttack(int n, int kr, int kc, int pr, int pc) {


    return -1;
}

std::vector<std::tuple<int, int>> moveHorsey(int n, int kr, int kc) {
    
    std::vector<std::tuple<int, int>> validHorseyMoves;
    
    return validHorseyMoves;
}

int main() {
    std::cout << knightAttack(8, 1, 1, 2, 2) << std::endl;     // -> 2
    std::cout << knightAttack(8, 1, 1, 2, 3) << std::endl;     // -> 1
    std::cout << knightAttack(8, 0, 3, 4, 2) << std::endl;     // -> 3
    std::cout << knightAttack(8, 0, 3, 5, 2) << std::endl;     // -> 4
    std::cout << knightAttack(24, 4, 7, 19, 20) << std::endl;  // -> 10
    std::cout << knightAttack(100, 21, 10, 0, 0) << std::endl; // -> 11
    std::cout << knightAttack(3, 0, 0, 1, 2) << std::endl;     // -> 1
    std::cout << knightAttack(3, 0, 0, 1, 1) << std::endl;     // -> -1

    return 0;
}