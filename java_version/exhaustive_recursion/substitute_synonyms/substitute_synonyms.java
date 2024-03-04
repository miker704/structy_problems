package exhaustive_recursion.substitute_synonyms;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
// substituting synonyms
// Write a function, substitutingSynonyms, that takes in a sentence and an

//  unordered_map as arguments. The map contains words as keys whose values are vectors

//   containing synonyms. The function should return an array containing all possible sentences

//   that can be formed by substituting words of the sentence with their synonyms.

// You may return the possible sentences in any order, as long as you return all of them.
public class substitute_synonyms {

    public static List<String> substituteSynonyms(String sentence, HashMap<String, List<String>> synonyms) {
        List<String> results = new ArrayList<>();
        return results;
    }

    public static List<List<String>> _substituteSynonyms(List<String> words, HashMap<String, List<String>> synonyms) {

            return List.of(List.of());


    }

    public static void printVector(List<String> vec) {
        System.out.println(" [ ");
        for (String x : vec) {
            System.out.print(x + " , ");
        }
        System.out.println(" ] ");
    }

    public static void main(String[] args) {
        String sentence = "follow the yellow brick road";
        HashMap<String, List<String>> synonyms = new HashMap<>();
        synonyms.put("follow", new ArrayList<String>(Arrays.asList("chase", "pursue")));
        synonyms.put("yellow", new ArrayList<String>(Arrays.asList("gold", "amber", "lemon")));
        // {
        // {"follow", {"chase", "pursue"}},
        // {"yellow", {"gold", "amber", "lemon"}}
        // };

        printVector(substituteSynonyms(sentence, synonyms));
        // [
        // "chase the gold brick road",
        // "chase the amber brick road",
        // "chase the lemon brick road",
        // "pursue the gold brick road",
        // "pursue the amber brick road",
        // "pursue the lemon brick road"
        // ]
        sentence = "I think it's gonna be a long long time";
        // synonyms={{"think",{"believe","reckon"}},{"long",{"lengthy","prolonged"}}};
        synonyms.clear();
        synonyms.put("think", new ArrayList<String>(Arrays.asList("believe", "reckon")));
        synonyms.put("long", new ArrayList<String>(Arrays.asList("lengthy", "prolonged")));
        printVector(substituteSynonyms(sentence, synonyms));
        // [
        // "I believe it's gonna be a lengthy lengthy time",
        // "I believe it's gonna be a lengthy prolonged time",
        // "I believe it's gonna be a prolonged lengthy time",
        // "I believe it's gonna be a prolonged prolonged time",
        // "I reckon it's gonna be a lengthy lengthy time",
        // "I reckon it's gonna be a lengthy prolonged time",
        // "I reckon it's gonna be a prolonged lengthy time",
        // "I reckon it's gonna be a prolonged prolonged time"
        // ]
        sentence = "palms sweaty knees weak arms heavy";
        // synonyms={{"palms",{"hands","fists"}},{"heavy",{"weighty","hefty","burdensome"}},{"weak",{"fragile","feeble","frail","sickly"}}};
        synonyms.clear();
        synonyms.put("palms", new ArrayList<String>(Arrays.asList("hands", "fists")));
        synonyms.put("heavy", new ArrayList<String>(Arrays.asList("weighty", "hefty", "burdensome")));
        synonyms.put("weak", new ArrayList<String>(Arrays.asList("fragile", "feeble", "frail", "sickly")));
        printVector(substituteSynonyms(sentence, synonyms));
        // [
        // "hands sweaty knees fragile arms weighty",
        // "hands sweaty knees fragile arms hefty",
        // "hands sweaty knees fragile arms burdensome",
        // "hands sweaty knees feeble arms weighty",
        // "hands sweaty knees feeble arms hefty",
        // "hands sweaty knees feeble arms burdensome",
        // "hands sweaty knees frail arms weighty",
        // "hands sweaty knees frail arms hefty",
        // "hands sweaty knees frail arms burdensome",
        // "hands sweaty knees sickly arms weighty",
        // "hands sweaty knees sickly arms hefty",
        // "hands sweaty knees sickly arms burdensome",
        // "fists sweaty knees fragile arms weighty",
        // "fists sweaty knees fragile arms hefty",
        // "fists sweaty knees fragile arms burdensome",
        // "fists sweaty knees feeble arms weighty",
        // "fists sweaty knees feeble arms hefty",
        // "fists sweaty knees feeble arms burdensome",
        // "fists sweaty knees frail arms weighty",
        // "fists sweaty knees frail arms hefty",
        // "fists sweaty knees frail arms burdensome",
        // "fists sweaty knees sickly arms weighty",
        // "fists sweaty knees sickly arms hefty",
        // "fists sweaty knees sickly arms burdensome"
        // ]
    }
}