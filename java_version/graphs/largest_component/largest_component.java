package graphs.largest_component;

import java.util.HashSet;
import java.util.List;
import java.util.Map;

// largest component
// Write a function, largestComponent, that takes in an unordered_map representing the adjacency
//  list of an undirected graph.
//  The function should return the size of the largest connected component in the graph.

public class largest_component {
    public static int largestComponent(Map<Integer, List<Integer>> graph) {
        // todo
        int maxComponent = 0;
    
        return maxComponent;
    }

    public static int hasPath(Map<Integer, List<Integer>> graph, int currentNode, HashSet<Integer> visited) {
        // todo
        
        int nodeSize = 1;
    
        return nodeSize;
    }

    public static void main(String[] args) {

        System.out.println(largestComponent(Map.of(
                0, List.of(8, 1, 5),
                1, List.of(0),
                5, List.of(0, 8),
                8, List.of(0, 5),
                2, List.of(3, 4),
                3, List.of(2, 4),
                4, List.of(3, 2)))); // -> 4

        System.out.println(largestComponent(Map.of(
                1, List.of(2),
                2, List.of(1, 8),
                6, List.of(7),
                9, List.of(8),
                7, List.of(6, 8),
                8, List.of(9, 7, 2)))); // -> 6

        System.out.println(largestComponent(Map.of(
                3, List.of(),
                4, List.of(6),
                6, List.of(4, 5, 7, 8),
                8, List.of(6),
                7, List.of(6),
                5, List.of(6),
                1, List.of(2),
                2, List.of(1)))); // -> 5
        System.out.println(largestComponent(Map.of())); // -> 0

        System.out.println(largestComponent(Map.of(
                0, List.of(4, 7),
                1, List.of(),
                2, List.of(),
                3, List.of(6),
                4, List.of(0),
                6, List.of(3),
                7, List.of(0),
                8, List.of()))); // -> 3
    }
}