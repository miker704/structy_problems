package mixed_recall.post_order;
// post order

// Write a function, postOrder, that takes in the root of a binary tree.
//  The function should return an array containing the post-ordered values of the tree.

// Post-order traversal is when nodes
//  are recursively visited in the order: left child, right child, self.
//  https://en.wikipedia.org/wiki/Tree_traversal#Post-order,_LRN

import java.util.ArrayList;
import java.util.List;

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

public class post_order {

    //    public static <T> List<String> postOrder(Node<String> root) {
//        if (root == null) {
//            return new ArrayList<>();
//        }
//        List<String> left = postOrder(root.left);
//        List<String> right = postOrder(root.right);
//        List<String> result = new ArrayList<>();
//        result.addAll(left);
//        result.addAll(right);
//        result.add(root.val);
//        return result;
//    }
    public static <T> List<String> postOrder(Node<String> root) {
    
        List<String> result = new ArrayList<>();
    
        return result;
    }

    public static void _postOrder(Node<String> root, List<String> nodes) {
            return;

    }

    public static void printVector(List<String> vec) {
        System.out.print("[ ");
        vec.forEach(i -> {
            System.out.printf("%s,", i);
        });
        System.out.println(" ]");
    }

    public static void main(String[] args) {

        Node<String> x = new Node<>("x");
        Node<String> y = new Node<>("y");
        Node<String> z = new Node<>("z");

        x.left = y;
        x.right = z;

        // x
        // / \
        // y z

        printVector(postOrder(x));
        // ['y', 'z', 'x']
        Node<String> a = new Node<>("a");
        Node<String> b = new Node<>("b");
        Node<String> c = new Node<>("c");
        Node<String> d = new Node<>("d");
        Node<String> e = new Node<>("e");
        Node<String> f = new Node<>("f");
        Node<String> g = new Node<>("g");

        a.left = b;
        a.right = c;
        b.left = d;
        b.right = e;
        c.left = f;
        c.right = g;

        // a
        // / \
        // b c
        // / \ / \
        // d e f g

        printVector(postOrder(a));
        // [ 'd', 'e', 'b', 'f', 'g', 'c', 'a' ]
        // Node<Character> a = new Node<>('a');
        // Node<Character> b = new Node<>('b');
        // Node<Character> c = new Node<>('c');
        // Node<Character> d = new Node<>('d');
        // Node<Character> e = new Node<>('e');
        // Node<Character> f = new Node<>('f');
        // Node<Character> g = new Node<>('g');
        Node<String> h = new Node<>("h");

        a.left = b;
        a.right = c;
        b.left = d;
        b.right = e;
        c.right = f;
        c.left = null;
        e.left = g;
        e.right = h;

        // a
        // / \
        // b c
        // / \ \
        // d e f
        // / \
        // g h

        printVector(postOrder(a));
        // [ 'd', 'g', 'h', 'e', 'b', 'f', 'c', 'a' ]
        Node<String> l = new Node<>("l");
        Node<String> m = new Node<>("m");
        Node<String> n = new Node<>("n");
        Node<String> o = new Node<>("o");
        Node<String> p = new Node<>("p");
        Node<String> q = new Node<>("q");
        Node<String> r = new Node<>("r");
        Node<String> s = new Node<>("s");
        Node<String> t = new Node<>("t");

        l.left = m;
        l.right = n;
        n.left = o;
        n.right = p;
        o.left = q;
        o.right = r;
        p.left = s;
        p.right = t;

        // l
        // / \
        // m n
        // / \
        // o p
        // / \ / \
        // q r s t

        printVector(postOrder(l));
        // [ 'm', 'q', 'r', 'o', 's', 't', 'p', 'n', 'l' ]
        printVector(postOrder(null));
        // []
    }
}