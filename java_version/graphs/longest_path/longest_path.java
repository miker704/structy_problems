package graphs.longest_path;

import java.util.*;

// longest path
// Write a function, longestPath, that takes in an adjacency list for a 
// directed acyclic graph. The function should return the length of the 
// longest path within the graph.
//  A path may start and end at any two nodes. The length of a path is considered 
//  the number of edges in the path, not the number of nodes.

public class longest_path {

    public static int longestPath(Map<Character, List<Character>> graph) {

        int maxPath = 0;


        return maxPath;
    }

    public static int hasPath(Map<Character, List<Character>> graph, char node, HashMap<Character, Integer> visited) {


    

        return visited.get(node);
    }

    public static void main(String[] args) {
        Map<Character, List<Character>> graph = Map.of(
                'a', List.of('c', 'b'),
                'b', List.of('c'),
                'c', List.of());

        System.out.println(longestPath(graph)); // -> 2

        graph = Map.of(
                'a', List.of('b', 'c'),
                'b', List.of('c'),
                'c', List.of(),
                'q', List.of('r'),
                'r', List.of('s', 'u', 't'),
                's', List.of('t'),
                't', List.of('u'),
                'u', List.of());
        System.out.println(longestPath(graph)); // -> 4

        graph = Map.of(
                'h', List.of('i', 'j', 'k'),
                'g', List.of('h'),
                'i', List.of(),
                'j', List.of(),
                'k', List.of(),
                'x', List.of('y'),
                'y', List.of());

        System.out.println(longestPath(graph));// -> 2

        graph = Map.of(
                'a', List.of('b'),
                'b', List.of('c'),
                'c', List.of(),
                'e', List.of('f'),
                'f', List.of('g'),
                'g', List.of('h'),
                'h', List.of());

        System.out.println(longestPath(graph)); // -> 3

    }
}