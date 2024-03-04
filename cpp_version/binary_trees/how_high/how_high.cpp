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

// how high
// Write a function, howHigh, that takes in the root of a binary tree.
// The function should return a number representing the height of the tree.

// The height of a binary tree is defined as the maximal number of edges from the root node to any leaf node.

// If the tree is empty, return -1.

class Node {
public:
    std::string val;
    Node *left;
    Node *right;

    Node(std::string initialVal) {
        val = initialVal;
        left = nullptr;
        right = nullptr;
    }
};

int howHigh(Node *root) {
    // todo


    return 1 
}

int main() {

    Node a("a");
    Node b("b");
    Node c("c");
    Node d("d");
    Node e("e");
    Node f("f");

    a.left = &b;
    a.right = &c;
    b.left = &d;
    b.right = &e;
    c.right = &f;

    //      a
    //    /   \
//   b     c
    //  / \     \
// d   e     f

    std::cout << howHigh(&a) << std::endl; // -> 2
    // Node a("a");
    // Node b("b");
    // Node c("c");
    // Node d("d");
    // Node e("e");
    // Node f("f");
    Node g("g");

    a.left = &b;
    a.right = &c;
    b.left = &d;
    b.right = &e;
    c.right = &f;
    e.left = &g;

    //      a
    //    /   \
//   b     c
    //  / \     \
// d   e     f
    //    /
    //   g

    std::cout << howHigh(&a) << std::endl; // -> 3
    // Node a("a");
    // Node c("c");

    a.right = &c;
    a.left = nullptr;
    c.left = nullptr;
    c.right = nullptr;

    //      a
    //       \
//        c

    std::cout << howHigh(&a) << std::endl; // -> 1
    // Node a("a");
    a.left = nullptr;
    a.right = nullptr;

    //      a

    std::cout << howHigh(&a) << std::endl;      // -> 0
    std::cout << howHigh(nullptr) << std::endl; // -> -1
    return 0;
}