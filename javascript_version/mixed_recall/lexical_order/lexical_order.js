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

// const lexicalOrder = (word1, word2, alphabet) => {
//     // todo
//     //base case 1 if the first letter of word1 appears much 
//     //later in the alphabet than the1 1st letter in word2 
//     //return false
//     // if(word1.length -1 === 0){

//     // }
//     if(word1.length === 0 && word2.length !== 0){
//         return true;
//     }

//     if(alphabet.indexOf(word1[0])>alphabet.indexOf(word2[0])){
//         //[z] oo [d] inner
//         return false;
//     }

//     if(word1[0] === word2[0]){
//       return   lexicalOrder(word1.slice(1),word2.slice(0),alphabet);
//     }

//     return true;
// };
const lexicalOrder = (word1, word2, alphabet) => {

    let len = Math.max(word1.length, word2.length);

    for (let i = 0; i < len; i++) {
            let v1 = alphabet.indexOf(word1[i]);
            let v2 = alphabet.indexOf(word2[i]);
            if(v1 > v2){return false;}
            else if(v2 > v1){return true;}
    }

    return true;
};




let alphabet = "abcdefghijklmnopqrstuvwxyz";
console.log(lexicalOrder("apple", "dock", alphabet)); // -> true
alphabet = "abcdefghijklmnopqrstuvwxyz";
console.log(lexicalOrder("apple", "ample", alphabet)); // -> false
alphabet = "abcdefghijklmnopqrstuvwxyz";
console.log(lexicalOrder("app", "application", alphabet)); // -> true
alphabet = "abcdefghijklmnopqrstuvwxyz";
console.log(lexicalOrder("backs", "backdoor", alphabet)); // -> false
alphabet = "ghzstijbacdopnfklmeqrxyuvw";
console.log(lexicalOrder("zoo", "dinner", alphabet)); // -> true
alphabet = "ghzstijbacdopnfklmeqrxyuvw";
console.log(lexicalOrder("leaper", "leap", alphabet)); // -> false
alphabet = "ghzstijbacdopnfklmeqrxyuvw";
console.log(lexicalOrder("backs", "backdoor", alphabet)); // -> true
alphabet = "ghzstijbacdopnfklmeqrxyuvw";
console.log(lexicalOrder("semper", "semper", alphabet)); // -> true