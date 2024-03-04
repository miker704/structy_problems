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

// insert node
// Write a function, insertNode, that takes in a pointer to the head of a linked list,
// a value, and an index. The function should insert a new node with the value into the
// list at the specified index. Consider the head of the linked list as index 0. The
// function should return the head of the resulting linked list.

// Do this in-place and be sure to dynamically allocate the new node in memory using new.

// You may assume that the input list is non-empty and the index is not greater
//  than the length of the input list.

class Node {
public:
    std::string val;
    Node *next;

    Node(std::string initialVal) {
        val = initialVal;
        next = nullptr;
    }
};

void printList(Node *);
Node *insertNode(Node *, std::string, int);
Node *insertNodeRecur(Node *, std::string, int);

Node *insertNode(Node *head, std::string value, int idx) {
    // todo

    Node *newHead = head;

    return newHead;
}

Node *insertNodeRecur(Node *head, std::string value, int idx) {
    // todo

    

    return head;
}

void printList(Node *head) {
    Node *curr = head;
    while (curr != nullptr) {
        std::cout << "[ " + curr->val + " | next ] ----->";
        curr = curr->next;
    }
    std::cout << std::endl;
}

int main() {
    Node a("a");
    Node b("b");
    Node c("c");
    Node d("d");

    a.next = &b;
    b.next = &c;
    c.next = &d;

    // a -> b -> c -> d

    printList(insertNode(&a, "x", 2));
    a.next = &b;
    b.next = &c;
    c.next = &d;

    printList(insertNodeRecur(&a, "x", 2));

    // a -> b -> x -> c -> d
    // Node a("a");
    // Node b("b");
    // Node c("c");
    // Node d("d");

    a.next = &b;
    b.next = &c;
    c.next = &d;

    // a -> b -> c -> d

    printList(insertNode(&a, "v", 3));
    a.next = &b;
    b.next = &c;
    c.next = &d;

    printList(insertNodeRecur(&a, "v", 3));

    // a -> b -> c -> v -> d
    // Node a("a");
    // Node b("b");
    // Node c("c");
    // Node d("d");

    a.next = &b;
    b.next = &c;
    c.next = &d;

    // a -> b -> c -> d

    printList(insertNode(&a, "m", 4));
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = nullptr;
    printList(insertNodeRecur(&a, "m", 4));

    // a -> b -> c -> d -> m
    // Node a("a");
    // Node b("b");

    a.next = &b;
    b.next = nullptr;
    // a -> b

    printList(insertNode(&a, "z", 0));
    a.next = &b;
    b.next = nullptr;
    printList(insertNodeRecur(&a, "z", 0));

    // z -> a -> b

    return 0;
}