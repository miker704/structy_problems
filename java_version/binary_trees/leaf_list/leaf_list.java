package binary_trees.leaf_list;

import java.util.*;

// leaf list
// Write a function, leafList, that takes in the root of a binary tree
// and returns an array containing the values of all leaf nodes in left-to-right order.
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

public class leaf_list {

    public static <T> List<String> leafList(Node<T> root) {
        if(root == null){return new ArrayList<>();}
        List<String>vec = new ArrayList<>();
        return _leafList(root,vec);
    }

    public static <T> List<String> _leafList(Node<T> root, List<String> vec) {
        return vec;
    }

    public static <T> List<String> leafListDepthFirstIter(Node<T> root) {
        List<String>vec = new ArrayList<>();
        return vec;
    }

    public static <T> List<String> leafListBreadthFirstIter(Node<T> root) {
        List<String>vec = new ArrayList<>();
        return vec;
    }
    public static void printVector(List<String> vec) {
        for (String x : vec) {
            System.out.print(x + " , ");
        }
        System.out.println("");
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

        printVector(leafList(a)); // -> [ "d", "e", "f" ]
        printVector(leafListDepthFirstIter(a)); // -> [ "d", "e", "f" ]
//        printVector(leafListBreadthFirstIter(a)); // -> [ "d", "e", "f" ]

        // Node a("a");
        // Node b("b");
        // Node c("c");
        // Node d("d");
        // Node e("e");
        // Node f("f");
        Node<String> g = new Node<>("g");
        Node<String> h = new Node<>("h");

        a.left = b;
        a.right = c;
        b.left = d;
        b.right = e;
        c.right = f;
        e.left = g;
        f.right = h;

        // a
        // / \
        // b c
        // / \ \
        // d e f
        // / \
        // g h

        printVector(leafList(a)); // -> [ "d", "g", "h" ]
        printVector(leafListDepthFirstIter(a)); // -> [ "d", "g", "h" ]
//        printVector(leafListBreadthFirstIter(a)); // -> [ "d", "g", "h" ]

        Node<String> a1 = new Node<>("5");
        Node<String> b1 = new Node<>("11");
        Node<String> c1 = new Node<>("54");
        Node<String> d1 = new Node<>("20");
        Node<String> e1 = new Node<>("15");
        Node<String> f1 = new Node<>("1");
        Node<String> g1 = new Node<>("3");

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

        printVector(leafList(a1)); // -> [ "20", "1", "3", "54" ]
        printVector(leafListDepthFirstIter(a1)); // -> [ "20", "1", "3", "54" ]
//        printVector(leafListBreadthFirstIter(a1)); // -> [ "20", "1", "3", "54" ]

        Node<String> x = new Node<>("x");

        // x

        printVector(leafList(x)); // -> [ "x" ]
        printVector(leafListDepthFirstIter(x)); // -> [ "x" ]
//        printVector(leafListBreadthFirstIter(x)); // -> [ "x" ]

        printVector(leafList(null)); // -> [ ]
        printVector(leafListDepthFirstIter(null)); // -> [ ]
//        printVector(leafListBreadthFirstIter(null)); // -> [ ]

    }
}