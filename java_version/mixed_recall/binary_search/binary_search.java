package mixed_recall.binary_search;
// binary search

// Write a function, binarySearch, that takes in a sorted array of numbers and a target. 
// The function should return the index where the target can be found within the array. 
// If the target is not found in the array, then return -1.

import java.util.List;

// You may assume that the input array contains unique numbers sorted in increasing order.

// Your function must implement the binary search algorithm.
// https://en.wikipedia.org/wiki/Binary_search_algorithm


public class binary_search {

    public static int binarySearch(List<Integer> numbers, int target) {

    
        return -1;
    }

    public static int recursiveBinarySearch(List<Integer> numbers, int target) {
        

        return -1;
    }


    public static int rbs(List<Integer> numbers, int target) {
            return -1;
    }

    public static int _rbs(List<Integer> numbers, int target, int first, int last) {
    

        return -1;
    }

    public static void main(String[] args) {
        System.out.println(binarySearch(List.of(0, 1, 2, 3, 4, 5, 6, 7, 8), 6)); // -> 6
        System.out.println(binarySearch(List.of(0, 6, 8, 12, 16, 19, 20, 24, 28), 27)); // -> -1
        System.out.println(binarySearch(List.of(0, 6, 8, 12, 16, 19, 20, 28), 8)); // -> 2
        System.out.println(binarySearch(List.of(0, 6, 8, 12, 16, 19, 20, 24, 28), 28)); // -> 8
        System.out.println(binarySearch(List.of(7, 9), 7)); // -> 0
        System.out.println(binarySearch(List.of(7, 9), 9)); // -> 1
        System.out.println(binarySearch(List.of(7, 9), 12)); // -> -1
        System.out.println(binarySearch(List.of(7), 7)); // -> 0
        System.out.println(binarySearch(List.of(), 7)); // -> -1

        System.out.println("=============== RBS ====================");
        System.out.println(rbs(List.of(0, 1, 2, 3, 4, 5, 6, 7, 8), 6)); // -> 6
        System.out.println(rbs(List.of(0, 6, 8, 12, 16, 19, 20, 24, 28), 27)); // -> -1
        System.out.println(rbs(List.of(0, 6, 8, 12, 16, 19, 20, 28), 8)); // -> 2
        System.out.println(rbs(List.of(0, 6, 8, 12, 16, 19, 20, 24, 28), 28)); // -> 8
        System.out.println(rbs(List.of(7, 9), 7)); // -> 0
        System.out.println(rbs(List.of(7, 9), 9)); // -> 1
        System.out.println(rbs(List.of(7, 9), 12)); // -> -1
        System.out.println(rbs(List.of(7), 7)); // -> 0
        System.out.println(rbs(List.of(), 7)); // -> -1

        System.out.println("=============== RECURSIVE_BINARY_SEARCH ====================");

        System.out.println(recursiveBinarySearch(List.of(0, 1, 2, 3, 4, 5, 6, 7, 8), 6)); // -> 6
        System.out.println(recursiveBinarySearch(List.of(0, 6, 8, 12, 16, 19, 20, 24, 28), 27)); // -> -1
        System.out.println(recursiveBinarySearch(List.of(0, 6, 8, 12, 16, 19, 20, 28), 8)); // -> 2
        System.out.println(recursiveBinarySearch(List.of(0, 6, 8, 12, 16, 19, 20, 24, 28), 28)); // -> 8
        System.out.println(recursiveBinarySearch(List.of(7, 9), 7)); // -> 0
        System.out.println(recursiveBinarySearch(List.of(7, 9), 9)); // -> 1
        System.out.println(recursiveBinarySearch(List.of(7, 9), 12)); // -> -1
        System.out.println(recursiveBinarySearch(List.of(7), 7)); // -> 0
        System.out.println(recursiveBinarySearch(List.of(), 7)); // -> -1

    }
}