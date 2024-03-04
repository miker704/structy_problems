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

// bottom right value
// Write a function, bottomRightValue, that takes in a pointer to the root of a binary tree.
// The function should return the right-most value in the bottom-most level of the tree.

// You may assume that the input tree is non-empty.

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

std::string bottomRightValue(Node *root) {
    // todo
    
    Node *curr = nullptr;


    return curr->val;
}

int main() {

    Node a("3");
    Node b("11");
    Node c("10");
    Node d("4");
    Node e("-2");
    Node f("1");

    a.left = &b;
    a.right = &c;
    b.left = &d;
    b.right = &e;
    c.right = &f;

    //       3
    //    /    \
//   11     10
    //  / \      \
// 4   -2     1

    std::cout << bottomRightValue(&a) << std::endl; // -> "1"
    Node a1("-1");
    Node b1("-6");
    Node c1("-5");
    Node d1("-3");
    Node e1("-4");
    Node f1("-13");
    Node g1("-2");
    Node h1("6");

    a1.left = &b1;
    a1.right = &c1;
    b1.left = &d1;
    b1.right = &e1;
    c1.right = &f1;
    e1.left = &g1;
    e1.right = &h1;

    //        -1
    //      /   \
//    -6    -5
    //   /  \     \
// -3   -4   -13
    //     / \       
//    -2  6

    std::cout << bottomRightValue(&a1) << std::endl; // -> "6"
    // Node a("-1");
    // Node b("-6");
    // Node c("-5");
    // Node d("-3");
    // Node e("-4");
    // Node f("-13");
    // Node g("-2");
    // Node h("6");
    Node i1("7");

    // a.left = &b;
    // a.right = &c;
    // b.left = &d;
    // b.right = &e;
    // c.right = &f;
    // e.left = &g;
    // e.right = &h;
    f1.left = &i1;

    //        -1
    //      /   \
//    -6    -5
    //   /  \     \
// -3   -4   -13
    //     / \    /
    //    -2  6  7

    std::cout << bottomRightValue(&a1) << std::endl; // -> "7"
    Node a2("a");
    Node b2("b");
    Node c2("c");
    Node d2("d");
    Node e2("e");
    Node f2("f");

    a2.left = &b2;
    a2.right = &c2;
    b2.right = &d2;
    d2.left = &e2;
    e2.right = &f2;

    //      a
    //    /   \ 
//   b     c
    //    \
//     d
    //    /
    //   e
    //  /
    // f

    std::cout << bottomRightValue(&a2) << std::endl; // -> "f"
    Node a3("42");

    //      42

    std::cout << bottomRightValue(&a3) << std::endl; // -> "42"
    return 0;
}