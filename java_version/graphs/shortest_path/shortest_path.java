package graphs.shortest_path;
// shortest path

// Write a function, shortest_path, that takes in a list of edges for an undirected graph and
// two nodes (node_A, node_B). The function should return the length of the shortest path between A and B. Consider
//  the length as
//  the number of edges in the path, not the number of nodes. If there is no path between A and B, then return -1.

import java.util.*;

//using breadth first search since we are looking for the shortest path

public class shortest_path {
    public static int shortestPath(List<List<String>> edges, String nodeA, String nodeB) {
        // todo
    
        return -1;
    }

    public static Map<String, List<String>> buildGraph(List<List<String>> edges) {
        Map<String, List<String>> graph = new HashMap<>();

        return graph;
    }

    public static void main(String[] args) {
        List<List<String>> edges = List.of(
                List.of("w", "x"),
                List.of("x", "y"),
                List.of("z", "y"),
                List.of("z", "v"),
                List.of("w", "v"));
        System.out.println(shortestPath(edges, "w", "z")); // -> 2
        System.out.println(shortestPath(edges, "y", "x")); // -> 1
//        edges.clear();
        edges = List.of(
                List.of("a", "c"),
                List.of("a", "b"),
                List.of("c", "b"),
                List.of("c", "d"),
                List.of("b", "d"),
                List.of("e", "d"),
                List.of("g", "f"));
        System.out.println(shortestPath(edges, "a", "e")); // -> 3
        System.out.println(shortestPath(edges, "e", "c")); // -> 2
        System.out.println(shortestPath(edges, "b", "g")); // -> -1
//        edges.clear();
        edges = List.of(
                List.of("c", "n"),
                List.of("c", "e"),
                List.of("c", "s"),
                List.of("c", "w"),
                List.of("w", "e"));
        System.out.println(shortestPath(edges, "w", "e")); // -> 1

        System.out.println(shortestPath(edges, "n", "e")); // -> 2
//        edges.clear();
        edges = List.of(
                List.of("m", "n"),
                List.of("n", "o"),
                List.of("o", "p"),
                List.of("p", "q"),
                List.of("t", "o"),
                List.of("r", "q"),
                List.of("r", "s"));
        System.out.println(shortestPath(edges, "m", "s")); // -> 6
    }
}