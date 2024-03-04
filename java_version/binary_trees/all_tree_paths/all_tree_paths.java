package binary_trees.all_tree_paths;

import java.util.ArrayList;
import java.util.List;

// all tree paths
// Write a function, all_tree_paths, that takes in the root of a binary tree.
//  The function should return a 2-Dimensional list where each subarray represents a
//  root-to-leaf path in the tree.

// The order within an individual path must start at the root and end at the leaf,
// but the relative order among paths in the outer list does not matter.
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

public class all_tree_paths {

    public static <T> List<List<String>> allTreePaths(Node<String> root) {

            return new ArrayList<>(List.of());
    }


    public static void printVector(List<List<String>> vec) {
        for (List<String> x : vec) {
            System.out.println("{ ");
            System.out.print("{ ");
            for (String y : x) {

                System.out.print(y + " , ");
            }
            System.out.println(" }");
        }
        System.out.println(" }");
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
        printVector(allTreePaths(a)); // ->
        // [
        // [ "a", "b", "d" ],
        // [ "a", "b", "e" ],
        // [ "a", "c", "f" ]
        // ]
        Node<String> g = new Node<>("g");
        Node<String> h = new Node<>("h");
        Node<String> i = new Node<>("i");

        a.left = b;
        a.right = c;
        b.left = d;
        b.right = e;
        c.right = f;
        e.left = g;
        e.right = h;
        f.left = i;
        // a
        // / \
        // b c
        // / \ \
        // d e f
        // / \ /
        // g h i
        printVector(allTreePaths(a)); // ->
        // [
        // [ "a", "b", "d" ],
        // [ "a", "b", "e", "g" ],
        // [ "a", "b", "e", "h" ],
        // [ "a", "c", "f", "i" ]
        // ]
        Node<String> q = new Node<>("q");
        Node<String> r = new Node<>("r");
        Node<String> s = new Node<>("s");
        Node<String> t = new Node<>("t");
        Node<String> u = new Node<>("u");
        Node<String> v = new Node<>("v");

        q.left = r;
        q.right = s;
        r.right = t;
        t.left = u;
        u.right = v;

        // q
        // / \
        // r s
        // \
        // t
        // /
        // u
        // /
        // v

        printVector(allTreePaths(q)); // ->
        // [
        // [ "q", "r", "t", "u", "v" ],
        // [ "q", "s" ]
        // ]
        Node<String> z = new Node<>("z");

        // z

        printVector(allTreePaths(z)); // ->
                                      // [
                                      // ["z"]
                                      // ]

    }
}