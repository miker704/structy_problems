package linked_lists.add_lists;
// add lists


// Write a function, add_lists, that takes in the head of two linked lists, each representing a number.
//  The nodes of the linked lists contain digits as values. The nodes in the input lists are reversed;
//  this means that the least significant digit of the number is the head. The function should return
// the head of a new linked listed representing the sum of the input lists. The output list should have its
// digits reversed as well.

// Say we wanted to compute 621 + 354 normally. The sum is 975:

//    621
//  + 354
//  -----
//    975

// Then, the reversed linked list format of this problem would appear as:

//     1 -> 2 -> 6
//  +  4 -> 5 -> 3
//  --------------
//     5 -> 7 -> 9
class Node<T> {
    T val;
    Node<T> next;

    public Node(T val) {
        this.val = val;
        this.next = null;
    }
}

public class add_lists {

    public static <T> Node<Integer> addLists(Node<Integer> head1, Node<Integer> head2) {
        // todo
        Node<Integer> dead_node = new Node<>(0);
        


        return dead_node.next;
    }

    public static <T> Node<Integer> addListsRecur(Node<Integer> head1, Node<Integer> head2) {
        // todo
        return addListsRecurExe(head1,head2,0);
    }

    public static <T> Node<Integer> addListsRecurExe(Node<Integer> head1, Node<Integer> head2, int carryOver) {
        // todo
            return null;
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
        // 621
        // + 354
        // -----
        // 975

        Node<Integer> a1 = new Node<>(1);
        Node<Integer> a2 = new Node<>(2);
        Node<Integer> a3 = new Node<>(6);
        a1.next = a2;
        a2.next = a3;
        // 1 -> 2 -> 6

        Node<Integer> b1 = new Node<>(4);
        Node<Integer> b2 = new Node<>(5);
        Node<Integer> b3 = new Node<>(3);
        b1.next = b2;
        b2.next = b3;
        // 4 -> 5 -> 3

        printList(addLists(a1, b1));
        printList(addListsRecur(a1, b1));

        // 5 -> 7 -> 9
        // 7541
        // + 32
        // -----
        // 7573

        Node<Integer> c1 = new Node<>(1);
        Node<Integer> c2 = new Node<>(4);
        Node<Integer> c3 = new Node<>(5);
        Node<Integer> c4 = new Node<>(7);
        c1.next = c2;
        c2.next = c3;
        c3.next = c4;
        // 1 -> 4 -> 5 -> 7

        Node<Integer> d1 = new Node<>(2);
        Node<Integer> d2 = new Node<>(3);
        d1.next = d2;
        // 2 -> 3

        printList(addLists(c1, d1));
        printList(addListsRecur(c1, d1));

        // 3 -> 7 -> 5 -> 7
        // 39
        // + 47
        // ----
        // 86

        Node<Integer> e1 = new Node<>(9);
        Node<Integer> e2 = new Node<>(3);
        e1.next = e2;
        // 9 -> 3

        Node<Integer> f1 = new Node<>(7);
        Node<Integer> f2 = new Node<>(4);
        f1.next = f2;
        // 7 -> 4

        printList(addLists(e1, f1));
        printList(addListsRecur(e1, f1));

        // 6 -> 8
        // 89
        // + 47
        // ----
        // 136

        Node<Integer> g1 = new Node<>(9);
        Node<Integer> g2 = new Node<>(8);
        g1.next = g2;
        // 9 -> 8

        Node<Integer> h1 = new Node<>(7);
        Node<Integer> h2 = new Node<>(4);
        h1.next = h2;
        // 7 -> 4

        printList(addLists(g1, h1));
        printList(addListsRecur(g1, h1));

        // 6 -> 3 -> 1
        // 999
        // + 6
        // ----
        // 1005

        Node<Integer> i1 = new Node<>(9);
        Node<Integer> i2 = new Node<>(9);
        Node<Integer> i3 = new Node<>(9);
        i1.next = i2;
        i2.next = i3;
        // 9 -> 9 -> 9

        Node<Integer> j1 = new Node<>(6);
        // 6

        printList(addLists(i1, j1));
        printList(addListsRecur(i1, j1));

        // 5 -> 0 -> 0 -> 1

    }
}