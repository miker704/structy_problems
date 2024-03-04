package graphs.semesters_required;
// semesters required

// Write a function, semestersRequired, that takes in a number of courses (n) 
// and a list of prerequisites as arguments. Courses have ids ranging from 0 through n - 1.
//  A single prerequisite of {A, B} means that course A must be taken before course B. Return 
//  the minimum number of semesters required to complete all n courses. There is no limit on how 
//  many courses you can take in a single semester, as long the prerequisites of a course are 
//  satisfied before taking it.

import java.util.AbstractMap.SimpleEntry;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

// Note that given prerequisite {A, B}, you cannot take course A and course B concurrently in the same 
// semester. You must take A in some semester before B.

// You can assume that it is possible to eventually complete all courses.
public class semesters_required {
    public static Map<Integer, List<Integer>> buildGraph(int numCourses, List<SimpleEntry<Integer, Integer>> preReqs) {
        Map<Integer, List<Integer>> graph = new HashMap<>();
    
        return graph;
    }

    public static int semestersRequired(int numCourses, List<SimpleEntry<Integer, Integer>> prereqs) {

        int minimumSemesters = 0;
    
        return minimumSemesters;
    }

    public static int _semestersRequired(Map<Integer, List<Integer>> graph, Map<Integer, Integer> taken,
                                         int courseId) {

        return taken.get(courseId);
    }

    public static void main(String[] args) {
        int numCourses = 6;

        List<SimpleEntry<Integer, Integer>> prereqs = List.of(
                new SimpleEntry<>(1, 2),
                new SimpleEntry<>(2, 4),
                new SimpleEntry<>(3, 5),
                new SimpleEntry<>(0, 5)
        );
        System.out.println(semestersRequired(numCourses, prereqs)); // -> 3
        numCourses = 7;
//        prereqs.clear();

        prereqs = List.of(
                new SimpleEntry<>(4, 3),
                new SimpleEntry<>(3, 2),
                new SimpleEntry<>(2, 1),
                new SimpleEntry<>(1, 0),
                new SimpleEntry<>(5, 2),
                new SimpleEntry<>(5, 6));

        System.out.println(semestersRequired(numCourses, prereqs));  // -> 5
        numCourses = 5;
//        prereqs.clear();
        prereqs = List.of(
                new SimpleEntry<>(1, 0),
                new SimpleEntry<>(3, 4),
                new SimpleEntry<>(1, 2),
                new SimpleEntry<>(3, 2));

        System.out.println(semestersRequired(numCourses, prereqs));// -> 2
        numCourses = 12;
//        prereqs.clear();
        prereqs = List.of();

        System.out.println(semestersRequired(numCourses, prereqs)); // -> 1
        numCourses = 3;
//        prereqs.clear();
        prereqs = List.of(
                new SimpleEntry<>(0, 2),
                new SimpleEntry<>(0, 1),
                new SimpleEntry<>(1, 2));

        System.out.println(semestersRequired(numCourses, prereqs)); // -> 3
        numCourses = 6;
//        prereqs.clear();
        prereqs = List.of(
                new SimpleEntry<>(3, 4),
                new SimpleEntry<>(3, 0),
                new SimpleEntry<>(3, 1),
                new SimpleEntry<>(3, 2),
                new SimpleEntry<>(3, 5)

        );

        System.out.println(semestersRequired(numCourses, prereqs)); // -> 2

    }
}