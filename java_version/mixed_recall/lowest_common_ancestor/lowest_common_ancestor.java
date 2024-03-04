package mixed_recall.lowest_common_ancestor;
// lowest common ancestor

// Write a function, lowestCommonAncestor, that takes in the root of 
// a binary tree and two values. The function should return the value 
// of the lowest common ancestor of the two values in the tree.

import java.util.*;

// You may assume that the tree values are unique and the tree is non-empty.

// Note that a node may be considered an ancestor of itself.
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

public class lowest_common_ancestor {

    public static <T> String lowestCommonAncestor(Node<T> root, String val1, String val2) {

    
        return "";
    }

    public static <T> List<String> getPath(Node<T> root, String val) {

        return new ArrayList<>();
    }

    public static void main(String[] args) {
        Node<String> a = new Node<>("a");
        Node<String> b = new Node<>("b");
        Node<String> c = new Node<>("c");
        Node<String> d = new Node<>("d");
        Node<String> e = new Node<>("e");
        Node<String> f = new Node<>("f");
        Node<String> g = new Node<>("g");
        Node<String> h = new Node<>("h");

        a.left = b;
        a.right = c;
        b.left = d;
        b.right = e;
        c.right = f;
        e.left = g;
        e.right = h;

        // a
        // / \
        // b c
        // / \ \
        // d e f
        // / \
        // g h
        System.out.println(lowestCommonAncestor(a, "d", "h")); // b
        System.out.println(lowestCommonAncestor(a, "d", "g")); // b
        System.out.println(lowestCommonAncestor(a, "g", "c")); // a
        System.out.println(lowestCommonAncestor(a, "b", "g")); // b
        System.out.println(lowestCommonAncestor(a, "f", "c")); // c
        // example tree

        Node<String> l = new Node<>("l");
        Node<String> m = new Node<>("m");
        Node<String> n = new Node<>("n");
        Node<String> o = new Node<>("o");
        Node<String> p = new Node<>("p");
        Node<String> q = new Node<>("q");
        Node<String> r = new Node<>("r");
        Node<String> s = new Node<>("s");
        Node<String> t = new Node<>("t");

        l.left = m;
        l.right = n;
        n.left = o;
        n.right = p;
        o.left = q;
        o.right = r;
        p.left = s;
        p.right = t;

        // l
        // / \
        // m n
        // / \
        // o p
        // / \ / \
        // q r s t
        System.out.println(lowestCommonAncestor(l, "r", "p")); // n
        System.out.println(lowestCommonAncestor(l, "m", "o")); // l
        System.out.println(lowestCommonAncestor(l, "t", "q")); // n
        System.out.println(lowestCommonAncestor(l, "s", "p")); // p

    }
}