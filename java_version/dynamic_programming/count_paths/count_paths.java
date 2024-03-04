package dynamic_programming.count_paths;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

// count paths
// Write a function, countPaths, that takes in a grid as an argument.
// In the grid, 'X' represents walls and 'O' represents open spaces.
// You may only move down or to the right and cannot pass through walls.
// The function should return the number
// of ways possible to travel from the top-left corner of the grid to the bottom-right corner.
// example
// std::vector<std::vector<char>> grid {
//     {'O', 'O'},
//     {'O', 'O'}
//   };
//   countPaths(grid); // -> 2 ([0][0] -> right [0][1] -> down [1][1])
//&& ([0][0]->down[1][0] -> right [1],[1])
public class count_paths {

    public static int countPaths(List<List<Character>> grid) {
        Map<String, Integer> u_map = new HashMap<>();
        return _countPaths(grid, 0, 0, u_map);
    }

    public static int _countPaths(List<List<Character>> grid, int row, int col, Map<String, Integer> u_map) {

        int attempts = _countPaths(grid, row, col + 1, u_map) + _countPaths(grid, row + 1, col, u_map);

        return attempts;
    }

    public static void main(String[] args) {

        List<List<Character>> grid = List.of(
                List.of('O', 'O'),
                List.of('O', 'O'));

        System.out.println(countPaths(grid)); // -> 2
        grid = List.of(
                List.of('O', 'O', 'X'),
                List.of('O', 'O', 'O'),
                List.of('O', 'O', 'O'));
        System.out.println(countPaths(grid)); // -> 5

        grid = List.of(
                List.of('O', 'O', 'O'),
                List.of('O', 'O', 'X'),
                List.of('O', 'O', 'O'));

        System.out.println(countPaths(grid)); // -> 3

        grid = List.of(
                List.of('O', 'O', 'O'),
                List.of('O', 'X', 'X'),
                List.of('O', 'O', 'O'));

        System.out.println(countPaths(grid)); // -> 1

        grid = List.of(
                List.of('O', 'O', 'X', 'O', 'O', 'O'),
                List.of('O', 'O', 'X', 'O', 'O', 'O'),
                List.of('X', 'O', 'X', 'O', 'O', 'O'),
                List.of('X', 'X', 'X', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O'));

        System.out.println(countPaths(grid)); // -> 0

        grid = List.of(
                List.of('O', 'O', 'X', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'X'),
                List.of('X', 'O', 'O', 'O', 'O', 'O'),
                List.of('X', 'X', 'X', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O'));

        System.out.println(countPaths(grid)); // -> 42

        grid = List.of(
                List.of('O', 'O', 'X', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'X'),
                List.of('X', 'O', 'O', 'O', 'O', 'O'),
                List.of('X', 'X', 'X', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'X'));
        System.out.println(countPaths(grid)); // -> 0

        grid = List.of(
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'));
        System.out.println(countPaths(grid)); // -> 40116600


        grid = List.of(
                List.of('O', 'O', 'X', 'X', 'O', 'O', 'O', 'X', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'X', 'X', 'O', 'O', 'O', 'X', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'X', 'O', 'O', 'O', 'X', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('X', 'O', 'O', 'O', 'O', 'O', 'O', 'X', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('X', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'X', 'X', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'X', 'O', 'O', 'O', 'O', 'O', 'X', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'X', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('X', 'X', 'X', 'O', 'O', 'O', 'O', 'O', 'O', 'X', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'X', 'X', 'O', 'O', 'O', 'O', 'X', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'X', 'X', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'X', 'O', 'O', 'O', 'O', 'O', 'O'),
                List.of('O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'X', 'O', 'O', 'O', 'O', 'O', 'O'));
        System.out.println(countPaths(grid)); // -> 3190434
    }
}