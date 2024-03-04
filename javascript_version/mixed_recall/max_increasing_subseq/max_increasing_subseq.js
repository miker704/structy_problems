// max increasing subseq
// Write a function, maxIncreasingSubseq, 
// that takes in a vector of numbers as an argument. The function should 
// return the length of the longest subsequence of strictly increasing numbers.

// A subsequence of a vector can be created by deleting any elements of the vector, 
// while maintaining the relative order of elements.

const maxIncreasingSubseq = (numbers) => {
    // todo
};

const _maxIncreasingSubseq = (numbers, hash, i, prev) => {
    
}


let numbers = [4, 18, 20, 10, 12, 15, 19];
console.log(maxIncreasingSubseq(numbers)); // -> 5
numbers = [12, 9, 2, 5, 4, 32, 90, 20];
console.log(maxIncreasingSubseq(numbers)); // -> 4
numbers = [42, 50, 51, 60, 55, 70, 4, 5, 70];
console.log(maxIncreasingSubseq(numbers)); // -> 5
numbers = [7, 14, 10, 12];
console.log(maxIncreasingSubseq(numbers)); // -> 3
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21];
console.log(maxIncreasingSubseq(numbers)); // -> 21
numbers = [
    1, 2, 3, 4, 5, 12, 6, 30, 7, 8, 9, 10, 11, 12, 13, 10, 18, 14, 15, 16, 17, 18, 19, 20, 21, 100,
    104,
];
console.log(maxIncreasingSubseq(numbers)); // -> 23
numbers = [
    1, 2, 300, 3, 4, 305, 5, 12, 6, 30, 7, 8, 9, 10, 10, 10, 15, 11, 12, 13, 10, 18, 14, 15, 16,
    17, 18, 19, 20, 21, 100, 101, 102, 103, 104, 105
];
console.log(maxIncreasingSubseq(numbers)); // -> 27