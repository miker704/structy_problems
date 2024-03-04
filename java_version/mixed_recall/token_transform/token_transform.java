package mixed_recall.token_transform;

import java.util.Map;

// token transform
// Write a function, tokenTransform, that takes in an 
// object of tokens and a string. In the object, the replacement values 
// for a token may reference other tokens. The function should return a new 
// string where tokens are replaced with their fully evaluated string values.

// Tokens are enclosed in a pair of '$'.

// You may assume that there are no circular token dependencies.
//two pointers and recursion with indirect dynamic programming
public class token_transform {

    public static String tokenTransform(String str, Map<String, String> tokens) {
        return "";
    }

    public static void main(String[] args) {
        Map<String, String> tokens = Map.of(
                "$LOCATION$", "$ANIMAL$ park",
                "$ANIMAL$", "dog");
        System.out.println(tokenTransform("Walk the $ANIMAL$ in the $LOCATION$!", tokens));
        // -> 'Walk the dog in the dog park!'
        tokens.clear();
        tokens = Map.of(
                "$ADJECTIVE_1$", "quick",
                "$ADJECTIVE_2$", "eager",
                "$ADVERBS$", "$ADJECTIVE_1$ly and $ADJECTIVE_2$ly",
                "$VERB$", "hopped $DIRECTION$",
                "$DIRECTION$", "North");
        System.out.println(tokenTransform("the $ADJECTIVE_1$ fox $ADVERBS$ $VERB$ward", tokens));
        // -> 'the quick fox quickly and eagerly hopped Northward'
        tokens.clear();

        tokens = Map.of(
                "$B$", "epicly $C$",
                "$A$", "pretty $B$ problem $D$",
                "$D$", "we have",
                "$C$", "clever");
        System.out.println(tokenTransform("What a $A$ here!", tokens));
        // -> 'What a pretty epicly clever problem we have here!'
        tokens.clear();

        tokens = Map.of(
                "$1$", "a$2$",
                "$2$", "b$3$",
                "$3$", "c$4$",
                "$4$", "d$5$",
                "$5$", "e$6$",
                "$6$", "f!");
        System.out.println(tokenTransform("$1$ $1$ $1$ $1$ $1$ $1$ $4$ $4$", tokens));
        // -> 'abcdef! abcdef! abcdef! abcdef! abcdef! abcdef! def! def!'
        tokens.clear();

        tokens = Map.of(
                "$0$", "$1$$1$$1$$1$$1$$1$$1$$1$$1$$1$$1$$1$",
                "$1$", "$2$$2$$2$$2$$2$$2$$2$$2$$2$",
                "$2$", "$3$$3$$3$$3$$3$$3$$3$",
                "$3$", "$4$$4$$4$$4$$4$$4$",
                "$4$", "$5$$5$$5$$5$$5$",
                "$5$", "$6$$6$$6$$6$",
                "$6$", "$7$$7$$7$",
                "$7$", "$8$$8$",
                "$8$", "");
        System.out.println(tokenTransform("z$0$z$0$z$0$z$0$z$0$z$0$z", tokens));
        // -> 'zzzzzzz'
    }
}