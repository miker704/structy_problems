package mixed_recall.merge_sort;
// merge sort

import java.util.ArrayList;
import java.util.Collections;

// Write a function, mergeSort, that takes in an array of numbers as an argument.
//  The function should return a new array containing elements
//  of the original array sorted in ascending order. Your function must implement 
//  the merge sort algorithm.
//  https://en.wikipedia.org/wiki/Merge_sort

import java.util.List;

public class merge_sort {

    public static List<Integer> mergeSort(List<Integer> numbers) {

            return numbers;
    }

    public static List<Integer> merge(List<Integer> left, List<Integer> right) {

        List<Integer> merged = new ArrayList<>();

        return merged;
    }

    public static void printVector(List<Integer> vec) {
        System.out.println(" [ ");

        for (int x : vec) {
            System.out.print(x + " , ");
        }
        System.out.println(" ] ");
    }

    public static void main(String[] args) {
        List<Integer> numbers = List.of(10, 4, 42, 5, 8, 100, 5, 6, 12, 40);
        printVector(mergeSort(numbers));
        // -> { 4, 5, 5, 6, 8, 10, 12, 40, 42, 100 }
        numbers = List.of(7, -30, -4, -1, 12, 0, 20);
        printVector(mergeSort(numbers));
        // -> { -30, -4, -1, 0, 7, 12, 20 }
        numbers = List.of(8, 7, 6, 5, 4, 3, 2, 1, 0);
        printVector(mergeSort(numbers));
        // -> { 0, 1, 2, 3, 4, 5, 6, 7, 8 }
        numbers = List.of(
                72, 42, 16, 81, 84, 17, 2, 81, 22, 79, 86, 38,
                77, 80, 81, 70, 81, 80, 35, 21, 89, 38, 57, 28,
                4, 17, 50, 38, 68, 82, 22, 76, 45, 40, 67, 94,
                37, 27, 81, 53, 36, 18, 28, 60, 45, 74, 40, 29,
                18, 6, 28, 57, 42, 60, 64, 12, 78, 97, 96, 1,
                20, 20, 61, 67, 82, 10, 63, 71, 39, 52, 37, 69,
                37, 24, 66, 74, 15, 92, 49, 31, 56, 67, 50, 57,
                79, 0, 21, 56, 82, 22, 4, 20, 91, 72, 58, 93,
                99, 14, 42, 91);
        printVector(mergeSort(numbers));
        // -> {
        // 0, 1, 2, 4, 4, 6, 10, 12, 14, 15, 16, 17,
        // 17, 18, 18, 20, 20, 20, 21, 21, 22, 22, 22, 24,
        // 27, 28, 28, 28, 29, 31, 35, 36, 37, 37, 37, 38,
        // 38, 38, 39, 40, 40, 42, 42, 42, 45, 45, 49, 50,
        // 50, 52, 53, 56, 56, 57, 57, 57, 58, 60, 60, 61,
        // 63, 64, 66, 67, 67, 67, 68, 69, 70, 71, 72, 72,
        // 74, 74, 76, 77, 78, 79, 79, 80, 80, 81, 81, 81,
        // 81, 81, 82, 82, 82, 84, 86, 89, 91, 91, 92, 93,
        // 94, 96, 97, 99
        // }
        List<Integer> numbers1 = new ArrayList<>(Collections.nCopies(95000, 7));
        printVector(mergeSort(numbers1));
        // -> {7, 7, 7, 7, 7, ...}
        List<Integer> numbers2 = new ArrayList<>(Collections.nCopies(120000, 7));
        printVector(mergeSort(numbers2));
        // -> {7, 7, 7, 7, 7, ...}
    }
}