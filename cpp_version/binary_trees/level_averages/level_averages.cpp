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

// level averages
// Write a function,
// levelAverages, that takes in a pointer to the root of a binary tree that
//  contains number values. The function should return a vector containing the average
//   value of each level.

class Node {
public:
    float val;
    Node *left;
    Node *right;

    Node(float initialVal) {
        val = initialVal;
        left = nullptr;
        right = nullptr;
    }
};
void printVector(std::vector<float> vec);
float calc_Avg(std::vector<float>);
std::vector<float> levelAverages(Node *);
void _levelAverages(Node *, std::vector<std::vector<float>> &, int);

std::vector<float> levelAverages(Node *root) {
    // todo
    std::vector<float> result;

    return result;
}
void _levelAverages(Node *root, std::vector<std::vector<float>> &levels, int levelNum) {
        return;
    
}

float calc_Avg(std::vector<float> vec) {
return 0;
}

void printVector(std::vector<float> vec) {
    for (auto x : vec) {

        std::cout << x << " , ";
    }
    std::cout << std::endl;
}

int main() {
    Node a(3);
    Node b(11);
    Node c(4);
    Node d(4);
    Node e(-2);
    Node f(1);

    a.left = &b;
    a.right = &c;
    b.left = &d;
    b.right = &e;
    c.right = &f;

    //       3
    //    /    \
//   11     4
    //  / \      \
// 4   -2     1

    printVector(levelAverages(&a)); // -> [ 3, 7.5, 1 ]
    Node a1(5);
    Node b1(11);
    Node c1(54);
    Node d1(20);
    Node e1(15);
    Node f1(1);
    Node g1(3);

    a1.left = &b1;
    a1.right = &c1;
    b1.left = &d1;
    b1.right = &e1;
    e1.left = &f1;
    e1.right = &g1;

    //        5
    //     /    \
//    11    54
    //  /   \
// 20   15
    //      / \
//     1  3

    printVector(levelAverages(&a1)); // -> [ 5, 32.5, 17.5, 2 ]
    Node a2(-1);
    Node b2(-6);
    Node c2(-5);
    Node d2(-3);
    Node e2(0);
    Node f2(45);
    Node g2(-1);
    Node h2(-2);

    a2.left = &b2;
    a2.right = &c2;
    b2.left = &d2;
    b2.right = &e2;
    c2.right = &f2;
    e2.left = &g2;
    f2.right = &h2;

    //        -1
    //      /   \
//    -6    -5
    //   /  \     \
// -3   0     45
    //     /       \
//    -1       -2

    printVector(levelAverages(&a2)); // -> [ -1, -5.5, 14, -1.5 ]
    Node q(13);
    Node r(4);
    Node s(2);
    Node t(9);
    Node u(2);
    Node v(42);

    q.left = &r;
    q.right = &s;
    r.right = &t;
    t.left = &u;
    u.right = &v;

    //        13
    //      /   \
//     4     2
    //      \
//       9
    //      /
    //     2
    //    /
    //   42

    printVector(levelAverages(&q));      // -> [ 13, 3, 9, 2, 42 ]
    printVector(levelAverages(nullptr)); // -> [ ]

    return 0;
}