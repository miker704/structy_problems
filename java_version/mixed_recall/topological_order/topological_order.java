package mixed_recall.topological_order;

import java.util.List;
import java.util.Map;
import java.util.Map.Entry;

// topological order
// Write a function, topologicalOrder, that takes in an 
// object representing the adjacency list for a directed-acyclic graph.
//  The function should return an array containing the topological-order of the graph.
//  https://en.wikipedia.org/wiki/Topological_sorting
// The topological ordering of a graph is a sequence where "parent nodes"
//  appear before their "children" within the sequence.

public class topological_order {
    public static List<String> topologicalOrder(Map<String, List<String>> graph) {
        return null;
    }

    public static void printMap(Map<String, Integer> numOfParents) {
        System.out.println(" { ");

        for (Entry<String, Integer> x : numOfParents.entrySet()) {
            System.out.println(" { " + x.getKey() + " , " + x.getValue() + " } ");
        }
        System.out.println(" } ");
    }

    public static void printVector(List<String> vec) {
        for (String x : vec) {
            System.out.print(x + " , ");
        }
        System.out.println("");
    }

    public static void main(String[] args) {
        printVector(topologicalOrder(Map.of(
                "a", List.of("f"),
                "b", List.of("d"),
                "c", List.of("a", "f"),
                "d", List.of("e"),
                "e", List.of(),
                "f", List.of("b", "e")))); // -> ["c", "a", "f", "b", "d", "e"]
        printVector(topologicalOrder(Map.of(
                "h", List.of("l", "m"),
                "i", List.of("k"),
                "j", List.of("k", "i"),
                "k", List.of("h", "m"),
                "l", List.of("m"),
                "m", List.of()))); // -> ["j", "i", "k", "h", "l", "m"]
        printVector(topologicalOrder(Map.of(
                "q", List.of(),
                "r", List.of("q"),
                "s", List.of("r"),
                "t", List.of("s")))); // -> ["t", "s", "r", "q"]
        printVector(topologicalOrder(Map.of(
                "v", List.of("z", "w"),
                "w", List.of(),
                "x", List.of("w", "v", "z"),
                "y", List.of("x"),
                "z", List.of("w")))); // -> ["y", "x", "v", "z", "w"]
    }
}