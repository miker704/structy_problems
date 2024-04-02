package array_and_strings.most_frequent_char;
// most frequent char

// Write a function, mostFrequentChar, that takes in a string as an argument. 
// The function should return the most frequent character of the string. 
// If there are ties, return the character that appears earlier in the string.

import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

// You can assume that the input string is non-empty.
public class most_frequent_char {

    public static char mostFrequentChar(String s) {
        HashMap<Character, Integer> hashMap = new HashMap<>();
        for (char letter : s.toCharArray()) {
            hashMap.merge(letter, 1, Integer::sum);
        }
        return Collections.max(hashMap.entrySet(), Map.Entry.comparingByValue()).getKey();

    }

    public static void main(String[] args) {
        System.out.println(mostFrequentChar("bookeeper")); // -> 'e'
        System.out.println(mostFrequentChar("david")); // -> 'd'
        System.out.println(mostFrequentChar("abby")); // -> 'b'
        System.out.println(mostFrequentChar("mississippi")); // -> 'i'
        System.out.println(mostFrequentChar("potato")); // -> 'o'
        System.out.println(mostFrequentChar("eleventennine")); // -> 'e'
        System.out.println(mostFrequentChar("riverbed")); // -> 'r'
    }

}
