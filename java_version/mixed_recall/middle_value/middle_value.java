package mixed_recall.middle_value;
// middle value

// Write a function, middleValue, 
// that takes in the head of a linked list as an argument. 
// The function should return the value of the middle node in the linked list. 
// If the linked list has an even number of nodes, then return the value of the second middle node.

// You may assume that the input list is non-empty.

import java.util.ArrayList;
import java.util.List;

class Node<T> {
    T val;
    Node<T> next;

    public Node(T val) {
        this.val = val;
        this.next = null;
    }
}

public class middle_value {
    public static <T> String middleValueArray(Node<T> head) {
    
        return "";
    }

    public static <T> String middleValueDualPointers(Node<T> head) {
        return "";
        
    }

    public static void main(String[] args) {
        Node<String> a = new Node<>("a");
        Node<String> b = new Node<>("b");
        Node<String> c = new Node<>("c");
        Node<String> d = new Node<>("d");
        Node<String> e = new Node<>("e");

        a.next = b;
        b.next = c;
        c.next = d;
        d.next = e;

        // a -> b -> c -> d -> e
        System.out.println(middleValueArray(a)); // c
        System.out.println(middleValueDualPointers(a)); // c

        // Node a("a");
        // Node b("b");
        // Node c("c");
        // Node d("d");
        // Node e("e");
        Node<String> f = new Node<>("f");

        a.next = b;
        b.next = c;
        c.next = d;
        d.next = e;
        e.next = f;

        // a -> b -> c -> d -> e -> f
        System.out.println(middleValueArray(a)); // d
        System.out.println(middleValueDualPointers(a)); // d

        Node<String> x = new Node<>("x");
        Node<String> y = new Node<>("y");
        Node<String> z = new Node<>("z");

        x.next = y;
        y.next = z;

        // x -> y -> z
        System.out.println(middleValueArray(x)); // y
        System.out.println(middleValueDualPointers(x)); // y

        // Node x("x");
        // Node y("y");

        x.next = y;
        y.next = null;
        // x -> y
        System.out.println(middleValueArray(x)); // y
        System.out.println(middleValueDualPointers(x)); // y

        Node<String> q = new Node<>("q");

        // q
        System.out.println(middleValueArray(q)); // q
        System.out.println(middleValueDualPointers(q)); // q

    }
}