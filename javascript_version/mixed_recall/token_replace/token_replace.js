// token replace
// Write a function, tokenReplace, that takes in an unordered_map of tokens
//  and a string. The function should return a new string where tokens are replaced.

// Tokens are enclosed in a pair of "$". You can assume that the input string 
// is properly formatted. Tokens should be replaced from left to right in the string (see test_05)

// two pointers method iterative  time and spacce both O(n)
const tokenReplace = (s, tokens) => {
    // todo
    if (s.length === 0) { return s; }
    let i = 0;
    let j = 1;
    let output = "";
    while (i < s.length) {
        if (s[i] !== "$") {
            output += s[i];
            i++;
            j = i + 1;
        }
        else if (s[j] !== "$") {
            j++;
        }
        else {
            let key = s.slice(i, j + 1);
            output += tokens[key];
            i = j + 1;
            j = i + 1;
        }
    }
    return output;

};



let tokens = {
    '$LOCATION$': 'park',
    '$ANIMAL$': 'dog',
};
console.log(tokenReplace('Walk the $ANIMAL$ in the $LOCATION$!', tokens));
// -> 'Walk the dog in the park!'
tokens = {
    '$ADJECTIVE$': 'quick',
    '$VERB$': 'hopped',
    '$DIRECTION$': 'North'
};
console.log(tokenReplace('the $ADJECTIVE$ fox $VERB$ $ADJECTIVE$ly $DIRECTION$ward', tokens));
// -> 'the quick fox hopped quickly Northward'
tokens = {
    '$greeting$': 'hey programmer',
};
console.log(tokenReplace('his greeting is always $greeting$.', tokens));
// -> 'his greeting is always hey programmer.'
tokens = {
    '$A$': 'lions',
    '$B$': 'tigers',
    '$C$': 'bears',
};
console.log(tokenReplace('$A$$B$$C$, oh my.', tokens));
// -> 'lionstigersbears, oh my.'
tokens = {
    '$A$': 'lions',
    '$B$': 'tigers',
    '$C$': 'bears',
};
console.log(tokenReplace('$B$', tokens));
// -> 'tigers'
tokens = {
    '$second$': 'beta',
    '$first$': 'alpha',
    '$third$': 'gamma',
};
console.log(tokenReplace('$first$second$third$', tokens));
// -> 'alphasecondgamma'