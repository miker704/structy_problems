#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

// zipper lists
// Write a function, zipperLists, that takes in pointers to the heads of two linked lists.
// The function should zipper the two lists together into single linked list by alternating nodes.
// If one of the linked lists is longer than the other, the resulting list should terminate with the remaining nodes.
//  The function should return a pointer to the head of the zippered linked list.

// Do this in-place, by mutating the original Nodes.

// You may assume that both input lists are non-empty.
class Node {
public:
    std::string val;
    Node *next;

    Node(std::string initialVal) {
        val = initialVal;
        next = nullptr;
    }
};

Node *zipperLists(Node *, Node *);
Node *zipperListsRecur(Node *, Node *);
Node *_zipperListsRecur(Node *, Node *);
void printList(Node *);

Node *zipperLists(Node *head1, Node *head2) {
    // todo
    Node *new_head = head1;


    return new_head;
}

Node *zipperListsRecur(Node *head1, Node *head2) {
    return _zipperListsRecur(head1, head2);
}

Node *_zipperListsRecur(Node *head1, Node *head2) {

    return head1;
}
/*
a b c
d e f
head1 = a
head2 = d

head2 -> next = (a->next,d->next)   h2.next = b
                                    h1.next = d
                                    return a
                    b,  e
                    head2(e) -> next =(b->next,e->next)
                                        c, f                                    h2.next =c
                                                                                h1->next = e
                                                                                ret b
                                        head2(f)->next = (c->next,f->next)          h2->next nullptr
                                                                                    h1->next = f
                                                                                    head1 = c
                                                            nullptr, nullptr
                                                            h1 = nullptr (return h2)
a->d->b->e->c->f->nullptr
  if(head1 == nullptr){ return head2;}
    if(head2 == nullptr){return head1;}
    head2->next = _zipperListsRecur(head1->next,head2->next);
    head1->next = head2;
    return head1;
    s->t
    1->2->3->4
    // s -> 1 -> t -> 2 -> 3 -> 4
    head2->next = _zipperListsRecur(s->next,1->next);(t,2)
                    _zipperListsRecur(t->next,2->next);(nullptr,3)   return 3 which is linked to 4 as well
                    s->1->t->2->3->4
*/

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
    a.next = &b;
    b.next = &c;
    // a -> b -> c

    Node x("x");
    Node y("y");
    Node z("z");
    x.next = &y;
    y.next = &z;
    // x -> y -> z

    std::cout << "iterative method" << std::endl;
    std::cout << "list 1: " << std::endl;
    printList(&a);
    std::cout << "list 2 :" << std::endl;
    printList(&x);
    std::cout << "lists after being after zipped" << std::endl;

    printList(zipperLists(&a, &x));
    std::cout << "recursive method" << std::endl;
    a.next = &b;
    b.next = &c;
    x.next = &y;
    y.next = &z;
    // printList(zipperListsRecur(&a, &x));
    // a -> x -> b -> y -> c -> z

    // Node a("a");
    // Node b("b");
    // Node c("c");
    Node d("d");
    Node e("e");
    Node f("f");
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = &f;
    // a -> b -> c -> d -> e -> f

    // Node x("x");
    // Node y("y");
    // Node z("z");
    x.next = &y;
    y.next = &z;
    // x -> y -> z
    std::cout << "iterative method" << std::endl;
    std::cout << "list 1: " << std::endl;
    printList(&a);
    std::cout << "list 2 :" << std::endl;
    printList(&x);
    std::cout << "lists after being after zipped" << std::endl;
    printList(zipperLists(&a, &x));
    std::cout << "recursive method" << std::endl;
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = &f;
    x.next = &y;
    y.next = &z;
    // printList(zipperListsRecur(&a, &x));
    // a -> x -> b -> y -> c -> z -> d -> e -> f
    Node s("s");
    Node t("t");
    s.next = &t;
    // s -> t

    Node one("1");
    Node two("2");
    Node three("3");
    Node four("4");
    one.next = &two;
    two.next = &three;
    three.next = &four;
    // 1 -> 2 -> 3 -> 4
    std::cout << "iterative method" << std::endl;
    std::cout << "list 1: " << std::endl;
    printList(&s);
    std::cout << "list 2 :" << std::endl;
    printList(&one);
    std::cout << "lists after being after zipped" << std::endl;
    printList(zipperLists(&s, &one));
    s.next = &t;
    one.next = &two;
    two.next = &three;
    three.next = &four;
    std::cout << "recursive method" << std::endl;
    // printList(zipperListsRecur(&s, &one));

    // s -> 1 -> t -> 2 -> 3 -> 4
    Node w("w");
    // w

    // Node one("1");
    // Node two("2");
    // Node three("3");
    one.next = &two;
    two.next = &three;
    // 1 -> 2 -> 3
    std::cout << "iterative method" << std::endl;
    std::cout << "list 1: " << std::endl;
    printList(&w);
    std::cout << "list 2 :" << std::endl;
    printList(&one);
    std::cout << "lists after being after zipped" << std::endl;
    printList(zipperLists(&w, &one));
    w.next = nullptr;
    one.next = &two;
    two.next = &three;
    std::cout << "recursive method" << std::endl;
    // printList(zipperListsRecur(&w, &one));

    // w -> 1 -> 2 -> 3
    // Node one("1");
    // Node two("2");
    // Node three("3");
    w.next = nullptr;
    one.next = &two;
    two.next = &three;
    // 1 -> 2 -> 3

    // Node w("w");
    // w
    std::cout << "iterative method" << std::endl;
    std::cout << "list 1: " << std::endl;
    printList(&one);
    std::cout << "list 2 :" << std::endl;
    printList(&w);
    std::cout << "lists after being after zipped" << std::endl;
    printList(zipperLists(&one, &w));
    w.next = nullptr;
    one.next = &two;
    two.next = &three;
    std::cout << "recursive method" << std::endl;
    // printList(zipperListsRecur(&one, &w));

    // 1 -> w -> 2 -> 3

    return 0;
}