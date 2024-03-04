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

// tree levels
// Write a function,
// treeLevels, that takes in a pointer to the root of a binary tree.
// The function should return a 2-Dimensional vector where each subvector represents a level of the tree.

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

std::vector<std::vector<std::string>> treeLevels(Node *);
std::vector<std::vector<std::string>> _treeLevels(Node *, std::vector<std::vector<std::string>> &, int);

std::vector<std::vector<std::string>> treeLevelsBreadth(Node *);

void printVector(std::vector<std::vector<std::string>>);
std::vector<std::vector<std::string>> treeLevels(Node *root) {
    // todo
    std::vector<std::vector<std::string>> levels;

    return _treeLevels(root, levels, 0);
}

std::vector<std::vector<std::string>> _treeLevels(Node *root, std::vector<std::vector<std::string>> &levels, int levelNum) {
    // todo



    return levels;
}

std::vector<std::vector<std::string>> treeLevelsBreadth(Node *root) {
    // todo

    std::vector<std::vector<std::string>> result;


    return result;
}
void printVector(std::vector<std::vector<std::string>> vec) {
    for (auto x : vec) {
        std::cout << "{ " << std::endl;
        ;
        std::cout << "{ ";
        for (auto y : x) {

            std::cout << y << " , ";
        }
        std::cout << " }" << std::endl;
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

    printVector(treeLevels(&a));        // ->
    printVector(treeLevelsBreadth(&a)); // ->

    // [
    //   ["a"],
    //   ["b", "c"],
    //   ["d", "e", "f"]
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

    printVector(treeLevels(&a));        // ->
    printVector(treeLevelsBreadth(&a)); // ->

    // [
    //   ["a"],
    //   ["b", "c"],
    //   ["d", "e", "f"],
    //   ["g", "h", "i"]
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

    printVector(treeLevels(&q));        //->
    printVector(treeLevelsBreadth(&q)); //->

    // [
    //   ["q"],
    //   ["r", "s"],
    //   ["t"],
    //   ["u"],
    //   ["v"]
    // ]
    printVector(treeLevels(nullptr));        // -> []
    printVector(treeLevelsBreadth(nullptr)); // -> []

    return 0;
}