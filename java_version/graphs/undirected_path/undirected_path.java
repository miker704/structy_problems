package graphs.undirected_path;

import java.util.*;

// undirected path
// Write a function, undirectedPath, that takes in a vector of edges for an undirected graph and two nodes (nodeA, nodeB).
//  The function should return a boolean indicating whether or not there exists a path between nodeA and nodeB.

//dfs method

//we have to build the graph first undirected graphs follow the proof of if
//pair of verties (x,y) exist so does the reverse of this pair (y,x)
// they have no set direction in from x to y  we can move between x and y 
// by doing x to y or y to x there is no arrow indicated the only direction between the two
//points so it is drawn as x-y or x<->y

//this is recursive dfs 
public class undirected_path {
    public static boolean undirectedPath(List<List<String>> edges, String nodeA, String nodeB) {
        // todo
        Map<String, List<String>> graph = buildGraph(edges);
        return hasPath(graph, nodeA, nodeB, new HashSet<>());
    }

    public static Map<String, List<String>> buildGraph(List<List<String>> edges) {

        Map<String, List<String>> graph = new HashMap<>();

        return graph;
    }

    public static boolean hasPath(Map<String, List<String>> graph, String src, String dst, HashSet<String> visited) {

        return false;
    }

    public static void main(String[] args) {
        List<List<String>> edges = List.of(
                List.of("i", "j"),
                List.of("k", "i"),
                List.of("m", "k"),
                List.of("k", "l"),
                List.of("o", "n"));
        System.out.println(undirectedPath(edges, "j", "m")); // -> 1 (true)
        System.out.println(undirectedPath(edges, "m", "j")); // -> 1 (true)
        System.out.println(undirectedPath(edges, "l", "j")); // -> 1 (true)
        System.out.println(undirectedPath(edges, "k", "o")); // -> 0 (false)
        System.out.println(undirectedPath(edges, "i", "o")); // -> 0 (false)
//        edges.clear();
        edges = List.of(
                List.of("b", "a"),
                List.of("c", "a"),
                List.of("b", "c"),
                List.of("q", "r"),
                List.of("q", "s"),
                List.of("q", "u"),
                List.of("q", "t")

        );

        System.out.println(undirectedPath(edges, "a", "b")); // -> 1 (true)
        System.out.println(undirectedPath(edges, "a", "c")); // -> 1 (true)
        System.out.println(undirectedPath(edges, "r", "t")); // -> 1 (true)
        System.out.println(undirectedPath(edges, "r", "b")); // -> 0 (false)
        edges = List.of(
                List.of("s", "r"),
                List.of("t", "q"),
                List.of("q", "r"));
        System.out.println(undirectedPath(edges, "r", "t")); // -> 1 (true)
    }
}