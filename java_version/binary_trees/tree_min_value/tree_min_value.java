package binary_trees.tree_min_value;
// tree min value

// Write a function, treeMinValue, that takes in a pointer to the root of a binary tree that contains number values.
// The function should return the minimum value within the tree.

import java.util.ArrayDeque;
import java.util.Queue;
import java.util.Stack;

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

public class tree_min_value {

    public static <T> int treeMinValueDFS(Node<T> root) {

            return 0;
    }

    public static <T> int treeMinValueBFS(Node<T> root) {
            return 0;
    }

    public static <T> int treeMinValueRecurDFS(Node<Integer> root) {
            return Integer.MAX_VALUE;
    }

    public static void main(String[] args) {
        Node<Integer> a = new Node<>(3);
        Node<Integer> b = new Node<>(11);
        Node<Integer> c = new Node<>(4);
        Node<Integer> d = new Node<>(4);
        Node<Integer> e = new Node<>(-2);
        Node<Integer> f = new Node<>(1);

        a.left = b;
        a.right = c;
        b.left = d;
        b.right = e;
        c.right = f;

        // 3
        // / \
        // 11 4
        // / \ \
        // 4 -2 1

        System.out.println(treeMinValueDFS(a)); // -> -2
        System.out.println(treeMinValueRecurDFS(a)); // -> -2
        System.out.println(treeMinValueBFS(a)); // -> -2

        Node<Integer> a1 = new Node<>(5);
        Node<Integer> b1 = new Node<>(11);
        Node<Integer> c1 = new Node<>(3);
        Node<Integer> d1 = new Node<>(4);
        Node<Integer> e1 = new Node<>(14);
        Node<Integer> f1 = new Node<>(12);

        a1.left = b1;
        a1.right = c1;
        b1.left = d1;
        b1.right = e1;
        c1.right = f1;

        // 5
        // / \
        // 11 3
        // / \ \
        // 4 14 12

        // treeMinValue(&a1); // -> 3
        System.out.println(treeMinValueDFS(a1)); // -> 3
        System.out.println(treeMinValueRecurDFS(a1)); // -> 3
        System.out.println(treeMinValueBFS(a1)); // -> 3

        Node<Integer> a2 = new Node<>(-1);
        Node<Integer> b2 = new Node<>(-6);
        Node<Integer> c2 = new Node<>(-5);
        Node<Integer> d2 = new Node<>(-3);
        Node<Integer> e2 = new Node<>(-4);
        Node<Integer> f2 = new Node<>(-13);
        Node<Integer> g2 = new Node<>(-2);
        Node<Integer> h2 = new Node<>(-2);

        a2.left = b2;
        a2.right = c2;
        b2.left = d2;
        b2.right = e2;
        c2.right = f2;
        e2.left = g2;
        f2.right = h2;

        // -1
        // / \
        // -6 -5
        // / \ \
        // -3 -4 -13
        // / \
        // -2 -2

        // treeMinValue(&a2); // -> -13
        System.out.println(treeMinValueDFS(a2)); // -> -13
        System.out.println(treeMinValueRecurDFS(a2)); // -> -13
        System.out.println(treeMinValueBFS(a2)); // -> -13
        Node<Integer> a3 = new Node<>(42);

        // 42

        // treeMinValue(&a3); // -> 42
        System.out.println(treeMinValueDFS(a3)); // -> 42
        System.out.println(treeMinValueRecurDFS(a3)); // -> 42
        System.out.println(treeMinValueBFS(a3)); // -> 42
    }
}