package binary_trees.breadth_first_values;

import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.List;
import java.util.Queue;

// breadth first values
// Write a function, breadthFirstValues, that takes in a pointer to the root of a binary tree.
// The function should return a vector containing all values of the tree in breadth-first order.
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

public class breadth_first_value {

    public static <T> List<String> breadthFirstValues(Node<String> root) {

        List<String>treeNodes = new ArrayList<>();
        Queue<Node<String>> queue = new ArrayDeque<>();
        if(root == null){return treeNodes;}
        queue.add(root);
        while(!queue.isEmpty()){
            Node<String> currNode  = queue.remove();
            treeNodes.add(currNode.val);
            if(currNode.left != null){
                queue.add(currNode.left);
            }
            if(currNode.right != null){
                queue.add(currNode.right);
            }
        }

        return treeNodes;
    }

    public static void print_bfs(List<String> tree_nodes) {
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

        print_bfs(breadthFirstValues(a));
        // print_bfs(breadthFirstValuesRecur(&a));

        // -> ["a", "b", "c", "d", "e", "f"]
        Node<String> a1 = new Node<>("a");
        Node<String> b1 = new Node<>("b");
        Node<String> c1 = new Node<>("c");
        Node<String> d1 = new Node<>("d");
        Node<String> e1 = new Node<>("e");
        Node<String> f1 = new Node<>("f");
        Node<String> g1 = new Node<>("g");
        Node<String> h1 = new Node<>("h");

        a1.left = b1;
        a1.right = c1;
        b1.left = d1;
        b1.right = e1;
        c1.right = f1;
        e1.left = g1;
        f1.right = h1;

        // a
        // / \
        // b c
        // / \ \
        // d e f
        // / \
        // g h
        print_bfs(breadthFirstValues(a1));
        // print_bfs(breadthFirstValuesRecur(&a1));
        // breadthFirstValues(&a1);
        // -> ["a", "b", "c", "d", "e", "f", "g", "h"]
        Node<String> a0 = new Node<>("a");

        // a
        print_bfs(breadthFirstValues(a0));
        // print_bfs(breadthFirstValuesRecur(&a0));
        // breadthFirstValues(&a2);
        // -> ["a"]
        Node<String> a2 = new Node<>("a");
        Node<String> b2 = new Node<>("b");
        Node<String> c2 = new Node<>("c");
        Node<String> d2 = new Node<>("d");
        Node<String> e2 = new Node<>("e");
        Node<String> x2 = new Node<>("x");

        a2.right = b2;
        b2.left = c2;
        c2.left = x2;
        c2.right = d2;
        d2.right = e2;

        // a
        // \
        // b
        // /
        // c
        // / \
        // x d
        // \
        // e
        print_bfs(breadthFirstValues(a2));
        // print_bfs(breadthFirstValuesRecur(&a2));
        // breadthFirstValues(&a2);
        // -> ["a", "b", "c", "x", "d", "e"]
        print_bfs(breadthFirstValues(null));
        // print_bfs(breadthFirstValuesRecur(nullptr));
        // breadthFirstValues(nullptr);
        // -> []

    }
}