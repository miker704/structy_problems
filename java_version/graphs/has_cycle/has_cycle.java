package graphs.has_cycle;

import java.util.HashSet;
import java.util.List;
import java.util.Map;

// has cycle
// Write a function, hasCycle, that takes in an unordered map representing the adjacency 
// list of a directed graph. The function should return a boolean indicating whether 
// or not the graph contains a cycle.

public class has_cycle {

    public static boolean hasCycle(Map<Character, List<Character>> graph) {

        boolean result = false;
    
        return result;
    }

    public static boolean _hasCycle(Map<Character, List<Character>> graph, HashSet<Character> grey,
            HashSet<Character> black, Character node) {

    
        return false;
    }

    public static void main(String[] args) {
        Map<Character, List<Character>> graph = Map.of(
                'a', List.of('b'),
                'b', List.of('c'),
                'c', List.of('a'));

        System.out.println(hasCycle(graph)); // -> 1 (true)

        graph = Map.of(
                'a', List.of('b', 'c'),
                'b', List.of('c'),
                'c', List.of('d'),
                'd', List.of());
        System.out.println(hasCycle(graph)); // -> 0 (false)

        graph = Map.of(
                'a', List.of('b', 'c'),
                'b', List.of(),
                'c', List.of(),
                'e', List.of('f'),
                'f', List.of('e'));
        System.out.println(hasCycle(graph)); // -> 1 (true)

        graph = Map.of(
                'q', List.of('r', 's'),
                'r', List.of('t', 'u'),
                's', List.of(),
                't', List.of(),
                'u', List.of(),
                'v', List.of('w'),
                'w', List.of(),
                'x', List.of('w'));
        System.out.println(hasCycle(graph)); // -> 0 (false)

        graph = Map.of(
                'a', List.of('b'),
                'b', List.of('c'),
                'c', List.of('a'),
                'g', List.of());
        System.out.println(hasCycle(graph)); // -> 1 (true)

        graph = Map.of(
                'a', List.of('b'),
                'b', List.of('c'),
                'c', List.of('d'),
                'd', List.of('b'));
        System.out.println(hasCycle(graph)); // -> 1 (true)
    }
}