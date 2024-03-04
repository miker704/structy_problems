// summing squares
// Write a function, summingSquares, that takes a target number as 
// an argument. The function should return the minimum number of perfect squares 
// that sum to the target. A perfect square is a number of the form (i*i) where i >= 1.

// For example: 1, 4, 9, 16 are perfect squares, but 8 is not perfect square.


// Given 12:

// summingSquares(12) -> 3

// The minimum squares required for 12 is three, by doing 4 + 4 + 4.

// Another way to make 12 is 9 + 1 + 1 + 1, but that requires four perfect squares.

// const summingSquares = (n) => {
//     let square = 1;
//     for (let i = 1; i <= n; i++) {
//         if (i * i === n) {
//             return i;
//         }
//     }
//     return square = -1;
// }

// as we decrease n - 1 -> ownward we need to check each number if it is a perfect square 
// by running i*i === n  if true then add that number to the hash



// const summingSquares = (n, hash = {},hash1={}) => {
//     if (n === 0) {
//         return 0;
//     }

//     if (Math.sqrt(n) - Math.floor(Math.sqrt(n)) === 0) {
//         console.log(`n = ${n} is a sqaure`);
//         return 1;
//     }
//     let max = 0;
//     for (let i = n-1; i >=1; i--) {
//         let sub = summingSquares(i, hash,hash1);
//         console.log(`sub = ${sub}`)

//         if (i * i == n ) {
//             console.log(`${i}*${i} = ${n}`)
//             max += sub;
//             hash1[i]=i*i;
//         }

//         if(sub === 1){
//             console.log(`sub = ${sub} so i=${i}*${i} = ${n}`);
//         }



//         console.log(`sub = ${sub}`)
//         // console.log(`hash = ${hash}`)
//         console.log(`hash1 = ${hash1}`)
//         console.log(`max ${max}`)
//     }

//     return max;
// }\



// const summingSquares = (n, hash = {}, hash1 = {}) => {

//     if (n in hash) {
//         return hash[n];
//     }

//     if (n === 0) {
//         return 0;
//     }

//     if (Math.sqrt(n) - Math.floor(Math.sqrt(n)) === 0) {
//         // console.log(`n = ${n} is a sqaure`);
//         return 1;
//     }
//     let max = Infinity;
//     for (let i = 1; i <= Math.sqrt(n); i++) {
//         // console.log(`n = ${n} - i = ${i} = ${n - i}`);
//         // console.log(`i*i = ${i}*${i} = ${i*i}, n= ${n} nSQRT = ${Math.sqrt(n)}`);
//         let res = summingSquares(n-(i*i),hash,hash1);
//         if(res+1 < max){
//             max = res + 1
//         }
//         // if(sub === 1){
//         // if (sub!== Infinity && sub + 1 < max) {

//         //     console.log(`sub = ${sub} so i=${i}*${i} = ${n}`);
//         //     max = sub +1 ;
//         //     hash1[i] = i * i;

//         // }



//         // console.log(`sub = ${sub}`)
//         // console.log(`hash = ${hash}`)
//         // console.log(`hash1 = ${hash1}`)
//         // console.log(`max ${max}`)
//     }

//     return max;
// }

// const summingSquares = (n, hash = {}) => {
//     if (n in hash) { return hash[n]; }
//     if (n === 0) {
//         // console.log(`n = ${n} is a sqaure`);
//         return 0;
//     }
//     let max = Infinity;
//     for (let i = 1; i <= Math.sqrt(n); i++) {
//         // console.log(`i*i = ${i}*${i} = ${i*i}, n= ${n} nSQRT = ${Math.sqrt(n)}`);
//         let squareOfNumber = i * i;
//         let subProblem = 1 + summingSquares(n - squareOfNumber,hash);
//         if (subProblem < max) {
//             max = subProblem;
//             // hash[n] = max;
//         }
//         // hash[n] = max;
//         // console.log(`subproblem = ${subProblem}, max = ${max}`);
//     }
//     // console.log(`hash = ${hash}`);
//     hash[n] = max;

//     return max;
// }

// normal recursion brute force method time complexity is O(sqrt(n)^n) space O(n)
// const summingSquares = (n) => {
//     if (n === 0) {
//         return 0;
//     }
//     let max = Infinity;
//     for (let i = 1; i <= Math.sqrt(n); i++) {
//         let squareOfNumber = i * i;
//         let subProblem = 1 + summingSquares(n - squareOfNumber);
//         if (subProblem < max) {
//             max = subProblem;
//         }
//     }

//     return max;
// }


// optimized recursion with memoization method time complexity is O(sqrt(n)*n) space O(n)

const summingSquares = (n, hash = {}) => {

}

console.log(summingSquares(8)); // -> 2
console.log(summingSquares(9)); // -> 1
console.log(summingSquares(12)); // -> 3
console.log(summingSquares(1)); // -> 1
console.log(summingSquares(31)); // -> 4
console.log(summingSquares(50)); // -> 2
console.log(summingSquares(68)); // -> 2
console.log(summingSquares(87)); // -> 4
