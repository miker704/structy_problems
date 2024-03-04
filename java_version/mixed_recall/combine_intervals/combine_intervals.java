package mixed_recall.combine_intervals;
// combine intervals

// Write a function, combineIntervals, that takes in a vector of intervals as an argument.
//  Each interval is a vector containing a pair of numbers representing a start and end time. 
//  Your function should combine overlapping intervals and return a vector containing the 
//  combined intervals.

import java.util.*;

// For example:

// Given two intervals:

// {1, 4} and {3, 7}

// The intervals overlap and
// should be combined into:

// {1, 7}
// You may return the combined intervals in any order.

// You can assume that the input vector contains at least one interval and all
//  intervals are valid with start < end.

public class combine_intervals {

    public static List<AbstractMap.SimpleEntry<Integer, Integer>> combineIntervals(List<AbstractMap.SimpleEntry<Integer, Integer>> intervals) {
        List<AbstractMap.SimpleEntry<Integer, Integer>> result = new ArrayList<>();
//        intervals = intervals.stream().sorted(Comparator.comparingInt(AbstractMap.SimpleEntry::getKey)).collect(Collectors.toList());
        
        return result;
    }


    public static boolean compareIntervals(AbstractMap.SimpleEntry<Integer, Integer> intervalA, AbstractMap.SimpleEntry<Integer, Integer> intervalB) {
        return false;
    }

    public static void printVector(List<AbstractMap.SimpleEntry<Integer, Integer>> vec) {
        for (AbstractMap.SimpleEntry<Integer, Integer> x : vec) {
            System.out.println("{ " + x.getKey() + " , " + x.getValue() + " }");
        }
        System.out.println("\n");
    }

    public static void main(String[] args) {

        List<AbstractMap.SimpleEntry<Integer, Integer>> intervals = new ArrayList<>(Arrays.asList(
                new AbstractMap.SimpleEntry<>(1, 4),
                new AbstractMap.SimpleEntry<>(12, 15),
                new AbstractMap.SimpleEntry<>(3, 7),
                new AbstractMap.SimpleEntry<>(8, 13)
        ));
        printVector(combineIntervals(intervals));
// -> [ [1, 7], [8, 15] ]

        intervals = new ArrayList<>(Arrays.asList(
                new AbstractMap.SimpleEntry<>(6, 8),
                new AbstractMap.SimpleEntry<>(2, 9),
                new AbstractMap.SimpleEntry<>(10, 12),
                new AbstractMap.SimpleEntry<>(20, 24)
        ));


        printVector(combineIntervals(intervals));
// -> [ [2, 9], [10, 12], [20, 24] ]
        intervals = new ArrayList<>(Arrays.asList(
                new AbstractMap.SimpleEntry<>(3, 7),
                new AbstractMap.SimpleEntry<>(5, 8),
                new AbstractMap.SimpleEntry<>(1, 5)
        ));

        printVector(combineIntervals(intervals));
// -> [ [1, 8] ]
        intervals = new ArrayList<>(Arrays.asList(
                new AbstractMap.SimpleEntry<>(3, 7),
                new AbstractMap.SimpleEntry<>(10, 13),
                new AbstractMap.SimpleEntry<>(5, 8),
                new AbstractMap.SimpleEntry<>(27, 31),
                new AbstractMap.SimpleEntry<>(1, 5),
                new AbstractMap.SimpleEntry<>(12, 16),
                new AbstractMap.SimpleEntry<>(20, 22)
        ));
        printVector(combineIntervals(intervals));
// -> [ [1, 8], [10, 16], [20, 22], [27, 31] ]
        intervals = new ArrayList<>(Arrays.asList(
                new AbstractMap.SimpleEntry<>(3, 7),
                new AbstractMap.SimpleEntry<>(10, 13),
                new AbstractMap.SimpleEntry<>(5, 8),
                new AbstractMap.SimpleEntry<>(27, 31),
                new AbstractMap.SimpleEntry<>(1, 5),
                new AbstractMap.SimpleEntry<>(12, 16),
                new AbstractMap.SimpleEntry<>(20, 32)
        ));

        printVector(combineIntervals(intervals));
// -> [ [1, 8], [10, 16], [20, 32] ]
        intervals = new ArrayList<>(Arrays.asList(
                new AbstractMap.SimpleEntry<>(64, 70),
                new AbstractMap.SimpleEntry<>(50, 55),
                new AbstractMap.SimpleEntry<>(62, 65),
                new AbstractMap.SimpleEntry<>(12, 50),
                new AbstractMap.SimpleEntry<>(72, 300000)
        ));
        printVector(combineIntervals(intervals));
        // -> [ [12, 55], [62, 70], [72, 300000] ]
    }
}