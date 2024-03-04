#include <cmath>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>
// breadth first values
// Write a function, breadthFirstValues, that takes in a pointer to the root of a binary tree.
// The function should return a vector containing all values of the tree in breadth-first order.

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

std::vector<std::string> breadthFirstValues(Node *);
// std::vector<std::string> breadthFirstValuesRecur(Node *);
// std::vector<std::string> _breadthFirstValuesRecur(Node *, std::vector<std::string> &);
void print_bfs(std::vector<std::string>);

std::vector<std::string> breadthFirstValues(Node *root) {
    std::vector<std::string>tree_nodes;
    
    // todo
    return tree_nodes;
}

// std::vector<std::string> breadthFirstValuesRecur(Node *root) {
//     std::vector<std::string> tree_nodes;
//     return _breadthFirstValuesRecur(root, tree_nodes);
// }

// std::vector<std::string> _breadthFirstValuesRecur(Node *root, std::vector<std::string> &tree_nodes) {
// }

void print_bfs(std::vector<std::string> tree_nodes) {
    for (auto i : tree_nodes) {
        std::cout << " " << i << " ";
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

    print_bfs(breadthFirstValues(&a));
    // print_bfs(breadthFirstValuesRecur(&a));

    //    -> ["a", "b", "c", "d", "e", "f"]
    Node a1("a");
    Node b1("b");
    Node c1("c");
    Node d1("d");
    Node e1("e");
    Node f1("f");
    Node g1("g");
    Node h1("h");

    a1.left = &b1;
    a1.right = &c1;
    b1.left = &d1;
    b1.right = &e1;
    c1.right = &f1;
    e1.left = &g1;
    f1.right = &h1;

    //      a
    //    /   \
//   b     c
    //  / \     \
// d   e     f
    //    /       \
//   g         h
    print_bfs(breadthFirstValues(&a1));
    // print_bfs(breadthFirstValuesRecur(&a1));
    // breadthFirstValues(&a1);
    //   -> ["a", "b", "c", "d", "e", "f", "g", "h"]
    Node a0("a");

    //      a
    print_bfs(breadthFirstValues(&a0));
    // print_bfs(breadthFirstValuesRecur(&a0));
    // breadthFirstValues(&a2);
    //    -> ["a"]
    Node a2("a");
    Node b2("b");
    Node c2("c");
    Node d2("d");
    Node e2("e");
    Node x2("x");

    a2.right = &b2;
    b2.left = &c2;
    c2.left = &x2;
    c2.right = &d2;
    d2.right = &e2;

    //      a
    //       \
//        b
    //       /
    //      c
    //    /  \
//   x    d
    //         \
//          e
    print_bfs(breadthFirstValues(&a2));
    // print_bfs(breadthFirstValuesRecur(&a2));
    // breadthFirstValues(&a2);
    //    -> ["a", "b", "c", "x", "d", "e"]
    print_bfs(breadthFirstValues(nullptr));
    // print_bfs(breadthFirstValuesRecur(nullptr));
    // breadthFirstValues(nullptr);
    //    -> []

    return 0;
}