package graphs.prereqs_possible;

import java.util.*;
import java.util.AbstractMap.SimpleEntry;

// prereqs possible
// Write a function, prereqs_possible, that takes in a number of courses (n) and prerequisites as 
// arguments. Courses have ids ranging from 0 through n - 1. A single prerequisite of (A, B) means
//  that course A must be taken before
//  course B. The function should return a boolean indicating whether or not it is possible 
//  to complete all courses.

public class prereqs_possible {

    public static boolean preReqsPossible(int numCourses, List<SimpleEntry<Integer, Integer>> preReqs) {

        return true;
    }

    public static boolean traverseGraph(Map<Integer, List<Integer>> graph, HashSet<Integer> grey, HashSet<Integer> black, int course) {

        return false;
    }

    public static Map<Integer, List<Integer>> buildGraph(int numCourses, List<SimpleEntry<Integer, Integer>> preReqs) {
        Map<Integer, List<Integer>> graph = new HashMap<>();
        for (int i = 0; i < numCourses; i++) {
            graph.put(i, new ArrayList<>());
        }
        for (SimpleEntry<Integer, Integer> preReq : preReqs) {
            int a = preReq.getKey();
            int b = preReq.getValue();
            graph.get(a).add(b);
        }
        return graph;
    }

    public static void main(String[] args) {
        int numCourses = 6;

        List<SimpleEntry<Integer, Integer>> preReqs = List.of(
                new SimpleEntry<>(0, 1),
                new SimpleEntry<>(2, 3),
                new SimpleEntry<>(0, 2),
                new SimpleEntry<>(1, 3),
                new SimpleEntry<>(4, 5));
        System.out.println(preReqsPossible(numCourses, preReqs)); // -> 1 (true)
        numCourses = 6;

        preReqs = List.of(
                new SimpleEntry<>(0, 1),
                new SimpleEntry<>(2, 3),
                new SimpleEntry<>(0, 2),
                new SimpleEntry<>(1, 3),
                new SimpleEntry<>(4, 5),
                new SimpleEntry<>(3, 0));

        System.out.println(preReqsPossible(numCourses, preReqs)); // -> 0 (false)
        numCourses = 5;
        preReqs = List.of(
                new SimpleEntry<>(2, 4),
                new SimpleEntry<>(1, 0),
                new SimpleEntry<>(0, 2),
                new SimpleEntry<>(0, 4));

        System.out.println(preReqsPossible(numCourses, preReqs)); // -> 1 (true)
        numCourses = 6;
        preReqs = List.of(
                new SimpleEntry<>(2, 4),
                new SimpleEntry<>(1, 0),
                new SimpleEntry<>(0, 2),
                new SimpleEntry<>(0, 4),
                new SimpleEntry<>(5, 3),
                new SimpleEntry<>(3, 5));

        System.out.println(preReqsPossible(numCourses, preReqs)); // -> 0 (false)
        numCourses = 8;
        preReqs = List.of(
                new SimpleEntry<>(1, 0),
                new SimpleEntry<>(0, 6),
                new SimpleEntry<>(2, 0),
                new SimpleEntry<>(0, 5),
                new SimpleEntry<>(3, 7),
                new SimpleEntry<>(4, 3));

        System.out.println(preReqsPossible(numCourses, preReqs)); // -> 1 (true)
        numCourses = 8;
        preReqs = List.of(
                new SimpleEntry<>(1, 0),
                new SimpleEntry<>(0, 6),
                new SimpleEntry<>(2, 0),
                new SimpleEntry<>(0, 5),
                new SimpleEntry<>(3, 7),
                new SimpleEntry<>(7, 4),
                new SimpleEntry<>(4, 3)

        );

        System.out.println(preReqsPossible(numCourses, preReqs)); // -> 0 (false)
        numCourses = 42;
        preReqs = List.of(
                new SimpleEntry<>(6, 36)

        );
        System.out.println(preReqsPossible(numCourses, preReqs)); // -> 1 (true)

    }
}