package mixed_recall.string_search;
// string search

// Write a function, stringSearch, that takes in) a grid of 
// letters and a string as arguments. The function should return 
// a boolean indicating whether or not the string can be found in 
// the grid as a path by connecting horizontal or vertical positions. 
// The path can begin at any position, but you cannot reuse a position more than once in the path.

import java.util.List;

// You can assume that all letters are lowercase and alphabetic.

public class string_search {

    public static boolean stringSearch(List<List<Character>> grid, String target) {
        return false;
    }

    public static boolean parseSearch(List<List<Character>> grid, String target, int row, int col) {
        return false;
    }

    public static void main(String[] args) {
        List<List<Character>> grid = List.of(
                List.of('e', 'y', 'h', 'i', 'j'),
                List.of('q', 'x', 'e', 'r', 'p'),
                List.of('r', 'o', 'l', 'l', 'n'),
                List.of('p', 'r', 'x', 'o', 'h'),
                List.of('a', 'a', 'm', 'c', 'm'));
        System.out.println(stringSearch(grid, "hello")); // -> true
        grid = List.of(
                List.of('e', 'y', 'h', 'i', 'j'),
                List.of('q', 'x', 'e', 'r', 'p'),
                List.of('r', 'o', 'l', 'l', 'n'),
                List.of('p', 'r', 'x', 'o', 'h'),
                List.of('a', 'a', 'm', 'c', 'm'));
        System.out.println(stringSearch(grid, "proxy")); // -> true

        grid = List.of(
                List.of('e', 'y', 'h', 'i', 'j'),
                List.of('q', 'x', 'e', 'r', 'p'),
                List.of('r', 'o', 'l', 'l', 'n'),
                List.of('p', 'r', 'x', 'o', 'h'),
                List.of('a', 'a', 'm', 'c', 'm'));
        System.out.println(stringSearch(grid, "rolling")); // -> false
        grid = List.of(
                List.of('e', 'y', 'h', 'i', 'j'),
                List.of('q', 'x', 'e', 'r', 'p'),
                List.of('r', 'o', 'l', 'l', 'n'),
                List.of('p', 'r', 'x', 'o', 'h'),
                List.of('a', 'a', 'm', 'z', 'm'));
        System.out.println(stringSearch(grid, "zoo"));// -> false
        grid = List.of(
                List.of('q', 'w', 'h', 'i', 'j'),
                List.of('q', 'e', 'r', 'o', 'p'),
                List.of('h', 'y', 't', 'x', 'z'),
                List.of('k', 'o', 'm', 'o', 'p'));
        System.out.println(stringSearch(grid, "qwerty")); // -> true
        grid = List.of(
                List.of('f', 'd', 'i', 'e', 'l', 'u', 'j', 't', 'q', 'v', 'o', 'p'),
                List.of('o', 'p', 'b', 'e', 'm', 'w', 'm', 'l', 'h', 'j', 's', 'v'),
                List.of('g', 'b', 's', 'm', 'i', 'w', 'w', 'h', 'l', 'm', 'l', 'n'),
                List.of('a', 'l', 's', 'k', 'p', 'c', 't', 'u', 'v', 'b', 'c', 'm'),
                List.of('m', 't', 'c', 'k', 'e', 'n', 'r', 'b', 'a', 'z', 'l', 'c'),
                List.of('q', 'm', 'a', 'p', 'a', 'p', 'i', 'i', 'u', 't', 'z', 'z'),
                List.of('d', 'u', 'z', 'o', 'e', 'r', 'a', 't', 't', 'c', 'q', 'k'),
                List.of('f', 'u', 'z', 'g', 'c', 'i', 'k', 'v', 'o', 'f', 's', 'w'),
                List.of('p', 'h', 'u', 'i', 'k', 'c', 'v', 'v', 'h', 'q', 'v', 'i'),
                List.of('l', 'q', 'w', 'f', 'y', 'g', 'w', 'f', 'a', 'u', 'x', 'q'));
        System.out.println(stringSearch(grid, "paprika")); // -> true
        grid = List.of(
                List.of('s', 's', 's', 's', 's', 's', 's', 's', 's', 's', 's'),
                List.of('s', 's', 's', 's', 's', 's', 's', 's', 's', 's', 's'),
                List.of('s', 's', 's', 's', 's', 's', 's', 's', 's', 's', 's'),
                List.of('s', 's', 's', 's', 's', 's', 's', 's', 's', 's', 's'),
                List.of('s', 's', 's', 's', 's', 's', 's', 's', 's', 's', 's'),
                List.of('s', 's', 's', 's', 's', 's', 's', 's', 's', 's', 's'),
                List.of('s', 's', 's', 's', 's', 's', 's', 's', 's', 's', 's'),
                List.of('s', 's', 's', 's', 's', 's', 's', 's', 's', 'x', 'x'),
                List.of('s', 's', 's', 's', 's', 's', 's', 's', 's', 'x', 'h'));

        System.out.println(stringSearch(grid, "sssssssh")); // -> false
        grid = List.of(
                List.of('a', 'b', 'a'),
                List.of('t', 'x', 'x'),
                List.of('x', 'x', 'x'));
        System.out.println(stringSearch(grid, "abat")); // -> true
    }
}