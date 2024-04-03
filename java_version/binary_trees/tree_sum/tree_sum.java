package binary_trees.tree_sum;

import java.util.ArrayDeque;
import java.util.Queue;
import java.util.Stack;

// tree sum
// Write a function, treeSum, that takes in a pointer to the root of a binary tree
// that contains number values. The function should return the total sum of all values in the tree.
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

public class tree_sum {

    public static <T> int treeSum(Node<Integer> root) {
        int sum = 0;
        Stack<Node<Integer>> stack = new Stack<>();
        if (root == null) {
            return 0;
        }
        stack.push(root);
        while(!stack.isEmpty()){
            Node<Integer>curr = stack.pop();
            sum+=curr.val;
            if(curr.left != null){
                stack.push(curr.left);
            }
            if(curr.right != null){
                stack.push(curr.right);
            }
        }
        return sum;
    }

    public static <T> int treeSumRecur(Node<Integer> root) {
        if (root == null) {
            return 0;
        }
        return root.val + treeSumRecur(root.left) + treeSumRecur(root.right);
    }

    public static <T> int treeSumBreadth(Node<Integer> root) {

        int sum = 0;
        Queue<Node<Integer>> queue = new ArrayDeque<>();
        if (root == null) {
            return 0;
        }
        queue.add(root);
        while (!queue.isEmpty()) {
            Node<Integer> curr = queue.remove();
            sum += curr.val;
            if (curr.left != null) {
                queue.add(curr.left);
            }
            if (curr.right != null) {
                queue.add(curr.right);
            }
        }
        return sum;
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

        System.out.println(treeSum(a)); // -> 21
        System.out.println(treeSumRecur(a)); // -> 21
        System.out.println(treeSumBreadth(a)); // -> 21

        Node<Integer> a1 = new Node<>(1);
        Node<Integer> b1 = new Node<>(6);
        Node<Integer> c1 = new Node<>(0);
        Node<Integer> d1 = new Node<>(3);
        Node<Integer> e1 = new Node<>(-6);
        Node<Integer> f1 = new Node<>(2);
        Node<Integer> g1 = new Node<>(2);
        Node<Integer> h1 = new Node<>(2);

        a1.left = b1;
        a1.right = c1;
        b1.left = d1;
        b1.right = e1;
        c1.right = f1;
        e1.left = g1;
        f1.right = h1;

        // 1
        // / \
        // 6 0
        // / \ \
        // 3 -6 2
        // / \
        // 2 2

        System.out.println(treeSum(a1)); // -> 10
        System.out.println(treeSumRecur(a1)); // -> 10
        System.out.println(treeSumBreadth(a1)); // -> 10

        System.out.println(treeSum(null)); // -> 0
        System.out.println(treeSumRecur(null)); // -> 0
        System.out.println(treeSumBreadth(null)); // -> 0
    }
}