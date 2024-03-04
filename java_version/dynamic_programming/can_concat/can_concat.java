package dynamic_programming.can_concat;

import java.util.HashMap;
import java.util.List;
import java.util.Map;
// can concat
// Write a function, canConcat, that takes in a string and an array of words as arguments.
//  The function should return boolean indicating whether or not it is possible
//   to concatenate words of the array together to form the string.

// You may reuse words of the array as many times as needed.
public class can_concat {

    public static boolean canConcat(String str, List<String> words) {
        Map<String, Boolean> u_map = new HashMap<>();
        return _canConcat(str,words,u_map);
    }

    public static boolean _canConcat(String str, List<String> words, Map<String, Boolean> u_map) {

    

        return false;
    }

    public static void main(String[] args) {
        System.out.println(canConcat("oneisnone", List.of("one", "none", "is"))); // -> 1 (true)
        System.out.println(canConcat("oneisnone", List.of("on", "e", "is"))); // -> 0 (false)
        System.out.println(canConcat("oneisnone", List.of("on", "e", "is", "n"))); // -> 1 (true)
        System.out.println(canConcat("foodisgood", List.of("is", "g", "ood", "f"))); // -> 1 (true)
        System.out.println(canConcat("santahat", List.of("santah", "hat"))); // -> 0 (false)
        System.out.println(canConcat("santahat", List.of("santah", "san", "hat", "tahat"))); // -> 1 (true)
        System.out.println(
                canConcat("rrrrrrrrrrrrrrrrrrrrrrrrrrx", List.of("r", "rr", "rrr", "rrrr", "rrrrr", "rrrrrr"))); // -> 0
                                                                                                                 // (false)
        System.out.println(canConcat("fooisgood", List.of("foo", "is", "g", "ood", "f"))); // -> 1 (true)
    }
}