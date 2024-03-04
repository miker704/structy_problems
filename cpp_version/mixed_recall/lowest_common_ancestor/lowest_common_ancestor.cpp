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

// lowest common ancestor
// Write a function, lowestCommonAncestor, that takes in the root of
// a binary tree and two values. The function should return the value
// of the lowest common ancestor of the two values in the tree.

// You may assume that the tree values are unique and the tree is non-empty.

// Note that a node may be considered an ancestor of itself.

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
std::string lowestCommonAncestor(Node *, std::string, std::string);

std::vector<std::string> getPath(Node *, std::string);

std::string lowestCommonAncestor(Node *root, std::string val1, std::string val2) {
    // todo
    
    return "";
}

std::vector<std::string> getPath(Node *root, std::string val) {

    return std::vector<std::string>{};
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
    std::cout << lowestCommonAncestor(&a, "d", "h") << std::endl; // b
    std::cout << lowestCommonAncestor(&a, "d", "g") << std::endl; // b
    std::cout << lowestCommonAncestor(&a, "g", "c") << std::endl; // a
    std::cout << lowestCommonAncestor(&a, "b", "g") << std::endl; // b
    std::cout << lowestCommonAncestor(&a, "f", "c") << std::endl; // c
    // example tree

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
    std::cout << lowestCommonAncestor(&l, "r", "p") << std::endl; // n
    std::cout << lowestCommonAncestor(&l, "m", "o") << std::endl; // l
    std::cout << lowestCommonAncestor(&l, "t", "q") << std::endl; // n
    std::cout << lowestCommonAncestor(&l, "s", "p") << std::endl; // p

    return 0;
}