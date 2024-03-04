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

// prereqs possible
// Write a function, prereqs_possible, that takes in a number of courses (n) and prerequisites as
// arguments. Courses have ids ranging from 0 through n - 1. A single prerequisite of (A, B) means
//  that course A must be taken before
//  course B. The function should return a boolean indicating whether or not it is possible
//  to complete all courses.
bool prereqsPossible(int, std::vector<std::tuple<int, int>>);
std::unordered_map<int, std::vector<int>> buildGraph(int, std::vector<std::tuple<int, int>>);
bool traverseGraph(std::unordered_map<int, std::vector<int>>, std::unordered_set<int>, std::unordered_set<int>, int);
bool prereqsPossible(int numCourses, std::vector<std::tuple<int, int>> prereqs) {
    // todo

    

    return true;
}

std::unordered_map<int, std::vector<int>> buildGraph(int numCourses, std::vector<std::tuple<int, int>> prereqs) {
    std::unordered_map<int, std::vector<int>> graph;

    return graph;
}

bool traverseGraph(std::unordered_map<int, std::vector<int>> graph, std::unordered_set<int> black, std::unordered_set<int> grey, int node) {

    return false;
}

int main() {

    int numCourses = 6;
    std::vector<std::tuple<int, int>> prereqs{
        {0, 1},
        {2, 3},
        {0, 2},
        {1, 3},
        {4, 5}};
    std::cout << std::boolalpha << prereqsPossible(numCourses, prereqs) << std::endl; // -> 1 (true)
    numCourses = 6;
    prereqs = {
        {0, 1},
        {2, 3},
        {0, 2},
        {1, 3},
        {4, 5},
        {3, 0}};
    std::cout << prereqsPossible(numCourses, prereqs) << std::endl; // -> 0 (false)
    numCourses = 5;
    prereqs = {
        {2, 4},
        {1, 0},
        {0, 2},
        {0, 4}};
    std::cout << prereqsPossible(numCourses, prereqs) << std::endl; // -> 1 (true)
    numCourses = 6;
    prereqs = {
        {2, 4},
        {1, 0},
        {0, 2},
        {0, 4},
        {5, 3},
        {3, 5}};
    std::cout << prereqsPossible(numCourses, prereqs) << std::endl; // -> 0 (false)
    numCourses = 8;
    prereqs = {
        {1, 0},
        {0, 6},
        {2, 0},
        {0, 5},
        {3, 7},
        {4, 3}};
    std::cout << prereqsPossible(numCourses, prereqs) << std::endl; // -> 1 (true)
    numCourses = 8;
    prereqs = {
        {1, 0},
        {0, 6},
        {2, 0},
        {0, 5},
        {3, 7},
        {7, 4},
        {4, 3}};
    std::cout << prereqsPossible(numCourses, prereqs) << std::endl; // -> 0 (false)
    numCourses = 42;
    prereqs = {{6, 36}};
    std::cout << prereqsPossible(numCourses, prereqs) << std::endl; // -> 1 (true)
    return 0;
}