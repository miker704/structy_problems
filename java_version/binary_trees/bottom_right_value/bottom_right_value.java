package binary_trees.bottom_right_value;
// bottom right value

// Write a function, bottomRightValue, that takes in a pointer to the root of a binary tree.
// The function should return the right-most value in the bottom-most level of the tree.

import java.util.ArrayDeque;
import java.util.Queue;

// You may assume that the input tree is non-empty.
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

public class bottom_right_value {

    public static <T> String bottomRightValue(Node<String> root) {

            return root.val;
    }

    public static void main(String[] args) {
        Node<String> a = new Node<>("3");
        Node<String> b = new Node<>("11");
        Node<String> c = new Node<>("10");
        Node<String> d = new Node<>("4");
        Node<String> e = new Node<>("-2");
        Node<String> f = new Node<>("1");

        a.left = b;
        a.right = c;
        b.left = d;
        b.right = e;
        c.right = f;

        // 3
        // / \
        // 11 10
        // / \ \
        // 4 -2 1

        System.out.println(bottomRightValue(a)); // -> "1"
        Node<String> a1 = new Node<>("-1");
        Node<String> b1 = new Node<>("-6");
        Node<String> c1 = new Node<>("-5");
        Node<String> d1 = new Node<>("-3");
        Node<String> e1 = new Node<>("-4");
        Node<String> f1 = new Node<>("-13");
        Node<String> g1 = new Node<>("-2");
        Node<String> h1 = new Node<>("6");

        a1.left = b1;
        a1.right = c1;
        b1.left = d1;
        b1.right = e1;
        c1.right = f1;
        e1.left = g1;
        e1.right = h1;

        // -1
        // / \
        // -6 -5
        // / \ \
        // -3 -4 -13
        // / \
        // -2 6

        System.out.println(bottomRightValue(a1)); // -> "6"
        // Node a("-1");
        // Node b("-6");
        // Node c("-5");
        // Node d("-3");
        // Node e("-4");
        // Node f("-13");
        // Node g("-2");
        // Node h("6");
        Node<String> i1 = new Node<>("7");

        // a.left = &b;
        // a.right = &c;
        // b.left = &d;
        // b.right = &e;
        // c.right = &f;
        // e.left = &g;
        // e.right = &h;
        f1.left = i1;

        // -1
        // / \
        // -6 -5
        // / \ \
        // -3 -4 -13
        // / \ /
        // -2 6 7

        System.out.println(bottomRightValue(a1)); // -> "7"
        Node<String> a2 = new Node<>("a");
        Node<String> b2 = new Node<>("b");
        Node<String> c2 = new Node<>("c");
        Node<String> d2 = new Node<>("d");
        Node<String> e2 = new Node<>("e");
        Node<String> f2 = new Node<>("f");

        a2.left = b2;
        a2.right = c2;
        b2.right = d2;
        d2.left = e2;
        e2.right = f2;

        // a
        // / \
        // b c
        // \
        // d
        // /
        // e
        // /
        // f

        System.out.println(bottomRightValue(a2)); // -> "f"
        Node<String> a3 = new Node<>("42");

        // 42

        System.out.println(bottomRightValue(a3)); // -> "42"
    }
}