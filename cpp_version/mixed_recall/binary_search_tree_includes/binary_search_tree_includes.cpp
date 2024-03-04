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

// binary search tree includes
// Write a function, binarySearchTreeIncludes, that takes in the root of a binary search tree
// containing numbers and a target value. The function should return a boolean indicating whether
//  or not the target is found within the tree.

// A Binary Search Tree is a binary tree where all values within a node's left subtree are smaller
//  than the node's value and all values in a node's right subtree are greater than or equal to the node's value.
// https://en.wikipedia.org/wiki/Binary_search_tree
// Your solution should have a best case runtime of O(log(n)).

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

bool binarySearchTreeIncludes(Node *root, int targetVal) {

        return false;
}

int main() {

    Node a(12);
    Node b(5);
    Node c(18);
    Node d(3);
    Node e(9);
    Node f(19);

    a.left = &b;
    a.right = &c;
    b.left = &d;
    b.right = &e;
    c.right = &f;

    //      12
    //    /   \
//   5     18
    //  / \     \
// 3   9     19
    std::cout << std::boolalpha << binarySearchTreeIncludes(&a, 9) << std::endl; // -> true
    std::cout << binarySearchTreeIncludes(&a, 15) << std::endl;                  // -> false
    std::cout << binarySearchTreeIncludes(&a, 1) << std::endl;                   // -> false
    std::cout << binarySearchTreeIncludes(&a, 12) << std::endl;                  // -> true
    // tree q
    Node q(54);
    Node r(42);
    Node s(70);
    Node t(31);
    Node u(50);
    Node v(72);
    Node w(47);
    Node x(90);

    q.left = &r;
    q.right = &s;
    r.left = &t;
    r.right = &u;
    s.right = &v;
    u.left = &w;
    v.right = &x;

    //       54
    //     /    \
//    42     70
    //   / \      \
// 31   50     72
    //     /        \
//    47         90
    std::cout << binarySearchTreeIncludes(&q, 55) << std::endl;  // -> false
    std::cout << binarySearchTreeIncludes(&q, 47) << std::endl;  // -> true
    std::cout << binarySearchTreeIncludes(&q, 49) << std::endl;  // -> false
    std::cout << binarySearchTreeIncludes(&q, 70) << std::endl;  // -> true
    std::cout << binarySearchTreeIncludes(&q, 100) << std::endl; // -> false

    return 0;
}