package mixed_recall.build_tree_in_post;
// build tree in post

import java.util.List;

// Write a function, build_tree_in_post, 
// that takes in a list of in-ordered values and a list
//  of post-ordered values for a binary tree. The function should build
//   a binary tree that has the given in-order and post-order traversal 
//   structure. The function should return the root of this tree.

// You can assume that the values of inorder and postorder are unique.
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

public class build_tree_in_post {

    public static <T> Node<String> buildTreeInPost(List<String> inOrder, List<String> postOrder) {

            return null;

    }

    public static <T> void printInorder(Node<T> root) {
        if (root != null) {
            printInorder(root.left);
            System.out.print(" " + root.val + " ");
            printInorder(root.right);
        } else {
            System.out.println();
        }
    }

    public static void main(String[] args) {
        printInorder(buildTreeInPost(
                List.of("y", "x", "z"),
                List.of("y", "z", "x")));
        // x
        // / \
        // y z
        printInorder(buildTreeInPost(
                List.of("d", "b", "e", "a", "f", "c", "g"),
                List.of("d", "e", "b", "f", "g", "c", "a")));
        // a
        // / \
        // b c
        // / \ / \
        // d e f g
        printInorder(buildTreeInPost(
                List.of("d", "b", "g", "e", "h", "a", "c", "f"),
                List.of("d", "g", "h", "e", "b", "f", "c", "a")));
        // a
        // / \
        // b c
        // / \ \
        // d e f
        // / \
        // g h
        printInorder(buildTreeInPost(
                List.of("m", "n"),
                List.of("m", "n")));
        // n
        // /
        // m
        printInorder(buildTreeInPost(
                List.of("n", "m"),
                List.of("m", "n")));
        // n
        // \
        // m
    }
}