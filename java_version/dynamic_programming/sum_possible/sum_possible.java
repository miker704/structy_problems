package dynamic_programming.sum_possible;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

// sum possible
// Write a function sumPossible that takes in an amount
//  and a list of positive numbers. The function should return a boolean
//  indicating whether or not it is possible to create the amount by summing
//   numbers of the list. You may reuse numbers of the list as many times as necessary.

// You may assume that the target amount is non-negative.

// brute force running at O(n^2) exponential time
// more specifically O(n^a) where n is the array length and a is the amount
//  branch ^ depth upon reaching a certain amount of 'a' as input the depth of
//  calls on the stack become extremely massive in addition to the length of the input array itself
//   causes the calculation to take minutes
//  at a time to complete reaching slower than calulating fibonacci of 46 using brute force method
//  combinations for an array of 2 elements for an amount of 100 can generate nonillion combinations

// # optimized version cuts of majority of the exponential growth of calls
// # O(a*n) where 'a' represents the amount to reach and 'n' is the length
// # meaning the 'a' is the depth and 'n' is the branches
// # but this time each level can only have a*n # of nodes max
public class sum_possible {

    public static boolean sumPossible(int amount, List<Integer> numbers, Map<Integer, Boolean> u_map) {
        if (u_map.containsKey(amount)) {
            return u_map.get(amount);
        }
        if(amount < 0){return false;}
        if (amount == 0) {
            return true;
        }
        for (int num : numbers) {
            if (sumPossible(amount - num, numbers, u_map)) {
                u_map.put(amount,true);
                return true;
            }
        }
        u_map.put(amount,false);
        return false;
    }

    public static void main(String[] args) {
        System.out.println(sumPossible(8, List.of(5, 12, 4), new HashMap<>())); // true
        // std::boolalpha using this as this vscode cpp version 20 returns numeric
        // true/false
        // bool alpha prints the word version
        System.out.println(sumPossible(15, List.of(6, 2, 10, 19), new HashMap<>())); // false
        System.out.println(sumPossible(13, List.of(6, 2, 1), new HashMap<>())); // true
        System.out.println(sumPossible(103, List.of(6, 20, 1), new HashMap<>())); // true
        System.out.println(sumPossible(12, List.of(), new HashMap<>())); // false
        System.out.println(sumPossible(12, List.of(12), new HashMap<>())); // true
        System.out.println(sumPossible(0, List.of(), new HashMap<>())); // true
        System.out.println(sumPossible(271, List.of(10, 8, 265, 24), new HashMap<>())); // false
        System.out.println(sumPossible(2017, List.of(4, 2, 10), new HashMap<>())); // false
        System.out.println(sumPossible(13, List.of(3, 5), new HashMap<>())); // true
    }
}