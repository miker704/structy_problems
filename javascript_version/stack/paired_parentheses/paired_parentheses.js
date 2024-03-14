// paired parentheses
// Write a function, pairedParentheses, that takes in a string as an argument. 
// The function should return a boolean indicating whether or not the string has well-formed parentheses.

// You may assume the string contains only alphabetic characters, '(', or ')'.


const pairedParentheses = (str) => {
    if (str.length === 0) { return true; }
    let top = -1;
    for (let s of str) {
        if (s === '(') { top++; }
        if (s === ')') {
            if (top === -1) { return false; }
            else { top--; }
        }
    }
    return top === -1 ? true : false;
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