package graphs.minimum_island;
// minimum island

import java.util.AbstractMap.SimpleEntry;
import java.util.HashSet;

// Write a function, minimumIsland, that takes in a grid containing Ws and Ls.
//  W represents water and L represents land. The function should return the size of the smallest 
//  island. An island is a vertically or horizontally connected region of land.

import java.util.List;

// You may assume that the grid contains at least one island.

//dp only
public class minimum_island {
    public static int minimumIsland(List<List<String>> grid) {
        // todo
        double minSize = Double.POSITIVE_INFINITY;
        
        return (int) minSize;
    }

    public static double hashPath(int row, int col, List<List<String>> grid,
                                  HashSet<SimpleEntry<Integer, Integer>> visited) {
    
        double currentSize = 1.00;
        return currentSize;
    }

    public static void main(String[] args) {
        List<List<String>> grid = List.of(
                List.of("W", "L", "W", "W", "W"),
                List.of("W", "L", "W", "W", "W"),
                List.of("W", "W", "W", "L", "W"),
                List.of("W", "W", "L", "L", "W"),
                List.of("L", "W", "W", "L", "L"),
                List.of("L", "L", "W", "W", "W"));
        System.out.println(minimumIsland(grid)); // -> 2
//        grid.clear();
        grid = List.of(
                List.of("L", "W", "W", "L", "W"),
                List.of("L", "W", "W", "L", "L"),
                List.of("W", "L", "W", "L", "W"),
                List.of("W", "W", "W", "W", "W"),
                List.of("W", "W", "L", "L", "L"));
        System.out.println(minimumIsland(grid)); // -> 1
//        grid.clear();

        grid = List.of(
                List.of("L", "L", "L"),
                List.of("L", "L", "L"),
                List.of("L", "L", "L"));
        System.out.println(minimumIsland(grid)); // -> 9
//        grid.clear();

        grid = List.of(
                List.of("W", "W"),
                List.of("L", "L"),
                List.of("W", "W"),
                List.of("W", "L"));
        System.out.println(minimumIsland(grid)); // -> 1
    }
}