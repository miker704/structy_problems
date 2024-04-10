package linked_lists.zipper_lists;
// zipper lists

// Write a function, zipperLists, that takes in pointers to the heads of two linked lists.
// The function should zipper the two lists together into single linked list by alternating nodes.
// If one of the linked lists is longer than the other, the resulting list should terminate with the remaining nodes.
//  The function should return a pointer to the head of the zippered linked list.

// Do this in-place, by mutating the original Nodes.

// You may assume that both input lists are non-empty.

class Node<T> {
    T val;
    Node<T> next;

    public Node(T val) {
        this.val = val;
        this.next = null;
    }
}

public class zipper_lists {
    public static <T> Node<T> zipperLists(Node<T> head1, Node<T> head2) {
        // todo
        Node<T> new_head = head1;
        Node<T> tail = head1;
        Node<T> curr1 = head1.next;
        Node<T> curr2 = head2;
        int count = 0;
        while (curr1 != null && curr2 != null) {
            if (count % 2 == 0) {
                tail.next = curr2;
                curr2 = curr2.next;
            } else {
                tail.next = curr1;
                curr1 = curr1.next;
            }
            tail = tail.next;
            count++;
        }

        if (curr1 != null) {
            tail.next = curr1;
        }
        if (curr2 != null) {
            tail.next = curr2;
        }


        return new_head;
    }

    public static <T> Node<T> zipperListsRecur(Node<T> head1, Node<T> head2) {
        // todo
        return _zipperListsRecur(head1, head2);
    }

    public static <T> Node<T> _zipperListsRecur(Node<T> head1, Node<T> head2) {
        // todo
        if (head1 == null) {
            return head2;
        }
        if (head2 == null) {
            return head1;
        }
        head2.next = _zipperListsRecur(head1.next, head2.next);
        head1.next = head2;
        return head1;

    }

    public static <T> void printList(Node<T> head) {
        Node<T> curr = head;
        while (curr != null) {
            System.out.print("[ " + curr.val + " | next ] ----->");
            curr = curr.next;
        }
        System.out.println("\n");
    }

    public static void main(String[] args) {
        Node<String> a = new Node<>("a");
        Node<String> b = new Node<>("b");
        Node<String> c = new Node<>("c");
        a.next = b;
        b.next = c;
        // a -> b -> c

        Node<String> x = new Node<>("x");
        Node<String> y = new Node<>("y");
        Node<String> z = new Node<>("z");
        x.next = y;
        y.next = z;
        // x -> y -> z
        System.out.println("list 1");
        printList(a);
        System.out.println("list 2");
        printList(x);

        System.out.println("list 1 & 2 zipped");
        printList(zipperLists(a, x));
        // a -> x -> b -> y -> c -> z

        a.next = b;
        b.next = c;
        c.next = null;
        x.next = y;
        y.next = z;
        System.out.println("list 1");
        printList(a);
        System.out.println("list 2");
        printList(x);
        System.out.println("list 1 & 2 zipped via recursion");
        printList(zipperListsRecur(a, x));
        // a -> x -> b -> y -> c -> z
        Node<String> d = new Node<>("d");
        Node<String> e = new Node<>("e");
        Node<String> f = new Node<>("f");
        a.next = b;
        b.next = c;
        c.next = d;
        d.next = e;
        e.next = f;
        x.next = y;
        y.next = z;
        // a -> b -> c -> d -> e -> f
        // x -> y -> z
        System.out.println("list 1");
        printList(a);
        System.out.println("list 2");
        printList(x);
        System.out.println("list 1 & 2 zipped");
        printList(zipperLists(a, x));
        // a -> x -> b -> y -> c -> z -> d -> e -> f
        a.next = b;
        b.next = c;
        c.next = d;
        d.next = e;
        e.next = f;
        x.next = y;
        y.next = z;
        z.next = null;
        System.out.println("list 1");
        printList(a);
        System.out.println("list 2");
        printList(x);
        System.out.println("list 1 & 2 zipped via recursion");
        // a -> x -> b -> y -> c -> z -> d -> e -> f
        printList(zipperListsRecur(a, x));

        Node<String> s = new Node<>("s");
        Node<String> t = new Node<>("t");
        s.next = t;
        // s -> t

        Node<String> one = new Node<>("1");
        Node<String> two = new Node<>("2");
        Node<String> three = new Node<>("3");
        Node<String> four = new Node<>("4");
        one.next = two;
        two.next = three;
        three.next = four;
        // 1 -> 2 -> 3 -> 4

        System.out.println("list 3");
        printList(s);
        System.out.println("list 4");
        printList(one);
        System.out.println("list 3 & 4 zipped ");
        // s -> 1 -> t -> 2 -> 3 -> 4
        printList(zipperLists(s, one));
        s.next = t;
        t.next = null;
        one.next = two;
        two.next = three;
        three.next = four;
        System.out.println("list 3");
        printList(s);
        System.out.println("list 4");
        printList(one);
        System.out.println("list 3 & 4 zipped via recursion");
        // s -> 1 -> t -> 2 -> 3 -> 4
        printList(zipperListsRecur(s, one));

        Node<String> w = new Node<>("w");
        one.next = two;
        two.next = three;
        three.next = null;

        System.out.println("list 5");
        printList(w);
        System.out.println("list 4");
        printList(one);
        System.out.println("list 5 & 4 zipped ");
        printList(zipperLists(w, one));
        // w -> 1 -> 2 -> 3
        w.next = null;
        one.next = two;
        two.next = three;
        three.next = null;
        System.out.println("list 5");
        printList(w);
        System.out.println("list 4");
        printList(one);
        System.out.println("list 5 & 4 zipped via recursion");
        printList(zipperListsRecur(w, one));
        // w -> 1 -> 2 -> 3
        one.next = two;
        two.next = three;
        w.next = null;
        System.out.println("list 5");
        printList(w);
        System.out.println("list 4");
        printList(one);
        System.out.println("list 5 & 4 zipped ");
        // 1 -> w -> 2 -> 3
        printList(zipperLists(one, w));
        one.next = two;
        two.next = three;
        w.next = null;
        System.out.println("list 5");
        printList(w);
        System.out.println("list 4");
        printList(one);
        System.out.println("list 5 & 4 zipped via recursion");
        // 1 -> w -> 2 -> 3
        printList(zipperListsRecur(one, w));
    }
}