package mixed_recall.linked_palindrome;
// linked palindrome

// Write a function, linked_palindrome, that takes in the head of a linked list as an argument.
//  The function should return a boolean indicating whether 
// or not the linked list is a palindrome. A palindrome is a sequence that is the same both forwards and backwards.

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

class Node<T> {
    T val;
    Node<T> next;

    public Node(T val) {
        this.val = val;
        this.next = null;
    }
}

public class linked_palindrome {

    public static <T> boolean linkedPalindrome(Node<T> head) {

        List<T> nodes = new ArrayList<>();
    

        return isPalindrome(nodes);
    }

    public static <T> boolean isPalindrome(List<T> array) {
        
        return true;
    }

    public static void main(String[] args) {
        Node<Integer> a = new Node<>(3);
        Node<Integer> b = new Node<>(2);
        Node<Integer> c = new Node<>(7);
        Node<Integer> d = new Node<>(7);
        Node<Integer> e = new Node<>(2);
        Node<Integer> f = new Node<>(3);

        a.next = b;
        b.next = c;
        c.next = d;
        d.next = e;
        e.next = f;

        // 3 -> 2 -> 7 -> 7 -> 2 -> 3
        System.out.println(linkedPalindrome(a)); // true
        Node<Integer> a1 = new Node<>(3);
        Node<Integer> b1 = new Node<>(2);
        Node<Integer> c1 = new Node<>(4);

        a1.next = b1;
        b1.next = c1;

        // 3 -> 2 -> 4
        System.out.println(linkedPalindrome(a1)); // false
        Node<Integer> a2 = new Node<>(3);
        Node<Integer> b2 = new Node<>(2);
        Node<Integer> c2 = new Node<>(3);

        a2.next = b2;
        b2.next = c2;

        // 3 -> 2 -> 3
        System.out.println(linkedPalindrome(a2)); // true
        Node<Integer> a3 = new Node<>(0);
        Node<Integer> b3 = new Node<>(1);
        Node<Integer> c3 = new Node<>(0);
        Node<Integer> d3 = new Node<>(1);
        Node<Integer> e3 = new Node<>(0);

        a3.next = b3;
        b3.next = c3;
        c3.next = d3;
        d3.next = e3;

        // 0 -> 1 -> 0 -> 1 -> 0
        System.out.println(linkedPalindrome(a3)); // true
        Node<Integer> a4 = new Node<>(0);
        Node<Integer> b4 = new Node<>(1);
        Node<Integer> c4 = new Node<>(0);
        Node<Integer> d4 = new Node<>(1);
        Node<Integer> e4 = new Node<>(1);

        a4.next = b4;
        b4.next = c4;
        c4.next = d4;
        d4.next = e4;

        // 0 -> 1 -> 0 -> 1 -> 1
        System.out.println(linkedPalindrome(a4)); // false
        Node<Integer> a5 = new Node<>(5);

        // 5
        System.out.println(linkedPalindrome(a5)); // true
        System.out.println(linkedPalindrome(null)); // true
    }
}