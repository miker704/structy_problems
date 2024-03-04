package linked_lists.linked_list_values;

import java.util.ArrayList;
import java.util.List;
// linked list values
// Write a function, linkedListValues, that takes
//  in a pointer to the head of a linked list as an argument.
//  The function should return an array containing all values of the nodes in the linked list.

// Hey. This is our first linked list problem, so you should be liberal with watching the
//  Approach and Walkthrough. Be productive, not stubborn. -AZ
class Node<T> {
    T val;
    Node<T> next;

    public Node(T val) {
        this.val = val;
        this.next = null;
    }
}

public class linked_list_values {

    public static List<String> linkedListValues(Node<String> head) {
        // todo
        List<String> nodes = new ArrayList<>();


        return nodes;
    }

    public static List<String> linkedListValuesRecur(Node<String> head) {
        // todo
        List<String> nodes = new ArrayList<>();
        Node<String> curr = head;
        _linkedListValuesRecur(curr, nodes);
        return nodes;
    }

    public static void _linkedListValuesRecur(Node<String> head, List<String> nodeValues) {
        // todo
            return;
    }

    public static void printList(List<String> nodeValues) {
        System.out.print("[ ");
        for (String i : nodeValues) {
            System.out.print(i + ",");
        }
        System.out.println(" ]");
    }

    public static void main(String[] args) {
        Node<String> a = new Node<>("a");
        Node<String> b = new Node<>("b");
        Node<String> c = new Node<>("c");
        Node<String> d = new Node<>("d");
        a.next = b;
        b.next = c;
        c.next = d;
        printList(linkedListValues(a)); // -> [ "a", "b", "c", "d" ]
        printList(linkedListValuesRecur(a));
        Node<String> x = new Node<>("x");
        Node<String> y = new Node<>("y");
        x.next = y;
        printList(linkedListValues(x)); // -> [ "x", "y" ]
        printList(linkedListValuesRecur(x));

        Node<String> q = new Node<>("q");
        printList(linkedListValues(q)); // -> [ "q" ]
        printList(linkedListValuesRecur(q));

        printList(linkedListValues(null)); // -> [ ]
        printList(linkedListValuesRecur(null));

    }

}