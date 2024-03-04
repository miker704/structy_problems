
#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

// reverse list
// Write a function, reverseList, that takes in a pointer to the head of a linked list as an argument.
// The function should reverse the order of the nodes in the linked list
// in-place and return the new head of the reversed linked list.

class Node {
public:
    std::string val;
    Node *next;

    Node(std::string initialVal) {
        val = initialVal;
        next = nullptr;
    }
};

Node *reverseList(Node *);
Node *reverseListRecur(Node *);
Node *_reverseListRecur(Node *, Node *, Node *);
// Node *_reverseListRecur(Node *, Node *);
void printList(Node *);

Node *reverseList(Node *head) {
    // todo

    Node *curr = head;
    Node *prev = nullptr;


    return prev;
}
Node *reverseListRecur(Node *head) {
    // todo
    Node *curr = head;
    Node *prev = nullptr;
    return _reverseListRecur(head, curr, prev);
}
Node *_reverseListRecur(Node *head, Node *curr, Node *prev) {
    // todo
    // since this is not a true linked list set up its not necessary to assign head to prev
    // returning the prev node is fine as head is a generic var that does not truely hold the head of the list
    // when refering to it outside a function head is passed as some value into this function  we are using a basic setup
    // for the linked list and it is not practical
        return prev;

}


// Node *reverseListRecur(Node *head) {
//     // todo
//     Node *curr = head;
//     Node *prev = nullptr;
//     return _reverseListRecur(head, prev);
// }
// Node *_reverseListRecur(Node *head, Node *prev) {
//     // todo
//     // since this is not a true linked list set up its not necessary to assign head to prev
//     // returning the prev node is fine as head is a generic var that does not truely hold the head of the list
//     // when refering to it outside a function head is passed as some value into this function  we are using a basic setup
//     // for the linked list and it is not practical
//     if (head == nullptr) {
//         return prev;
//     }
//     Node *next = _reverseListRecur(head->next,head);
//     head->next = prev;
//     return next;
// }




void printList(Node *head) {
    Node *curr = head;
    while (curr != nullptr) {
        std::cout << "[ " + curr->val + " | next ] ----->";
        curr = curr->next;
    }
    std::cout<<std::endl;
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

    // a -> b -> c -> d -> e -> f
    std::cout << "list before" << std::endl;
    printList(&a);
    std::cout << "iterative method" << std::endl;
    std::cout << "list after reversal" << std::endl;
    // std::cout << reverseList(&a) << std::endl; // f -> e -> d -> c -> b -> a
    printList(reverseList(&a));

    std::cout << "list reversed back to orginal order using recursion" << std::endl;
    std::cout << "recursive method" << std::endl;
    // std::cout << reverseListRecur(&f) << std::endl; // f -> e -> d -> c -> b -> a
    printList(reverseListRecur(&f));

    Node x("x");
    Node y("y");

    x.next = &y;

    // x -> y
    std::cout << "list before" << std::endl;
    printList(&x);
    std::cout << "iterative method" << std::endl;
    std::cout << "list after reversal" << std::endl;
    // std::cout << reverseList(&x) << std::endl; // y -> x
    printList(reverseList(&x));

    std::cout << "list reversed back to orginal order using recursion" << std::endl;
    std::cout << "recursive method" << std::endl;
    // std::cout << reverseListRecur(&y) << std::endl; // y -> x
    printList(reverseListRecur(&y));

    Node p("p");

    // p
    std::cout << "list before" << std::endl;
    printList(&p);

    std::cout << "iterative method" << std::endl;
    std::cout << "list after reversal" << std::endl;
    // std::cout << reverseList(&p) << std::endl; // p
    printList(reverseList(&p));

    std::cout << "list reversed back to orginal order using recursion" << std::endl;
    std::cout << "recursive method" << std::endl;
    // std::cout << reverseListRecur(&p) << std::endl; // p
    printList(reverseListRecur(&p));

    return 0;
}