package graphs.has_path;

import java.util.ArrayDeque;
import java.util.List;
import java.util.Map;
import java.util.Queue;
// has path
//     Write a function,
//     hasPath, that takes in an unordered map representing the adjacency list of a directed acyclic graph and two nodes(src, dst).
//The function should return a boolean indicating whether or not there exists a directed path
// between the source and destination nodes.

//                                                                                                                                                                                                                                                    Hey.This is our first graph problem,
//     so you should be liberal with watching the
//     Approach and Walkthrough.Be productive,
//     not stubborn.- AZ
//dfs bfs

public class has_path {
    public static boolean hasPathBFS(Map<String, List<String>> graph, String src, String dst) {

    
        return false;
    }

    public static boolean hasPathDFS(Map<String, List<String>> graph, String src, String dst) {
        // todo

        return false;
    }

    public static void main(String[] args) {
        Map<String, List<String>> graph = Map.of(
                "f", List.of("g", "i"),
                "g", List.of("h"),
                "h", List.of(),
                "i", List.of("g", "k"),
                "j", List.of("i"),
                "k", List.of());

        System.out.println("DFS");
        System.out.println(hasPathDFS(graph, "f", "k")); // 1 (true)
        System.out.println("BFS");
        System.out.println(hasPathBFS(graph, "f", "k")); // 1 (true)
//        graph.clear();
        graph = Map.of(
                "f", List.of("g", "i"),
                "g", List.of("h"),
                "h", List.of(),
                "i", List.of("g", "k"),
                "j", List.of("i"),
                "k", List.of());

        System.out.println("DFS");
        System.out.println(hasPathDFS(graph, "f", "j")); // 0 (false)
        System.out.println("BFS");
        System.out.println(hasPathBFS(graph, "f", "j")); // 0 (false)

        System.out.println("DFS");
        System.out.println(hasPathDFS(graph, "i", "h")); // 1 (true)
        System.out.println("BFS");
        System.out.println(hasPathBFS(graph, "i", "h")); // 1 (true)
//        graph.clear();
        graph = Map.of(
                "v", List.of("x", "w"),
                "w", List.of(),
                "x", List.of(),
                "y", List.of("z"),
                "z", List.of());

        System.out.println("DFS");
        System.out.println(hasPathDFS(graph, "v", "w")); // 1 (true)
        System.out.println("BFS");
        System.out.println(hasPathBFS(graph, "v", "w")); // 1 (true)

        System.out.println("DFS");
        System.out.println(hasPathDFS(graph, "v", "z")); // 0 (false)
        System.out.println("BFS");
        System.out.println(hasPathBFS(graph, "v", "z")); // 0 (false)

    }
}