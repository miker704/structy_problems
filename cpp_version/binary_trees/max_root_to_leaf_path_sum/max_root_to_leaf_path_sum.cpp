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
// max root to leaf path sum
// Write a function, maxPathSum, that takes in a pointer to the root of a binary tree that contains number values.
//  The function should return the maximum sum of any root to leaf path within the tree.

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

int maxPathSum(Node *root) {
    // todo
    return std::numeric_limits<int>::min();

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

    std::cout<<maxPathSum(&a)<<std::endl; // -> 18


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

    // maxPathSum(&a1); // -> 59
    std::cout<<maxPathSum(&a1)<<std::endl; // -> 59

    Node a2(-1);
    Node b2(-6);
    Node c2(-5);
    Node d2(-3);
    Node e2(0);
    Node f2(-13);
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
// -3   0    -13
    //     /       \
//    -1       -2

    // maxPathSum(&a2); // -> -8
    std::cout<<maxPathSum(&a2)<<std::endl; // -> 8
    Node a3(42);

    //        42

    // maxPathSum(&a3); // -> 42
    std::cout<<maxPathSum(&a3)<<std::endl; // -> 42

    return 0;
}