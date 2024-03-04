package graphs.island_count;
// island count

import java.util.AbstractMap.SimpleEntry;
import java.util.HashSet;

// Write a function, island_count, that takes in a grid containing Ws and Ls. W represents water and L represents land. 
// The function should return the number of islands on the grid. An island is a vertically or 
// horizontally connected region of land.

import java.util.List;

public class island_count {
    public static int islandCount(List<List<String>> grid) {
        // todo
        int count = 0;

        return count;
    }

    public static boolean hasPath(int row, int col, List<List<String>> grid,
                                  HashSet<SimpleEntry<Integer, Integer>> visited) {


    
        // todo
        return true;
    }

    public static void main(String[] args) {
        List<List<String>> grid = List.of(
                List.of("W", "L", "W", "W", "W"),
                List.of("W", "L", "W", "W", "W"),
                List.of("W", "W", "W", "L", "W"),
                List.of("W", "W", "L", "L", "W"),
                List.of("L", "W", "W", "L", "L"),
                List.of("L", "L", "W", "W", "W"));
        System.out.println(islandCount(grid)); // -> 3
//        grid.clear();
        grid = List.of(
                List.of("L", "W", "W", "L", "W"),
                List.of("L", "W", "W", "L", "L"),
                List.of("W", "L", "W", "L", "W"),
                List.of("W", "W", "W", "W", "W"),
                List.of("W", "W", "L", "L", "L"));
        System.out.println(islandCount(grid)); // -> 4
//        grid.clear();

        grid = List.of(
                List.of("L", "L", "L"),
                List.of("L", "L", "L"),
                List.of("L", "L", "L"));
        System.out.println(islandCount(grid)); // -> 1
//        grid.clear();

        grid = List.of(
                List.of("W", "W"),
                List.of("W", "W"),
                List.of("W", "W"));
        System.out.println(islandCount(grid)); // -> 0
    }
}