package array_and_strings.pair_sum;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

// pair sum 
// Write a function, pairSum, that takes in a vector of numbers and a target sum as arguments.
// The function should return a std::array containing a pair of indices whose elements
// sum to the given target. The indices returned must be unique.

// Be sure to return the indices, not the elements themselves.

// There is guaranteed to be one such pair that sums to the target.

public class pair_sum {

    public static List<Integer> pairSum(List<Integer> vector, int target) {
        List<Integer> array = new ArrayList<>();
        HashMap<Integer, Integer> hash = new HashMap<>();
        for (int i = 0; i < vector.size(); i++) {
            int sum = target - vector.get(i);
            if (hash.containsKey(sum)) {
                return List.of(hash.get(sum), i);
            }
            hash.put(vector.get(i), i);
        }
        return array;
    }

    public static void printList(List<Integer> vector) {
        vector.stream().forEach(i -> {
            System.out.printf("%s,", i);
        });
        System.out.println("\n");
    }

    public static void main(String[] args) {
        printList(pairSum(List.of(3, 2, 5, 4, 1), 8)); // -> [0, 2]
        printList(pairSum(List.of(4, 7, 9, 2, 5, 1), 5));  // -> [0, 5]
        printList(pairSum(List.of(4, 7, 9, 2, 5, 1), 3));  // -> [3, 5]
        printList(pairSum(List.of(1, 6, 7, 2), 13));  // -> [1, 2]
        printList(pairSum(List.of(9, 9), 18)); // -> [0, 1]
        printList(pairSum(List.of(6, 4, 2, 8), 12)); // -> [1, 3]
    }
}
