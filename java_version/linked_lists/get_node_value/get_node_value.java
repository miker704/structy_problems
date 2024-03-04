package linked_lists.get_node_value;
// get node value

// Write a function, getNodeValue, that takes in a pointer to the head of a linked list and an index.
//  The function should return the value of the linked list at the specified index.

// If there is no node at the given index, then return the empty string.
class Node<T> {
    T val;
    Node<T> next;

    public Node(T val) {
        this.val = val;
        this.next = null;
    }
}

public class get_node_value {
    public static <T> T getNodeValue(Node<T> head, int index) {

        // todo
        return null;
    }

    public static <T> T getNodeValueRecur(Node<T> head, int index) {
        // todo
        Node<T> curr = head;
        return _getNodeValueRecur(curr,index);
    }

    public static <T> T _getNodeValueRecur(Node<T> head, int index) {
        // todo
        return null;

    
    }

    public static void main(String[] args) {
        Node<String> a = new Node<>("a");
        Node<String> b = new Node<>("b");
        Node<String> c = new Node<>("c");
        Node<String> d = new Node<>("d");
        a.next = b;
        b.next = c;
        c.next = d;
        System.out.println(getNodeValue(a, 2)); // c
        System.out.println(getNodeValueRecur(a, 2)); // c
        System.out.println(getNodeValue(a, 3)); // d
        System.out.println(getNodeValueRecur(a, 3)); // d
        System.out.println(getNodeValue(a, 7)); // null
        System.out.println(getNodeValueRecur(a, 7)); // null
        Node<String> node1 = new Node<>("banana");
        Node<String> node2 = new Node<>("mango");
        node1.next = node2;
        System.out.println(getNodeValue(node1, 0)); // "banana"
        System.out.println(getNodeValueRecur(node1, 0)); // "banana"
        System.out.println(getNodeValue(node1, 1)); // "mango"
        System.out.println(getNodeValueRecur(node1, 1));// "mango"
    }
}