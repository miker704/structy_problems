// sum possible
// Write a function sumPossible that takes in an amount
//  and a list of positive numbers. The function should return a boolean 
//  indicating whether or not it is possible to create the amount by summing
//   numbers of the list. You may reuse numbers of the list as many times as necessary.

// You may assume that the target amount is non-negative.



//brute force running at O(n^2) exponential time 
//more specifically O(n^a) where n is the array length and a is the amount 
// branch ^ depth upon reaching a certain amount of 'a' as input the depth of 
// calls on the stack become extremely massive in addition to the length of the input array itself
//  causes the calculation to take minutes 
// at a time to complete reaching slower than calulating fibonacci of 46 using brute force method
// combinations for an array of 2 elements for an amount of 100 can generate nonillion combinations 




// const sumPossible = (amount, numbers) => {

//     if (amount === 0) {
//         return true;
//     }
//     if (amount < 0) { return false; }


//     for (let i of numbers) {
//         if (sumPossible(amount - i, numbers) === true) {
//             return true;
//         }
//     }
//     return false;

// }

//optimized method running at
// const sumPossible = (amount, numbers, hash = {}) => {
//     if (amount in hash) { 
//         console.log("inside amount in hash");
//             console.log(`${amount}`);
//             console.table(hash);
//         return hash[amount]; 
//     }
//     if (amount === 0) { return true; }
//     if (amount < 0) { return false; }
//     for (let i of numbers) {
//         if (sumPossible(amount - i, numbers, hash)) {
//             hash[amount] = true;
//             console.log("inside condition");

//             console.log(`${amount}-${i} = ${amount - i}`);
//             console.table(hash);
//             return true;
//         }
//         console.log("outside condition");

//         console.log(`${amount}-${i} = ${amount - i}`);
//         console.table(hash);
//     }
//     hash[amount] = false;
//     console.log("outside loop");
//     console.log(`${amount}`);
//     console.table(hash);
//     return false;
// }

// # optimized version cuts of majority of the exponential growth of calls
// # O(a*n) where 'a' represents the amount to reach and 'n' is the length
// # meaning the 'a' is the depth and 'n' is the branches 
// # but this time each level can only have a*n # of nodes max

const sumPossible = (amount, array, hash = {}) => {
    if (amount in hash) { return hash[amount]; }
    if (amount === 0) { return true; }
    if (amount < 0) { return false; }
    for (let num of array) {
        if (sumPossible(amount - num, array, hash)) {
            hash[amount] = true;
            return true;
        }
    }
    hash[amount] = false;
    return hash[amount];
}




console.table(sumPossible(8, [5, 12, 4])); //true
console.log(sumPossible(15, [6, 2, 10, 19])); //false
console.log(sumPossible(13, [6, 2, 1])); //true
console.log(sumPossible(103, [6, 20, 1])); //true
console.log(sumPossible(12, []));  //false
console.log(sumPossible(12, [12]));    //true
console.log(sumPossible(0, []));   //true
console.log(sumPossible(271, [10, 8, 265, 24])); //false
console.log(sumPossible(2017, [4, 2, 10])); //false
console.log(sumPossible(13, [3, 5])); //true

