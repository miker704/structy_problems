// paired parentheses
// Write a function, pairedParentheses, that takes in a string as an argument. 
// The function should return a boolean indicating whether or not the string has well-formed parentheses.

// You may assume the string contains only alphabetic characters, '(', or ')'.


const pairedParentheses = (str) => {

};


console.log(pairedParentheses("(david)((abby))")); // -> true
console.log(pairedParentheses("()rose(jeff")); // -> false
console.log(pairedParentheses(")(")); // -> false
console.log(pairedParentheses("()")); // -> true
console.log(pairedParentheses("(((potato())))")); // -> true
console.log(pairedParentheses("(())(water)()")); // -> true
console.log(pairedParentheses("(())(water()()")); // -> false
console.log(pairedParentheses("")); // -> true
console.log(pairedParentheses("))()")); // -> false