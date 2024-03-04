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

// merge lists
// Write a function, mergeLists, that takes in pointers to the heads of two sorted linked lists.
//  The function should merge the two lists together into single sorted linked list.
//  The function should return a pointer to the head of the merged linked list.

// Do this in-place, by mutating the original Nodes.

// You may assume that both input lists are non-empty and contain increasing sorted numbers.

class Node {
public:
    int val;
    Node *next;

    Node(int initialVal) {
        val = initialVal;
        next = nullptr;
    }
};

Node *mergeLists(Node *, Node *);
Node *mergeListsRecur(Node *, Node *);

void printList(Node *);

Node *mergeLists(Node *head1, Node *head2) {
    // todo
    Node *deadNode = new Node(0);
    
    return deadNode->next;
}

Node *mergeListsRecur(Node *head1, Node *head2) {
    // todo


    return nullptr;
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
    Node a(5);
    Node b(7);
    Node c(10);
    Node d(12);
    Node e(20);
    Node f(28);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = &f;
    // 5 -> 7 -> 10 -> 12 -> 20 -> 28

    Node q(6);
    Node r(8);
    Node s(9);
    Node t(25);
    q.next = &r;
    r.next = &s;
    s.next = &t;
    // 6 -> 8 -> 9 -> 25

    printList(mergeLists(&a, &q));
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = &f;
    q.next = &r;
    r.next = &s;
    s.next = &t;
    t.next = nullptr;
    printList(mergeListsRecur(&a, &q));

    // // 5 -> 6 -> 7 -> 8 -> 9 -> 10 -> 12 -> 20 -> 25 -> 28
    // // Node a(5);
    // // Node b(7);
    // // Node c(10);
    // // Node d(12);
    // // Node e(20);
    // // Node f(28);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = &f;
    f.next = nullptr;
    // // 5 -> 7 -> 10 -> 12 -> 20 -> 28
    q.val = 4;
    r.val = 8;
    s.val = 9;
    t.val = 10;
    q.next = &r;
    r.next = &s;
    s.next = &t;
    t.next = nullptr;
    // // 1 -> 8 -> 9 -> 10

    printList(mergeLists(&a, &q));
    // // 1 -> 5 -> 7 -> 8 -> 9 -> 10 -> 10 -> 12 -> 20 -> 28
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = &f;
    f.next = nullptr;

    // // 5 -> 7 -> 10 -> 12 -> 20 -> 28
    q.next = &r;
    r.next = &s;
    s.next = &t;
    t.next = nullptr;

    printList(mergeListsRecur(&a, &q));

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = &f;
    q.next = &r;
    r.next = &s;
    s.next = &t;
    t.next = nullptr;

    q.val = 67;
    q.next = nullptr;

    Node h(30);
    // // 30
    Node p(15);
    // // Node q(67);
    p.next = &q;
    // // 15 -> 67

    printList(mergeLists(&h, &p));

    // // 15 -> 30 -> 67
    h.next = nullptr;
    q.next = nullptr;
    p.next = &q;
    q.next = nullptr;

    printList(mergeListsRecur(&h, &p));

    return 0;
}