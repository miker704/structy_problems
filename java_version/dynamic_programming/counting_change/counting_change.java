package dynamic_programming.counting_change;

import java.util.HashMap;
import java.util.List;
import java.util.Map;
// counting change

// Write a function, countingChange, that takes in an amount and a vector of coins. The function should
// return the number of different ways it is possible to make change for the given amount using the coins.

// You may reuse a coin as many times as necessary.

// For example,

// countingChange(4, std::vector<int> {1,2,3}) -> 4

// There are four different ways to make an amount of 4:

// 1. 1 + 1 + 1 + 1
// 2. 1 + 1 + 2
// 3. 1 + 3
// 4. 2 + 2
public class counting_change {

    public static int countingChange(int amount, List<Integer> coins) {
        Map<String, Integer> u_map = new HashMap<>();
        return _countingChange(amount, coins, 0, u_map);
    }

    //    public static int _countingChange(int amount, List<Integer> coins, int idx, Map<String, Integer> u_map) {
//
//        String key = String.format("%s,%s", amount, idx);
//        if (u_map.containsKey(key)) {
//            return u_map.get(key);
//        }
//        if (coins.size() <= idx) {
//            return 0;
//        }
//        if (amount < 0) {
//            return 0;
//        }
//        if (amount == 0) {
//            return 1;
//        }
//
//        int excl = _countingChange(amount, coins, idx + 1, u_map);
//        int incl = _countingChange(amount - coins.get(idx), coins, idx, u_map);
//        u_map.put(key, incl + excl);
//        return incl + excl;
//    }
    public static int _countingChange(int amount, List<Integer> coins, int idx, Map<String, Integer> u_map) {


    
        int total = 0;
    
        return total;
//        int excl = _countingChange(amount, coins, idx + 1, u_map);
//        int incl = _countingChange(amount - coins.get(idx), coins, idx, u_map);
//        u_map.put(key, incl + excl);
//        return incl + excl;
    }

    public static void main(String[] args) {
        System.out.println(countingChange(4, List.of(1, 2, 3))); // -> 4
        System.out.println(countingChange(8, List.of(1, 2, 3))); // -> 10
        System.out.println(countingChange(24, List.of(5, 7, 3))); // -> 5
        System.out.println(countingChange(13, List.of(2, 6, 12, 10))); // -> 0
        System.out.println(countingChange(512, List.of(1, 5, 10, 25))); // -> 20119
        System.out.println(countingChange(1000, List.of(1, 5, 10, 25))); // -> 142511
        System.out.println(countingChange(240, List.of(1, 2, 3, 4, 5, 6, 7, 8, 9))); // -> 1525987916
    }
}