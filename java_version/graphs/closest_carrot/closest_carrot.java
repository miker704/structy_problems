package graphs.closest_carrot;
// closest carrot

// Write a function, closestCarrot, that takes in a grid, a starting row, and a
//  starting column. In the grid, 'X's are walls, 'O's are open spaces, and 'C's are 
//  carrots. The function should return a number representing the length of the shortest 
//  path from the starting position to a carrot. 
// You may move up, down, left, or right, but cannot pass through walls (X). If there is 
// no possible path to a carrot, then return -1.

import java.util.*;

public class closest_carrot {

    public static int closestCarrot(List<List<Character>> grid, int startRow, int startCol) {
    


        return -1;
    }

    public static void main(String[] args) {

        List<List<Character>> grid = List.of(
                List.of('O', 'O', 'O', 'O', 'O'),
                List.of('O', 'X', 'O', 'O', 'O'),
                List.of('O', 'X', 'X', 'O', 'O'),
                List.of('O', 'X', 'C', 'O', 'O'),
                List.of('O', 'X', 'X', 'O', 'O'),
                List.of('C', 'O', 'O', 'O', 'O'));

        System.out.println(closestCarrot(grid, 1, 2)); // -> 4

        System.out.println(closestCarrot(grid, 0, 0)); // -> 5
        grid = List.of(
                List.of('O', 'O', 'X', 'X', 'X'),
                List.of('O', 'X', 'X', 'X', 'C'),
                List.of('O', 'X', 'O', 'X', 'X'),
                List.of('O', 'O', 'O', 'O', 'O'),
                List.of('O', 'X', 'X', 'X', 'X'),
                List.of('O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'C', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O')

        );
        System.out.println(closestCarrot(grid, 3, 4)); // -> 9
        grid = List.of(
                List.of('O', 'O', 'X', 'O', 'O'),
                List.of('O', 'X', 'X', 'X', 'O'),
                List.of('O', 'X', 'C', 'C', 'O')

        );
        System.out.println(closestCarrot(grid, 1, 4)); // -> 2

        System.out.println(closestCarrot(grid, 2, 0)); // -> -1

        grid = List.of(
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'X', 'X'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'X', 'C'));

        System.out.println(closestCarrot(grid, 0, 0)); // -> -1
        grid = List.of(
                List.of('O', 'O', 'X', 'C', 'O'),
                List.of('O', 'X', 'X', 'X', 'O'),
                List.of('C', 'X', 'O', 'O', 'O'));
        System.out.println(closestCarrot(grid, 2, 2)); // -> 5
    }
}