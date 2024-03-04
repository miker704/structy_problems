#include <cmath>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>
// tree sum
// Write a function, treeSum, that takes in a pointer to the root of a binary tree
// that contains number values. The function should return the total sum of all values in the tree.
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

int treeSum(Node *root) {
    // todo
    int sum = 0;


    return sum;
}

int treeSumRecur(Node *root) {
    // todo
        return 0;
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

    std::cout << treeSum(&a) << std::endl;      // -> 21
    std::cout << treeSumRecur(&a) << std::endl; // -> 21

    Node a1(1);
    Node b1(6);
    Node c1(0);
    Node d1(3);
    Node e1(-6);
    Node f1(2);
    Node g1(2);
    Node h1(2);

    a1.left = &b1;
    a1.right = &c1;
    b1.left = &d1;
    b1.right = &e1;
    c1.right = &f1;
    e1.left = &g1;
    f1.right = &h1;

    //      1
    //    /   \
//   6     0
    //  / \     \
// 3   -6    2
    //    /       \
//   2         2

    std::cout << treeSum(&a1) << std::endl;      // -> 10
    std::cout << treeSumRecur(&a1) << std::endl; // -> 10

    std::cout << treeSum(nullptr) << std::endl;      // -> 0
    std::cout << treeSumRecur(nullptr) << std::endl; // -> 0

    return 0;
}