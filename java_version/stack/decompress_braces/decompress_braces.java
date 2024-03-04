package stack.decompress_braces;
// decompress braces

// Write a function, decompressBraces, that takes in a compressed string as an argument.
//  The function should return the string decompressed.

// The compression format of the input string is 'n{subString}', where the subString within 
// braces should be repeated n times.

// You may assume that every number n is guaranteed to be an integer between 1 through 9.

// You may assume that the input is valid and the decompressed string
//  will only contain alphabetic characters.

import java.util.ArrayList;
import java.util.List;

public class decompress_braces {

    public static String decompressBraces(String str) {

        StringBuilder result = new StringBuilder();
        return result.toString();
    }

    public static void main(String[] args) {
        System.out.println(decompressBraces("2{q}3{tu}v"));
        // -> qqtututuv
        System.out.println(decompressBraces("ch3{ao}"));
        // -> chaoaoao
        System.out.println(decompressBraces("2{y3{o}}s"));
        // -> yoooyooos
        System.out.println(decompressBraces("z3{a2{xy}b}"));
        // -> zaxyxybaxyxybaxyxyb
        System.out.println(decompressBraces("2{3{r4{e}r}io}"));
        // -> reeeerreeeerreeeerioreeeerreeeerreeeerio
        System.out.println(decompressBraces("go3{spinn2{ing}s}"));
        // -> gospinningingsspinningingsspinningings
        System.out.println(decompressBraces("2{l2{if}azu}l"));
        // -> lififazulififazul
        System.out.println(decompressBraces("3{al4{ec}2{icia}}"));
        // -> alececececiciaiciaalececececiciaiciaalececececiciaicia
    }
}