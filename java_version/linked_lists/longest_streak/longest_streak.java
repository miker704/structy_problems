package linked_lists.longest_streak;

// longest streak
// Write a function, longest_streak, that takes in the head of a linked list as an argument.
// The function should return the length of the longest consecutive
// streak of the same value within the list.

class Node<T> {
    T val;
    Node<T> next;

    public Node(T val) {
        this.val = val;
        this.next = null;
    }
}

public class longest_streak {

    public static <T> int longestStreak(Node<T> head) {
        int maxStreak = 0;
    
        return maxStreak;
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

        Node<Integer> a = new Node<>(5);
        Node<Integer> b = new Node<>(5);
        Node<Integer> c = new Node<>(7);
        Node<Integer> d = new Node<>(7);
        Node<Integer> e = new Node<>(7);
        Node<Integer> f = new Node<>(6);

        a.next = b;
        b.next = c;
        c.next = d;
        d.next = e;
        e.next = f;

        // 5 -> 5 -> 7 -> 7 -> 7 -> 6

        System.out.println(longestStreak(a)); // 3

        Node<Integer> a1 = new Node<>(3);
        Node<Integer> b1 = new Node<>(3);
        Node<Integer> c1 = new Node<>(3);
        Node<Integer> d1 = new Node<>(3);
        Node<Integer> e1 = new Node<>(9);
        Node<Integer> f1 = new Node<>(9);

        a1.next = b1;
        b1.next = c1;
        c1.next = d1;
        d1.next = e1;
        e1.next = f1;

        // 3 -> 3 -> 3 -> 3 -> 9 -> 9

        System.out.println(longestStreak(a1)); // 4

        Node<Integer> a2 = new Node<>(9);
        Node<Integer> b2 = new Node<>(9);
        Node<Integer> c2 = new Node<>(1);
        Node<Integer> d2 = new Node<>(9);
        Node<Integer> e2 = new Node<>(9);
        Node<Integer> f2 = new Node<>(9);

        a2.next = b2;
        b2.next = c2;
        c2.next = d2;
        d2.next = e2;
        e2.next = f2;

        // 9 -> 9 -> 1 -> 9 -> 9 -> 9

        System.out.println(longestStreak(a2)); // 3

        Node<Integer> a3 = new Node<>(5);
        Node<Integer> b3 = new Node<>(5);

        a3.next = b3;

        // 5 -> 5

        System.out.println(longestStreak(a3)); // 2

        Node<Integer> a4 = new Node<>(4);

        // 4

        System.out.println(longestStreak(a4));// 1
        System.out.println(longestStreak(null));// 0

    }
}