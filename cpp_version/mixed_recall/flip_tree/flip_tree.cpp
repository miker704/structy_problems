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

// flip tree
// Write a function, flipTree, that takes in the root of a binary tree.
//  The function should flip the binary tree, turning left subtrees into right
//  subtrees and vice-versa. This flipping should occur in-place by modifying
//  the original tree. The function should return the root of the tree.

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
Node *flipTree(Node *);
Node *_flipTree(Node *);
std::vector<std::string> inorderPrint(Node *);

Node *flipTree(Node *root) {
    // todo
    return _flipTree(root);
}

Node *_flipTree(Node *root) {
    // todo

    return root;
}

std::vector<std::string> inorderPrint(Node *root) {
    // todo
        return std::vector<std::string>{};
}
void printVector(std::vector<std::string> vec) {
    std::cout << "{ " << std::endl;
    for (auto x : vec) {
        std::cout << x << " , ";
    }
    std::cout << " }" << std::endl;
}

int main() {

    Node a("a");
    Node b("b");
    Node c("c");
    Node d("d");
    Node e("e");
    Node f("f");
    Node g("g");
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

    // std::cout << flipTree(&a) << std::endl;
    printVector(inorderPrint(flipTree(&a)));

    //       a
    //    /    \
//   c      b
    //  /     /   \
// f     e    d
    //     /  \
//    h    g
    Node u("u");
    Node t("t");
    Node s("s");
    Node r("r");
    Node q("q");
    Node p("p");

    u.left = &t;
    u.right = &s;
    s.right = &r;
    r.left = &q;
    r.right = &p;

    //     u
    //  /    \
// t      s
    //         \
//         r
    //        / \
//        q  p

    // std::cout << flipTree(&u) << std::endl;
    printVector(inorderPrint(flipTree(&u)));

    //           u
    //        /    \
//       s      t
    //      /
    //     r
    //    / \
//   p  q
    Node l1("l");
    Node m1("m");
    Node n1("n");
    Node o1("o");
    Node p1("p");
    Node q1("q");
    Node r1("r");
    Node s1("s");
    Node t1("t");

    l1.left = &m1;
    l1.right = &n1;
    n1.left = &o1;
    n1.right = &p1;
    o1.left = &q1;
    o1.right = &r1;
    p1.left = &s1;
    p1.right = &t1;

    //        l
    //     /     \
//    m       n
    //         /    \
//         o     p
    //        / \   / \
//       q   r s   t

    // std::cout << flipTree(&l1) << std::endl;
    printVector(inorderPrint(flipTree(&l1)));

    //             l
    //         /      \
//        n        m
    //      /  \
//    p     o
    //  / \    / \
// t   s  r   q
    Node n2("n");
    Node y1("y");
    Node c1("c");

    n2.left = &y1;
    n2.right = &c1;

    //       n
    //     /   \
//    y     c

    // std::cout << flipTree(&n2) << std::endl;
    printVector(inorderPrint(flipTree(&n2)));

    //       n
    //     /   \
//    c     y

    return 0;
}