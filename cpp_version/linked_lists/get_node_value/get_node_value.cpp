#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

// get node value
// Write a function, getNodeValue, that takes in a pointer to the head of a linked list and an index.
//  The function should return the value of the linked list at the specified index.

// If there is no node at the given index, then return the empty string.
class Node {
public:
    std::string value = "";
    Node *next = nullptr;
    Node(std::string initialValue) {
        value = initialValue;
        next = nullptr;
    }
};
std::string getNodeValue(Node *, int);
std::string getNodeValueRecur(Node *, int);
std::string _getNodeValueRecur(Node *, int);

std::string getNodeValue(Node *head, int idx) {

    return "";
}

std::string getNodeValueRecur(Node *head, int idx) {
    Node *curr = head;
    return _getNodeValueRecur(curr, idx);
}
std::string _getNodeValueRecur(Node *curr, int idx) {
return "";
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
    std::cout << "iterative method" << std::endl;
    std::cout << getNodeValue(&a, 2) << std::endl; // "c"
    std::cout << "recursive method" << std::endl;
    std::cout << getNodeValueRecur(&a, 2) << std::endl; // "c"

    // Node a("a");
    // Node b("b");
    // Node c("c");
    // Node d("d");

    // a.next = &b;
    // b.next = &c;
    // c.next = &d;

    // a -> b -> c -> d
    std::cout << "iterative method" << std::endl;
    std::cout << getNodeValue(&a, 3) << std::endl; // "d"
    std::cout << "recursive method" << std::endl;
    std::cout << getNodeValueRecur(&a, 3) << std::endl; // "d"

    // Node a("a");
    // Node b("b");
    // Node c("c");
    // Node d("d");

    // a.next = &b;
    // b.next = &c;
    // c.next = &d;

    // a -> b -> c -> d
    std::cout << "iterative method" << std::endl;
    std::cout << getNodeValue(&a, 7) << std::endl; // ""
    std::cout << "recursive method" << std::endl;
    std::cout << getNodeValueRecur(&a, 7) << std::endl; // ""

    Node node1("banana");
    Node node2("mango");

    node1.next = &node2;

    // banana -> mango
    std::cout << "iterative method" << std::endl;
    std::cout << getNodeValue(&node1, 0) << std::endl; // "banana"
    std::cout << "recursive method" << std::endl;
    std::cout << getNodeValueRecur(&node1, 0) << std::endl; // "banana"

    // Node node1("banana");
    // Node node2("mango");

    // node1.next = &node2;

    // banana -> mango
    std::cout << "iterative method" << std::endl;
    std::cout << getNodeValue(&node1, 1) << std::endl; // "mango"
    std::cout << "recursive method" << std::endl;
    std::cout << getNodeValueRecur(&node1, 1) << std::endl; // "mango"

    return 0;
}