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

// is binary search tree
// Write a function, isBinarySearchTree,
// that takes in the root of a binary tree. The function should return a boolean
//  indicating whether or not the tree satisfies the binary search tree property.

// A Binary Search Tree is a binary tree where all values within a node's left
// subtree are smaller than the node's value and all values in a node's right
// subtree are greater than or equal to the node's value.
// https://en.wikipedia.org/wiki/Binary_search_tree

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
bool isBinarySearchTree(Node *);
std::vector<int> inorderTraversal(Node *);
bool isSorted(std::vector<int>);
bool isBinarySearchTree(Node *root) {
    // todo
        return false;

}
std::vector<int> inorderTraversal(Node *root) {
        return std::vector<int>();
}

bool isSorted(std::vector<int> values) {
    return true;
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

    std::cout << std::boolalpha << isBinarySearchTree(&a) << std::endl; // -> true
    // Node a(12);
    // Node b(5);
    // Node c(18);
    // Node d(3);
    // Node e(15);
    // Node f(19);

    e.val = 15;
    a.left = &b;
    a.right = &c;
    b.left = &d;
    b.right = &e;
    c.right = &f;

    //      12
    //    /   \
//   5     18
    //  / \     \
// 3   15     19

    std::cout << isBinarySearchTree(&a) << std::endl; // -> false
    // Node a(12);
    // Node b(5);
    // Node c(19);
    // Node d(3);
    // Node e(9);
    // Node f(19);
    c.val = 19;
    e.val = 9;
    a.left = &b;
    a.right = &c;
    b.left = &d;
    b.right = &e;
    c.right = &f;

    //      12
    //    /   \
//   5     19
    //  / \     \
// 3   9     19

    std::cout << isBinarySearchTree(&a) << std::endl; // -> true
    // Node a(12);
    // Node b(5);
    // Node c(10);
    // Node d(3);
    // Node e(9);
    // Node f(19);
    c.val = 10;
    a.left = &b;
    a.right = &c;
    b.left = &d;
    b.right = &e;
    c.right = &f;

    //      12
    //    /   \
//   5     10
    //  / \     \
// 3   9     19

    std::cout << isBinarySearchTree(&a) << std::endl; // -> false
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

    std::cout << isBinarySearchTree(&q) << std::endl; // -> true

    return 0;
}