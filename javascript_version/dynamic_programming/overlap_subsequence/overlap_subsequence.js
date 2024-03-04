// overlap subsequence
// Write a function, overlapSubsequence, that takes in two strings as arguments.
//  The function should return the length of the longest overlapping subsequence.

// A subsequence of a string can be created by deleting any characters of the string,
//  while maintaining the relative order of characters.

const overlapSubsequence = (str1, str2) => {
    // todo

};


const _overlapSubsequence = (str1, str2, i = 0, j = str1.length - 1, k = 0, l = str2.length - 1, hash = {}) => {



}



console.log(overlapSubsequence("dogs", "daogt")); // -> 3
console.log(overlapSubsequence("xcyats", "criaotsi")); // -> 4
console.log(overlapSubsequence("xfeqortsver", "feeeuavoeqr")); // -> 5
console.log(overlapSubsequence("kinfolklivemustache", "bespokekinfolksnackwave")); // -> 11
console.log(overlapSubsequence(
    "mumblecorebeardleggingsauthenticunicorn",
    "succulentspughumblemeditationlocavore"
)); // -> 15