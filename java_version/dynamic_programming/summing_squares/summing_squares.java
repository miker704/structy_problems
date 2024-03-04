package dynamic_programming.summing_squares;

import java.util.HashMap;
import java.util.Map;

// summing squares
// Write a function, summingSquares, that takes a target number as
// an argument. The function should return the minimum number of perfect squares
// that sum to the target. A perfect square is a number of the form (i*i) where i >= 1.

// For example: 1, 4, 9, 16 are perfect squares, but 8 is not perfect square.

// Given 12:

// summingSquares(12) -> 3

// The minimum squares required for 12 is three, by doing 4 + 4 + 4.

// Another way to make 12 is 9 + 1 + 1 + 1, but that requires four perfect squares.
public class summing_squares {
    public static int summingSquares(int n) {
        Map<Integer, Double> u_map = new HashMap<>();
        return (int) _summingSquares(n, u_map);
    }

    public static double _summingSquares(int n, Map<Integer, Double> u_map) {
        
        double minSquares = Double.POSITIVE_INFINITY;

        return minSquares;
    }

    public static void main(String[] args) {
        System.out.println(summingSquares(8)); // -> 2
        System.out.println(summingSquares(9)); // -> 1
        System.out.println(summingSquares(12)); // -> 3
        System.out.println(summingSquares(1)); // -> 1
        System.out.println(summingSquares(31)); // -> 4
        System.out.println(summingSquares(50)); // -> 2
        System.out.println(summingSquares(68)); // -> 2
        System.out.println(summingSquares(87)); // -> 4
    }
}