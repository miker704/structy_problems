package stack.befitting_brackets;

// befitting brackets
// Write a function, befittingBrackets, that takes in a string as an argument. 
// The function should return a boolean indicating whether or not the string 
// contains correctly matched brackets.

// You may assume the string contains only characters: ( ) [ ] { }

import java.util.HashMap;
import java.util.Map;
import java.util.Stack;

public class befitting_brackets {

    public static boolean befittingBrackets(String str) {

        Stack<Character> stack = new Stack<>();
    
        return stack.isEmpty();
    }

    public static void main(String[] args) {

        System.out.println(befittingBrackets("(){}[](())")); // -> 1 (true)
        System.out.println(befittingBrackets("({[]})")); // -> 1 (true)
        System.out.println(befittingBrackets("[][}")); // -> 0 (false)
        System.out.println(befittingBrackets("{[]}({}")); // -> 0 (false)
        System.out.println(befittingBrackets("[]{}(}[]")); // -> 0 (false)
        System.out.println(befittingBrackets("[]{}()[]")); // -> 1 (true)
        System.out.println(befittingBrackets("]{}")); // -> 0 (false)
        System.out.println(befittingBrackets("")); // -> 1 (true)
        System.out.println(befittingBrackets("{[(}])")); // -> 0 (false)

    }
}