package binary_trees.tree_path_finder;
// tree path finder

// Write a function, pathFinder, that takes in a pointer to the root of a binary tree
// and a target value. The function should return a pointer to a vector representing
// a path to the target value.

import java.util.*;

// Be sure to dynamically allocate the vector with new.

// If the target value is not present in the tree, then return nullptr;

// You may assume that the tree contains unique values.
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

public class tree_path_finder {

    public static <T> List<String> pathFinder(Node<String> root, String targetVal) {
        List<String> vec =(_pathFinder(root, targetVal));
        return vec;
    }

    public static <T> List<String> _pathFinder(Node<String> root, String targetVal) {

        return null;
    }

    public static void printVector(List<String> vec) {
//        System.out.println(vec.size());
        if(vec == null){return;}
        if (vec.isEmpty()) {
            return;
        }
        for (String x : vec) {
            System.out.print(x + " , ");
        }
        System.out.println(" ");
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

        printVector(pathFinder(a, "e")); // -> [ "a", "b", "e" ]
        // Node a("a");
        // Node b("b");
        // Node c("c");
        // Node d("d");
        // Node e("e");
        // Node f("f");

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

        printVector(pathFinder(a, "p")); // -> null
        // Node a("a");
        // Node b("b");
        // Node c("c");
        // Node d("d");
        // Node e("e");
        // Node f("f");
        Node<String> g = new Node<>("g");
        Node<String> h = new Node<>("h");

        a.left = b;
        a.right = c;
        b.left = d;
        b.right = e;
        c.right = f;
        e.left = g;
        f.right = h;

        // a
        // / \
        // b c
        // / \ \
        // d e f
        // / \
        // g h

        printVector(pathFinder(a, "c")); // -> ["a", "c"]
        // Node a("a");
        // Node b("b");
        // Node c("c");
        // Node d("d");
        // Node e("e");
        // Node f("f");
        // Node g("g");
        // Node h("h");

        a.left = b;
        a.right = c;
        b.left = d;
        b.right = e;
        c.right = f;
        e.left = g;
        f.right = h;

        // a
        // / \
        // b c
        // / \ \
        // d e f
        // / \
        // g h

        printVector(pathFinder(a, "h")); // -> ["a", "c", "f", "h"]
        Node<String> x = new Node<>("x");

        // x

        printVector(pathFinder(x, "x")); // -> ["x"]
        printVector(pathFinder(null, "x")); // -> null
        Node<String> root = new Node<>("0");
        Node<String> curr = root;
        for (int i = 1; i <= 6000; i += 1) {
            curr.right = new Node<>(String.valueOf(i));
            curr = curr.right;
        }

        // 0
        // \
        // 1
        // \
        // 2
        // \
        // 3
        // .
        // .
        // .
        // 5999
        // \
        // 6000

        printVector(pathFinder(root, "3451")); // -> [0, 1, 2, 3, ..., 3450, 3451]
    }
}