// uncompress
// Write a function, uncompress, that takes in a string as an argument. The input string 
// will be formatted into multiple groups according to the following pattern:

// <number><char>

// for example, '2c' or '3a'.
// The function should return an uncompressed version of the string where each 'char' of a group is repeated 'number' times consecutively. 
// You may assume that the input string is well-formed according to the previously mentioned pattern.


//more optimized

const uncompress = (s) => {

    let i = 0;
    let j = 0;
    let numbers = "0123456789";
    let result = "";
    while (j <= s.length) {
        if (numbers.includes(s[j])) {
            j++;
        }
        else {
            let cut = parseInt(s.slice(i, j));
            for (let x = 0; x < cut; x++) {
                result += s[j];
            }
            j++;
            i = j;
        }

    }
    return result;
};

console.log(uncompress("2c3a1t")); // -> 'ccaaat'
console.log(uncompress("4s2b")); // -> 'ssssbb'
console.log(uncompress("2p1o5p")); // -> 'ppoppppp'
console.log(uncompress("3n12e2z")); // -> 'nnneeeeeeeeeeeezz'
console.log(uncompress("127y")); // ->'yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy'