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
    for (let i = 0; i < dictionary.length - 1; i++) {
        if (lexicalOrder(dictionary[i], dictionary[i + 1], alphabet) === false) { return false; }
    }
    return true;
};
const lexicalOrder = (word1, word2, alphabet) => {
    let len = Math.max(word1.length, word2.length);
    for (let i = 0; i < len; i++) {
        let v1 = alphabet.indexOf(word1[i]);
        let v2 = alphabet.indexOf(word2[i]);
        if (v1 > v2) { return false; }
        else if (v2 > v1) { return true; }
    }
    return true;
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