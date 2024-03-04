package mixed_recall.flip_tree;
// flip tree

// Write a function, flipTree, that takes in the root of a binary tree.
//  The function should flip the binary tree, turning left subtrees into right
//  subtrees and vice-versa. This flipping should occur in-place by modifying 
//  the original tree. The function should return the root of the tree.


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

public class flip_tree {

    public static <T> Node<T> flipTree(Node<T> root) {
        return _flipTree(root);
    }

    public static <T> Node<T> _flipTree(Node<T> root) {
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
        Node<String> a = new Node<>("a");
        Node<String> b = new Node<>("b");
        Node<String> c = new Node<>("c");
        Node<String> d = new Node<>("d");
        Node<String> e = new Node<>("e");
        Node<String> f = new Node<>("f");
        Node<String> g = new Node<>("g");
        Node<String> h = new Node<>("h");

        a.left = b;
        a.right = c;
        b.left = d;
        b.right = e;
        c.right = f;
        e.left = g;
        e.right = h;

        // a
        // / \
        // b c
        // / \ \
        // d e f
        // / \
        // g h

        printInorder(flipTree(a));

        // a
        // / \
        // c b
        // / / \
        // f e d
        // / \
        // h g
        Node<String> u = new Node<>("u");
        Node<String> t = new Node<>("t");
        Node<String> s = new Node<>("s");
        Node<String> r = new Node<>("r");
        Node<String> q = new Node<>("q");
        Node<String> p = new Node<>("p");

        u.left = t;
        u.right = s;
        s.right = r;
        r.left = q;
        r.right = p;

        // u
        // / \
        // t s
        // \
        // r
        // / \
        // q p

        printInorder(flipTree(u));

        // u
        // / \
        // s t
        // /
        // r
        // / \
        // p q
        Node<String> l1 = new Node<>("l");
        Node<String> m1 = new Node<>("m");
        Node<String> n1 = new Node<>("n");
        Node<String> o1 = new Node<>("o");
        Node<String> p1 = new Node<>("p");
        Node<String> q1 = new Node<>("q");
        Node<String> r1 = new Node<>("r");
        Node<String> s1 = new Node<>("s");
        Node<String> t1 = new Node<>("t");

        l1.left = m1;
        l1.right = n1;
        n1.left = o1;
        n1.right = p1;
        o1.left = q1;
        o1.right = r1;
        p1.left = s1;
        p1.right = t1;

        // l
        // / \
        // m n
        // / \
        // o p
        // / \ / \
        // q r s t

        printInorder(flipTree(l1));

        // l
        // / \
        // n m
        // / \
        // p o
        // / \ / \
        // t s r q
        Node<String> n2 = new Node<>("n");
        Node<String> y1 = new Node<>("y");
        Node<String> c1 = new Node<>("c");

        n2.left = y1;
        n2.right = c1;

        // n
        // / \
        // y c

        printInorder(flipTree(n2));
        // n
        // / \
        // c y
    }
}