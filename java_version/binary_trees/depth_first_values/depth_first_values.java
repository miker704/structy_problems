package binary_trees.depth_first_values;

import java.util.ArrayList;
import java.util.List;
import java.util.Stack;
// depth first values
// Write a function, depthFirstValues, that takes in a pointer to the root of a binary tree.
//  The function should return a vector containing all values of the tree in depth-first order.

// Hey. This is our first binary tree problem, so you should be liberal with
// watching the Approach and Walkthrough. Be productive, not stubborn. -AZ

// note when ever we are traversing a tree if regardless or inorder, pre, post out, dfs bfs if done iteratively all
// require a stack or some container for the nodes will recursion methods do not need one unless the values must be
// used for something else.

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

public class depth_first_values {

    public static List<String> depthFirstValues(Node<String> root) {
        // todo
        Stack<Node<String>> stack = new Stack<>();
        List<String> tree_nodes = new ArrayList<>();
        if(root == null){return tree_nodes;}
        stack.push(root);
        while(!stack.isEmpty()){
            Node<String> node  = stack.pop();
            tree_nodes.add(node.val);
            if(node.right != null){
                stack.push(node.right);
            }
            if(node.left != null){
                stack.push(node.left);
            }
        }
        return tree_nodes;
    }

    public static <T> void print_inorder(Node<T> root) {
        if (root != null) {
            print_inorder(root.left);
            System.out.print(" " + root.val + " ");
            print_inorder(root.right);
        }
        System.out.println(" ");
    }

    public static <T> void print_dfs_order(Node<T> root) {
        if (root != null) {
            System.out.print(" " + root.val + " ");
            print_dfs_order(root.left);
            print_dfs_order(root.right);
        }
    }

    public static List<String> depthFirstValuesRecur(Node<String> root) {
        // todo
        List<String> treeNodes = new ArrayList<>();
        return _depthFirstValuesRecur(root, treeNodes);
    }

    public static List<String> _depthFirstValuesRecur(Node<String> root, List<String> treeNodes) {
        // todo
        if (root == null) {
            return treeNodes;
        }
        treeNodes.add(root.val);
        _depthFirstValuesRecur(root.left, treeNodes);
        _depthFirstValuesRecur(root.right, treeNodes);
        return treeNodes;
    }

    public static void print_dfs_vector(List<String> tree_nodes) {
        for (String i : tree_nodes) {
            System.out.print(" " + i + " ");
        }
        System.out.println("\n");
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

        print_dfs_vector(depthFirstValues(a));
        print_dfs_vector(depthFirstValuesRecur(a));

        // print_inorder(&a);
        // print_dfs_order(&a);

        // -> ["a", "b", "d", "e", "c", "f"]
        Node<String> a1 = new Node<>("a");
        Node<String> b1 = new Node<>("b");
        Node<String> c1 = new Node<>("c");
        Node<String> d1 = new Node<>("d");
        Node<String> e1 = new Node<>("e");
        Node<String> f1 = new Node<>("f");
        Node<String> g1 = new Node<>("g");

        a1.left = b1;
        a1.right = c1;
        b1.left = d1;
        b1.right = e1;
        c1.right = f1;
        e1.left = g1;

        // a
        // / \
        // b c
        // / \ \
        // d e f
        // /
        // g
        print_dfs_vector(depthFirstValues(a1));
        print_dfs_vector(depthFirstValuesRecur(a1));
        // depthFirstValues(&a1);
        // -> ["a", "b", "d", "e", "g", "c", "f"]
        Node<String> a2 = new Node<>("a");

        // a
        // depthFirstValues(&a2);
        // -> ["a"]
        print_dfs_vector(depthFirstValues(a2));
        print_dfs_vector(depthFirstValuesRecur(a2));
        Node<String> a3 = new Node<>("a");
        Node<String> b3 = new Node<>("b");
        Node<String> c3 = new Node<>("c");
        Node<String> d3 = new Node<>("d");
        Node<String> e3 = new Node<>("e");
        a3.right = b3;
        b3.left = c3;
        c3.right = d3;
        d3.right = e3;

        // a
        // \
        // b
        // /
        // c
        // \
        // d
        // \
        // e
        print_dfs_vector(depthFirstValues(a3));
        print_dfs_vector(depthFirstValuesRecur(a3));
        // depthFirstValues(&a3);
        // -> ["a", "b", "c", "d", "e"]
        // depthFirstValues(nullptr);
        // -> []
        print_dfs_vector(depthFirstValues(null));
        print_dfs_vector(depthFirstValuesRecur(null));

    }

}