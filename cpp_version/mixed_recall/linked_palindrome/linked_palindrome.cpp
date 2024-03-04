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

// linked palindrome
// Write a function, linked_palindrome, that takes in the head of a linked list as an argument.
//  The function should return a boolean indicating whether
// or not the linked list is a palindrome. A palindrome is a sequence that is the same both forwards and backwards.

class Node {
public:
    int val;
    Node *next;

    Node(int initialVal) {
        val = initialVal;
        next = nullptr;
    }
};

bool linkedPalindrome(Node *head) {
    // todo

        return true;

}

int main() {

    Node a(3);
    Node b(2);
    Node c(7);
    Node d(7);
    Node e(2);
    Node f(3);

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = &f;

    // 3 -> 2 -> 7 -> 7 -> 2 -> 3
    std::cout << std::boolalpha << linkedPalindrome(&a) << std::endl; // 1 (true)
    // Node a(3);
    // Node b(2);
    // Node c(4);
    c.val = 4;
    a.next = &b;
    b.next = &c;
    c.next = nullptr;
    // 3 -> 2 -> 4
    std::cout << linkedPalindrome(&a) << std::endl; // 0 (false)
    // Node a(3);
    // Node b(2);
    // Node c(3);
    c.val = 3;

    a.next = &b;
    b.next = &c;
    c.next = nullptr;

    // 3 -> 2 -> 3
    std::cout << linkedPalindrome(&a) << std::endl; // 1 (true)

    Node a1(0);
    Node b1(1);
    Node c1(0);
    Node d1(1);
    Node e1(0);

    a1.next = &b1;
    b1.next = &c1;
    c1.next = &d1;
    d1.next = &e1;

    // 0 -> 1 -> 0 -> 1 -> 0
    std::cout << linkedPalindrome(&a1) << std::endl; // 1 (true)
    // Node a(0);
    // Node b(1);
    // Node c(0);
    // Node d(1);
    // Node e(1);
    e1.val = 1;
    a1.next = &b1;
    b1.next = &c1;
    c1.next = &d1;
    d1.next = &e1;

    // 0 -> 1 -> 0 -> 1 -> 1
    std::cout << linkedPalindrome(&a1) << std::endl; // 0 (false)
    Node a2(5);

    // 5
    std::cout << linkedPalindrome(&a2) << std::endl;     // 1 (true)
    std::cout << linkedPalindrome(nullptr) << std::endl; // 1 (true)

    return 0;
}