package binary_trees.tree_value_count;

import java.util.ArrayDeque;
import java.util.Queue;

// tree value count
// Write a function, treeValueCount, that takes in the root of a binary tree and a target value.
// The function should return the number of times that the target occurs in the tree.
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
    public class tree_value_count {

        public static <T> int treeValueCount(Node<Integer> root, int targetVal) {
            
            return 1;
        }

        public static <T> int treeValueCountBreadth(Node<Integer> root, int targetVal) {

        
            int matches = 0;
        
            return matches;
        }

        public static void main(String[] args) {
            Node<Integer> a = new Node<>(12);
            Node<Integer> b = new Node<>(6);
            Node<Integer> c = new Node<>(6);
            Node<Integer> d = new Node<>(4);
            Node<Integer> e = new Node<>(6);
            Node<Integer> f = new Node<>(12);

            a.left = b;
            a.right = c;
            b.left = d;
            b.right = e;
            c.right = f;

            // 12
            // / \
            // 6 6
            // / \ \
            // 4 6 12

            System.out.println(treeValueCount(a, 6)); // -> 3
            System.out.println(treeValueCountBreadth(a, 6)); // -> 3

            // Node a(12);
            // Node b(6);
            // Node c(6);
            // Node d(4);
            // Node e(6);
            // Node f(12);

            // a.left = &b;
            // a.right = &c;
            // b.left = &d;
            // b.right = &e;
            // c.right = &f;

            // 12
            // / \
            // 6 6
            // / \ \
            // 4 6 12

            System.out.println(treeValueCount(a, 12));
            System.out.println(treeValueCountBreadth(a, 12));

            // -> 2
            Node<Integer> a1 = new Node<>(7);
            Node<Integer> b1 = new Node<>(5);
            Node<Integer> c1 = new Node<>(1);
            Node<Integer> d1 = new Node<>(1);
            Node<Integer> e1 = new Node<>(8);
            Node<Integer> f1 = new Node<>(7);
            Node<Integer> g1 = new Node<>(1);
            Node<Integer> h1 = new Node<>(1);

            a1.left = b1;
            a1.right = c1;
            b1.left = d1;
            b1.right = e1;
            c1.right = f1;
            e1.left = g1;
            f1.right = h1;

            // 7
            // / \
            // 5 1
            // / \ \
            // 1 8 7
            // / \
            // 1 1
            System.out.println(treeValueCount(a1, 1)); // -> 4
            System.out.println(treeValueCountBreadth(a1, 1)); // -> 4

            // Node a(7);
            // Node b(5);
            // Node c(1);
            // Node d(1);
            // Node e(8);
            // Node f(7);
            // Node g(1);
            // Node h(1);

            // a.left = &b;
            // a.right = &c;
            // b.left = &d;
            // b.right = &e;
            // c.right = &f;
            // e.left = &g;
            // f.right = &h;

            // 7
            // / \
            // 5 1
            // / \ \
            // 1 8 7
            // / \
            // 1 1

            System.out.println(treeValueCount(a1, 9)); // -> 0
            System.out.println(treeValueCountBreadth(a1, 9)); // -> 0

            System.out.println(treeValueCount(null, 42)); // -> 0
            System.out.println(treeValueCountBreadth(null, 42)); // -> 0

        }
    }

