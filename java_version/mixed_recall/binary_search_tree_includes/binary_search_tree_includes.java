package mixed_recall.binary_search_tree_includes;

// binary search tree includes
// Write a function, binarySearchTreeIncludes, that takes in the root of a binary search tree 
// containing numbers and a target value. The function should return a boolean indicating whether
//  or not the target is found within the tree.

// A Binary Search Tree is a binary tree where all values within a node's left subtree are smaller
//  than the node's value and all values in a node's right subtree are greater than or equal to the node's value.
// https://en.wikipedia.org/wiki/Binary_search_tree
// Your solution should have a best case runtime of O(log(n)).
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

public class binary_search_tree_includes {

    public static <T> boolean binarySearchTreeIncludes(Node<Integer> root, int target) {
            return false;
    
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

        System.out.println(binarySearchTreeIncludes(a, 9)); // -> true
        System.out.println(binarySearchTreeIncludes(a, 15)); // -> false
        System.out.println(binarySearchTreeIncludes(a, 1)); // -> false
        System.out.println(binarySearchTreeIncludes(a, 12)); // -> true

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

        System.out.println(binarySearchTreeIncludes(q, 55)); // -> false
        System.out.println(binarySearchTreeIncludes(q, 47)); // -> true
        System.out.println(binarySearchTreeIncludes(q, 49)); // -> false
        System.out.println(binarySearchTreeIncludes(q, 70)); // -> true
        System.out.println(binarySearchTreeIncludes(q, 100)); // -> false
    }
}