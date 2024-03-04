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

// post order
// Write a function, postOrder, that takes in the root of a binary tree.
//  The function should return an array containing the post-ordered values of the tree.

// Post-order traversal is when nodes
//  are recursively visited in the order: left child, right child, self.
//  https://en.wikipedia.org/wiki/Tree_traversal#Post-order,_LRN

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
std::vector<std::string> postOrder(Node *);
void _postOrder(Node *, std::vector<std::string> &);
std::vector<std::string> postOrder(Node *root) {
    // todo
    std::vector<std::string> postOrderValues;
    return postOrderValues;
}
void _postOrder(Node *root, std::vector<std::string> &values) {
        return;
}

void printVector(std::vector<std::string> vec) {
    for (auto x : vec) {
        std::cout << x << " , ";
    }
    std::cout << std::endl;
}

int main() {

    Node x("x");
    Node y("y");
    Node z("z");

    x.left = &y;
    x.right = &z;

    //       x
    //    /    \
//   y      z

    printVector(postOrder(&x));
    // ["y", "z", "x"]
    Node a("a");
    Node b("b");
    Node c("c");
    Node d("d");
    Node e("e");
    Node f("f");
    Node g("g");

    a.left = &b;
    a.right = &c;
    b.left = &d;
    b.right = &e;
    c.left = &f;
    c.right = &g;

    //      a
    //    /    \
//   b      c
    //  / \    / \
// d   e  f   g

    printVector(postOrder(&a));
    // [ "d", "e", "b", "f", "g", "c", "a" ]
    //  Node a("a");
    //  Node b("b");
    //  Node c("c");
    //  Node d("d");
    //  Node e("e");
    //  Node f("f");
    //  Node g("g");
    Node h("h");

    a.left = &b;
    a.right = &c;
    b.left = &d;
    b.right = &e;
    c.right = &f;
    e.left = &g;
    e.right = &h;

    //      a
    //    /    \
//   b      c
    //  / \      \
// d   e      f
    //    / \
//    g  h

    printVector(postOrder(&a));
    // [ "d", "g", "h", "e", "b", "f", "c", "a" ]
    Node l("l");
    Node m("m");
    Node n("n");
    Node o("o");
    Node p("p");
    Node q("q");
    Node r("r");
    Node s("s");
    Node t("t");

    l.left = &m;
    l.right = &n;
    n.left = &o;
    n.right = &p;
    o.left = &q;
    o.right = &r;
    p.left = &s;
    p.right = &t;

    //        l
    //     /     \
//    m       n
    //         /    \
//         o     p
    //        / \   / \
//       q   r s   t

    printVector(postOrder(&l));
    // [ "m", "q", "r", "o", "s", "t", "p", "n", "l" ]
    printVector(postOrder(nullptr));
    // []

    return 0;
}