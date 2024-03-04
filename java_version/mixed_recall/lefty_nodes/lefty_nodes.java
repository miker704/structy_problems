package mixed_recall.lefty_nodes;
// lefty nodes

import java.util.ArrayList;
import java.util.List;

// Write a function, printVector(leftyNodes, that takes in the root of a binary tree.
//  The function should return an vector containing the left-most value on every 
//  level of the tree. The vector must be ordered in a top-down fashion where the
//   root is the first element.

// Note that the left-most node on a level may not necessarily be a left child.

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

public class lefty_nodes {

    public static <T> List<String> leftyNodes(Node<T> root) {
    
        List<String> nodes = new ArrayList<>();
        
        return nodes;
    }

    public static <T> void _leftyNodes(Node<T> root, int level, List<String> values) {
            return;
    
    }

    public static <T> void printVector(List<String> vec) {
        System.out.println("[");

        for (String x : vec) {
            System.out.print(x + " , ");
        }
        System.out.println("]");

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

        printVector(leftyNodes(a)); // [ 'a', 'b', 'd', 'g' ]
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

        printVector(leftyNodes(u)); // [ 'u', 't', 'r', 'q' ]
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

        printVector(leftyNodes(l1)); // [ 'l', 'm', 'o', 'q' ]
        Node<String> n2 = new Node<>("n");
        Node<String> y2 = new Node<>("y");
        Node<String> c2 = new Node<>("c");

        n2.left = y2;
        n2.right = c2;

        // n
        // / \
        // y c

        printVector(leftyNodes(n2)); // [ 'n', 'y' ]
        Node<String> i3 = new Node<>("i");
        Node<String> n3 = new Node<>("n");
        Node<String> s3 = new Node<>("s");
        Node<String> t3 = new Node<>("t");

        i3.right = n3;
        n3.left = s3;
        n3.right = t3;

        // i
        // \
        // n
        // / \
        // s t

        printVector(leftyNodes(i3)); // [ 'i', 'n', 's' ]
        printVector(leftyNodes(null)); // [ ]
    }
}