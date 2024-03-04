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

// add lists
// Write a function, add_lists, that takes in the head of two linked lists, each representing a number.
//  The nodes of the linked lists contain digits as values. The nodes in the input lists are reversed;
//  this means that the least significant digit of the number is the head. The function should return
// the head of a new linked listed representing the sum of the input lists. The output list should have its
// digits reversed as well.

// Say we wanted to compute 621 + 354 normally. The sum is 975:

//    621
//  + 354
//  -----
//    975

// Then, the reversed linked list format of this problem would appear as:

//     1 -> 2 -> 6
//  +  4 -> 5 -> 3
//  --------------
//     5 -> 7 -> 9
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
Node *addLists(Node *, Node *);
Node *addListsRecur(Node *, Node *);
Node *addListsRecurExe(Node *, Node *, int);

Node *addLists(Node *head1, Node *head2) {
    // todo
    Node *deadNode = new Node(0);


    return deadNode->next;
}
Node *addListsRecur(Node *head1, Node *head2) {
    // todo
    return addListsRecurExe(head1, head2, 0);
}
Node *addListsRecurExe(Node *head1, Node *head2, int carryOver) {
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

    //   621
    // + 354
    // -----
    //   975

    Node a1(1);
    Node a2(2);
    Node a3(6);
    a1.next = &a2;
    a2.next = &a3;
    // 1 -> 2 -> 6

    Node b1(4);
    Node b2(5);
    Node b3(3);
    b1.next = &b2;
    b2.next = &b3;
    // 4 -> 5 -> 3

    printList(addLists(&a1, &b1));
    printList(addListsRecur(&a1, &b1));

    // 5 -> 7 -> 9
    //  7541
    // +  32
    // -----
    //  7573

    Node c1(1);
    Node c2(4);
    Node c3(5);
    Node c4(7);
    c1.next = &c2;
    c2.next = &c3;
    c3.next = &c4;
    // 1 -> 4 -> 5 -> 7

    Node d1(2);
    Node d2(3);
    d1.next = &d2;
    // 2 -> 3

    printList(addLists(&c1, &d1));
    printList(addListsRecur(&c1, &d1));

    // 3 -> 7 -> 5 -> 7
    //   39
    // + 47
    // ----
    //   86

    Node e1(9);
    Node e2(3);
    e1.next = &e2;
    // 9 -> 3

    Node f1(7);
    Node f2(4);
    f1.next = &f2;
    // 7 -> 4

    printList(addLists(&e1, &f1));
    printList(addListsRecur(&e1, &f1));

    // 6 -> 8
    //   89
    // + 47
    // ----
    //  136

    Node g1(9);
    Node g2(8);
    g1.next = &g2;
    // 9 -> 8

    Node h1(7);
    Node h2(4);
    h1.next = &h2;
    // 7 -> 4

    printList(addLists(&g1, &h1));
    printList(addListsRecur(&g1, &h1));

    // 6 -> 3 -> 1
    //   999
    //  +  6
    //  ----
    //  1005

    Node i1(9);
    Node i2(9);
    Node i3(9);
    i1.next = &i2;
    i2.next = &i3;
    // 9 -> 9 -> 9

    Node j1(6);
    // 6

    printList(addLists(&i1, &j1));
    printList(addListsRecur(&i1, &j1));

    // 5 -> 0 -> 0 -> 1
    return 0;
}