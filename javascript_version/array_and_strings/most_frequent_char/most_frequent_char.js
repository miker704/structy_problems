// most frequent char
// Write a function, mostFrequentChar, that takes in a string as an argument. 
// The function should return the most frequent character of the string. 
// If there are ties, return the character that appears earlier in the string.

// You can assume that the input string is non-empty.

const mostFrequentChar = (s) => {
    let hash = new Object();
    for (char of s) {
        hash[char] = (hash[char] || 0) + 1;
    }
    if (Object.values(hash).length === 0) { return null; }
    return Object.keys(hash).reduce((a, b) => hash[a] >= hash[b] ? a : b);
};




console.log(mostFrequentChar('bookeeper')); // -> 'e'
console.log(mostFrequentChar('david')); // -> 'd'
console.log(mostFrequentChar('abby')); // -> 'b'
console.log(mostFrequentChar('mississippi')); // -> 'i'
console.log(mostFrequentChar('potato')); // -> 'o'
console.log(mostFrequentChar('eleventennine')); // -> 'e'
console.log(mostFrequentChar("riverbed")); // -> 'r'