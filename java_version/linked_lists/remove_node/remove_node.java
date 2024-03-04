package linked_lists.remove_node;
// remove node

// Write a function, removeNode, that takes in a pointer to the head of a linked list and a target value as arguments.
//  The function should delete the node containing the target value from the linked list
//  and return the head of the resulting linked list. If the target appears multiple times
//   in the linked list, only remove the first instance of the target in the list.

// Do this in-place. You do not need to dynamically deallocate the memory with delete,
// just reassign next pointers correctly.

// You may assume that the input list is non-empty.

// You may assume that the input list contains the target.
class Node<T> {
    T val;
    Node<T> next;

    public Node(T val) {
        this.val = val;
        this.next = null;
    }
}

public class remove_node {
    public static <T> Node<T> removeNode(Node<T> head, String targetValue) {
        // todo

        Node<T> curr = head;
        Node<T> prev = curr;

        //empty list
            return null;

        // single node in list
        

        // removing head with more nodes in the list

    

        // in between nodes
        // tail



    }

    public static <T> Node<T> removeNodeRecur(Node<T> head, String targetValue) {
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
        Node<String> a = new Node<>("a");
        Node<String> b = new Node<>("b");
        Node<String> c = new Node<>("c");
        Node<String> d = new Node<>("d");
        Node<String> e = new Node<>("e");
        Node<String> f = new Node<>("f");

        a.next = b;
        b.next = c;
        c.next = d;
        d.next = e;
        e.next = f;
        // a -> b -> c -> d -> e -> f
        printList(removeNode(a, "c"));
        a.next = b;
        b.next = c;
        c.next = d;
        d.next = e;
        e.next = f;
        printList(removeNodeRecur(a, "c"));
        // a -> b -> d -> e -> f
        Node<String> x = new Node<>("x");
        Node<String> y = new Node<>("y");
        Node<String> z = new Node<>("z");
        x.next = y;
        y.next = z;
        // x -> y -> z
        printList(removeNode(x, "z"));
        x.next = y;
        y.next = z;
        printList(removeNodeRecur(x, "z"));
        // x -> y
        Node<String> q = new Node<>("q");
        Node<String> r = new Node<>("r");
        Node<String> s = new Node<>("s");

        q.next = r;
        r.next = s;
        // q -> r -> s
        printList(removeNode(q, "q"));
        q.next = r;
        r.next = s;
        printList(removeNodeRecur(q, "q"));
        // r -> s

        Node<String> node1 = new Node<>("h");
        Node<String> node2 = new Node<>("i");
        Node<String> node3 = new Node<>("j");
        Node<String> node4 = new Node<>("i");

        node1.next = node2;
        node2.next = node3;
        node3.next = node4;

        // h -> i -> j -> i

        printList(removeNode(node1, "i"));
        node1.next = node2;
        node2.next = node3;
        node3.next = node4;
        printList(removeNodeRecur(node1, "i"));

        // h -> j -> i
        Node<String> t = new Node<>("t");

        // // t
        printList(removeNode(t, "t"));
        printList(removeNodeRecur(t, "t"));

        removeNode(t, "t");
        // nullptr

    }
}