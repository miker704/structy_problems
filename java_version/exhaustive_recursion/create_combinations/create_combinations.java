package exhaustive_recursion.create_combinations;
// create combinations
// Write a function, createCombinations, that takes in an vector and a size as arguments.
//  The function should return a 2D vector representing all of the combinations of the specifized size.

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

// The items within the combinations and the combinations themselves may be returned in any order.

// You may assume that the input vector contains unique elements and 1 <= k <= items.size()


public class create_combinations {

    public static List<List<String>> createCombinations(List<String> items, int size) {

            return List.of();
        
    }


    public static void printVector(List<List<String>> vec) {
        System.out.println(" [ ");

        for (List<String> x : vec) {
            System.out.print(" [ ");

            for (String y : x) {
                System.out.print(y + " , ");
            }
            System.out.print(" ] ");

        }
        System.out.println(" ] ");

    }


    public static void main(String[] args) {
        printVector(createCombinations(new ArrayList<String>(Arrays.asList("a", "b", "c")), 2)); // ->
        // [
        //   [ "a", "b" ],
        //   [ "a", "c" ],
        //   [ "b", "c" ]
        // ]
        printVector(createCombinations(new ArrayList<String>(Arrays.asList("q", "r", "s", "t")), 2)); // ->
        // [
        //   [ "q", "r" ],
        //   [ "q", "s" ],
        //   [ "q", "t" ],
        //   [ "r", "s" ],
        //   [ "r", "t" ],
        //   [ "s", "t" ]
        // ]
        printVector(createCombinations(new ArrayList<String>(Arrays.asList("q", "r", "s", "t")), 3)); // ->
        // [
        //   [ "q", "r", "s" ],
        //   [ "q", "r", "t" ],
        //   [ "q", "s", "t" ],
        //   [ "r", "s", "t" ]
        // ]
        printVector(createCombinations(new ArrayList<String>(Arrays.asList("1", "28", "94")), 3)); // ->
        // [
        //   [ "1", "28", "94" ]
        // ]
    }
}