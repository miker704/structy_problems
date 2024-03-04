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

// is univalue list
// Write a function, isUnivalueList, that takes in a pointer to the head of a linked list as an argument.
//  The function should return a boolean indicating whether or not the linked list
//  contains exactly one unique value.

// You may assume that the input list is non-empty.

class Node {
public:
    int val;
    Node *next;

    Node(int initialVal) {
        val = initialVal;
        next = nullptr;
    }
};

void printList(Node *);
bool isUnivalueList(Node *);
bool isUnivalueListRecur(Node *);
bool isUnivalueListRecurExe(Node *, Node *);

bool isUnivalueList(Node *head) {
    // todo


    return true;
}
bool isUnivalueListRecur(Node *head) {
    Node *curr = head;
    return isUnivalueListRecurExe(curr, head);
}
bool isUnivalueListRecurExe(Node *curr, Node *head) {

        return false;
}

void printList(Node *head) {
    Node *curr = head;
    while (curr != nullptr) {
        std::cout << "[ " + std::to_string(curr->val) + " | next ] ----->";
        curr = curr->next;
    }
    std::cout << std::endl;
}

int main() {

    Node a(7);
    Node b(7);
    Node c(7);

    a.next = &b;
    b.next = &c;

    // 7 -> 7 -> 7

    std::cout << std::boolalpha << isUnivalueList(&a) << std::endl; // 1 (true)
    std::cout << isUnivalueListRecur(&a) << std::endl;              // 1 (true)

    // Node a(7);
    // Node b(7);
    // Node c(4);
    c.val = 4;
    a.next = &b;
    b.next = &c;

    // 7 -> 7 -> 4
    std::cout << isUnivalueList(&a) << std::endl;      // 0 (false)
    std::cout << isUnivalueListRecur(&a) << std::endl; // 0 (false)

    Node u(2);
    Node v(2);
    Node w(2);
    Node x(2);
    Node y(2);

    u.next = &v;
    v.next = &w;
    w.next = &x;
    x.next = &y;

    // 2 -> 2 -> 2 -> 2 -> 2
    std::cout << isUnivalueList(&u) << std::endl;      // 1 (true)
    std::cout << isUnivalueListRecur(&u) << std::endl; // 1 (true)
    Node u1(2);
    Node v1(2);
    Node w1(3);
    Node x1(3);
    Node y1(2);

    u1.next = &v1;
    v1.next = &w1;
    w1.next = &x1;
    x1.next = &y1;

    // 2 -> 2 -> 3 -> 3 -> 2
    std::cout << isUnivalueList(&u1) << std::endl;      // 0 (false)
    std::cout << isUnivalueListRecur(&u1) << std::endl; // 0 (false)
    Node z(42);

    // 42

    std::cout << isUnivalueList(&z) << std::endl;      // 1 (true)
    std::cout << isUnivalueListRecur(&z) << std::endl; // 1 (true)
    return 0;
}