package dynamic_programming.tribonacci;
// tribonacci

// Write a function tribonacci that takes in a number argument, n,
// and returns the n-th number of the Tribonacci sequence.

import java.util.HashMap;
import java.util.Map;

// The 0-th and 1-st numbers of the sequence are both 0.

// The 2-nd number of the sequence is 1.

// To generate further numbers of the sequence, calculate the sum of previous three numbers.

// Solve this recursively.

public class tribonacci {

    public static int Tribonacci(int n, Map<Integer, Integer> u_map) {

        return u_map.get(n);
    }

    public static void main(String[] args) {

        System.out.println(Tribonacci(0, new HashMap<>())); // 0
        System.out.println(Tribonacci(1, new HashMap<>())); // 0
        System.out.println(Tribonacci(2, new HashMap<>())); // 1
        System.out.println(Tribonacci(5, new HashMap<>())); // 4
        System.out.println(Tribonacci(7, new HashMap<>())); // 13
        System.out.println(Tribonacci(14, new HashMap<>())); // 927
        System.out.println(Tribonacci(20, new HashMap<>())); // 35890
        System.out.println(Tribonacci(37, new HashMap<>())); // 1132436852
    }
}