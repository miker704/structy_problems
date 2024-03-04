// detect dictionary
// Write a function, detectDictionary, that takes in a dictionary of words
//  and an alphabet string. The function should return a boolean indicating 
//  whether or not all words of the dictionary are lexically-ordered 
//  according to the alphabet.
// https://en.wikipedia.org/wiki/Lexicographic_order
// You can assume that all characters are lowercase a-z.

// You can assume that the alphabet contains all 26 letters.


const detectDictionary = (dictionary, alphabet) => {
    // todo

};
const lexicalOrder = (word1, word2, alphabet) => {

}




let dictionary = ["zoo", "tick", "tack", "door"];
let alphabet = "ghzstijbacdopnfklmeqrxyuvw";
console.log(detectDictionary(dictionary, alphabet)); // -> true
dictionary = ["zoo", "tack", "tick", "door"];
alphabet = "ghzstijbacdopnfklmeqrxyuvw";
console.log(detectDictionary(dictionary, alphabet)); // -> false
dictionary = ["zoos", "zoo", "tick", "tack", "door"];
alphabet = "ghzstijbacdopnfklmeqrxyuvw";
console.log(detectDictionary(dictionary, alphabet)); // -> false
dictionary = ["miles", "milestone", "proper", "process", "goal"];
alphabet = "mnoijpqrshkltabcdefguvwzxy";
console.log(detectDictionary(dictionary, alphabet)); // -> true
dictionary = ["miles", "milestone", "pint", "proper", "process", "goal"];
alphabet = "mnoijpqrshkltabcdefguvwzxy";
console.log(detectDictionary(dictionary, alphabet)); // -> true
dictionary = ["miles", "milestone", "pint", "proper", "process", "goal", "apple"];
alphabet = "mnoijpqrshkltabcdefguvwzxy";
console.log(detectDictionary(dictionary, alphabet)); // -> false