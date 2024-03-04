// anagrams
// Write a function, anagrams, that takes in two strings as arguments. The function should return
//  a boolean indicating whether or not the strings are anagrams. Anagrams are strings that 
// contain the same characters, but in any order.
const anagrams = (s1, s2) => {
    // todo
    if (s1.length !== s2.length) {
        return false;
    }
    let obj1 = objectIt(s1);
    let obj2 = objectIt(s2);
    for (let i in obj1) {
        if (obj1[i] !== obj2[i]) {
            return false;
        }
    }

    return true;
};



const objectIt = (s) => {
    let object = new Object();
    for (let i = 0; i < s.length; i++) {
        if (s[i] in object) {
            object[s[i]] += 1;
        }
        else {
            object[s[i]] = 1;
        }
    }
    return object;
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