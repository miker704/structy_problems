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

// breaking boundaries
// Write a function, breakingBoundaries, that takes in 5 arguments:
// a number of rows (m), a number of columns (n), a number of moves (k),
//  a starting row (r), and a starting column (c). Say you were situated in
//  a grid with dimensions m * n. If you had to start at position (r,c),
//  in how many different ways could you move out of bounds if you could
//  take at most k moves. A single move is moving one space up, down, left,
//  or right. During a path you may revisit a position.

// For example:

// Given m, n, k, r, c:

// 3, 4, 2, 0, 0

// This input asks us to count the numbers of ways
// to move out of bounds in a 3 by 4 grid, starting at
// position (0, 0) if we could take at most 2 moves.

// The answer is 4 because of these 4 distinct ways:
//  1. left
//  2. up
//  3. right, up
//  4. down, left
// The function should return a number representing how many ways you can move out of bounds.
int breakingBoundaries(int, int, int, int, int);
int _breakingBoundaries(int, int, int, int, int, std::unordered_map<std::string, int> &);

int breakingBoundaries(int m, int n, int k, int r, int c) {
    // todo
    std::unordered_map<std::string, int> hash;
    return _breakingBoundaries(m, n, k, r, c, hash);
}
int _breakingBoundaries(int m, int n, int k, int r, int c, std::unordered_map<std::string, int> &hash) {

        return 0;

}

int main() {

    std::cout << breakingBoundaries(3, 4, 2, 0, 0) << std::endl;  // -> 4
    std::cout << breakingBoundaries(2, 2, 2, 1, 1) << std::endl;  // -> 6
    std::cout << breakingBoundaries(3, 4, 3, 0, 0) << std::endl;  // -> 11
    std::cout << breakingBoundaries(4, 4, 5, 2, 1) << std::endl;  // -> 160
    std::cout << breakingBoundaries(5, 6, 9, 2, 5) << std::endl;  // -> 11635
    std::cout << breakingBoundaries(6, 6, 12, 3, 4) << std::endl; // -> 871065
    std::cout << breakingBoundaries(6, 6, 15, 3, 4) << std::endl; // -> 40787896
    std::cout << breakingBoundaries(6, 8, 16, 2, 1) << std::endl; // -> 137495089

    return 0;
}