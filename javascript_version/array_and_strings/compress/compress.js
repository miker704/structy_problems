// compress
// Write a function, compress, that takes in a string as an argument. The function should return a compressed version
//  of the string where consecutive occurrences of the same characters are compressed into the number of occurrences followed by the
//   character. Single character occurrences should not be changed.

// 'aaa' compresses to '3a'
// 'cc' compresses to '2c'
// 't' should remain as 't'
// You can assume that the input only contains alphabetic characters.
const compress = (s) => {

    let i = 0;
    let j = 0;
    let result = "";
    while (j <= s.length) {

        if (s[i] === s[j]) { j++; }
        else if (s[i] !== s[j]) {
            let cut = s.slice(i, j).length === 1 ? s[i] : String(s.slice(i, j).length) + s[i];
            result+=cut;
            i=j;
        }

    }

    return result;
};


console.log(compress('ccaaatsss')); // -> '2c3at3s'
console.log(compress('ssssbbz')); // -> '4s2bz'
console.log(compress('ppoppppp')); // -> '2po5p'
console.log(compress('nnneeeeeeeeeeeezz')); // -> '3n12e2z'
console.log(compress('yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy'));
// -> '127y'



