// quickest concat
// Write a function, quickest_concat, that takes in a string and a list of words as arguments. 
// The function should return the minimum number of words needed to build the string by concatenating words of the list.

// You may use words of the list as many times as needed.

const quickestConcat = (s, words) => {

    let result = _quickestConcat(s, words, {})
    return result === Infinity ? -1 : result;
};



const _quickestConcat = (s, words, hash) => {

    if (s in hash) { return hash[s]; }
    if (s.length === 0) { return 0; }

    let min = Infinity;
    for (let word of words) {
        if (s.startsWith(word)) {
            let cut = s.slice(word.length);
            let temp = 1 + _quickestConcat(cut, words, hash);
            min = Math.min(temp, min);
        }
    }
    hash[s] = min;
    return hash[s];
};

console.log(quickestConcat('caution', ['ca', 'ion', 'caut', 'ut'])); // -> 2
console.log(quickestConcat('caution', ['ion', 'caut', 'caution'])); // -> 1
console.log(quickestConcat('respondorreact', ['re', 'or', 'spond', 'act', 'respond'])); // -> 4
console.log(quickestConcat('simchacindy', ['sim', 'simcha', 'acindy', 'ch'])); // -> 3
console.log(quickestConcat('simchacindy', ['sim', 'simcha', 'acindy'])); // -> -1
console.log(quickestConcat('uuuuuu', ['u', 'uu', 'uuu', 'uuuu'])); // -> 2
console.log(quickestConcat('rongbetty', ['wrong', 'bet'])); // -> -1
console.log(quickestConcat('uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu', ['u', 'uu', 'uuu', 'uuuu', 'uuuuu'])); // -> 7

