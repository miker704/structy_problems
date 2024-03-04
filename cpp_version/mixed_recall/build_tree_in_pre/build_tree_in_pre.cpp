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

// build tree in pre
// Write a function, buildTreeInPre, that takes in a vector of in-ordered values
//  and a vector of pre-ordered values for a binary tree. The function should build
//  a binary tree that has the given in-order and pre-order traversal structure.
//  The function should return the root of this tree.

// You can assume that the values of inorder and preorder are unique.

// Be sure to allocate the nodes of your tree dynamically with the new keyword.

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

void printInorder(Node *);

Node *buildTreeInPre(std::vector<std::string> inorder, std::vector<std::string> preorder) {
    // todo
        return nullptr;
}

void printInorder(Node *root) {
    if (root != nullptr) {
        printInorder(root->left);
        std::cout << " " << root->val << " " << std::endl;
        printInorder(root->right);
    } else {
        std::cout << std::endl;
    }
}

int main() {

    printInorder(buildTreeInPre(
        std::vector<std::string>{"z", "y", "x"},
        std::vector<std::string>{"y", "z", "x"}));
    //       y
    //    /    \
//   z      x
    printInorder(buildTreeInPre(
        std::vector<std::string>{"y", "z", "x"},
        std::vector<std::string>{"y", "x", "z"}));
    //       y
    //        \
//         x
    //        /
    //       z
    printInorder(buildTreeInPre(
        std::vector<std::string>{"d", "b", "g", "e", "h", "a", "c", "f"},
        std::vector<std::string>{"a", "b", "d", "e", "g", "h", "c", "f"}));
    //       a
    //    /    \
//   b      c
    //  / \      \
// d   e      f
    //    / \
//    g  h
    printInorder(buildTreeInPre(
        std::vector<std::string>{"t", "u", "s", "q", "r", "p"},
        std::vector<std::string>{"u", "t", "s", "r", "q", "p"}));
    //     u
    //  /    \
// t      s
    //         \
//         r
    //        / \
//        q  p
    printInorder(buildTreeInPre(
        std::vector<std::string>{"m", "l", "q", "o", "r", "n", "s", "p", "t"},
        std::vector<std::string>{"l", "m", "n", "o", "q", "r", "p", "s", "t"}));
    //        l
    //     /     \
//    m       n
    //         /    \
//         o     p
    //        / \   / \
//       q   r s   t

    return 0;
}