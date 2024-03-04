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

// build tree in post
// Write a function, build_tree_in_post,
// that takes in a list of in-ordered values and a list
//  of post-ordered values for a binary tree. The function should build
//   a binary tree that has the given in-order and post-order traversal
//   structure. The function should return the root of this tree.

// You can assume that the values of inorder and postorder are unique.

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
Node *buildTreeInPost(std::vector<std::string>, std::vector<std::string>);
Node *buildTreeInPost(std::vector<std::string> inorder, std::vector<std::string> postorder) {
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

    printInorder(buildTreeInPost(
        std::vector<std::string>{"y", "x", "z"},
        std::vector<std::string>{"y", "z", "x"}));
    //       x
    //    /    \
//   y      z
    printInorder(buildTreeInPost(
        std::vector<std::string>{"d", "b", "e", "a", "f", "c", "g"},
        std::vector<std::string>{"d", "e", "b", "f", "g", "c", "a"}));
    //      a
    //    /    \
//   b      c
    //  / \    / \
// d   e  f   g
    printInorder(buildTreeInPost(
        std::vector<std::string>{"d", "b", "g", "e", "h", "a", "c", "f"},
        std::vector<std::string>{"d", "g", "h", "e", "b", "f", "c", "a"}));
    //      a
    //    /    \
//   b      c
    //  / \      \
// d   e      f
    //    / \
//    g  h
    printInorder(buildTreeInPost(
        std::vector<std::string>{"m", "n"},
        std::vector<std::string>{"m", "n"}));
    //       n
    //     /
    //    m
    printInorder(buildTreeInPost(
        std::vector<std::string>{"n", "m"},
        std::vector<std::string>{"m", "n"}));
    //     n
    //      \
//       m

    return 0;
}