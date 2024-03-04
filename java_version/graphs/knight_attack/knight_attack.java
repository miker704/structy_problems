package graphs.knight_attack;
// knight attack

// A knight and a pawn are on a chess board. Can you figure out the minimum number of moves required for the
//  knight to travel to the same position of the pawn? On a single move, the knight can move in an "L" shape; 
//  two spaces in any direction, then one space in a
//  perpendicular direction. This means that on a single move, a knight has eight possible positions it can move to.
// https://structy-static.s3.amazonaws.com/knight-movement.png
// Write a function, knightAttack, that takes in 5 arguments:

import java.util.*;
import java.util.AbstractMap.SimpleEntry;

// n, kr, kc, pr, pc

// n = the length of the chess board
// kr = the starting row of the knight
// kc = the starting column of the knight
// pr = the row of the pawn
// pc = the column of the pawn
// The function should return an int representing the minimum number of moves required for
//  the knight to land ontop of the pawn. The knight cannot move out-of-bounds of the board.
//   You can assume that rows and columns are 0-indexed. This means that if n = 8, 
//   there are 8 rows and 8 columns numbered 0 to 7. If it is not possible for the knight to attack the pawn,
//    then return -1.

public class knight_attack {

    public static int knightAttack(int n, int kr, int kc, int pr, int pc) {

        
        return -1;
    }

    public static List<SimpleEntry<Integer, Integer>> moveHorsey(int n, int kr, int kc) {

        List<SimpleEntry<Integer, Integer>> validHorseyMoves = new ArrayList<>();

    
        return validHorseyMoves;
    }

    public static void main(String[] args) {
        System.out.println(knightAttack(8, 1, 1, 2, 2)); // -> 2
        System.out.println(knightAttack(8, 1, 1, 2, 3)); // -> 1
        System.out.println(knightAttack(8, 0, 3, 4, 2)); // -> 3
        System.out.println(knightAttack(8, 0, 3, 5, 2)); // -> 4
        System.out.println(knightAttack(24, 4, 7, 19, 20)); // -> 10
        System.out.println(knightAttack(100, 21, 10, 0, 0)); // -> 11
        System.out.println(knightAttack(3, 0, 0, 1, 2)); // -> 1
        System.out.println(knightAttack(3, 0, 0, 1, 1)); // -> -1
    }
}