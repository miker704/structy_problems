#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits.h>
#include <math.h>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

// tree min value
// Write a function, treeMinValue, that takes in a pointer to the root of a binary tree that contains number values.
// The function should return the minimum value within the tree.

// You may assume that the input tree is non-empty.
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

// this is a binary tree not a binary search tree
// iterative dfs method
int treeMinValueDFS(Node *root) {
    // todo
        return 0;
}

int treeMinValueBFS(Node *root) {
    // todo
        return 0;
    

}

int treeMinValueRecurDFS(Node *root) {
return std::numeric_limits<int>::max();
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

    std::cout << treeMinValueDFS(&a) << std::endl;      // -> -2
    std::cout << treeMinValueRecurDFS(&a) << std::endl; // -> -2
    std::cout << treeMinValueBFS(&a) << std::endl;      // -> -2

    Node a1(5);
    Node b1(11);
    Node c1(3);
    Node d1(4);
    Node e1(14);
    Node f1(12);

    a1.left = &b1;
    a1.right = &c1;
    b1.left = &d1;
    b1.right = &e1;
    c1.right = &f1;

    //       5
    //    /    \
//   11     3
    //  / \      \
// 4   14     12

    // treeMinValue(&a1); // -> 3
    std::cout << treeMinValueDFS(&a1) << std::endl;      // -> 3
    std::cout << treeMinValueRecurDFS(&a1) << std::endl; // -> 3
    std::cout << treeMinValueBFS(&a1) << std::endl;      // -> 3

    Node a2(-1);
    Node b2(-6);
    Node c2(-5);
    Node d2(-3);
    Node e2(-4);
    Node f2(-13);
    Node g2(-2);
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
// -3   -4   -13
    //     /       \
//    -2       -2

    // treeMinValue(&a2); // -> -13
    std::cout << treeMinValueDFS(&a2) << std::endl;      // -> -13
    std::cout << treeMinValueRecurDFS(&a2) << std::endl; // -> -13
    std::cout << treeMinValueBFS(&a2) << std::endl;      // -> -13
    Node a3(42);

    //        42

    // treeMinValue(&a3); // -> 42
    std::cout << treeMinValueDFS(&a3) << std::endl;      // -> 42
    std::cout << treeMinValueRecurDFS(&a3) << std::endl; // -> 42
    std::cout << treeMinValueBFS(&a3) << std::endl;      // -> 42
    return 0;
}