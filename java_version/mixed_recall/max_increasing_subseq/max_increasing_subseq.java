package mixed_recall.max_increasing_subseq;

import java.util.HashMap;
import java.util.List;
import java.util.Map;
// max increasing subseq
// Write a function, maxIncreasingSubseq,
// that takes in a vector of numbers as an argument. The function should
// return the length of the longest subsequence of strictly increasing numbers.

// A subsequence of a vector can be created by deleting any elements of the vector,
// while maintaining the relative order of elements.
public class max_increasing_subseq {

    public static int maxIncreasingSubseq(List<Integer> numbers) {
        Map<String, Integer> u_map = new HashMap<>();
        return _maxIncreasingSubseq(numbers, u_map, 0, -1);
    }

    public static int _maxIncreasingSubseq(List<Integer> numbers, Map<String, Integer> u_map, int curr, int prev) {
        String key = String.format("%s,%s", curr, prev);
    
        return u_map.get(key);
    }

    public static void main(String[] args) {
        List<Integer> numbers = List.of(4, 18, 20, 10, 12, 15, 19);
        System.out.println(maxIncreasingSubseq(numbers)); // -> 5
        numbers = List.of(12, 9, 2, 5, 4, 32, 90, 20);
        System.out.println(maxIncreasingSubseq(numbers)); // -> 4
        numbers = List.of(42, 50, 51, 60, 55, 70, 4, 5, 70);
        System.out.println(maxIncreasingSubseq(numbers)); // -> 5
        numbers = List.of(7, 14, 10, 12);
        System.out.println(maxIncreasingSubseq(numbers)); // -> 3
        numbers = List.of(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21);
        System.out.println(maxIncreasingSubseq(numbers)); // -> 21
        numbers = List.of(
                1, 2, 3, 4, 5, 12, 6, 30, 7, 8, 9, 10, 11, 12, 13, 10, 18, 14, 15, 16, 17, 18, 19, 20, 21, 100,
                104);
        System.out.println(maxIncreasingSubseq(numbers)); // -> 23
        numbers = List.of(
                1, 2, 300, 3, 4, 305, 5, 12, 6, 30, 7, 8, 9, 10, 10, 10, 15, 11, 12, 13, 10, 18, 14, 15, 16,
                17, 18, 19, 20, 21, 100, 101, 102, 103, 104, 105);
        System.out.println(maxIncreasingSubseq(numbers)); // -> 27
    }
}