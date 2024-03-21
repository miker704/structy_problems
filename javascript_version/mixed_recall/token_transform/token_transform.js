// token transform
// Write a function, tokenTransform, that takes in an 
// object of tokens and a string. In the object, the replacement values 
// for a token may reference other tokens. The function should return a new 
// string where tokens are replaced with their fully evaluated string values.

// Tokens are enclosed in a pair of '$'.

// You may assume that there are no circular token dependencies.
//two pointers and recursion with indirect dynamic programming
const tokenTransform = (s, tokens) => {

    let output = "";
    let i = 0;
    let j = 1;
    while (i < s.length) {
        if (s[i] !== "$") { output += s[i]; i++; j = i + 1; }
        else if (s[j] !== "$") { j++; }
        else {
            let key = s.slice(i, j + 1);
            let value = tokens[key];
            let evaluatedValue = tokenTransform(value, tokens);
            tokens[key] = evaluatedValue;
            output += evaluatedValue;
            i = j + 1;
            j = i + 1;
        }
    }
    return output;
};


let tokens = {
    '$LOCATION$': '$ANIMAL$ park',
    '$ANIMAL$': 'dog',
};
console.log(tokenTransform('Walk the $ANIMAL$ in the $LOCATION$!', tokens));
// -> 'Walk the dog in the dog park!'
tokens = {
    '$ADJECTIVE_1$': "quick",
    '$ADJECTIVE_2$': "eager",
    '$ADVERBS$': "$ADJECTIVE_1$ly and $ADJECTIVE_2$ly",
    '$VERB$': "hopped $DIRECTION$",
    '$DIRECTION$': "North",
};
console.log(tokenTransform("the $ADJECTIVE_1$ fox $ADVERBS$ $VERB$ward", tokens));
// -> 'the quick fox quickly and eagerly hopped Northward'
tokens = {
    '$B$': "epicly $C$",
    '$A$': "pretty $B$ problem $D$",
    '$D$': "we have",
    '$C$': "clever",
};
console.log(tokenTransform("What a $A$ here!", tokens));
// -> 'What a pretty epicly clever problem we have here!'
tokens = {
    '$1$': "a$2$",
    '$2$': "b$3$",
    '$3$': "c$4$",
    '$4$': "d$5$",
    '$5$': "e$6$",
    '$6$': "f!",
};
console.log(tokenTransform("$1$ $1$ $1$ $1$ $1$ $1$ $4$ $4$", tokens));
// -> 'abcdef! abcdef! abcdef! abcdef! abcdef! abcdef! def! def!'
tokens = {
    '$0$': "$1$$1$$1$$1$$1$$1$$1$$1$$1$$1$$1$$1$",
    '$1$': "$2$$2$$2$$2$$2$$2$$2$$2$$2$",
    '$2$': "$3$$3$$3$$3$$3$$3$$3$",
    '$3$': "$4$$4$$4$$4$$4$$4$",
    '$4$': "$5$$5$$5$$5$$5$",
    '$5$': "$6$$6$$6$$6$",
    '$6$': "$7$$7$$7$",
    '$7$': "$8$$8$",
    '$8$': "",
};
console.log(tokenTransform("z$0$z$0$z$0$z$0$z$0$z$0$z", tokens));
// -> 'zzzzzzz'