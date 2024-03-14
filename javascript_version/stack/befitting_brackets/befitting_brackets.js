

// befitting brackets
// Write a function, befittingBrackets, that takes in a string as an argument. 
// The function should return a boolean indicating whether or not the string 
// contains correctly matched brackets.

// You may assume the string contains only characters: ( ) [ ] { }




const befittingBrackets = (str) => {
    if (str.length === 0) { return true; }
    let bracketPairing = {
        '(': ')',
        '{': '}',
        '[': ']',
    }
    let stack = [];
    for (let s of str) {
        if (s in bracketPairing) {
            stack.unshift(bracketPairing[s]);
        }
        else if (stack.length> 0 && stack[0] === s) {
            stack.shift();
        }
        else{
            return false;
        }
    }
    return stack.length === 0 ? true : false;
};


console.log(befittingBrackets('(){}[](())')); // -> true
console.log(befittingBrackets('({[]})')); // -> true
console.log(befittingBrackets('[][}')); // -> false
console.log(befittingBrackets('{[]}({}')); // -> false
console.log(befittingBrackets('[]{}(}[]')); // -> false
console.log(befittingBrackets('[]{}()[]')); // -> true
console.log(befittingBrackets(']{}')); // -> false
console.log(befittingBrackets('')); // -> true
console.log(befittingBrackets('{[(}])')); // -> false