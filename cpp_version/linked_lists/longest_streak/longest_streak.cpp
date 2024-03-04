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

// longest streak
// Write a function, longest_streak, that takes in the head of a linked list as an argument.
// The function should return the length of the longest consecutive
// streak of the same value within the list.

class Node {
public:
    int val;
    Node *next;

    Node(int initialVal) {
        val = initialVal;
        next = nullptr;
    }
};

int longestStreak(Node *head) {
    // todo

    int curr_Streak = 0;
    int max_Streak = 0;

    return max_Streak;
}


int main() {

    Node a(5);
    Node b(5);
    Node c(7);
    Node d(7);
    Node e(7);
    Node f(6);

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = &f;

    // 5 -> 5 -> 7 -> 7 -> 7 -> 6

    std::cout << longestStreak(&a) << std::endl; // 3

    Node a1(3);
    Node b1(3);
    Node c1(3);
    Node d1(3);
    Node e1(9);
    Node f1(9);

    a1.next = &b1;
    b1.next = &c1;
    c1.next = &d1;
    d1.next = &e1;
    e1.next = &f1;

    // 3 -> 3 -> 3 -> 3 -> 9 -> 9

    std::cout << longestStreak(&a1) << std::endl; // 4

    Node a2(9);
    Node b2(9);
    Node c2(1);
    Node d2(9);
    Node e2(9);
    Node f2(9);

    a2.next = &b2;
    b2.next = &c2;
    c2.next = &d2;
    d2.next = &e2;
    e2.next = &f2;

    // 9 -> 9 -> 1 -> 9 -> 9 -> 9

    std::cout << longestStreak(&a2) << std::endl; // 3

    Node a3(5);
    Node b3(5);

    a3.next = &b3;

    // 5 -> 5

    std::cout << longestStreak(&a3) << std::endl; // 2

    Node a4(4);

    // 4

    std::cout << longestStreak(&a4) << std::endl; // 1

    std::cout << longestStreak(nullptr) << std::endl; // 0

    return 0;
}