package binary_trees.max_root_to_leaf_path_sum;
// max root to leaf path sum

// Write a function, maxPathSum, that takes in a pointer to the root of a binary tree that contains number values.
//  The function should return the maximum sum of any root to leaf path within the tree.

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

public class max_root_to_leaf_path_sum {


    public static <T> int maxPathSum(Node<Integer> root) {
        if (root == null) {
            return Integer.MIN_VALUE;
        }
        if (root.right == null && root.left == null) {
            return root.val;
        }
        return root.val + Math.max(maxPathSum(root.left), maxPathSum(root.right));
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

        System.out.println(maxPathSum(a)); // -> 18

        Node<Integer> a1 = new Node<>(5);
        Node<Integer> b1 = new Node<>(11);
        Node<Integer> c1 = new Node<>(54);
        Node<Integer> d1 = new Node<>(20);
        Node<Integer> e1 = new Node<>(15);
        Node<Integer> f1 = new Node<>(1);
        Node<Integer> g1 = new Node<>(3);

        a1.left = b1;
        a1.right = c1;
        b1.left = d1;
        b1.right = e1;
        e1.left = f1;
        e1.right = g1;

        // 5
        // / \
        // 11 54
        // / \
        // 20 15
        // / \
        // 1 3

        // maxPathSum(&a1); // -> 59
        System.out.println(maxPathSum(a1)); // -> 59

        Node<Integer> a2 = new Node<>(-1);
        Node<Integer> b2 = new Node<>(-6);
        Node<Integer> c2 = new Node<>(-5);
        Node<Integer> d2 = new Node<>(-3);
        Node<Integer> e2 = new Node<>(0);
        Node<Integer> f2 = new Node<>(-13);
        Node<Integer> g2 = new Node<>(-1);
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
        // -3 0 -13
        // / \
        // -1 -2

        // maxPathSum(&a2); // -> -8
        System.out.println(maxPathSum(a2)); // -> 8
        Node<Integer> a3 = new Node<>(42);

        // 42

        // maxPathSum(&a3); // -> 42
        System.out.println(maxPathSum(a3)); // -> 42
    }
}