package mixed_recall.lexical_order;
// lexical order

// Write a function, lexicalOrder, that takes in 2 words and an alphabet
//  string as an argument. The function should return true if the first word
//   should appear before the second word if lexically-ordered according to 
//   the given alphabet order. If the second word should appear first, then return false.
// https://en.wikipedia.org/wiki/Lexicographic_order
// Note that the alphabet string may be any arbitrary string.

// Intuitively, Lexical Order is like "dictionary" order:

// You can assume that all characters are lowercase a-z.

// You can assume that the alphabet contains all 26 letters.
public class lexical_order {
    public static boolean lexicalOrder(String word1, String word2, String alphabet) {

        return true;
    }

    public static void main(String[] args) {
        String alphabet = "abcdefghijklmnopqrstuvwxyz";
        System.out.println(lexicalOrder("apple", "dock", alphabet)); // -> true
        alphabet = "abcdefghijklmnopqrstuvwxyz";
        System.out.println(lexicalOrder("apple", "ample", alphabet)); // -> false
        alphabet = "abcdefghijklmnopqrstuvwxyz";
        System.out.println(lexicalOrder("app", "application", alphabet)); // -> true
        alphabet = "abcdefghijklmnopqrstuvwxyz";
        System.out.println(lexicalOrder("backs", "backdoor", alphabet)); // -> false
        alphabet = "ghzstijbacdopnfklmeqrxyuvw";
        System.out.println(lexicalOrder("zoo", "dinner", alphabet)); // -> true
        alphabet = "ghzstijbacdopnfklmeqrxyuvw";
        System.out.println(lexicalOrder("leaper", "leap", alphabet)); // -> false
        alphabet = "ghzstijbacdopnfklmeqrxyuvw";
        System.out.println(lexicalOrder("backs", "backdoor", alphabet)); // -> true
        alphabet = "ghzstijbacdopnfklmeqrxyuvw";
        System.out.println(lexicalOrder("semper", "semper", alphabet)); // -> true
    }
}