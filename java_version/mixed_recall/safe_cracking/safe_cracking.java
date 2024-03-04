package mixed_recall.safe_cracking;
// safe cracking

// Oh-no! You forgot the number combination that unlocks your safe.
//  Luckily, you knew that you'd be forgetful so you previously wrote
//   down a bunch of hints that can be used to determine the correct combination. Each hint is a pair 
//   of numbers "x, y" that indicates you must enter digit "x" before "y" (but not necessarily immediately before y).

import java.util.List;
import java.util.Map;
import java.util.AbstractMap.SimpleEntry;

// The keypad on the safe has digits 0-9. You can assume that the hints
//  will generate exactly one working combination and that a digit can occur zero or one time in the answer.

// Write a function, safeCracking, that takes in an array of hints as
//  an argument and determines the combination that will unlock the safe. 
//  The function should return a string representing the combination.

public class safe_cracking {

    public static String safeCracking(List<SimpleEntry<Integer, Integer>> hints) {
        return "";
    }

    public static Map<Integer, List<Integer>> buildGraph(List<SimpleEntry<Integer, Integer>> hints) {
        return null;
    }

    public static void main(String[] args) {

        System.out.println(safeCracking(List.of(
                new SimpleEntry<>(7, 1),
                new SimpleEntry<>(1, 8),
                new SimpleEntry<>(7, 8)))); // -> '718'
        System.out.println(safeCracking(List.of(
                new SimpleEntry<>(3, 1),
                new SimpleEntry<>(4, 7),
                new SimpleEntry<>(5, 9),
                new SimpleEntry<>(4, 3),
                new SimpleEntry<>(7, 3),
                new SimpleEntry<>(3, 5),
                new SimpleEntry<>(9, 1)))); // -> '473591'
        System.out.println(safeCracking(List.of(
                new SimpleEntry<>(2, 5),
                new SimpleEntry<>(8, 6),
                new SimpleEntry<>(0, 6),
                new SimpleEntry<>(6, 2),
                new SimpleEntry<>(0, 8),
                new SimpleEntry<>(2, 3),
                new SimpleEntry<>(3, 5),
                new SimpleEntry<>(6, 5)))); // -> '086235'
        System.out.println(safeCracking(List.of(
                new SimpleEntry<>(0, 1),
                new SimpleEntry<>(6, 0),
                new SimpleEntry<>(1, 8)))); // -> '6018'
        System.out.println(safeCracking(List.of(
                new SimpleEntry<>(8, 9),
                new SimpleEntry<>(4, 2),
                new SimpleEntry<>(8, 2),
                new SimpleEntry<>(3, 8),
                new SimpleEntry<>(2, 9),
                new SimpleEntry<>(4, 9),
                new SimpleEntry<>(8, 4)))); // -> '38429'
    }
}