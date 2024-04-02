package array_and_strings.five_sort;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

// five sort
// Write a function, five_sort, that takes in a list of numbers as an argument.
// The function should rearrange elements of the list such that all 5s appear at the end.
// Your function should perform this operation in-place by mutating the original list.
//  The function should return the list.
public class five_sort {

    public static List<Integer> fiveSort(List<Integer> vector) {
        int i = 0;
        int j = vector.size() - 1;
        while (i < j) {
            if (vector.get(j) == 5) {
                j--;
            } else if (vector.get(i) == 5) {
//                int temp = vector.remove(i);
//                vector.add(j, temp);
//                temp = vector.remove(j - 1);
//                vector.add(i, temp);
                Collections.swap(vector, i, j);
                i++;
            } else {
                i++;
            }
        }
        return vector;
    }

    public static void printVector(List<Integer> vector) {
        System.out.print("[ ");
        vector.stream().forEach(i -> {
            System.out.printf("%s,", i);
        });
        System.out.println(" ]");
    }

    public static void main(String[] args) {
        List<Integer> numbers = new ArrayList<>(Arrays.asList(12, 5, 1, 5, 12, 7));
        printVector(fiveSort(numbers));
        // -> [12, 7, 1, 12, 5, 5]
        numbers = new ArrayList<>(Arrays.asList(5, 2, 5, 6, 5, 1, 10, 2, 5, 5));
        printVector(fiveSort(numbers));
        // -> [2, 2, 10, 6, 1, 5, 5, 5, 5, 5]
        numbers = new ArrayList<>(Arrays.asList(5, 5, 5, 1, 1, 1, 4));
        printVector(fiveSort(numbers));
        // -> [4, 1, 1, 1, 5, 5, 5]
        numbers = new ArrayList<>(Arrays.asList(5, 5, 6, 5, 5, 5, 5));
        printVector(fiveSort(numbers));
        // -> [6, 5, 5, 5, 5, 5, 5]
        numbers = new ArrayList<>(Arrays.asList(5, 1, 2, 5, 5, 3, 2, 5, 1, 5, 5, 5, 4, 5));
        printVector(fiveSort(numbers));
        // -> [4, 1, 2, 1, 2, 3, 5, 5, 5, 5, 5, 5, 5, 5]

        List<Integer> fives = new ArrayList<>(Collections.nCopies(20000, 5));
        List<Integer> fours = new ArrayList<>(Collections.nCopies(20000, 4));
        List<Integer> nums = new ArrayList<>(fives.size() + fours.size());
        nums.addAll(fives);
        nums.addAll(fours);
//        printVector(fiveSort(nums));
        // twenty-thousand 4s followed by twenty-thousand 5s
        // -> [4, 4, 4, 4, ..., 5, 5, 5, 5]
    }
}
