package mixed_recall.linked_list_cycle;
// linked list cycle

// Write a function, linked_list_cycle, that takes
//  in the head of a linked list as an argument.
//   The function should return a boolean indicating whether
//    or not the linked list contains a cycle.

import java.util.HashSet;

class Node<T> {
    T val;
    Node<T> next;

    public Node(T val) {
        this.val = val;
        this.next = null;
    }
}

public class linked_list_cycle {
    // # n = number of nodes
    // # Time: O(n)
    // # Space: O(n)
    public static <T> boolean linkedListCycleSet(Node<T> head) {


        return false;
    }

    // # n = number of nodes
    // # Time: O(n)
    // # Space: O(1)
    public static <T> boolean linkedListCycleDualPointers(Node<T> head) {
    

        return false;
    }

    public static void main(String[] args) {

        Node<String> a = new Node<>("a");
        Node<String> b = new Node<>("b");
        Node<String> c = new Node<>("c");
        Node<String> d = new Node<>("d");

        a.next = b;
        b.next = c;
        c.next = d;
        d.next = b; // cycle

        //         _______
        //       /        \
        // a -> b -> c -> d 

        System.out.println(linkedListCycleSet(a));  // true
        System.out.println(linkedListCycleDualPointers(a));  // true

        Node<String> q = new Node<>("q");
        Node<String> r = new Node<>("r");
        Node<String> s = new Node<>("s");
        Node<String> t = new Node<>("t");
        Node<String> u = new Node<>("u");

        q.next = r;
        r.next = s;
        s.next = t;
        t.next = u;
        u.next = q; // cycle

        //    ________________
        //  /                 \
        // q -> r -> s -> t -> u 

        System.out.println(linkedListCycleSet(q));  // true
        System.out.println(linkedListCycleDualPointers(q));  // true

        // const a = new Node<>('a');
        // const b = new Node<>('b');
        // const c = new Node<>('c');
        // const d = new Node<>('d');

        a.next = b;
        b.next = c;
        c.next = d;
        d.next = null;
        // a -> b -> c -> d 

        System.out.println(linkedListCycleSet(a));  // false
        System.out.println(linkedListCycleDualPointers(a));  // false

        // const q = new Node<>('q');
        // const r = new Node<>('r');
        // const s = new Node<>('s');
        // const t = new Node<>('t');
        // const u = new Node<>('u');


        q.next = r;
        r.next = s;
        s.next = t;
        t.next = u;
        u.next = t; // cycle

        //                   __
        //                 /   \
        // q -> r -> s -> t -> u 

        System.out.println(linkedListCycleSet(q));  // true
        System.out.println(linkedListCycleDualPointers(q));  // true

        Node<String> p = new Node<>("p");

        // p

        System.out.println(linkedListCycleSet(p)); // false
        System.out.println(linkedListCycleDualPointers(p)); // false

        System.out.println(linkedListCycleSet(null)); // false
        System.out.println(linkedListCycleDualPointers(null)); // false


    }
}