package linked_lists.is_univalue_list;

// is univalue list
// Write a function, isUnivalueList, that takes in a pointer to the head of a linked list as an argument.
//  The function should return a boolean indicating whether or not the linked list
//  contains exactly one unique value.

// You may assume that the input list is non-empty.
class Node<T> {
    T val;
    Node<T> next;

    public Node(T val) {
        this.val = val;
        this.next = null;
    }
}

public class is_univalue_list {
    public static <T> boolean isUnivalueList(Node<T> head) {
        // todo
    
        return true;
    }

    public static <T> boolean isUnivalueListRecur(Node<T> head) {
        // todo
        Node<T> curr =head;

        return _isUnivalueListRecur(head,curr);
    }

    public static <T> boolean _isUnivalueListRecur(Node<T> head, Node<T> curr) {
        // todo
            return false;
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
        Node<Integer> a = new Node<>(7);
        Node<Integer> b = new Node<>(7);
        Node<Integer> c = new Node<>(7);
        a.next = b;
        b.next = c;
        // 7 -> 7 -> 7
        System.out.println(isUnivalueList(a)); // 1 (true)
        System.out.println(isUnivalueListRecur(a)); // 1 (true)
        c.val = 4;
        a.next = b;
        b.next = c;
        // 7 -> 7 -> 4
        System.out.println(isUnivalueList(a)); // 0 (false)
        System.out.println(isUnivalueListRecur(a)); // 0 (false)
        Node<Integer> u = new Node<>(2);
        Node<Integer> v = new Node<>(2);
        Node<Integer> w = new Node<>(2);
        Node<Integer> x = new Node<>(2);
        Node<Integer> y = new Node<>(2);
        u.next = v;
        v.next = w;
        w.next = x;
        x.next = y;
        // 2 -> 2 -> 2 -> 2 -> 2
        System.out.println(isUnivalueList(u)); // 1 (true)
        System.out.println(isUnivalueListRecur(u)); // 1 (true)
        Node<Integer> u1 = new Node<>(2);
        Node<Integer> v1 = new Node<>(2);
        Node<Integer> w1 = new Node<>(3);
        Node<Integer> x1 = new Node<>(3);
        Node<Integer> y1 = new Node<>(2);
        u1.next = v1;
        v1.next = w1;
        w1.next = x1;
        x1.next = y1;
        // 2 -> 2 -> 3 -> 3 -> 2
        System.out.println(isUnivalueList(u1)); // 0 (false)
        System.out.println(isUnivalueListRecur(u1));// 0 (false)
        Node<Integer> z = new Node<>(42);
        System.out.println(isUnivalueList(z)); // 1 (true)
        System.out.println(isUnivalueListRecur(z)); // 1 (true)
    }
}