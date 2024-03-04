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

// semesters required
// Write a function, semestersRequired, that takes in a number of courses (n)
// and a list of prerequisites as arguments. Courses have ids ranging from 0 through n - 1.
//  A single prerequisite of {A, B} means that course A must be taken before course B. Return
//  the minimum number of semesters required to complete all n courses. There is no limit on how
//  many courses you can take in a single semester, as long the prerequisites of a course are
//  satisfied before taking it.

// Note that given prerequisite {A, B}, you cannot take course A and course B concurrently in the same
// semester. You must take A in some semester before B.

// You can assume that it is possible to eventually complete all courses.

std::unordered_map<int, std::vector<int>> buildGraph(std::vector<std::tuple<int, int>>, int);
int semestersRequired(int, std::vector<std::tuple<int, int>>);
int _semestersRequired(std::unordered_map<int, std::vector<int>>, std::unordered_map<int, int>, int);

int semestersRequired(int numCourses, std::vector<std::tuple<int, int>> prereqs) {
    // todo
    int max_courses = 0;



    return max_courses;
}

int _semestersRequired(std::unordered_map<int, std::vector<int>> graph, std::unordered_map<int, int> semesters, int courseId) {

    return semesters[courseId];
}

std::unordered_map<int, std::vector<int>> buildGraph(std::vector<std::tuple<int, int>> prereqs, int numCourses) {
    std::unordered_map<int, std::vector<int>> graph;


    return graph;
}

int main() {

    int numCourses = 6;
    std::vector<std::tuple<int, int>> prereqs{
        {1, 2},
        {2, 4},
        {3, 5},
        {0, 5}};
    std::cout << semestersRequired(numCourses, prereqs) << std::endl; // -> 3
    numCourses = 7;
    prereqs = {
        {4, 3},
        {3, 2},
        {2, 1},
        {1, 0},
        {5, 2},
        {5, 6}};
    std::cout << semestersRequired(numCourses, prereqs) << std::endl; // -> 5
    numCourses = 5;
    prereqs = {
        {1, 0},
        {3, 4},
        {1, 2},
        {3, 2}};
    std::cout << semestersRequired(numCourses, prereqs) << std::endl; // -> 2
    numCourses = 12;
    prereqs = {};
    std::cout << semestersRequired(numCourses, prereqs) << std::endl; // -> 1
    numCourses = 3;
    prereqs = {
        {0, 2},
        {0, 1},
        {1, 2}};
    std::cout << semestersRequired(numCourses, prereqs) << std::endl; // -> 3
    numCourses = 6;
    prereqs = {
        {3, 4},
        {3, 0},
        {3, 1},
        {3, 2},
        {3, 5}};
    std::cout << semestersRequired(numCourses, prereqs) << std::endl; // -> 2
    return 0;
}