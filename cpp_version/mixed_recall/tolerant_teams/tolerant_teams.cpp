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

// tolerant teams
// # Write a function, tolerantTeams, that takes in a vector of rivalries
// # as an argument. A rivalry is a pair of people who should not be placed
// #  on the same team. The function should return a boolean indicating whether or not it is possible to
// #  separate people into two teams, without rivals being on the same team.
// #  The two teams formed do not have to be the same size.

bool tolerantTeams(std::vector<std::tuple<std::string, std::string>>);
bool parseTeams(std::unordered_map<std::string, std::vector<std::string>>, std::unordered_map<std::string, bool> &, std::string, bool);
std::unordered_map<std::string, std::vector<std::string>> buildGraph(std::vector<std::tuple<std::string, std::string>>);

bool tolerantTeams(std::vector<std::tuple<std::string, std::string>> rivalries) {
    // TODO

    return true;
}

bool parseTeams(std::unordered_map<std::string, std::vector<std::string>> graph, std::unordered_map<std::string, bool> &colorMapping, std::string node, bool currColor) {

    
    return true;
}

std::unordered_map<std::string, std::vector<std::string>> buildGraph(std::vector<std::tuple<std::string, std::string>> rivalries) {
    std::unordered_map<std::string, std::vector<std::string>> graph;

    return graph;
}

int main() {

    std::cout << std::boolalpha << tolerantTeams(std::vector<std::tuple<std::string, std::string>>{{"philip", "seb"}, {"raj", "nader"}}) << std::endl; // -> 1 (true)
    std::cout << tolerantTeams(std::vector<std::tuple<std::string, std::string>>{
                     {"philip", "seb"},
                     {"raj", "nader"},
                     {"raj", "philip"},
                     {"seb", "raj"}})
              << std::endl; // -> 0 (false)
    std::cout << tolerantTeams(std::vector<std::tuple<std::string, std::string>>{
                     {"cindy", "anj"},
                     {"alex", "matt"},
                     {"alex", "cindy"},
                     {"anj", "matt"},
                     {"brando", "matt"}})
              << std::endl; // -> 1 (true)
    std::cout << tolerantTeams(std::vector<std::tuple<std::string, std::string>>{
                     {"alex", "anj"},
                     {"alex", "matt"},
                     {"alex", "cindy"},
                     {"anj", "matt"},
                     {"brando", "matt"}})
              << std::endl; // -> 0 (false)
    std::cout << tolerantTeams(std::vector<std::tuple<std::string, std::string>>{
                     {"alan", "jj"},
                     {"betty", "richard"},
                     {"jj", "simcha"},
                     {"richard", "christine"}})
              << std::endl; // -> 1 (true)
    std::cout << tolerantTeams(std::vector<std::tuple<std::string, std::string>>{
                     {"alan", "jj"},
                     {"betty", "richard"},
                     {"jj", "simcha"},
                     {"richard", "christine"}})
              << std::endl; // -> 1 (true)
    std::cout << tolerantTeams(std::vector<std::tuple<std::string, std::string>>{
                     {"alan", "jj"},
                     {"jj", "richard"},
                     {"betty", "richard"},
                     {"jj", "simcha"},
                     {"richard", "christine"}})
              << std::endl; // -> 1 (true)
    std::cout << tolerantTeams(std::vector<std::tuple<std::string, std::string>>{
                     {"alan", "jj"},
                     {"betty", "richard"},
                     {"betty", "christine"},
                     {"jj", "simcha"},
                     {"richard", "christine"}})
              << std::endl; // -> 0 (false)

    return 0;
}