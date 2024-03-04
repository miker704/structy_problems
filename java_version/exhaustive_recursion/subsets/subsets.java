package exhaustive_recursion.subsets;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
// subsets
// Write a function, subsets, that takes in a vector as an argument.
// The function should return a 2D vector where each subvector represents one of the possible subsets of the input vector.

// The elements within the subsets and the subsets themselves may be returned in any order.

// You may assume that the input vector contains unique elements.
public class subsets {

    public static List<List<String>> Subsets(List<String> elements) {

        List<List<String>> result = new ArrayList<>();

        return result;
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
        printVector(Subsets(new ArrayList<>(Arrays.asList("a", "b")))); // ->
        // [
        // [],
        // [ "b" ],
        // [ "a" ],
        // [ "a", "b" ]
        // ]
        printVector(Subsets(new ArrayList<>(Arrays.asList("a", "b", "c")))); // ->
        // [
        // [],
        // [ "c" ],
        // [ "b" ],
        // [ "b", "c" ],
        // [ "a" ],
        // [ "a", "c" ],
        // [ "a", "b" ],
        // [ "a", "b", "c" ]
        // ]
        printVector(Subsets(new ArrayList<String>(Arrays.asList("x")))); // ->
        // [
        // [],
        // [ "x" ]
        // ]
        printVector(Subsets(new ArrayList<String>(Arrays.asList()))); // ->
        // [
        // []
        // ]
        printVector(Subsets(new ArrayList<String>(Arrays.asList("q", "r", "s", "t")))); // ->
        // [
        // [],
        // [ "t" ],
        // [ "s" ],
        // [ "s", "t" ],
        // [ "r" ],
        // [ "r", "t" ],
        // [ "r", "s" ],
        // [ "r", "s", "t" ],
        // [ "q" ],
        // [ "q", "t" ],
        // [ "q", "s" ],
        // [ "q", "s", "t" ],
        // [ "q", "r" ],
        // [ "q", "r", "t" ],
        // [ "q", "r", "s" ],
        // [ "q", "r", "s", "t" ]
        // ]

    }
}