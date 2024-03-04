package linked_lists.create_linked_list;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

//  Write a function, createLinkedList, that takes in an array of values as an argument.
//  The function should create a
//  linked list containing each element of the array as the values of the nodes. The function
//  should return the head of the linked list.

class Node<T> {
    T val;
    Node<T> next;

    public Node(T val) {
        this.val = val;
        this.next = null;
    }
}

public class create_linked_list {
    public static Node<String> createLinkedList(List<String> values) {
            return null;
        
    }

    public static Node<String> createLinkedListRecur(List<String> values) {
        // todo
        return createLinkedListRecurExe(values, 0);
    }

    public static Node<String> createLinkedListRecurExe(List<String> values, int idx) {
        // todo
            return null;
        
    }

    public static <T> void printList(Node<T> head) {
        Node<T> curr = head;
        while (curr != null) {
            System.out.print("[ " + curr.val + " | next ] ----->");
            curr = curr.next;
        }
        System.out.println("\n");
    }

    public static void main(String[] args) {

        List<String> values = new ArrayList<>(Arrays.asList("h", "e", "y"));
        printList(createLinkedList(values));
        printList(createLinkedListRecur(values));

        // h -> e -> y
        List<String> values1 = new ArrayList<>(Arrays.asList("1", "7", "1", "8"));
        printList(createLinkedList(values1));
        printList(createLinkedListRecur(values1));

        // 1 -> 7 -> 1 -> 8
        List<String> values2 = new ArrayList<>(Arrays.asList("a"));
        printList(createLinkedList(values2));
        printList(createLinkedListRecur(values2));

        // a
        List<String> values3 = new ArrayList<>(Arrays.asList());
        printList(createLinkedList(values3));
        printList(createLinkedListRecur(values3));

        // nullptr

    }
}