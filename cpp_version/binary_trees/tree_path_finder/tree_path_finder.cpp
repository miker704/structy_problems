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

// tree path finder
// Write a function, pathFinder, that takes in a pointer to the root of a binary tree
// and a target value. The function should return a pointer to a vector representing
// a path to the target value.

// Be sure to dynamically allocate the vector with new.

// If the target value is not present in the tree, then return nullptr;

// You may assume that the tree contains unique values.

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
void printVector(std::vector<std::string>&);
std::vector<std::string> *pathFinder(Node *root, std::string targetVal);
std::vector<std::string> *_pathFinder(Node *root, std::string targetVal);
std::vector<std::string> *pathFinder(Node *root, std::string targetVal) {
        return nullptr;
    
}
std::vector<std::string> *_pathFinder(Node *root, std::string targetVal) {
    // todo
    
    return nullptr;
}
void printVector(std::vector<std::string>&vec) {
    std::cout <<vec.size()<< std::endl;

    if (vec.size() == 0) {
        return;
    }
    for (auto x : vec) {
        std::cout << x << " , ";
    }
    std::cout << std::endl;
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

    printVector(*pathFinder(&a, "e")); // -> [ "a", "b", "e" ]
    // Node a("a");
    // Node b("b");
    // Node c("c");
    // Node d("d");
    // Node e("e");
    // Node f("f");

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

    printVector(*pathFinder(&a, "p")); // -> null
    // Node a("a");
    // Node b("b");
    // Node c("c");
    // Node d("d");
    // Node e("e");
    // Node f("f");
    Node g("g");
    Node h("h");

    a.left = &b;
    a.right = &c;
    b.left = &d;
    b.right = &e;
    c.right = &f;
    e.left = &g;
    f.right = &h;

    //      a
    //    /   \
//   b     c
    //  / \     \
// d   e     f
    //    /       \
//   g         h

    printVector(*pathFinder(&a, "c")); // -> ["a", "c"]
    // Node a("a");
    // Node b("b");
    // Node c("c");
    // Node d("d");
    // Node e("e");
    // Node f("f");
    // Node g("g");
    // Node h("h");

    a.left = &b;
    a.right = &c;
    b.left = &d;
    b.right = &e;
    c.right = &f;
    e.left = &g;
    f.right = &h;

    //      a
    //    /   \
//   b     c
    //  / \     \
// d   e     f
    //    /       \
//   g         h

    printVector(*pathFinder(&a, "h")); // -> ["a", "c", "f", "h"]
    Node x("x");

    //      x

    printVector(*pathFinder(&x, "x"));      // -> ["x"]
    printVector(*pathFinder(nullptr, "x")); // -> null
    Node *root = new Node("0");
    Node *curr = root;
    for (int i = 1; i <= 6000; i += 1) {
        curr->right = new Node(std::to_string(i));
        curr = curr->right;
    }

    //      0
    //       \
//        1
    //         \
//          2
    //           \
//            3
    //             .
    //              .
    //               .
    //              5999
    //                \
//                6000

    printVector(*pathFinder(root, "3451")); // -> [0, 1, 2, 3, ..., 3450, 3451]

    return 0;
}