package dynamic_programming.max_path_sum;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

// max path sum
// Write a function, maxPathSum, that takes in a
// grid as an argument. The function should return the maximum sum
// possible by traveling a path from the top-left corner to the bottom-right corner.
// You may only travel through the grid by moving down or right.

// You can assume that all numbers are non-negative.

public class max_path_sum {

    public static int maxPathSum(List<List<Integer>> grid) {
        Map<String, Integer> u_map = new HashMap<>();
        return _maxPathSum(grid, 0, 0, u_map);
    }

    public static int _maxPathSum(List<List<Integer>> grid, int row, int col, Map<String, Integer> u_map) {


    

        int tempSum = 0;

        return tempSum;
    }

    public static void main(String[] args) {
        List<List<Integer>> grid = List.of(
                List.of(1, 3, 12),
                List.of(5, 1, 1),
                List.of(3, 6, 1));
        System.out.println(maxPathSum(grid)); // -> 18
        grid = List.of(
                List.of(1, 2, 8, 1),
                List.of(3, 1, 12, 10),
                List.of(4, 0, 6, 3));
        System.out.println(maxPathSum(grid)); // -> 36
        grid = List.of(
                List.of(1, 2, 8, 1),
                List.of(3, 10, 12, 10),
                List.of(4, 0, 6, 3));
        System.out.println(maxPathSum(grid)); // -> 39
        grid = List.of(
                List.of(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1),
                List.of(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1),
                List.of(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1),
                List.of(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1),
                List.of(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1),
                List.of(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1),
                List.of(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1),
                List.of(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1),
                List.of(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1),
                List.of(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1),
                List.of(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1),
                List.of(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1),
                List.of(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1),
                List.of(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1),
                List.of(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1));
        System.out.println(maxPathSum(grid)); // -> 27
        grid = List.of(
                List.of(1, 1, 3, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1),
                List.of(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1),
                List.of(1, 2, 1, 1, 6, 1, 1, 5, 1, 1, 0, 0, 1),
                List.of(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1),
                List.of(1, 1, 1, 5, 1, 1, 1, 1, 0, 1, 1, 1, 1),
                List.of(2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1),
                List.of(2, 1, 1, 1, 1, 8, 1, 1, 1, 1, 1, 1, 1),
                List.of(2, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1),
                List.of(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1),
                List.of(1, 1, 1, 1, 1, 1, 1, 9, 1, 1, 1, 1, 1),
                List.of(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1),
                List.of(1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1),
                List.of(1, 1, 1, 1, 1, 1, 1, 1, 1, 8, 1, 1, 1),
                List.of(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1),
                List.of(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1));
        System.out.println(maxPathSum(grid)); // -> 56
    }
}