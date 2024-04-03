package binary_trees.tree_includes;
// tree includes

// Write a function, treeIncludes, that takes in a pointer to the root of a binary tree and a target value.
// The function should return a boolean indicating whether or not the value is contained in the tree.

//the function is a bit different because we are using strings as values however this method should work for any data type

import java.util.ArrayDeque;
import java.util.Queue;

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

public class tree_includes {

    public static <T> boolean treeIncludes(Node<T> root, String targetValue) {
        if(root == null){return false;}
        Queue<Node<T>>queue = new ArrayDeque<>();
        queue.add(root);
        while(!queue.isEmpty()){
            Node<T>curr = queue.remove();
            if(curr.val == targetValue){ return true;}
            if(curr.left != null){ queue.add(curr.left);}
            if(curr.right != null){ queue.add(curr.right);}
        }
        return false;
    }

    public static <T> boolean treeIncludesRecur(Node<T> root, String targetValue) {
        if (root == null) {
            return false;
        }
        if (root.val == targetValue) {
            return true;
        }
        return treeIncludesRecur(root.left, targetValue) || treeIncludesRecur(root.right, targetValue);
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

        System.out.println(treeIncludes(a, "e")); // -> 1 (true)
        System.out.println(treeIncludesRecur(a, "e")); // -> 1 (true)

        Node<String> a1 = new Node<>("a");
        Node<String> b1 = new Node<>("b");
        Node<String> c1 = new Node<>("c");
        Node<String> d1 = new Node<>("d");
        Node<String> e1 = new Node<>("e");
        Node<String> f1 = new Node<>("f");

        a1.left = b1;
        a1.right = c1;
        b1.left = d1;
        b1.right = e1;
        c1.right = f1;

        // a
        // / \
        // b c
        // / \ \
        // d e f

        System.out.println(treeIncludes(a1, "a")); // -> 1 (true)
        System.out.println(treeIncludesRecur(a1, "a")); // -> 1 (true)

        Node<String> a2 = new Node<>("a");
        Node<String> b2 = new Node<>("b");
        Node<String> c2 = new Node<>("c");
        Node<String> d2 = new Node<>("d");
        Node<String> e2 = new Node<>("e");
        Node<String> f2 = new Node<>("f");

        a2.left = b2;
        a2.right = c2;
        b2.left = d2;
        b2.right = e2;
        c2.right = f2;

        // a
        // / \
        // b c
        // / \ \
        // d e f

        System.out.println(treeIncludes(a2, "n")); // -> 0 (false)
        System.out.println(treeIncludesRecur(a2, "n")); // -> 0 (false)

        Node<String> a3 = new Node<>("a");
        Node<String> b3 = new Node<>("b");
        Node<String> c3 = new Node<>("c");
        Node<String> d3 = new Node<>("d");
        Node<String> e3 = new Node<>("e");
        Node<String> f3 = new Node<>("f");
        Node<String> g3 = new Node<>("g");
        Node<String> h3 = new Node<>("h");

        a3.left = b3;
        a3.right = c3;
        b3.left = d3;
        b3.right = e3;
        c3.right = f3;
        e3.left = g3;
        f3.right = h3;

        // a
        // / \
        // b c
        // / \ \
        // d e f
        // / \
        // g h

        System.out.println(treeIncludes(a3, "f")); // -> 1 (true)
        System.out.println(treeIncludesRecur(a3, "f")); // -> 1 (true)

        Node<String> a4 = new Node<>("a");
        Node<String> b4 = new Node<>("b");
        Node<String> c4 = new Node<>("c");
        Node<String> d4 = new Node<>("d");
        Node<String> e4 = new Node<>("e");
        Node<String> f4 = new Node<>("f");
        Node<String> g4 = new Node<>("g");
        Node<String> h4 = new Node<>("h");

        a4.left = b4;
        a4.right = c4;
        b4.left = d4;
        b4.right = e4;
        c4.right = f4;
        e4.left = g4;
        f4.right = h4;

        // a
        // / \
        // b c
        // / \ \
        // d e f
        // / \
        // g h

        System.out.println(treeIncludes(a4, "p")); // -> 0 (false)
        System.out.println(treeIncludesRecur(a4, "p")); // -> 0 (false)

        System.out.println(treeIncludes(null, "b")); // -> 0 (false)
        System.out.println(treeIncludesRecur(null, "b")); // -> 0 (false)

    }
}