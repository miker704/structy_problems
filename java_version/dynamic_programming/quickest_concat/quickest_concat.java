package dynamic_programming.quickest_concat;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

// quickest concat
// Write a function, quickest_concat, that takes in a string and a list of words as arguments.
// The function should return the minimum number of words needed to build the string by concatenating words of the list.

public class quickest_concat {

    public static int quickestConcat(String str, List<String> words) {
        Map<String, Integer> u_map = new HashMap<>();
        return _quickestConcat(str, words, u_map);
    }

    public static int _quickestConcat(String str, List<String> words, Map<String, Integer> u_map) {


        return u_map.get(str);
    }


    public static void main(String[] args) {
        System.out.println(quickestConcat("caution", List.of("ca", "ion", "caut", "ut"))); // -> 2
        System.out.println(quickestConcat("caution", List.of("ion", "caut", "caution"))); // -> 1
        System.out.println(quickestConcat("respondorreact", List.of("re", "or", "spond", "act", "respond"))); // -> 4
        System.out.println(quickestConcat("simchacindy", List.of("sim", "simcha", "acindy", "ch"))); // -> 3
        System.out.println(quickestConcat("simchacindy", List.of("sim", "simcha", "acindy"))); // -> -1
        System.out.println(quickestConcat("uuuuuu", List.of("u", "uu", "uuu", "uuuu"))); // -> 2
        System.out.println(quickestConcat("rongbetty", List.of("wrong", "bet"))); // -> -1
        System.out
                .println(quickestConcat("uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", List.of("u", "uu", "uuu", "uuuu", "uuuuu"))); // ->
        // 7
    }
}