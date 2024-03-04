package mixed_recall.is_binary_search_tree;
// is binary search tree

import java.util.ArrayList;
import java.util.List;

// Write a function, isBinarySearchTree, 
// that takes in the root of a binary tree. The function should return a boolean
//  indicating whether or not the tree satisfies the binary search tree property.

// A Binary Search Tree is a binary tree where all values within a node's left 
// subtree are smaller than the node's value and all values in a node's right 
// subtree are greater than or equal to the node's value.
// https://en.wikipedia.org/wiki/Binary_search_tree

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

public class is_binary_search_tree {

    public static <T> void printInorder(Node<Integer> root) {
        if (root != null) {
            printInorder(root.left);
            System.out.println(" " + root.val + " ");
            printInorder(root.right);
        } else {
            System.out.println();
        }
    }

    public static <T> boolean isBinarySearchTree(Node<Integer> root) {
            return false;
    }

    public static <T> List<Integer> inOrderTraversal(Node<Integer> root) {
    
        List<Integer> result = new ArrayList<>();
    
        return result;
    }

    public static boolean isSorted(List<Integer> values) {
    
        return true;
    }

    public static void main(String[] args) {

        Node<Integer> a = new Node<>(12);
        Node<Integer> b = new Node<>(5);
        Node<Integer> c = new Node<>(18);
        Node<Integer> d = new Node<>(3);
        Node<Integer> e = new Node<>(9);
        Node<Integer> f = new Node<>(19);

        a.left = b;
        a.right = c;
        b.left = d;
        b.right = e;
        c.right = f;

        // 12
        // / \
        // 5 18
        // / \ \
        // 3 9 19

        System.out.println(isBinarySearchTree(a)); // -> true
        // Node<Integer> a = new Node<>(12);
        // Node<Integer> b = new Node<>(5);
        // Node<Integer> c = new Node<>(18);
        // Node<Integer> d = new Node<>(3);
        // Node<Integer> e = new Node<>(15);
        // Node<Integer> f = new Node<>(19);
        e.val = 15;
        a.left = b;
        a.right = c;
        b.left = d;
        b.right = e;
        c.right = f;

        // 12
        // / \
        // 5 18
        // / \ \
        // 3 15 19

        System.out.println(isBinarySearchTree(a)); // -> false
        // Node<Integer> a = new Node<>(12);
        // Node<Integer> b = new Node<>(5);
        // Node<Integer> c = new Node<>(19);
        // Node<Integer> d = new Node<>(3);
        // Node<Integer> e = new Node<>(9);
        // Node<Integer> f = new Node<>(19);

        c.val = 19;
        e.val = 9;
        a.left = b;
        a.right = c;
        b.left = d;
        b.right = e;
        c.right = f;

        // 12
        // / \
        // 5 19
        // / \ \
        // 3 9 19

        System.out.println(isBinarySearchTree(a)); // -> true
        // Node<Integer> a = new Node<>(12);
        // Node<Integer> b = new Node<>(5);
        // Node<Integer> c = new Node<>(10);
        // Node<Integer> d = new Node<>(3);
        // Node<Integer> e = new Node<>(9);
        // Node<Integer> f = new Node<>(19);

        c.val = 10;
        a.left = b;
        a.right = c;
        b.left = d;
        b.right = e;
        c.right = f;

        // 12
        // / \
        // 5 10
        // / \ \
        // 3 9 19

        System.out.println(isBinarySearchTree(a)); // -> false
        Node<Integer> q = new Node<>(54);
        Node<Integer> r = new Node<>(42);
        Node<Integer> s = new Node<>(70);
        Node<Integer> t = new Node<>(31);
        Node<Integer> u = new Node<>(50);
        Node<Integer> v = new Node<>(72);
        Node<Integer> w = new Node<>(47);
        Node<Integer> x = new Node<>(90);

        q.left = r;
        q.right = s;
        r.left = t;
        r.right = u;
        s.right = v;
        u.left = w;
        v.right = x;

        // 54
        // / \
        // 42 70
        // / \ \
        // 31 50 72
        // / \
        // 47 90

        System.out.println(isBinarySearchTree(q)); // -> true
    }
}