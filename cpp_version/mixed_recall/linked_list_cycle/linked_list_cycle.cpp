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

// linked list cycle
// Write a function, linked_list_cycle, that takes
//  in the head of a linked list as an argument.
//   The function should return a boolean indicating whether
//    or not the linked list contains a cycle.

class Node {
public:
    std::string val;
    Node *next;

    Node(std::string initialVal) {
        val = initialVal;
        next = nullptr;
    }
};

// # n = number of nodes
// # Time: O(n)
// # Space: O(n)
bool linkedListCycleSet(Node *head) {
    // todo

    return false;
}
// # n = number of nodes
// # Time: O(n)
// # Space: O(1)
bool linkedListCycleDualPointers(Node *head) {
    // todo

    return false;
}

int main() {
    Node a("a");
    Node b("b");
    Node c("c");
    Node d("d");

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &b; // cycle

    //         _______
    //       /        \
// a -> b -> c -> d

    std::cout << std::boolalpha << linkedListCycleSet(&a) << std::endl; // 1 (true)
    std::cout << linkedListCycleDualPointers(&a) << std::endl;          // 1 (true)

    Node q("q");
    Node r("r");
    Node s("s");
    Node t("t");
    Node u("u");

    q.next = &r;
    r.next = &s;
    s.next = &t;
    t.next = &u;
    u.next = &q; // cycle

    //    ________________
    //  /                 \
// q -> r -> s -> t -> u

    std::cout << linkedListCycleSet(&q) << std::endl;          // 1 (true)
    std::cout << linkedListCycleDualPointers(&q) << std::endl; // 1 (true)

    // Node a("a");
    // Node b("b");
    // Node c("c");
    // Node d("d");

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = nullptr;
    // a -> b -> c -> d

    std::cout << linkedListCycleSet(&a) << std::endl;          // 0 (false)
    std::cout << linkedListCycleDualPointers(&a) << std::endl; // 0 (false)

    // Node q("q");
    // Node r("r");
    // Node s("s");
    // Node t("t");
    // Node u("u");

    q.next = &r;
    r.next = &s;
    s.next = &t;
    t.next = &u;
    u.next = &t; // cycle

    //                   __
    //                 /   \
// q -> r -> s -> t -> u

    std::cout << linkedListCycleSet(&q) << std::endl;          // 1 (true)
    std::cout << linkedListCycleDualPointers(&q) << std::endl; // 1 (true)

    Node p("p");

    // p

    std::cout << linkedListCycleSet(&p) << std::endl;          // 0 (false)
    std::cout << linkedListCycleDualPointers(&p) << std::endl; // 0 (false)

    std::cout << linkedListCycleSet(nullptr) << std::endl;          // 0 (false)
    std::cout << linkedListCycleDualPointers(nullptr) << std::endl; // 0 (false)

    return 0;
}