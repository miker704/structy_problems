package graphs.connected_components_count;
// connected components count

// Write a function, connectedComponentsCount, that takes in the adjacency
//  list of an undirected graph. The function should return the number of connected components within the graph.

import java.util.HashSet;
import java.util.List;
import java.util.Map;

public class connect_components_count {
    public static int connectedComponentsCount(Map<Integer, List<Integer>> graph) {
        // todo
        int count = 0;
    
        return count;
    }

    public static boolean hasPath(Map<Integer, List<Integer>> graph, int currNode, HashSet<Integer> visited) {
        // todo
        if(visited.contains(currNode)){return false;}
    
        return true;
    }

    public static void main(String[] args) {
        System.out.println(connectedComponentsCount(
                Map.of(
                        0, List.of(8, 1, 5),
                        1, List.of(0),
                        5, List.of(0, 8),
                        8, List.of(0, 5),
                        2, List.of(3, 4),
                        3, List.of(2, 4),
                        4, List.of(3, 2)))); // -> 2

        System.out.println(connectedComponentsCount(Map.of(
                1, List.of(2),
                2, List.of(1, 8),
                6, List.of(7),
                9, List.of(8),
                7, List.of(6, 8),
                8, List.of(9, 7, 2)))); // -> 1

        System.out.println(connectedComponentsCount(Map.of(
                3, List.of(),
                4, List.of(6),
                6, List.of(4, 5, 7, 8),
                8, List.of(6),
                7, List.of(6),
                5, List.of(6),
                1, List.of(2),
                2, List.of(1)))); // -> 3
        System.out.println(connectedComponentsCount(Map.of())); // -> 0

        System.out.println(connectedComponentsCount(Map.of(
                0, List.of(4, 7),
                1, List.of(),
                2, List.of(),
                3, List.of(6),
                4, List.of(0),
                6, List.of(3),
                7, List.of(0),
                8, List.of()))); // -> 5

    }
}