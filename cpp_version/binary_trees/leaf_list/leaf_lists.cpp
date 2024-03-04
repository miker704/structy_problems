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

// leaf list
// Write a function, leafList, that takes in the root of a binary tree
// and returns an array containing the values of all leaf nodes in left-to-right order.

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

void printVector(std::vector<std::string>);
std::vector<std::string> leafList(Node *);
std::vector<std::string> _leafList(Node *, std::vector<std::string> &);

std::vector<std::string> leafListDepthFirstIter(Node *);

std::vector<std::string> leafList(Node *root) {
    // todo


    std::vector<std::string> vec;
    return _leafList(root, vec);
}
std::vector<std::string> _leafList(Node *root, std::vector<std::string> &vec) {
    // todo

    return vec;
}
std::vector<std::string> leafListDepthFirstIter(Node *root) {
    // todo

    std::vector<std::string> vec;


    return vec;
}

void printVector(std::vector<std::string> vec) {
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

    printVector(leafList(&a));               // -> [ "d", "e", "f" ]
    printVector(leafListDepthFirstIter(&a)); // -> [ "d", "e", "f" ]

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

    printVector(leafList(&a));               // -> [ "d", "g", "h" ]
    printVector(leafListDepthFirstIter(&a)); // -> [ "d", "g", "h" ]

    Node a1("5");
    Node b1("11");
    Node c1("54");
    Node d1("20");
    Node e1("15");
    Node f1("1");
    Node g1("3");

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

    printVector(leafList(&a1));               // -> [ "20", "1", "3", "54" ]
    printVector(leafListDepthFirstIter(&a1)); // -> [ "20", "1", "3", "54" ]

    Node x("x");

    //      x

    printVector(leafList(&x));               // -> [ "x" ]
    printVector(leafListDepthFirstIter(&x)); // -> [ "x" ]

    printVector(leafList(nullptr));               // -> [ ]
    printVector(leafListDepthFirstIter(nullptr)); // -> [ ]

    return 0;
}