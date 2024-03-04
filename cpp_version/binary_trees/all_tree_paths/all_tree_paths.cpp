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

// all tree paths
// Write a function, all_tree_paths, that takes in the root of a binary tree.
//  The function should return a 2-Dimensional list where each subarray represents a
//  root-to-leaf path in the tree.

// The order within an individual path must start at the root and end at the leaf,
// but the relative order among paths in the outer list does not matter.

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
std::vector<std::vector<std::string>> allTreePaths(Node *root);
std::vector<std::string> generatePath(Node *curr, std::unordered_map<Node *, Node *> parent);

void printVector(std::vector<std::vector<std::string>>);

std::vector<std::vector<std::string>> allTreePaths(Node *root) {
    // todo
        return std::vector<std::vector<std::string>>();

}

std::vector<std::string> generatePath(Node *curr, std::unordered_map<Node *, Node *> parent) {
    std::vector<std::string> path;
    return path;
}

void printVector(std::vector<std::vector<std::string>> vec) {
    for (auto x : vec) {
        std::cout << "{ ";

        for (auto y : x) {

            std::cout << y << " , ";
        }
        std::cout << " } , ";
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

    /*
        a - > !left.next ||! right.next


    */

    printVector(allTreePaths(&a)); // ->
    // [
    //   [ "a", "b", "d" ],
    //   [ "a", "b", "e" ],
    //   [ "a", "c", "f" ]
    // ]
    // Node a("a");
    // Node b("b");
    // Node c("c");
    // Node d("d");
    // Node e("e");
    // Node f("f");
    Node g("g");
    Node h("h");
    Node i("i");

    a.left = &b;
    a.right = &c;
    b.left = &d;
    b.right = &e;
    c.right = &f;
    e.left = &g;
    e.right = &h;
    f.left = &i;

    //         a
    //      /    \
//     b      c
    //   /  \      \
//  d    e      f
    //      / \    /
    //     g  h   i

    printVector(allTreePaths(&a)); // ->
    // [
    //   [ "a", "b", "d" ],
    //   [ "a", "b", "e", "g" ],
    //   [ "a", "b", "e", "h" ],
    //   [ "a", "c", "f", "i" ]
    // ]
    Node q("q");
    Node r("r");
    Node s("s");
    Node t("t");
    Node u("u");
    Node v("v");

    q.left = &r;
    q.right = &s;
    r.right = &t;
    t.left = &u;
    u.right = &v;

    //      q
    //    /   \
//   r     s
    //    \
//     t
    //    /
    //   u
    //  /
    // v

    printVector(allTreePaths(&q)); // ->
    // [
    //   [ "q", "r", "t", "u", "v" ],
    //   [ "q", "s" ]
    // ]
    Node z("z");

    //      z

    printVector(allTreePaths(&z)); // ->
                                   // [
                                   //   ["z"]
                                   // ]

    return 0;
}