package mixed_recall.build_tree_in_pre;
// build tree in pre

// Write a function, buildTreeInPre, that takes in a vector of in-ordered values
//  and a vector of pre-ordered values for a binary tree. The function should build 
//  a binary tree that has the given in-order and pre-order traversal structure.
//  The function should return the root of this tree.

import java.util.List;

// You can assume that the values of inorder and preorder are unique.

// Be sure to allocate the nodes of your tree dynamically with the new keyword.

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

public class build_tree_in_pre {

    public static <T> Node<String> buildTreeInPre(List<String> inOrder, List<String> preOrder) {
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
        printInorder(buildTreeInPre(
                List.of("z", "y", "x"),
                List.of("y", "z", "x")

        ));
        // y
        // / \
        // z x
        printInorder(buildTreeInPre(
                List.of("y", "z", "x"),
                List.of("y", "x", "z")

        ));
        // y
        // \
        // x
        // /
        // z
        printInorder(buildTreeInPre(
                List.of("d", "b", "g", "e", "h", "a", "c", "f"),
                List.of("a", "b", "d", "e", "g", "h", "c", "f")

        ));
        // a
        // / \
        // b c
        // / \ \
        // d e f
        // / \
        // g h
        printInorder(buildTreeInPre(
                List.of("t", "u", "s", "q", "r", "p"),
                List.of("u", "t", "s", "r", "q", "p")

        ));
        // u
        // / \
        // t s
        // \
        // r
        // / \
        // q p
        printInorder(buildTreeInPre(
                List.of("m", "l", "q", "o", "r", "n", "s", "p", "t"),
                List.of("l", "m", "n", "o", "q", "r", "p", "s", "t")

        ));
        // l
        // / \
        // m n
        // / \
        // o p
        // / \ / \
        // q r s t

    }
}