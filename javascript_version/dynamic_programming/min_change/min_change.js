/**

min change
Write a function minChange that takes in an amount and a vector of coins. 
The function should return the minimum number of coins required to create 
the amount. You may use each coin as many times as necessary.
If it is not possible to create the amount, then return -1.

+* 
*/


const minChange1 = (amount, coins) => {
    if (amount === 0) {
        console.log("returning amount of 0 === 0: ");
        return 0;
    }
    let min_change = Number.MAX_SAFE_INTEGER;
    for (let i = 0; i < coins.length; i++) {
        if (coins[i] <= amount) {
            let sub = minChange1(amount - coins[i], coins);
            console.log("outter condtion sub :", sub)
            console.log(`${amount} - ${coins[i]}`)

            if (sub !== Number.MAX_SAFE_INTEGER && sub + 1 < min_change) {
                console.log("2nd inner condtions")
                console.log("min_change: ", min_change);
                console.log("sub :", sub)
                min_change = sub + 1;
            }
            console.log("2st outerr condtions")
            console.log("sub :", sub)
            console.log("min_change: ", min_change);

        }

    }
    if (min_change === Number.MAX_SAFE_INTEGER) {
        console.log("returning min_change: -1");
        return -1;
    }
    else {
        console.log("returning min_change: ", min_change);
        return min_change;
    }

}


// const minChange = (amount,coins,hash={}) => {

//     if(amount===0){return 0;}

//     if(amount in hash){
//         console.log("amount",amount);

//         console.log("hash = ",hash)
//         return hash[amount]
//     }

//     let min_change = Infinity;
//     for(let i of coins){
//         if(i <= amount){
//             let sub = minChange(amount-i,coins,hash);

//             if(sub!==-1 &&sub !== Infinity && sub+1 < min_change) {
//                 min_change = sub+1;
//             }
//             else{
//                 console.log("amount",amount);
//                 hash[amount] = sub;
//             }

//         }
//     }

//     if(min_change === Infinity){
//         return -1;
//     }
//     else{
//         return min_change;
//     }

// }



//method using recursion without memoization runs at around 0(coins_array_length ^amount) exponential runtime
//however even though we have logic for cutting down the number of branches by ignoring functions calls for numbers greater
//than the current amount we still suffer from the problem 'overlapping subproblems property' and it occurs enough to keep
//our performance capped at exponential even with our condition to avoid computing amount - coin where coin is > amount


// const minChange = (amount, coins) => {

//     if(amount === 0){return 0;}
  
//   let min_change = Number.MAX_SAFE_INTEGER;
  
//   for(let coin of coins){
//     if(coin <= amount){
//       let sub = minChange(amount-coin,coins);
//       if(sub!==-1 && sub != Number.MAX_SAFE_INTEGER && sub+1 < min_change){
//         min_change = sub+1;
//       }   
//     }
//   }
//   if(min_change === Number.MAX_SAFE_INTEGER){
//     return -1;
//   }
//   else{
//     return min_change;
//   }
  
      

// }





// optimized recursive method using memoizartion with a hash table 
// it is nearly identically to the original method except a hash table
//is used to eliminate the overlapping subproblems property from occuring
// making the algorithim run around O(coins.length * amount)

// const minChange = (amount, coins, hash = {}) => {

//     if(amount === 0){return 0;}
//     if(amount < 0){return -1;}
//     if(amount in hash){return hash[amount];}
  
//   let min_change = Number.MAX_SAFE_INTEGER;
  
//   for(let coin of coins){
//     if(coin <= amount){
//       let sub = minChange(amount-coin,coins,hash);
//       if(sub!==-1 && sub != Number.MAX_SAFE_INTEGER && sub+1 < min_change){
//         min_change = sub+1;
//         hash[amount] = min_change;
//       }
//     //   console.log("sub: ", sub);
//     //                   console.log("amount: ", amount);
//     //                   console.log("min_change: ", min_change);
//     //                   console.log("hash: ", hash);
//     }
//   }
//   if(min_change === Number.MAX_SAFE_INTEGER){
//     hash[amount]= -1;
//     return -1;
//   }
//   else{
//     return min_change;
//   }
  

// }

//further optimized recursive method runs at the same time complexity of O(amount*coins.length) with space complexity of
// O(amount) ('O(n)') for the hash table of the size of amount this method uses built in functions to make the code more readable
const minChange = (amount,coins,hash={})=>{

}
const _minChange = (amount,coins, hash ={}) => {



}





// console.log(minChange1(4, [1, 2, 3])); // -> 2, because 4+4 is the minimum coins possible
// console.log(minChange1(8, [1, 5, 4, 12])); // -> 2, because 4+4 is the minimum coins possible
// console.log(minChange1(13, [1, 9, 5, 14, 30])); // -> 5
// console.log(minChange(23, [2, 5, 7])); // -> 4
// console.log(minChange1(102, [1, 5, 10, 25])); // -> 6
// console.log(minChange1(200, [1, 5, 10, 25])); // -> 8
// console.log(minChange1(2017, [4, 2, 10])); // -> -1
// console.log(minChange1(271, [10, 8, 265, 24])); // -> -1
// console.log(minChange1(0, [4, 2, 10]));  // -> 0
// console.log(minChange1(0, [])); // -> 0

console.log(minChange(4, [1, 2, 3])); // -> 2, because 4+4 is the minimum coins possible
console.log(minChange(8, [1, 5, 4, 12])); // -> 2, because 4+4 is the minimum coins possible
console.log(minChange(13, [1, 9, 5, 14, 30])); // -> 5
console.log(minChange(23, [2, 5, 7])); // -> 4
console.log(minChange(102, [1, 5, 10, 25])); // -> 6
console.log(minChange(200, [1, 5, 10, 25])); // -> 8
console.log(minChange(2017, [4, 2, 10])); // -> -1
console.log(minChange(271, [10, 8, 265, 24])); // -> -1
console.log(minChange(0, [4, 2, 10]));  // -> 0
console.log(minChange(0, [])); // -> 0