// linked list find
// Write a function, linkedListFind, that takes in a pointer to the head of a linked list and a target value.
//  The function should return a boolean indicating whether or not the linked list contains the target.
#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

class Node {
public:
    std::string value = "";
    Node *next = nullptr;
    Node(std::string initialValue) {
        value = initialValue;
        next = nullptr;
    }
};

bool linkedListFind(Node *, std::string);
bool linkedListFindRecur(Node *, std::string);
bool _linkedListFindRecur(Node *, std::string);

bool linkedListFind(Node *head, std::string target) {
    // todo


    return false;
}

bool linkedListFindRecur(Node *head, std::string target) {
    Node *curr = head;
    return _linkedListFindRecur(curr, target);
}
bool _linkedListFindRecur(Node *curr, std::string target) {
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

    // a -> b -> c -> d

    std::cout << "iterative method" << std::endl;
    std::cout << std::boolalpha << linkedListFind(&a, "c") << std::endl; // 1 (true)
    std::cout << "recursive method" << std::endl;
    std::cout << linkedListFindRecur(&a, "c") << std::endl; // 1 (true)

    // Node a("a");
    // Node b("b");
    // Node c("c");
    // Node d("d");

    // a.next = &b;
    // b.next = &c;
    // c.next = &d;

    // a -> b -> c -> d
    std::cout << "iterative method" << std::endl;
    std::cout << linkedListFind(&a, "d") << std::endl; // 1 (true)
    std::cout << "recursive method" << std::endl;
    std::cout << linkedListFindRecur(&a, "d") << std::endl; // 1 (true)

    // Node a("a");
    // Node b("b");
    // Node c("c");
    // Node d("d");

    // a.next = &b;
    // b.next = &c;
    // c.next = &d;

    // a -> b -> c -> d
    std::cout << "iterative method" << std::endl;
    std::cout << linkedListFind(&a, "q") << std::endl; // 0 (false)
    std::cout << "recursive method" << std::endl;
    std::cout << linkedListFindRecur(&a, "q") << std::endl; // 0 (false)

    Node node1("jason");
    Node node2("leneli");

    node1.next = &node2;

    // jason -> leneli
    std::cout << "iterative method" << std::endl;
    std::cout << linkedListFind(&node1, "jason") << std::endl; // 1 (true)
    std::cout << "recursive method" << std::endl;
    std::cout << linkedListFindRecur(&node1, "jason") << std::endl; // 1 (true)

    Node node3("potato");

    // potato
    std::cout << "iterative method" << std::endl;
    std::cout << linkedListFind(&node3, "potato") << std::endl; // 1 (true)
    std::cout << "recursive method" << std::endl;
    std::cout << linkedListFindRecur(&node3, "potato") << std::endl; // 1 (true)

    // Node node1("potato");

    // potato
    std::cout << "iterative method" << std::endl;
    std::cout << linkedListFind(&node3, "apple") << std::endl; // 0 (false)
    std::cout << "recursive method" << std::endl;
    std::cout << linkedListFindRecur(&node3, "apple") << std::endl; // 0 (false)

    return 0;
}