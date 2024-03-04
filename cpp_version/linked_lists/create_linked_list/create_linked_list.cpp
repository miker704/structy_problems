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

// create linked list
// Write a function, createLinkedList, that takes in an array of values as an argument.
//  The function should create a
//  linked list containing each element of the array as the values of the nodes. The function
//  should return the head of the linked list.

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
Node *createLinkedList(std::vector<std::string>);
Node *createLinkedListRecur(std::vector<std::string>);
Node *createLinkedListRecurExe(std::vector<std::string>, int);
Node *createLinkedList(std::vector<std::string> values) {
    // todo
    Node *head = new Node(values[0]);

    return head;
}

Node *createLinkedListRecur(std::vector<std::string> values) {
    // todo
    return createLinkedListRecurExe(values, 0);
}

Node *createLinkedListRecurExe(std::vector<std::string> values, int idx) {
    // todo
        return nullptr;
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

    std::vector<std::string> values = {"h", "e", "y"};
    printList(createLinkedList(values));
    printList(createLinkedListRecur(values));

    // h -> e -> y
    std::vector<std::string> values1 = {"1", "7", "1", "8"};
    printList(createLinkedList(values1));
    printList(createLinkedListRecur(values1));

    // 1 -> 7 -> 1 -> 8
    std::vector<std::string> values2 = {"a"};
    printList(createLinkedList(values2));
    printList(createLinkedListRecur(values2));

    // a
    std::vector<std::string> values3;
    printList(createLinkedList(values3));
    printList(createLinkedListRecur(values3));

    // nullptr
    return 0;
}