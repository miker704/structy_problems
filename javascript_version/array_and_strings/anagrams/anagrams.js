// anagrams
// Write a function, anagrams, that takes in two strings as arguments. The function should return
//  a boolean indicating whether or not the strings are anagrams. Anagrams are strings that 
// contain the same characters, but in any order.
const anagrams = (s1, s2) => {
    // todo

};



const objectIt = (s1) => {

}



console.log(anagrams('restful', 'fluster')); // -> True
console.log(anagrams('cats', 'tocs')); // -> False
console.log(anagrams('monkeyswrite', 'newyorktimes')); // -> True
console.log(anagrams('paper', 'reapa')); // -> False
console.log(anagrams('elbow', 'below')); // -> True
console.log(anagrams('tax', 'taxi')); // -> False
console.log(anagrams('taxi', 'tax')); // -> False
console.log(anagrams('night', 'thing')); // -> True
console.log(anagrams('abbc', 'aabc')); // -> False
console.log(anagrams('po', 'popp')); // -> false
console.log(anagrams('pp', 'oo')); // -> false