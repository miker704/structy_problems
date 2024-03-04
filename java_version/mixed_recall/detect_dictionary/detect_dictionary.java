package mixed_recall.detect_dictionary;

import java.util.List;
// detect dictionary
// Write a function, detectDictionary, that takes in a dictionary of words
//  and an alphabet string. The function should return a boolean indicating 
//  whether or not all words of the dictionary are lexically-ordered 
//  according to the alphabet.
// https://en.wikipedia.org/wiki/Lexicographic_order
// You can assume that all characters are lowercase a-z.

// You can assume that the alphabet contains all 26 letters.
public class detect_dictionary {

    public static boolean detectDictionary(List<String> dictionary, String alphabet) {
    
        return true;
    }

    public static boolean lexicalOrder(String word1, String word2, String alphabet) {
    
        return true;
    }

    public static void main(String[] args) {
        List<String> dictionary = List.of("zoo", "tick", "tack", "door");
        String alphabet = "ghzstijbacdopnfklmeqrxyuvw";
        System.out.println(detectDictionary(dictionary, alphabet)); // -> true
        dictionary = List.of("zoo", "tack", "tick", "door");
        alphabet = "ghzstijbacdopnfklmeqrxyuvw";
        System.out.println(detectDictionary(dictionary, alphabet)); // -> false
        dictionary = List.of("zoos", "zoo", "tick", "tack", "door");
        alphabet = "ghzstijbacdopnfklmeqrxyuvw";
        System.out.println(detectDictionary(dictionary, alphabet)); // -> false
        dictionary = List.of("miles", "milestone", "proper", "process", "goal");
        alphabet = "mnoijpqrshkltabcdefguvwzxy";
        System.out.println(detectDictionary(dictionary, alphabet)); // -> true
        dictionary = List.of("miles", "milestone", "pint", "proper", "process", "goal");
        alphabet = "mnoijpqrshkltabcdefguvwzxy";
        System.out.println(detectDictionary(dictionary, alphabet)); // -> true
        dictionary = List.of("miles", "milestone", "pint", "proper", "process", "goal", "apple");
        alphabet = "mnoijpqrshkltabcdefguvwzxy";
        System.out.println(detectDictionary(dictionary, alphabet)); // -> false
    }
}