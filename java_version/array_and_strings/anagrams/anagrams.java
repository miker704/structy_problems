package array_and_strings.anagrams;
// anagrams

import java.util.HashMap;

// Write a function, anagrams, that takes in two strings as arguments. The function should return
//  a boolean indicating whether or not the strings are anagrams. Anagrams are strings that 
// contain the same characters, but in any order.

public class anagrams {

    public static boolean Anagrams(String str1, String str2) {
        return hashIt(str1).equals(hashIt(str2));
    }

    public static HashMap<Character, Integer> hashIt(String str) {
        HashMap<Character, Integer> hash = new HashMap<>();
        return hash;
    }

    public static void main(String[] args) {
        System.out.println(Anagrams("restful", "fluster")); // -> True
        System.out.println(Anagrams("cats", "tocs")); // -> False
        System.out.println(Anagrams("monkeyswrite", "newyorktimes")); // -> True
        System.out.println(Anagrams("paper", "reapa")); // -> False
        System.out.println(Anagrams("elbow", "below")); // -> True
        System.out.println(Anagrams("tax", "taxi")); // -> False
        System.out.println(Anagrams("taxi", "tax")); // -> False
        System.out.println(Anagrams("night", "thing")); // -> True
        System.out.println(Anagrams("abbc", "aabc")); // -> False
        System.out.println(Anagrams("po", "popp")); // -> false
        System.out.println(Anagrams("pp", "oo")); // -> false
    }
}
