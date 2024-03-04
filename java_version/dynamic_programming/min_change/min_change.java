package dynamic_programming.min_change;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * min change
 * Write a function minChange that takes in an amount and a vector of coins.
 * The function should return the minimum number of coins required to create
 * the amount. You may use each coin as many times as necessary.
 * If it is not possible to create the amount, then return -1.
 * <p>
 * +*
 */

public class min_change {

    public static int minChanger(int amount, List<Integer> coins) {
        return 1;
    }

    public static int minChange(int amount, List<Integer> coins) {
        Map<Integer, Integer> u_map = new HashMap<>();

        return _minChange(amount, coins, u_map);
    }

    public static int _minChange(int amount, List<Integer> coins, Map<Integer, Integer> u_map) {
    
        return u_map.get(amount);
    }

    public static void main(String[] args) {
        System.out.println(minChange(4, List.of(1, 2, 3))); // -> 2, because 4+4 is the minimum coins possible
        System.out.println(minChange(8, List.of(1, 5, 4, 12))); // -> 2, because 4+4 is the minimum coins possible
        System.out.println(minChange(13, List.of(1, 9, 5, 14, 30))); // -> 5
        System.out.println(minChange(23, List.of(2, 5, 7))); // -> 4
        System.out.println(minChange(102, List.of(1, 5, 10, 25))); // -> 6
        System.out.println(minChange(200, List.of(1, 5, 10, 25))); // -> 8
        System.out.println(minChange(2017, List.of(4, 2, 10))); // -> -1
        System.out.println(minChange(271, List.of(10, 8, 265, 24))); // -> -1
        System.out.println(minChange(0, List.of(4, 2, 10))); // -> 0
        System.out.println(minChange(0, List.of())); // -> 0
    }
}