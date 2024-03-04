package mixed_recall.token_replace;

import java.util.Map;
// token replace
// Write a function, tokenReplace, that takes in an unordered_map of tokens
//  and a string. The function should return a new string where tokens are replaced.

// Tokens are enclosed in a pair of "$". You can assume that the input string
// is properly formatted. Tokens should be replaced from left to right in the string (see test_05).
public class token_replace {

    public static String tokenReplace(String s, Map<String, String> tokens) {
        return "";
    }

    public static void main(String[] args) {

        Map<String, String> tokens = Map.of(

                "$LOCATION$", "park",
                "$ANIMAL$", "dog");
        System.out.println(tokenReplace("Walk the $ANIMAL$ in the $LOCATION$!", tokens));
        // -> 'Walk the dog in the park!'
        tokens = Map.of(
                "$ADJECTIVE$", "quick",
                "$VERB$", "hopped",
                "$DIRECTION$", "North");
        System.out.println(tokenReplace("the $ADJECTIVE$ fox $VERB$ $ADJECTIVE$ly $DIRECTION$ward", tokens));
        // -> 'the quick fox hopped quickly Northward'
        tokens = Map.of(
                "$greeting$", "hey programmer");
        System.out.println(tokenReplace("his greeting is always $greeting$.", tokens));
        // -> 'his greeting is always hey programmer.'
        tokens = Map.of(
                "$A$", "lions",
                "$B$", "tigers",
                "$C$", "bears");
        System.out.println(tokenReplace("$A$$B$$C$, oh my.", tokens));
        // -> 'lionstigersbears, oh my.'
        tokens = Map.of(
                "$A$", "lions",
                "$B$", "tigers",
                "$C$", "bears");
        System.out.println(tokenReplace("$B$", tokens));
        // -> 'tigers'
        tokens = Map.of(
                "$second$", "beta",
                "$first$", "alpha",
                "$third$", "gamma");
        System.out.println(tokenReplace("$first$second$third$", tokens));
        // -> 'alphasecondgamma'

    }
}