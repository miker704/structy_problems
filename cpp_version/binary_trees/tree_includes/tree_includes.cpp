#include <cmath>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

// tree includes
// Write a function, treeIncludes, that takes in a pointer to the root of a binary tree and a target value.
// The function should return a boolean indicating whether or not the value is contained in the tree.


//the function is a bit different because we are using strings as values however this method should work for any data type

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

bool treeIncludes(Node *root, std::string targetVal) {
    // todo

    return false;
}

bool treeIncludesRecur(Node *root, std::string targetVal) {
    return false;

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

    std::cout << std::boolalpha << treeIncludes(&a, "e") << std::endl; // -> 1 (true)
    std::cout << treeIncludesRecur(&a, "e") << std::endl;              // -> 1 (true)

    Node a1("a");
    Node b1("b");
    Node c1("c");
    Node d1("d");
    Node e1("e");
    Node f1("f");

    a1.left = &b1;
    a1.right = &c1;
    b1.left = &d1;
    b1.right = &e1;
    c1.right = &f1;

    //      a
    //    /   \
//   b     c
    //  / \     \
// d   e     f

    std::cout << treeIncludes(&a1, "a") << std::endl;      // -> 1 (true)
    std::cout << treeIncludesRecur(&a1, "a") << std::endl; // -> 1 (true)

    Node a2("a");
    Node b2("b");
    Node c2("c");
    Node d2("d");
    Node e2("e");
    Node f2("f");

    a2.left = &b2;
    a2.right = &c2;
    b2.left = &d2;
    b2.right = &e2;
    c2.right = &f2;

    //      a
    //    /   \
//   b     c
    //  / \     \
// d   e     f

    std::cout << treeIncludes(&a2, "n") << std::endl;      // -> 0 (false)
    std::cout << treeIncludesRecur(&a2, "n") << std::endl; // -> 0 (false)

    Node a3("a");
    Node b3("b");
    Node c3("c");
    Node d3("d");
    Node e3("e");
    Node f3("f");
    Node g3("g");
    Node h3("h");

    a3.left = &b3;
    a3.right = &c3;
    b3.left = &d3;
    b3.right = &e3;
    c3.right = &f3;
    e3.left = &g3;
    f3.right = &h3;

    //      a
    //    /   \
//   b     c
    //  / \     \
// d   e     f
    //    /       \
//   g         h

    std::cout << treeIncludes(&a3, "f") << std::endl;      // -> 1 (true)
    std::cout << treeIncludesRecur(&a3, "f") << std::endl; // -> 1 (true)

    Node a4("a");
    Node b4("b");
    Node c4("c");
    Node d4("d");
    Node e4("e");
    Node f4("f");
    Node g4("g");
    Node h4("h");

    a4.left = &b4;
    a4.right = &c4;
    b4.left = &d4;
    b4.right = &e4;
    c4.right = &f4;
    e4.left = &g4;
    f4.right = &h4;

    //      a
    //    /   \
//   b     c
    //  / \     \
// d   e     f
    //    /       \
//   g         h

    std::cout << treeIncludes(&a4, "p") << std::endl;      // -> 0 (false)
    std::cout << treeIncludesRecur(&a4, "p") << std::endl; // -> 0 (false)

    std::cout << treeIncludes(nullptr, "b") << std::endl;      // -> 0 (false)
    std::cout << treeIncludesRecur(nullptr, "b") << std::endl; // -> 0 (false)

    return 0;
}