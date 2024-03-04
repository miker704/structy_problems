package dynamic_programming.non_adjacent_sum;
// non adjacent sum

// Write a function, nonAdjacentSum, that takes in an array of numbers as
// an argument. The function should return the maximum sum of non-adjacent
// elements in the array. There is no limit on how many elements can be taken
// into the sum as long as they are not adjacent.

import java.util.HashMap;
import java.util.List;
import java.util.Map;

// For example, given:

// [2, 4, 5, 12, 7]

// The maximum non-adjacent sum is 16, because 4 + 12.
// 4 and 12 are not adjacent in the array.
public class non_adjacent_sum {

    public static int nonAdjacentSum(List<Integer> nums) {
        Map<Integer, Integer> u_map = new HashMap<>();
        return _nonAdjacentSum(nums, 0, u_map);
    }

    public static int _nonAdjacentSum(List<Integer> nums, int idx, Map<Integer, Integer> u_map) {

        return u_map.get(idx);
    }

    public static void main(String[] args) {

        List<Integer> nums = List.of(2, 4, 5, 12, 7);
        System.out.println(nonAdjacentSum(nums)); // -> 16

        nums = List.of(7, 5, 5, 12);
        System.out.println(nonAdjacentSum(nums)); // -> 19

        nums = List.of(7, 5, 5, 12, 17, 29);
        System.out.println(nonAdjacentSum(nums)); // -> 48

        nums = List.of(
                72, 62, 10, 6, 20, 19, 42,
                46, 24, 78, 30, 41, 75, 38,
                23, 28, 66, 55, 12, 17, 9,
                12, 3, 1, 19, 30, 50, 20);
        System.out.println(nonAdjacentSum(nums)); // -> 488

        nums = List.of(
                72, 62, 10, 6, 20, 19, 42, 46, 24, 78,
                30, 41, 75, 38, 23, 28, 66, 55, 12, 17,
                83, 80, 56, 68, 6, 22, 56, 96, 77, 98,
                61, 20, 0, 76, 53, 74, 8, 22, 92, 37,
                30, 41, 75, 38, 23, 28, 66, 55, 12, 17,
                72, 62, 10, 6, 20, 19, 42, 46, 24, 78,
                42);
        System.out.println(nonAdjacentSum(nums)); // -> 1465
    }
}