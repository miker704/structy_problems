#include <cmath>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>
// depth first values
// Write a function, depthFirstValues, that takes in a pointer to the root of a binary tree.
//  The function should return a vector containing all values of the tree in depth-first order.

// Hey. This is our first binary tree problem, so you should be liberal with
// watching the Approach and Walkthrough. Be productive, not stubborn. -AZ

// note when ever we are traversing a tree if regardless or inorder, pre, post out, dfs bfs if done iteratively all
// require a stack or some container for the nodes will recursion methods do not need one unless the values must be
// used for something else.

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

std::vector<std::string> depthFirstValues(Node *);
void print_inorder(Node *);
void print_dfs_order(Node *);
void print_dfs_vector(std::vector<std::string>);
std::vector<std::string> depthFirstValuesRecur(Node *);
std::vector<std::string> _depthFirstValuesRecur(Node *, std::vector<std::string> &);
// iterative method
std::vector<std::string> depthFirstValues(Node *root) {
    // todo
    std::vector<std::string> tree_nodes;

    return tree_nodes;
}

void print_inorder(Node *root) {
    if (root != nullptr) {
        print_inorder(root->left);
        std::cout << " " << root->val << " " << std::endl;
        print_inorder(root->right);
    }
}

void print_dfs_order(Node *root) {
    if (root != nullptr) {
        std::cout << " " << root->val << " " << std::endl;
        print_dfs_order(root->left);
        print_dfs_order(root->right);
    }
}

void print_dfs_vector(std::vector<std::string> tree_nodes) {
    for (auto i : tree_nodes) {
        std::cout << " " << i << " ";
    }
    std::cout << std::endl;
}

// recursion method
std::vector<std::string> depthFirstValuesRecur(Node *root) {
    // todo
    std::vector<std::string> tree_nodes;
    return _depthFirstValuesRecur(root, tree_nodes);
    // return tree_nodes;
}
std::vector<std::string> _depthFirstValuesRecur(Node *root, std::vector<std::string> &tree_nodes) {
    // todo



    return tree_nodes;
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

    print_dfs_vector(depthFirstValues(&a));
    print_dfs_vector(depthFirstValuesRecur(&a));

    // print_inorder(&a);
    // print_dfs_order(&a);

    //    -> ["a", "b", "d", "e", "c", "f"]
    Node a1("a");
    Node b1("b");
    Node c1("c");
    Node d1("d");
    Node e1("e");
    Node f1("f");
    Node g1("g");

    a1.left = &b1;
    a1.right = &c1;
    b1.left = &d1;
    b1.right = &e1;
    c1.right = &f1;
    e1.left = &g1;

    //      a
    //    /   \
//   b     c
    //  / \     \
// d   e     f
    //    /
    //   g
    print_dfs_vector(depthFirstValues(&a1));
    print_dfs_vector(depthFirstValuesRecur(&a1));
    // depthFirstValues(&a1);
    //    -> ["a", "b", "d", "e", "g", "c", "f"]
    Node a2("a");
    //      a
    // depthFirstValues(&a2);
    //    -> ["a"]
    print_dfs_vector(depthFirstValues(&a2));
    print_dfs_vector(depthFirstValuesRecur(&a2));
    Node a3("a");
    Node b3("b");
    Node c3("c");
    Node d3("d");
    Node e3("e");

    a3.right = &b3;
    b3.left = &c3;
    c3.right = &d3;
    d3.right = &e3;

    //      a
    //       \
//        b
    //       /
    //      c
    //       \
//        d
    //         \
//          e
    print_dfs_vector(depthFirstValues(&a3));
    print_dfs_vector(depthFirstValuesRecur(&a3));
    // depthFirstValues(&a3);
    //    -> ["a", "b", "c", "d", "e"]
    // depthFirstValues(nullptr);
    //    -> []
    print_dfs_vector(depthFirstValues(nullptr));
    print_dfs_vector(depthFirstValuesRecur(nullptr));
    return 0;
}