package binary_trees.how_high;
// how high

// Write a function, howHigh, that takes in the root of a binary tree.
// The function should return a number representing the height of the tree.

// The height of a binary tree is defined as the maximal number of edges from the root node to any leaf node.

// If the tree is empty, return -1.
class Node<T> {
    T val;
    Node<T> left;
    Node<T> right;

    public Node(T val) {
        this.val = val;
        this.left = null;
        this.right = null;
    }
}

public class how_high {

    public static <T> int howHigh(Node<T> root) {
        return 1;
    }

    public static void main(String[] args) {
        Node<String> a = new Node<>("a");
        Node<String> b = new Node<>("b");
        Node<String> c = new Node<>("c");
        Node<String> d = new Node<>("d");
        Node<String> e = new Node<>("e");
        Node<String> f = new Node<>("f");

        a.left = b;
        a.right = c;
        b.left = d;
        b.right = e;
        c.right = f;

        // a
        // / \
        // b c
        // / \ \
        // d e f
        System.out.println(howHigh(a)); // -> 2
        Node<String> g = new Node<>("g");
        a.left = b;
        a.right = c;
        b.left = d;
        b.right = e;
        c.right = f;
        e.left = g;
        // a
        // / \
        // b c
        // / \ \
        // d e f
        // /
        // g
        System.out.println(howHigh(a)); // -> 3
        a.right = c;
        a.left = null;
        c.left = null;
        c.right = null;
        // a
        // \
        // c
        System.out.println(howHigh(a)); // -> 1
        a.right = null;
        a.left = null;
        // a
        System.out.println(howHigh(a)); // -> 0
        System.out.println(howHigh(null)); // -> -1

    }
}