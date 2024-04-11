package linked_lists.reverse_linked_list;

// reverse list
// Write a function, reverseList, that takes in a pointer to the head of a linked list as an argument.
// The function should reverse the order of the nodes in the linked list
// in-place and return the new head of the reversed linked list.
class Node<T> {
    T val;
    Node<T> next;

    public Node(T val) {
        this.val = val;
        this.next = null;
    }
}

public class reverse_linked_list {

    public static <T> Node<T> reverseList(Node<T> head) {
        // todo
        if (head == null) {
            return null;
        }
        Node<T> curr = head;
        Node<T> prev = null;
        while (curr != null) {
            Node<T> next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    public static <T> Node<T> reverseListRecur(Node<T> head) {
        // todo
        Node<T> curr = head;
        Node<T> prev = null;
        return _reverseListRecur(head, curr, prev);
    }

    public static <T> Node<T> _reverseListRecur(Node<T> head, Node<T> curr, Node<T> prev) {
        // todo
        if (curr == null) {
            return prev;
        }
        Node<T> next = curr.next;
        curr.next = prev;
        prev = curr;
        curr = next;
        return _reverseListRecur(head, curr, prev);

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
        Node<String> e = new Node<>("e");
        Node<String> f = new Node<>("f");

        a.next = b;
        b.next = c;
        c.next = d;
        d.next = e;
        e.next = f;
        System.out.println("list before");
        printList(a);
        System.out.println("list reversed");
        printList(reverseList(a)); // f -> e -> d -> c -> b -> a
        System.out.println("list reversed back to original via recursion");
        printList(reverseListRecur(f)); // a -> b -> c -> d -> e -> f
        Node<String> x = new Node<>("x");
        Node<String> y = new Node<>("y");
        x.next = y;
        System.out.println("list before");
        printList(x);
        System.out.println("list reversed");
        printList(reverseList(x)); // y -> x
        System.out.println("list reversed back to original via recursion");
        printList(reverseListRecur(y)); // x-> y
        Node<String> p = new Node<>("p");
        System.out.println("list before");
        printList(p);
        System.out.println("list reversed");
        printList(reverseList(p));// p
        System.out.println("list reversed back to original via recursion");
        printList(reverseListRecur(p)); // p
    }

}