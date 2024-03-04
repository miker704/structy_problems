// counting change
// Write a function, countingChange, that takes in an amount and an array of coins. 
// The function should return the number of different ways it is possible to make change 
// for the given amount using the coins.

// You may reuse a coin as many times as necessary.

// For example,

// countingChange(4, [1,2,3]) -> 4

// There are four different ways to make an amount of 4:

// 1. 1 + 1 + 1 + 1
// 2. 1 + 1 + 2
// 3. 1 + 3
// 4. 2 + 2


//game plan 

/**
 * if aoc is === 0 return 0
 * apply a recursion method 
 * 
 * while recursion cycle is doing  (amount - 1 , coins)
 * if(aoc === 0) return 1  reached zero has made some chnage amount return 1 to indicate yes change has been made
 * if aoc < 0 return 0/-1 to indicate that the following method cannot be used to make change
 * 
 * use the min  change method of  currentAmount >= coins[i] to reduce call numbers on subtracting remaining change by a coin 
 * that would result in a negative amount
 * 
 * normal recusion time complexity is O(2^n) exponential where branch^depth
 * where branch is the number of elements in the coins array and depth is the amount to achieve 
 * O(coinslength ^amountofChange)
 * space complexity is O(coinslength *amountofChange) where n is the amountOfChange #`s deep in the stack tree
 * 
 * optimized method using recusion and memoization will
 * be time complexity of O(amount*coins.length)
 * and space complexity is O(coinslength *amountofChange)
 * 
 */


// const countingChange = (amountOfChange, coins) => {
//     if (amountOfChange === 0) {

//         console.log(`amount = ${amountOfChange} returning 1`);
//         return 1;
//     }
//     // if (amountOfChange < 0) { return 0; }
//     let vaildMethods = 0;

//     for (let coin of coins) {

//         if (amountOfChange >= coin) {
//             console.log(`amount = ${amountOfChange}   coin = ${coin}`);

//             let sub = countingChange(amountOfChange - coin, coins);
//             // if (sub >= 1) {
//             // if (sub >= 1) {

//             vaildMethods += sub;
//             // }

//         }
//     }

//     return vaildMethods;
// }


// const countingChangeRecur = (amount, coins, n = coins.length) => {
//     if (amount === 0) { return 1; }
//     if (amount < 0) { return 0; }
//     if (n === 0) { return 0; }


//     console.log(`cCR(amount = ${amount}, n-1 = ${n-1}) + cCR(amount - coins[${n-1}] = ${amount,coins[n-1]}, n = ${n})`)
//     return countingChangeRecur(amount, coins, n - 1) + countingChangeRecur(amount - coins[n - 1], coins, n);

// }


// const countingChangeRecur = (amount, coins, n=0) => {
//     if(amount === 0){return 1;}
//     if(amount <= 0 ){return 0;}
//     let array = new Array(amount+1).fill(0);

//     for(let i = 0; i< coins.length; i++){

//         let sub = countingChangeRecur(amount-coins[i],coins,n);
//     }
// }


// const countingChange = (amount, coins) => {

//     //create array table 
//     // let arrayTable = new Array(amount + 1);
//     // for (let i = 0; i < amount + 1; i++) {
//     //     arrayTable[i] = new Array(coins.length).fill(0);
//     // }
//     // for (let i = 0; i < coins.length; i++) {
//     //     arrayTable[0][i] = 1;
//     // }
//     // var A = Array(12).fill(null).map(()=>Array(12).fill('q'))
//     // console.log(A);
//     // console.table(A);

//     let arrayTable = Array.from(Array(amount + 1), () => new Array(coins.length).fill(0));
//     arrayTable[0] = arrayTable[0].map((sub, idx) => { return arrayTable[0][idx] = 1; });
//     console.table(arrayTable);
//     // console.log(arrayTable);

//     let x = 0;
//     let y = 0;
//     for (let i = 1; i < amount + 1; i++) {
//         console.log(`arrayTable[${i}]= ${arrayTable[i]}`);
//         for (let j = 0; j < arrayTable[i].length; j++) {
//             console.log(`arrayTable[${i}][${j}]= ${arrayTable[i][j]}`);
//             x = 
//         }
//     }

// }

const countingChange = (amount, coins, idx = 0,hash ={}) => {


    

}






// const countingChange = (amount, coins, idx = 0, hash = {}) => {

//     let pair = `${amount},${idx}`;
//     if (pair in hash) { return hash[pair]; }

//     if (amount === 0) {
//         return 1;
//     }
//     if (idx === coins.length) {
//         return 0;
//     }
//     let coin = coins[idx];
//     let count = 0;

//     for (let qty = 0; (qty * coin) <= amount; qty++) {
//         let remainder = amount - (coin * qty);
//         count += countingChange(remainder, coins, idx + 1, hash);
//     }
//     hash[pair] = count;
//     return count;
// }




console.log(countingChange(4, [1, 2, 3])); // -> 4
// console.log(countingChangeRecur(4, [1, 2, 3])); // -> 4
// console.log(countingChangeRecur(1000, [1, 5, 10, 25])); // -> 4
// console.log(countingChangeRecur(240, [1, 2, 3, 4, 5, 6, 7, 8, 9])); // -> 4
// console.log(countingChangeRecur(8, [1, 2, 3])); // -> 10

console.log(countingChange(8, [1, 2, 3])); // -> 10
console.log(countingChange(24, [5, 7, 3])); // -> 5
console.log(countingChange(13, [2, 6, 12, 10])); // -> 0
console.log(countingChange(512, [1, 5, 10, 25])); // -> 20119
console.log(countingChange(1000, [1, 5, 10, 25])); // -> 142511
console.log(countingChange(240, [1, 2, 3, 4, 5, 6, 7, 8, 9])); // -> 1525987916