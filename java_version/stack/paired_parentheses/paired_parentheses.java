package stack.paired_parentheses;

// paired parentheses
// Write a function, pairedParentheses, that takes in a string as an argument. 
// The function should return a boolean indicating whether or not the string has well-formed parentheses.


// You may assume the string contains only alphabetic characters, '(', or ')'.
public class paired_parentheses {

    public static boolean pairedParentheses(String str) {

        int top = -1;



        return top == -1 ? true : false;
    }


    public static void main(String[] args) {
        System.out.println(pairedParentheses("(david)((abby))")); // -> 1 (true)
        System.out.println(pairedParentheses("()rose(jeff")); // -> 0 (false)
        System.out.println(pairedParentheses(")(")); // -> 0 (false)
        System.out.println(pairedParentheses("()")); // -> 1 (true)
        System.out.println(pairedParentheses("(((potato())))")); // -> 1 (true)
        System.out.println(pairedParentheses("(())(water)()")); // -> 1 (true)
        System.out.println(pairedParentheses("(())(water()()")); // -> 0 (false)
        System.out.println(pairedParentheses("")); // -> 1 (true)
        System.out.println(pairedParentheses("))()")); // -> 0 (false)

    }
}