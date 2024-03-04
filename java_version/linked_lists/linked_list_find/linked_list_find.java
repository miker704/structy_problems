package linked_lists.linked_list_find;

// linked list find
// Write a function, linkedListFind, that takes in a pointer to the head of a linked list and a target value.
//  The function should return a boolean indicating whether or not the linked list contains the target.
class Node<T> {
    T val;
    Node<T> next;

    public Node(T val) {
        this.val = val;
        this.next = null;
    }
}

public class linked_list_find {

    public static <T> boolean linkedListFind(Node<T> head, T target) {
        // todo
    

        return false;
    }

    public static <T> boolean linkedListFindRecur(Node<T> head, T target) {
        // todo
            return true;
    }

    public static <T> void _linkedListFindRecur(Node<T> head, T target) {
        // todo
        return;
    }

    public static void main(String[] args) {
        Node<String> a = new Node<>("a");
        Node<String> b = new Node<>("b");
        Node<String> c = new Node<>("c");
        Node<String> d = new Node<>("d");
        a.next = b;
        b.next = c;
        c.next = d;
        System.out.println(linkedListFind(a, "c")); // true
        System.out.println(linkedListFindRecur(a, "c")); // true

        System.out.println(linkedListFind(a, "d")); // true
        System.out.println(linkedListFindRecur(a, "d")); // true

        System.out.println(linkedListFind(a, "q")); // false
        System.out.println(linkedListFindRecur(a, "q")); // false

        Node<String> node1 = new Node<>("jason");
        Node<String> node2 = new Node<>("leneli");
        node1.next = node2;
        System.out.println(linkedListFind(node1, "jason")); // true
        System.out.println(linkedListFindRecur(node1, "jason")); // true

        Node<Integer> node3 = new Node<>(42);
        System.out.println(linkedListFind(node3, 42)); // true
        System.out.println(linkedListFindRecur(node3, 42)); // true

        System.out.println(linkedListFind(node3, 100)); // false
        System.out.println(linkedListFindRecur(node3, 100)); // false

    }
}