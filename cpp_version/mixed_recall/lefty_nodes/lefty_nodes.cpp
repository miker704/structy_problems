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

// lefty nodes
// Write a function, leftyNodes, that takes in the root of a binary tree.
//  The function should return an vector containing the left-most value on every
//  level of the tree. The vector must be ordered in a top-down fashion where the
//   root is the first element.

// Note that the left-most node on a level may not necessarily be a left child.

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
std::vector<std::string> leftyNodes(Node *);
void _leftyNodes(Node *, int, std::vector<std::string> &);

std::vector<std::string> leftyNodes(Node *root) {
    // todo

    std::vector<std::string> values;
    return values;
}

void _leftyNodes(Node *root, int level, std::vector<std::string> &values) {
    // todo
        return;
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
// d   e      fs
    //    / \
//    g  h

    printVector(leftyNodes(&a)); // [ "a", "b", "d", "g" ]
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

    printVector(leftyNodes(&u)); // [ "u", "t", "r", "q" ]
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

    printVector(leftyNodes(&l1)); // [ "l", "m", "o", "q" ]
    Node n2("n");
    Node y1("y");
    Node c1("c");

    n2.left = &y1;
    n2.right = &c1;

    //       n
    //     /   \
//    y     c

    printVector(leftyNodes(&n2)); // [ "n", "y" ]
    Node i2("i");
    Node n3("n");
    Node s2("s");
    Node t2("t");

    i2.right = &n3;
    n3.left = &s2;
    n3.right = &t2;

    //       i
    //        \
//         n
    //        / \
//       s   t

    printVector(leftyNodes(&i2));     // [ "i", "n", "s" ]
    printVector(leftyNodes(nullptr)); // [ ]

    return 0;
}