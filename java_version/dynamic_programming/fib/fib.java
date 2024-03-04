package dynamic_programming.fib;

import java.util.HashMap;

/*
fib
Write a function fib that takes in a number argument, n, and
returns the n-th number of the Fibonacci sequence.
The 0-th number of the sequence is 0.
The 1-st number of the sequence is 1.
To generate further numbers of the sequence, calculate
the sum of previous two numbers.
Solve this recursively.

*/
public class fib {

    public static int Fibonacci(int n, HashMap<Integer, Integer> hash) {

        return hash.get(n);
    }

    public static void main(String[] args) {
        HashMap<Integer, Integer> hash = new HashMap<>();
        System.out.println(Fibonacci(0, hash)); // 0
        System.out.println(Fibonacci(1, hash)); // 1
        System.out.println(Fibonacci(2, hash)); // 1
        System.out.println(Fibonacci(3, hash)); // 2
        System.out.println(Fibonacci(4, hash)); // 3
        System.out.println(Fibonacci(5, hash)); // 5
        System.out.println(Fibonacci(35, hash)); // 9227465
        System.out.println(Fibonacci(46, hash)); // 1836311903
    }
}