package binary_trees.level_averages;

import java.util.*;

// level averages
// Write a function,
// levelAverages, that takes in a pointer to the root of a binary tree that
//  contains number values. The function should return a vector containing the average
//   value of each level.

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

public class level_averages {

    public static <T> List<Double> levelAverages(Node<Double> root) {
        List<Double> vec = new ArrayList<>();
        return vec;
    }

    public static <T> void _levelAverages(Node<Double> root, List<List<Double>> levels, int levelNum) {
        return;

    }

    public static double calc_Avg(List<Double> vec) {
        return 0;
    }

    public static <T> List<Double> levelAveragesBreadthFirst(Node<Double> root) {
        return new ArrayList<>();
    }

    public static void printVector(List<Double> vec) {
        for (Double x : vec) {
            System.out.print(x + " , ");
        }
        System.out.println("");
    }

    public static void main(String[] args) {
        Node<Double> a = new Node<>(3.);
        Node<Double> b = new Node<>(11.);
        Node<Double> c = new Node<>(4.);
        Node<Double> d = new Node<>(4.);
        Node<Double> e = new Node<>(-2.);
        Node<Double> f = new Node<>(1.);

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

        printVector(levelAverages(a)); // -> [ 3, 7.5, 1 ]
        printVector(levelAveragesBreadthFirst(a));
        Node<Double> a1 = new Node<>(5.);
        Node<Double> b1 = new Node<>(11.);
        Node<Double> c1 = new Node<>(54.);
        Node<Double> d1 = new Node<>(20.);
        Node<Double> e1 = new Node<>(15.);
        Node<Double> f1 = new Node<>(1.);
        Node<Double> g1 = new Node<>(3.);

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

        printVector(levelAverages(a1)); // -> [ 5, 32.5, 17.5, 2 ]
        printVector(levelAveragesBreadthFirst(a1));

        Node<Double> a2 = new Node<>(-1.);
        Node<Double> b2 = new Node<>(-6.);
        Node<Double> c2 = new Node<>(-5.);
        Node<Double> d2 = new Node<>(-3.);
        Node<Double> e2 = new Node<>(0.);
        Node<Double> f2 = new Node<>(45.);
        Node<Double> g2 = new Node<>(-1.);
        Node<Double> h2 = new Node<>(-2.);

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
        // -3 0 45
        // / \
        // -1 -2

        printVector(levelAverages(a2)); // -> [ -1, -5.5, 14, -1.5 ]
        printVector(levelAveragesBreadthFirst(a2));

        Node<Double> q = new Node<>(13.);
        Node<Double> r = new Node<>(4.);
        Node<Double> s = new Node<>(2.);
        Node<Double> t = new Node<>(9.);
        Node<Double> u = new Node<>(2.);
        Node<Double> v = new Node<>(42.);

        q.left = r;
        q.right = s;
        r.right = t;
        t.left = u;
        u.right = v;

        // 13
        // / \
        // 4 2
        // \
        // 9
        // /
        // 2
        // /
        // 42

        printVector(levelAverages(q)); // -> [ 13, 3, 9, 2, 42 ]
        printVector(levelAveragesBreadthFirst(q));

        printVector(levelAverages(null)); // -> [ ]
        printVector(levelAveragesBreadthFirst(null));

    }
}