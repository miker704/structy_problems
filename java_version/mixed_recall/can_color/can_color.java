package mixed_recall.can_color;
// can color

import java.util.HashMap;
import java.util.List;
import java.util.Map;

// Write a function, can_color, that takes in a dictionary representing the adjacency 
// list of an undirected graph. The function should return a boolean indicating whether 
// or not it is possible to color nodes of the graph using two colors in such a way 
// that adjacent nodes are always different colors.

// For example, given this graph:

// x-y-z

// It is possible to color the nodes by using red for x and z, 
// then use blue for y. So the answer is True.

// For example, given this graph:

//     q
//    / \
//   s - r

// It is not possible to color the nodes without making two 
// adjacent nodes the same color. So the answer is False.

public class can_color {

    public static boolean canColor(Map<String, List<String>> graph) {
    
        return true;
    }

    public static boolean parsePath(Map<String, List<String>> graph, Map<String, Boolean> colorMapping, String node,
                                    boolean currColor) {

        
        return true;
    }

    public static void main(String[] args) {

        System.out.println(
                canColor(
                        Map.of(
                                "x", List.of("y"),
                                "y", List.of("x", "z"),
                                "z", List.of("y")

                        ))); // -> 1 (true)


        System.out.println(canColor(Map.of(

                "q", List.of("r", "s"),
                "r", List.of("q", "s"),
                "s", List.of("r", "q")))); // -> 0 (false)

        System.out.println(canColor(Map.of(

                "a", List.of("b", "c", "d"),
                "b", List.of("a"),
                "c", List.of("a"),
                "d", List.of("a")))); // -> 1 (true)
        System.out.println(canColor(Map.of(

                "a", List.of("b", "c", "d"),
                "b", List.of("a"),
                "c", List.of("a", "d"),
                "d", List.of("a", "c")))); // -> 0 (false)
        System.out.println(canColor(Map.of(

                "h", List.of("i", "k"),
                "i", List.of("h", "j"),
                "j", List.of("i", "k"),
                "k", List.of("h", "j")))); // -> 1 (true)
        System.out.println(canColor(Map.of(
                "z", List.of()))); // -> 1 (true)
        System.out.println(canColor(Map.of(

                "h", List.of("i", "k"),
                "i", List.of("h", "j"),
                "j", List.of("i", "k"),
                "k", List.of("h", "j"),
                "q", List.of("r", "s"),
                "r", List.of("q", "s"),
                "s", List.of("r", "q"))

        )); // -> 0 (false)
    }
}