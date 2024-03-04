// sum list
// Write a function, sumList, that takes in the head of a linked list containing numbers as an argument.
// The function should return the total sum of all values in the linked list.

#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

class Node {
public:
    int value = 0;
    Node *next = nullptr;

    Node(int initialValue) {
        value = initialValue;
        next = nullptr;
    }
};

int sumList(Node *);
int sumListRecur(Node *);
int _sumListRecur(Node *);
// iterative method
int sumList(Node *head) {
    int sum = 0;

    return sum;
}

// recursive method
int sumListRecur(Node *head) {
    Node *curr = head;
    return _sumListRecur(curr);
}

int _sumListRecur(Node *curr) {
        return 0;
}

int main() {

    std::cout << "iterative method" << std::endl;

    Node a(2);
    Node b(8);
    Node c(3);
    Node d(-1);
    Node e(7);

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    // 2 -> 8 -> 3 -> -1 -> 7

    std::cout << sumList(&a) << std::endl; // 19

    Node x(38);
    Node y(4);

    x.next = &y;

    // 38 -> 4

    std::cout << sumList(&x) << std::endl; // 42

    Node z(100);

    // 100

    std::cout << sumList(&z) << std::endl; // 100

    std::cout << sumList(nullptr) << std::endl; // 0

    std::cout << "recursive method" << std::endl;
    std::cout << sumListRecur(&a) << std::endl;      // 19
    std::cout << sumListRecur(&x) << std::endl;      // 42
    std::cout << sumListRecur(&z) << std::endl;      // 100
    std::cout << sumListRecur(nullptr) << std::endl; // 0

    return 0;
}