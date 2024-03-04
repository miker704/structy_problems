package stack.nesting_score;
// nesting score

// Write a function, nestingScore, that takes in a string of brackets as 
// an argument. The function should return the score of the string according 
// to the following rules:

// [] is worth 1 point
// XY is worth m + n points where X, Y are substrings of well-formed brackets and 
// m, n are their respective scores
// [S] is worth 2 * k points where S is a substring of well-formed brackets and k
//  is the score of that substring
// You may assume that the input only contains well-formed square brackets.

import java.util.ArrayList;
import java.util.List;

public class nesting_score {

    public static int nestingScore(String str) {

        List<Integer> stack = new ArrayList<>();
        stack.add(0);
        return stack.get(0);


    }

    public static void main(String[] args) {
        System.out.println(nestingScore("[]")); // -> 1
        System.out.println(nestingScore("[][][]")); // -> 3
        System.out.println(nestingScore("[[]]")); // -> 2
        System.out.println(nestingScore("[[][]]")); // -> 4
        System.out.println(nestingScore("[[][][]]")); // -> 6
        System.out.println(nestingScore("[[][]][]")); // -> 5
        System.out.println(nestingScore("[][[][]][[]]")); // -> 7
        System.out.println(nestingScore("[[[[[[[][]]]]]]][]"));// -> 129
    }
}