package dynamic_programming.max_palin_subsequence;
// max palin subsequence
// Write a function, maxPalinSubsequence, that takes in a string as an argument.
// The function should return the length of the longest subsequence of the string
// that is also a palindrome.

// A subsequence of a string can be created by deleting any characters of the string,
//  while maintaining the relative order of characters.

import java.util.HashMap;
import java.util.Map;

public class max_palin_subsequence {

    public static int maxPalinSubsequence(String str) {
        Map<String, Integer> u_map = new HashMap<>();
        return _maxPalinSubsequence(str, 0, str.length() - 1, u_map);
    }

    public static int _maxPalinSubsequence(String str, int i, int j, Map<String, Integer> u_map) {
        String key = String.format("%s,%s", i, j);
    
        return u_map.get(key);
    }


    public static void main(String[] args) {
        System.out.println(maxPalinSubsequence("luwxult"));                                                                    // -> 5
        System.out.println(maxPalinSubsequence("xyzaxxzy"));                                                                   // -> 6
        System.out.println(maxPalinSubsequence("lol"));                                                                        // -> 3
        System.out.println(maxPalinSubsequence("boabcdefop"));                                                                 // -> 3
        System.out.println(maxPalinSubsequence("z"));                                                                          // -> 1
        System.out.println(maxPalinSubsequence("chartreusepugvicefree"));                                                      // -> 7
        System.out.println(maxPalinSubsequence("qwueoiuahsdjnweuueueunasdnmnqweuzqwerty"));                                    // -> 15
        System.out.println(maxPalinSubsequence("enamelpinportlandtildecoldpressedironyflannelsemioticsedisonbulbfashionaxe")); // -> 31
    }
}