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

// remove node
// Write a function, removeNode, that takes in a pointer to the head of a linked list and a target value as arguments.
//  The function should delete the node containing the target value from the linked list
//  and return the head of the resulting linked list. If the target appears multiple times
//   in the linked list, only remove the first instance of the target in the list.

// Do this in-place. You do not need to dynamically deallocate the memory with delete,
// just reassign next pointers correctly.

// You may assume that the input list is non-empty.

// You may assume that the input list contains the target.

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
Node *removeNode(Node *, std::string);
Node *removeNodeRecur(Node *, std::string);

Node *removeNode(Node *head, std::string targetVal) {
    // when deleting a node we must consider the following
    /*
        if node to be deleted is head of list -> change head to next node, take into account prev == nullptr
        random node in the list
        last node in the list -> tail of list if it has one
        // list is empty or has one node

    */

    // Node* curr = nullptr, *prev = nullptr;
    // prev = curr = head;

    // if list is empty
    
    // if head is target value and is the only node in the list

    // if head is target and they are more than one node in the list
    

    Node *newHead = head;

    return newHead;
}

Node *removeNodeRecur(Node *head, std::string targetVal) {
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
    Node e("e");
    Node f("f");

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = &f;

    // printList(removeNode(nullptr, ""));
    // Node p("p");
    // p.next = nullptr;

    // Node *p = new Node("p");
    // Node p("p");
    // Node q("q");
    // p.next = &q;
    // printList(removeNode(&p, "p"));

    // a -> b -> c -> d -> e -> f
    printList(removeNode(&a, "c"));
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = &f;
    printList(removeNodeRecur(&a, "c"));

    // a -> b -> d -> e -> f
    Node x("x");
    Node y("y");
    Node z("z");

    x.next = &y;
    y.next = &z;

    // x -> y -> z
    // std::cout << std::endl;

    printList(removeNode(&x, "z"));
    x.next = &y;
    y.next = &z;
    printList(removeNodeRecur(&x, "z"));

    // x -> y
    Node q("q");
    Node r("r");
    Node s("s");

    q.next = &r;
    r.next = &s;

    // q -> r -> s

    printList(removeNode(&q, "q"));
    q.next = &r;
    r.next = &s;
    printList(removeNodeRecur(&q, "q"));

    // r -> s
    Node node1("h");
    Node node2("i");
    Node node3("j");
    Node node4("i");

    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;

    // h -> i -> j -> i

    printList(removeNode(&node1, "i"));
    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    printList(removeNodeRecur(&node1, "i"));

    // h -> j -> i
    Node t("t");

    // // t
    printList(removeNode(&t, "t"));
    printList(removeNodeRecur(&t, "t"));

    removeNode(&t, "t");
    // nullptr

    return 0;
}