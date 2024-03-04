package linked_lists.merge_lists;
// merge lists

// Write a function, mergeLists, that takes in pointers to the heads of two sorted linked lists.
//  The function should merge the two lists together into single sorted linked list.
//  The function should return a pointer to the head of the merged linked list.

// Do this in-place, by mutating the original Nodes.

// You may assume that both input lists are non-empty and contain increasing sorted numbers.

class Node<T> {
    T val;
    Node<T> next;

    public Node(T val) {
        this.val = val;
        this.next = null;
    }
}

public class merge_lists {

    public static Node<Integer> mergeLists(Node<Integer> head1, Node<Integer> head2) {
        // todo
        Node<Integer> dead_node = new Node<>(0);

    

        return dead_node.next;
    }

    public static Node<Integer> mergeListsRecur(Node<Integer> head1, Node<Integer> head2) {
        // todo

            return head2;

    }

    public static <T> void printList(Node<T> head) {
        Node<T> curr = head;
        while (curr != null) {
            System.out.print("[ " + curr.val + " | next ] ----->");
            curr = curr.next;
        }
        System.out.print("NULL");
        System.out.println("\n");
    }

    public static void main(String[] args) {

        Node<Integer> a = new Node<>(5);
        Node<Integer> b = new Node<>(7);
        Node<Integer> c = new Node<>(10);
        Node<Integer> d = new Node<>(12);
        Node<Integer> e = new Node<>(20);
        Node<Integer> f = new Node<>(28);
        a.next = b;
        b.next = c;
        c.next = d;
        d.next = e;
        e.next = f;
        // 5 -> 7 -> 10 -> 12 -> 20 -> 28
        Node<Integer> q = new Node<>(6);
        Node<Integer> r = new Node<>(8);
        Node<Integer> s = new Node<>(9);
        Node<Integer> t = new Node<>(25);
        q.next = r;
        r.next = s;
        s.next = t;
        // 6 -> 8 -> 9 -> 25

        System.out.println("p1: ");
        System.out.println("p1 list 1: ");
        printList(a);
        System.out.println("p1 list 2: ");
        printList(q);
        System.out.println("p1 iter: ");
        printList(mergeLists(a, q));



        a.next = b;
        b.next = c;
        c.next = d;
        d.next = e;
        e.next = f;

        f.next = null;
        q.next = r;
        r.next = s;
        s.next = t;
        t.next = null;

        System.out.println("p1 list 1: ");
        printList(a);
        System.out.println("p1 list 2: ");
        printList(q);
        System.out.println("p1 recurs: ");
        printList(mergeListsRecur(a, q));
        // // 5 -> 6 -> 7 -> 8 -> 9 -> 10 -> 12 -> 20 -> 25 -> 28

        a.next = b;
        b.next = c;
        c.next = d;
        d.next = e;
        e.next = f;
        f.next = null;
        // // 5 -> 7 -> 10 -> 12 -> 20 -> 28
        q.val = 1;
        r.val = 8;
        s.val = 9;
        t.val = 10;
        q.next = r;
        r.next = s;
        s.next = t;
        t.next = null;
        // // 1 -> 8 -> 9 -> 10
        printList(mergeLists(a, q));
        // // 1 -> 5 -> 7 -> 8 -> 9 -> 10 -> 10 -> 12 -> 20 -> 28
        a.next = b;
        b.next = c;
        c.next = d;
        d.next = e;
        e.next = f;
        f.next = null;

        // // 5 -> 7 -> 10 -> 12 -> 20 -> 28
        q.next = r;
        r.next = s;
        s.next = t;
        t.next = null;

        printList(mergeListsRecur(a, q));
        a.next = b;
        b.next = c;
        c.next = d;
        d.next = e;
        e.next = f;
        q.next = r;
        r.next = s;
        s.next = t;
        t.next = null;
        q.val = 67;
        q.next = null;
        Node<Integer> h = new Node<>(30);
        // // 30
        Node<Integer> p = new Node<>(15);
        // // Node q(67);
        p.next = q;
        // // 15 -> 67
        printList(mergeLists(h, p));

        // // 15 -> 30 -> 67
        h.next = null;
        q.next = null;
        p.next = q;

        printList(mergeListsRecur(h, p));

    }
}