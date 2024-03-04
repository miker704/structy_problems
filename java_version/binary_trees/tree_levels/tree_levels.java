package binary_trees.tree_levels;
// tree levels

// Write a function,
// treeLevels, that takes in a pointer to the root of a binary tree.
// The function should return a 2-Dimensional vector where each subvector represents a level of the tree.

import java.util.*;
import java.util.AbstractMap.SimpleEntry;

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

public class tree_levels {
    public static <T> List<List<String>> treeLevels(Node<String> root) {


        List<List<String>> levels = new ArrayList<>();
        return _treeLevels(root, levels, 0);

    }

    public static <T> List<List<String>> _treeLevels(Node<String> root, List<List<String>> levels, int levelNum) {
            return new ArrayList<>(List.of());
    }

    public static <T> List<List<String>> treeLevelsBreadth(Node<String> root) {
            return new ArrayList<>(List.of());
    }

    public static void printVector(List<List<String>> vec) {
        System.out.println("{ ");
        for (List<String> x : vec) {
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

        printVector(treeLevels(a)); // ->
        printVector(treeLevelsBreadth(a)); // ->

        // [
        // ["a"],
        // ["b", "c"],
        // ["d", "e", "f"]
        // ]
        // Node a("a");
        // Node b("b");
        // Node c("c");
        // Node d("d");
        // Node e("e");
        // Node f("f");
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

        printVector(treeLevels(a)); // ->
        printVector(treeLevelsBreadth(a)); // ->

        // [
        // ["a"],
        // ["b", "c"],
        // ["d", "e", "f"],
        // ["g", "h", "i"]
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

        printVector(treeLevels(q)); // ->
        printVector(treeLevelsBreadth(q)); // ->

        // [
        // ["q"],
        // ["r", "s"],
        // ["t"],
        // ["u"],
        // ["v"]
        // ]
        printVector(treeLevels(null)); // -> []
        printVector(treeLevelsBreadth(null)); // -> []

    }
}