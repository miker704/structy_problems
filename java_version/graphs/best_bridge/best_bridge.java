package graphs.best_bridge;
// best bridge

// Write a function, bestBridge, that takes in a grid as an argument. 
// The grid contains water (W) and land (L). 
// There are exactly two islands in the grid. An island is a vertically or 
// horizontally connected region of land.
//  Return the minimum length bridge needed to connect the two islands. 
//  A bridge does not need to form a straight line.

import java.util.*;
import java.util.AbstractMap.SimpleEntry;


// game plan
/*
 * use breadth first search as we are finding the minimum (shortest path)
 *
 * */


public class best_bridge {

    public static int bestBridge(List<List<Character>> grid) {

    

        return 0;
    }

    public static String stringify(int row, int pos) {
        return "";
    }

    public static boolean isMapBounds(List<List<Character>> grid, int row, int col) {
        return false;
    }

    public static void getIsland(List<List<Character>> grid, HashSet<SimpleEntry<Integer, Integer>> visited,
                                 List<SimpleEntry<Integer, Integer>> island, int row, int col) {

            return;
    
    }

    public static void main(String[] args) {
        List<List<Character>> grid = List.of(
                List.of('W', 'W', 'W', 'L', 'L'),
                List.of('L', 'L', 'W', 'W', 'L'),
                List.of('L', 'L', 'L', 'W', 'L'),
                List.of('W', 'L', 'W', 'W', 'W'),
                List.of('W', 'W', 'W', 'W', 'W'),
                List.of('W', 'W', 'W', 'W', 'W'));

        System.out.println(bestBridge(grid)); // -> 1
        grid = List.of(
                List.of('W', 'W', 'W', 'W', 'W'),
                List.of('W', 'W', 'W', 'W', 'W'),
                List.of('L', 'L', 'W', 'W', 'L'),
                List.of('W', 'L', 'W', 'W', 'L'),
                List.of('W', 'W', 'W', 'L', 'L'),
                List.of('W', 'W', 'W', 'W', 'W'));
        System.out.println(bestBridge(grid)); // -> 2

        grid = List.of(
                List.of('W', 'W', 'W', 'W', 'W'),
                List.of('W', 'W', 'W', 'L', 'W'),
                List.of('L', 'W', 'W', 'W', 'W'));
        System.out.println(bestBridge(grid)); // -> 3

        grid = List.of(
                List.of('W', 'W', 'W', 'W', 'W', 'W', 'W', 'W'),
                List.of('W', 'W', 'W', 'W', 'W', 'W', 'W', 'W'),
                List.of('W', 'W', 'W', 'W', 'W', 'W', 'W', 'W'),
                List.of('W', 'W', 'W', 'W', 'W', 'L', 'W', 'W'),
                List.of('W', 'W', 'W', 'W', 'L', 'L', 'W', 'W'),
                List.of('W', 'W', 'W', 'W', 'L', 'L', 'L', 'W'),
                List.of('W', 'W', 'W', 'W', 'W', 'L', 'L', 'L'),
                List.of('L', 'W', 'W', 'W', 'W', 'L', 'L', 'L'),
                List.of('L', 'L', 'L', 'W', 'W', 'W', 'W', 'W'),
                List.of('W', 'W', 'W', 'W', 'W', 'W', 'W', 'W'));
        System.out.println(bestBridge(grid)); // -> 3

        grid = List.of(
                List.of('L', 'L', 'L', 'L', 'L', 'L', 'L', 'L'),
                List.of('L', 'W', 'W', 'W', 'W', 'W', 'W', 'L'),
                List.of('L', 'W', 'W', 'W', 'W', 'W', 'W', 'L'),
                List.of('L', 'W', 'W', 'W', 'W', 'W', 'W', 'L'),
                List.of('L', 'W', 'W', 'W', 'W', 'W', 'W', 'L'),
                List.of('L', 'W', 'W', 'W', 'W', 'W', 'W', 'L'),
                List.of('L', 'W', 'W', 'L', 'W', 'W', 'W', 'L'),
                List.of('L', 'W', 'W', 'W', 'W', 'W', 'W', 'L'),
                List.of('L', 'W', 'W', 'W', 'W', 'W', 'W', 'L'),
                List.of('L', 'W', 'W', 'W', 'W', 'W', 'W', 'L'),
                List.of('L', 'W', 'W', 'W', 'W', 'W', 'W', 'L'),
                List.of('L', 'L', 'L', 'L', 'L', 'L', 'L', 'L'));
        System.out.println(bestBridge(grid)); // -> 2

        grid = List.of(
                List.of('W', 'L', 'W', 'W', 'W', 'W', 'W', 'W'),
                List.of('W', 'L', 'W', 'W', 'W', 'W', 'W', 'W'),
                List.of('W', 'W', 'W', 'W', 'W', 'W', 'W', 'W'),
                List.of('W', 'W', 'W', 'W', 'W', 'W', 'W', 'W'),
                List.of('W', 'W', 'W', 'W', 'W', 'W', 'W', 'W'),
                List.of('W', 'W', 'W', 'W', 'W', 'W', 'L', 'W'),
                List.of('W', 'W', 'W', 'W', 'W', 'W', 'L', 'L'),
                List.of('W', 'W', 'W', 'W', 'W', 'W', 'W', 'L'));
        System.out.println(bestBridge(grid)); // -> 8

    }
}