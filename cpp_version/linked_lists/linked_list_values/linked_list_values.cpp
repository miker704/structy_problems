#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

// linked list values
// Write a function, linkedListValues, that takes
//  in a pointer to the head of a linked list as an argument.
//  The function should return an array containing all values of the nodes in the linked list.

// Hey. This is our first linked list problem, so you should be liberal with watching the
//  Approach and Walkthrough. Be productive, not stubborn. -AZ

class Node {
public:
    std::string val;
    Node *next;

    Node(std::string initialVal) {
        val = initialVal;
        next = nullptr;
    }
};
std::vector<std::string> linkedListValues(Node*);
std::vector<std::string> linkedListValuesRecur(Node*);
void _linkedListValuesRecur(Node*, std::vector<std::string>&);

std::vector<std::string> linkedListValues(Node *head) {

    std::vector<std::string> nodeValues;

    return nodeValues;
}


std::vector<std::string> linkedListValuesRecur(Node* head){
    std::vector<std::string>nodeValues;
    return nodeValues;
}

void _linkedListValuesRecur(Node* curr, std::vector<std::string>&nodeValues){
    if(curr == nullptr){return;}
}


void printList(std::vector<std::string> nodeValues) {
    for (auto i : nodeValues) {
        std::cout << i << std::endl;
    }
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

    printList(linkedListValues(&a)); // -> [ "a", "b", "c", "d" ]
    printList(linkedListValuesRecur(&a)); // -> [ "a", "b", "c", "d" ]

    Node x("x");
    Node y("y");

    x.next = &y;

    // x -> y

    printList(linkedListValues(&x)); // -> [ "x", "y" ]
    printList(linkedListValuesRecur(&x)); // -> [ "x", "y" ]

    Node q("q");

    // q

    printList(linkedListValues(&q)); // -> [ "q" ]
    printList(linkedListValuesRecur(&q)); // -> [ "q" ]

    printList(linkedListValues(nullptr)); // -> [ ]
    printList(linkedListValuesRecur(nullptr)); // -> [ ]

    return 0;
}