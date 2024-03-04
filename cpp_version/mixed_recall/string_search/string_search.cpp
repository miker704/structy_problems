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

// string search
// Write a function, stringSearch, that takes in a grid of
// letters and a string as arguments. The function should return
// a boolean indicating whether or not the string can be found in
// the grid as a path by connecting horizontal or vertical positions.
// The path can begin at any position, but you cannot reuse a position more than once in the path.

// You can assume that all letters are lowercase and alphabetic.
bool stringSearch(std::vector<std::vector<char>>, std::string);
bool parseSearch(std::vector<std::vector<char>>, std::string, int, int);

bool stringSearch(std::vector<std::vector<char>> grid, std::string target) {
    // todo

    return false;
}

bool parseSearch(std::vector<std::vector<char>> grid, std::string target, int row, int col) {

        return true;

}

int main() {

    std::vector<std::vector<char>> grid{
        {'e', 'y', 'h', 'i', 'j'},
        {'q', 'x', 'e', 'r', 'p'},
        {'r', 'o', 'l', 'l', 'n'},
        {'p', 'r', 'x', 'o', 'h'},
        {'a', 'a', 'm', 'c', 'm'}};
    std::cout << std::boolalpha << stringSearch(grid, "hello") << std::endl; // -> 1 (true)
    grid = {
        {'e', 'y', 'h', 'i', 'j'},
        {'q', 'x', 'e', 'r', 'p'},
        {'r', 'o', 'l', 'l', 'n'},
        {'p', 'r', 'x', 'o', 'h'},
        {'a', 'a', 'm', 'c', 'm'}};
    std::cout << stringSearch(grid, "proxy") << std::endl; // -> 1 (true)
    grid = {
        {'e', 'y', 'h', 'i', 'j'},
        {'q', 'x', 'e', 'r', 'p'},
        {'r', 'o', 'l', 'l', 'n'},
        {'p', 'r', 'x', 'o', 'h'},
        {'a', 'a', 'm', 'c', 'm'}};
    std::cout << stringSearch(grid, "rolling") << std::endl; // -> 0 (false)
    grid = {
        {'e', 'y', 'h', 'i', 'j'},
        {'q', 'x', 'e', 'r', 'p'},
        {'r', 'o', 'l', 'l', 'n'},
        {'p', 'r', 'x', 'o', 'h'},
        {'a', 'a', 'm', 'z', 'm'}};
    std::cout << stringSearch(grid, "zoo") << std::endl; // -> 0 (false)
    grid = {
        {'q', 'w', 'h', 'i', 'j'},
        {'q', 'e', 'r', 'o', 'p'},
        {'h', 'y', 't', 'x', 'z'},
        {'k', 'o', 'm', 'o', 'p'}};
    std::cout << stringSearch(grid, "qwerty") << std::endl; // -> 1 (true)
    grid = {
        {'f', 'd', 'i', 'e', 'l', 'u', 'j', 't', 'q', 'v', 'o', 'p'},
        {'o', 'p', 'b', 'e', 'm', 'w', 'm', 'l', 'h', 'j', 's', 'v'},
        {'g', 'b', 's', 'm', 'i', 'w', 'w', 'h', 'l', 'm', 'l', 'n'},
        {'a', 'l', 's', 'k', 'p', 'c', 't', 'u', 'v', 'b', 'c', 'm'},
        {'m', 't', 'c', 'k', 'e', 'n', 'r', 'b', 'a', 'z', 'l', 'c'},
        {'q', 'm', 'a', 'p', 'a', 'p', 'i', 'i', 'u', 't', 'z', 'z'},
        {'d', 'u', 'z', 'o', 'e', 'r', 'a', 't', 't', 'c', 'q', 'k'},
        {'f', 'u', 'z', 'g', 'c', 'i', 'k', 'v', 'o', 'f', 's', 'w'},
        {'p', 'h', 'u', 'i', 'k', 'c', 'v', 'v', 'h', 'q', 'v', 'i'},
        {'l', 'q', 'w', 'f', 'y', 'g', 'w', 'f', 'a', 'u', 'x', 'q'}};
    std::cout << stringSearch(grid, "paprika") << std::endl; // -> 1 (true)
    grid = {
        {'s', 's', 's', 's', 's', 's', 's', 's', 's', 's', 's'},
        {'s', 's', 's', 's', 's', 's', 's', 's', 's', 's', 's'},
        {'s', 's', 's', 's', 's', 's', 's', 's', 's', 's', 's'},
        {'s', 's', 's', 's', 's', 's', 's', 's', 's', 's', 's'},
        {'s', 's', 's', 's', 's', 's', 's', 's', 's', 's', 's'},
        {'s', 's', 's', 's', 's', 's', 's', 's', 's', 's', 's'},
        {'s', 's', 's', 's', 's', 's', 's', 's', 's', 's', 's'},
        {'s', 's', 's', 's', 's', 's', 's', 's', 's', 'x', 'x'},
        {'s', 's', 's', 's', 's', 's', 's', 's', 's', 'x', 'h'}};
    std::cout << stringSearch(grid, "sssssssh") << std::endl; // -> 0 (false)
    grid = {
        {'a', 'b', 'a'},
        {'t', 'x', 'x'},
        {'x', 'x', 'x'}};
    std::cout << stringSearch(grid, "abat") << std::endl; // -> 1 (true)

    return 0;
}