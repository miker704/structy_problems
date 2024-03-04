package dynamic_programming.overlap_subsequence;

import java.util.HashMap;
import java.util.Map;

// overlap subsequence
// Write a function, overlapSubsequence, that takes in two strings as arguments.
//  The function should return the length of the longest overlapping subsequence.

// A subsequence of a string can be created by deleting any characters of the string,
//  while maintaining the relative order of characters.
public class overlap_subsequence {

    public static int overlapSubsequence(String s1, String s2) {
        Map<String, Integer> indexes = new HashMap<>();
        return _overlapSubsequence(s1,s2,0,0, indexes);
    }

    public static int _overlapSubsequence(String s1, String s2, int i, int j, Map<String, Integer> indexes) {

        
        return i;
    }

    public static void main(String[] args) {
        System.out.println(overlapSubsequence("dogs", "daogt")); // -> 3
        System.out.println(overlapSubsequence("xcyats", "criaotsi")); // -> 4
        System.out.println(overlapSubsequence("xfeqortsver", "feeeuavoeqr")); // -> 5
        System.out.println(overlapSubsequence("kinfolklivemustache", "bespokekinfolksnackwave")); // -> 11
        System.out.println(overlapSubsequence(
                "mumblecorebeardleggingsauthenticunicorn",
                "succulentspughumblemeditationlocavore"));
        // -> 15
    }
}