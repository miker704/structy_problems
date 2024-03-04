package exhaustive_recursion.permutations;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
// permutations
// Write a function, permutations, that takes in a list an argument. The function should
// return a 2D list where each sublist represents one of the possible permutations of the list.

// The sublists may be returned in any order.

// You may assume that the input list contains unique items.

public class permutations {

    public static List<List<String>> Permutations(List<String> elements) {

        
        List<List<String>> results = new ArrayList<>();
    

        return results;
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
        printVector(Permutations(new ArrayList<String>(Arrays.asList("a", "b", "c")))); // ->
        // [
        // [ "a", "b", "c" ],
        // [ "b", "a", "c" ],
        // [ "b", "c", "a" ],
        // [ "a", "c", "b" ],
        // [ "c", "a", "b" ],
        // [ "c", "b", "a" ]
        // ]
        printVector(Permutations(new ArrayList<String>(Arrays.asList("red", "blue")))); // ->
        // [
        // [ "red", "blue" ],
        // [ "blue", "red" ]
        // ]
        printVector(Permutations(new ArrayList<String>(Arrays.asList("8", "2", "1", "4")))); // ->
        // [
        // [ "8", "2", "1", "4" ], [ "2", "8", "1", "4" ],
        // [ "2", "1", "8", "4" ], [ "2", "1", "4", "8" ],
        // [ "8", "1", "2", "4" ], [ "1", "8", "2", "4" ],
        // [ "1", "2", "8", "4" ], [ "1", "2", "4", "8" ],
        // [ "8", "1", "4", "2" ], [ "1", "8", "4", "2" ],
        // [ "1", "4", "8", "2" ], [ "1", "4", "2", "8" ],
        // [ "8", "2", "4", "1" ], [ "2", "8", "4", "1" ],
        // [ "2", "4", "8", "1" ], [ "2", "4", "1", "8" ],
        // [ "8", "4", "2", "1" ], [ "4", "8", "2", "1" ],
        // [ "4", "2", "8", "1" ], [ "4", "2", "1", "8" ],
        // [ "8", "4", "1", "2" ], [ "4", "8", "1", "2" ],
        // [ "4", "1", "8", "2" ], [ "4", "1", "2", "8" ]
        // ]
        printVector(Permutations(new ArrayList<String>(List.of()))); // ->
        // [
        // [ ]
        // ]
    }
}