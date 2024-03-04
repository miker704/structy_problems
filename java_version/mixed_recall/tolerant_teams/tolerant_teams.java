package mixed_recall.tolerant_teams;

import java.util.AbstractMap.SimpleEntry;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

// tolerant teams
// # Write a function, tolerantTeams, that takes in a vector of rivalries 
// # as an argument. A rivalry is a pair of people who should not be placed 
// #  on the same team. The function should return a boolean indicating whether or not it is possible to
// #  separate people into two teams, without rivals being on the same team. 
// #  The two teams formed do not have to be the same size.
public class tolerant_teams {

    public static boolean tolerantTeams(List<SimpleEntry<String, String>> rivalries) {

        return true;
    }

    public static boolean parseTeams(Map<String, List<String>> graph, Map<String, Boolean> colorMapping, String node,
                                     boolean currColor) {

    

        return true;
    }

    public static Map<String, List<String>> buildGraph(List<SimpleEntry<String, String>> rivalries) {
        Map<String, List<String>> graph = new HashMap<>();


        return graph;
    }

    public static void main(String[] args) {
        System.out.println(tolerantTeams(List.of(
                new SimpleEntry<>("philip", "seb"),
                new SimpleEntry<>("raj", "nader")))); // -> true
        System.out.println(tolerantTeams(List.of(
                new SimpleEntry<>("philip", "seb"),
                new SimpleEntry<>("raj", "nader"),
                new SimpleEntry<>("raj", "philip"),
                new SimpleEntry<>("seb", "raj"))

        )); // -> false
        System.out.println(tolerantTeams(List.of(
                new SimpleEntry<>("cindy", "anj"),
                new SimpleEntry<>("alex", "matt"),
                new SimpleEntry<>("alex", "cindy"),
                new SimpleEntry<>("anj", "matt"),
                new SimpleEntry<>("brando", "matt")))); // -> true
        System.out.println(tolerantTeams(List.of(
                new SimpleEntry<>("alex", "anj"),
                new SimpleEntry<>("alex", "matt"),
                new SimpleEntry<>("alex", "cindy"),
                new SimpleEntry<>("anj", "matt"),
                new SimpleEntry<>("brando", "matt")))); // -> false
        System.out.println(tolerantTeams(List.of(
                new SimpleEntry<>("alan", "jj"),
                new SimpleEntry<>("betty", "richard"),
                new SimpleEntry<>("jj", "simcha"),
                new SimpleEntry<>("richard", "christine")))); // -> true
        System.out.println(tolerantTeams(List.of(
                new SimpleEntry<>("alan", "jj"),
                new SimpleEntry<>("betty", "richard"),
                new SimpleEntry<>("jj", "simcha"),
                new SimpleEntry<>("richard", "christine")))); // -> true
        System.out.println(tolerantTeams(List.of(
                new SimpleEntry<>("alan", "jj"),
                new SimpleEntry<>("jj", "richard"),
                new SimpleEntry<>("betty", "richard"),
                new SimpleEntry<>("jj", "simcha"),
                new SimpleEntry<>("richard", "christine")))); // -> true
        System.out.println(tolerantTeams(List.of(
                new SimpleEntry<>("alan", "jj"),
                new SimpleEntry<>("betty", "richard"),
                new SimpleEntry<>("betty", "christine"),
                new SimpleEntry<>("jj", "simcha"),
                new SimpleEntry<>("richard", "christine")))); // -> false
    }
}