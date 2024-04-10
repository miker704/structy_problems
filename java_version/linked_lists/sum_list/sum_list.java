package linked_lists.sum_list;

// sum list
// Write a function, sumList, that takes in the head of a linked list containing numbers as an argument.
// The function should return the total sum of all values in the linked list.
class Node<T> {
    T val;
    Node<T> next;

    public Node(T val) {
        this.val = val;
        this.next = null;
    }
}

public class sum_list {
    public static int sumList(Node<Integer> head) {
        // todo
        int sum = 0;
        Node<Integer> curr = head;
        while (curr != null) {
            sum += curr.val;
            curr = curr.next;
        }

        return sum;
    }

    public static int sumListRecur(Node<Integer> head) {
        // todo
        Node<Integer> curr = head;
        return _sumListRecur(curr);
    }

    public static int _sumListRecur(Node<Integer> curr) {
        // todo
        if (curr == null) {
            return 0;
        }
        return curr.val + _sumListRecur(curr.next);
    }

    public static void main(String[] args) {
        Node<Integer> a = new Node<>(2);
        Node<Integer> b = new Node<>(8);
        Node<Integer> c = new Node<>(3);
        Node<Integer> d = new Node<>(-1);
        Node<Integer> e = new Node<>(7);
        a.next = b;
        b.next = c;
        c.next = d;
        d.next = e;
        System.out.println(sumList(a));
        System.out.println(sumListRecur(a));
        Node<Integer> x = new Node<>(38); // 19
        Node<Integer> y = new Node<>(4); // 19

        x.next = y;
        System.out.println(sumList(x)); // 42
        System.out.println(sumListRecur(x)); // 42
        Node<Integer> z = new Node<>(100);
        System.out.println(sumList(z)); // 100
        System.out.println(sumListRecur(z)); // 100
        System.out.println(sumList(null)); // 0
        System.out.println(sumListRecur(null)); // 0
    }

}