package mixed_recall.rare_routing;

import java.util.*;

// rare routing
// Write a function, rareRouting, that takes in a number of cities (n) 
// and a two dimensional 
// array where each subarray represents a direct road that connects a pair of cities.
//  The function should return a boolean indicating whether or not there exists a unique
//   route for every pair of cities. A route is a sequence of roads that does not
//    visit a city more than once.

// Cities will be numbered 0 to n - 1.

// You can assume that all roads are two-way roads. This means if there is a road between A and B, 
// then you can use that road to go from A to B or go from B to A.

// For example, given these roads:

// 0 --- 1
// | \
// |  \
// |   \
// 2    3

// There is a unique route for between every pair of cities.
// So the answer is true.

// For example, given these roads:

// 0 --- 1
// | \
// |  \
// |   \
// 2 -- 3

// There are two routes that can be used to travel from city 1 to city 2:
// - first route:  1, 0, 2
// - second route: 1, 0, 3, 2 
// The answer is false, because routes should be unique.

public class rare_routing {

    public static boolean rareRouting(int n, List<List<Integer>> roads) {
        return true;

    }

    public static boolean pathChecker(Map<Integer, List<Integer>> graph, HashSet<Integer> visited, int currNode,
                                      int prevNode) {
    
        return true;
    }

    public static Map<Integer, List<Integer>> buildGraph(int n, List<List<Integer>> roads) {
        Map<Integer, List<Integer>> graph = new HashMap<>();

        return graph;
    }

    public static void main(String[] args) {
        System.out.println(rareRouting(4, List.of(
                List.of(0, 1),
                List.of(0, 2),
                List.of(0, 3)))); // -> true
        System.out.println(rareRouting(4, List.of(
                List.of(0, 1),
                List.of(0, 2),
                List.of(0, 3),
                List.of(3, 2)))); // -> false
        System.out.println(rareRouting(6, List.of(
                List.of(1, 2),
                List.of(5, 4),
                List.of(3, 0),
                List.of(0, 1),
                List.of(0, 4)))); // -> true
        System.out.println(rareRouting(6, List.of(
                List.of(1, 2),
                List.of(4, 1),
                List.of(5, 4),
                List.of(3, 0),
                List.of(0, 1),
                List.of(0, 4)))); // -> false
        System.out.println(rareRouting(4, List.of(
                List.of(0, 1),
                List.of(3, 2)))); // -> false
    }
}