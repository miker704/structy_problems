package linked_lists.insert_node;

// insert node
// Write a function, insertNode, that takes in a pointer to the head of a linked list,
// a value, and an index. The function should insert a new node with the value into the
// list at the specified index. Consider the head of the linked list as index 0. The
// function should return the head of the resulting linked list.

// Do this in-place and be sure to dynamically allocate the new node in memory using new.

// You may assume that the input list is non-empty and the index is not greater
//  than the length of the input list.

class Node<T> {
    T val;
    Node<T> next;

    public Node(T val) {
        this.val = val;
        this.next = null;
    }
}

public class insert_node {
    public static Node<String> insertNode(Node<String> head1, String value, int idx) {
        // todo

        //if head to be insert (list empty) or place before head
    
            return head1;

        // after head
    

    }

    public static Node<String> insertNodeRecur(Node<String> head1, String value, int idx) {
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
        Node<String> a = new Node<>("a");
        Node<String> b = new Node<>("b");
        Node<String> c = new Node<>("c");
        Node<String> d = new Node<>("d");

        a.next = b;
        b.next = c;
        c.next = d;

        // a -> b -> c -> d

        printList(insertNode(a, "x", 2));
        a.next = b;
        b.next = c;
        c.next = d;

        printList(insertNodeRecur(a, "x", 2));

        // a -> b -> x -> c -> d
        // Node a("a");
        // Node b("b");
        // Node c("c");
        // Node d("d");

        a.next = b;
        b.next = c;
        c.next = d;

        // a -> b -> c -> d

        printList(insertNode(a, "v", 3));
        a.next = b;
        b.next = c;
        c.next = d;

        printList(insertNodeRecur(a, "v", 3));

        // a -> b -> c -> v -> d
        // Node a("a");
        // Node b("b");
        // Node c("c");
        // Node d("d");

        a.next = b;
        b.next = c;
        c.next = d;

        // a -> b -> c -> d

        printList(insertNode(a, "m", 4));
        a.next = b;
        b.next = c;
        c.next = d;
        d.next = null;
        printList(insertNodeRecur(a, "m", 4));

        // a -> b -> c -> d -> m
        // Node a("a");
        // Node b("b");

        a.next = b;
        b.next = null;
        // a -> b

        printList(insertNode(a, "z", 0));
        a.next = b;
        b.next = null;
        printList(insertNodeRecur(a, "z", 0));

        // z -> a -> b
    }
}