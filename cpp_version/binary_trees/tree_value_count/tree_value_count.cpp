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

// tree value count
// Write a function, treeValueCount, that takes in the root of a binary tree and a target value.
// The function should return the number of times that the target occurs in the tree.

class Node {
public:
    int val;
    Node *left;
    Node *right;

    Node(int initialVal) {
        val = initialVal;
        left = nullptr;
        right = nullptr;
    }
};

int treeValueCount(Node *root, int targetVal) {
    // todo
        return 0;
}

int treeValueCountBreadth(Node *root, int targetVal) {
    // todo

    int match = 0;

    return match;
}

int main() {

    Node a(12);
    Node b(6);
    Node c(6);
    Node d(4);
    Node e(6);
    Node f(12);

    a.left = &b;
    a.right = &c;
    b.left = &d;
    b.right = &e;
    c.right = &f;

    //      12
    //    /   \
//   6     6
    //  / \     \
// 4   6     12

    std::cout << treeValueCount(&a, 6) << std::endl;        // -> 3
    std::cout << treeValueCountBreadth(&a, 6) << std::endl; // -> 3

    //     Node a(12);
    // Node b(6);
    // Node c(6);
    // Node d(4);
    // Node e(6);
    // Node f(12);

    // a.left = &b;
    // a.right = &c;
    // b.left = &d;
    // b.right = &e;
    // c.right = &f;

    //      12
    //    /   \
//   6     6
    //  / \     \
// 4  6     12

    std::cout << treeValueCount(&a, 12) << std::endl;
    std::cout << treeValueCountBreadth(&a, 12) << std::endl;

    ; // -> 2
    Node a1(7);
    Node b1(5);
    Node c1(1);
    Node d1(1);
    Node e1(8);
    Node f1(7);
    Node g1(1);
    Node h1(1);

    a1.left = &b1;
    a1.right = &c1;
    b1.left = &d1;
    b1.right = &e1;
    c1.right = &f1;
    e1.left = &g1;
    f1.right = &h1;

    //      7
    //    /   \
//   5     1
    //  / \     \
// 1   8     7
    //    /       \
//   1         1
    std::cout << treeValueCount(&a1, 1) << std::endl;        // -> 4
    std::cout << treeValueCountBreadth(&a1, 1) << std::endl; // -> 4

    // Node a(7);
    // Node b(5);
    // Node c(1);
    // Node d(1);
    // Node e(8);
    // Node f(7);
    // Node g(1);
    // Node h(1);

    // a.left = &b;
    // a.right = &c;
    // b.left = &d;
    // b.right = &e;
    // c.right = &f;
    // e.left = &g;
    // f.right = &h;

    //      7
    //    /   \
//   5     1
    //  / \     \
// 1   8     7
    //    /       \
//   1         1

    std::cout << treeValueCount(&a1, 9) << std::endl;        // -> 0
    std::cout << treeValueCountBreadth(&a1, 9) << std::endl; // -> 0

    std::cout << treeValueCount(nullptr, 42) << std::endl;        // -> 0
    std::cout << treeValueCountBreadth(nullptr, 42) << std::endl; // -> 0

    return 0;
}