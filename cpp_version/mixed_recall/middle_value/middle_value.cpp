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

// middle value
// Write a function, middleValue,
// that takes in the head of a linked list as an argument.
// The function should return the value of the middle node in the linked list.
// If the linked list has an even number of nodes, then return the value of the second middle node.

// You may assume that the input list is non-empty.
class Node {
public:
    std::string val;
    Node *next;

    Node(std::string initialVal) {
        val = initialVal;
        next = nullptr;
    }
};

/*
n = number of nodes
Time: O(n)
Space: O(n)*/
std::string middleValueArray(Node *head) {
    // todo
    Node *curr = head;
    std::vector<std::string> result;
    
    return result[result.size() / 2];
}

/*n = number of nodes
Time: O(n)
Space: O(1)*/
std::string middleValueDualPointers(Node *head) {
    // todo



    return nullptr;
}

int main() {

    Node a("a");
    Node b("b");
    Node c("c");
    Node d("d");
    Node e("e");

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;

    // a -> b -> c -> d -> e
    std::cout << middleValueArray(&a) << std::endl;        // c
    std::cout << middleValueDualPointers(&a) << std::endl; // c

    // Node a("a");
    // Node b("b");
    // Node c("c");
    // Node d("d");
    // Node e("e");
    Node f("f");

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = &f;

    // a -> b -> c -> d -> e -> f
    std::cout << middleValueArray(&a) << std::endl;        // d
    std::cout << middleValueDualPointers(&a) << std::endl; // d

    Node x("x");
    Node y("y");
    Node z("z");

    x.next = &y;
    y.next = &z;

    // x -> y -> z
    std::cout << middleValueArray(&x) << std::endl;        // y
    std::cout << middleValueDualPointers(&x) << std::endl; // y

    // Node x("x");
    // Node y("y");

    x.next = &y;
    y.next = nullptr;
    // x -> y
    std::cout << middleValueArray(&x) << std::endl;        // y
    std::cout << middleValueDualPointers(&x) << std::endl; // y

    Node q("q");

    // q
    std::cout << middleValueArray(&q) << std::endl;        // q
    std::cout << middleValueDualPointers(&q) << std::endl; // q

    return 0;
}