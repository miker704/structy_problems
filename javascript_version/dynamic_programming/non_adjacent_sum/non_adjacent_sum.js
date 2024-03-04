// non adjacent sum
// Write a function, nonAdjacentSum, that takes in an array of numbers as
// an argument. The function should return the maximum sum of non-adjacent 
// elements in the array. There is no limit on how many elements can be taken 
// into the sum as long as they are not adjacent.

// For example, given:

// [2, 4, 5, 12, 7]

// The maximum non-adjacent sum is 16, because 4 + 12. 
// 4 and 12 are not adjacent in the array.


/** 
 * game plan 
 * 
 * table based on incrementation
 * where index starts at 0 and step is the number that steps = to next iteration/spaces on elements skipped
 * i.e index = 0 step = 2  array [7, 5, 5, 12]
 *  sumations  7,5 and 5, 12 once we hit index = array.length increase step by 1 reset index to 0
 *  step ++  index = 0 
 *  index = 0 step = 3  array [7, 5, 5, 12] 7,12 = 19
 *  if step (3) + index(1) > length-1{return 0}
 * once step === array.length-1 && index === array.length-1 {return array[idx]}/ step === array.length && index === array.length-1 {ret 0} stop 
 * 
 * 
*/



//using the dup array method 

const nonAdjacentSum = (nums) => {

    

}

//using the recusion method with memoization with a hash 

const nonAdjacentSumrecur = (nums, idx = 0, hash = {}) => {


}


let nums = [2, 4, 5, 12, 7];
// console.log(nonAdjacentSum(nums)); // -> 16
console.log(nonAdjacentSumrecur(nums)); // -> 16
nums = [12];
// console.log(nonAdjacentSum(nums)); // -> 12
// console.log(nonAdjacentSumrecur(nums)); // -> 12
nums = [12, 16];

// console.log(nonAdjacentSum(nums)); // -> 16
// console.log(nonAdjacentSumrecur(nums)); // -> 16
nums = [163, 16];
// console.log(nonAdjacentSumrecur(nums)); // -> 163
nums = [7, 5, 5, 12];
// console.log(nonAdjacentSum(nums)); // -> 19
// console.log(nonAdjacentSumrecur(nums));
nums = [7, 5, 5, 12, 17, 29];
// console.log(nonAdjacentSum(nums)); // -> 48
// console.log(nonAdjacentSumrecur(nums));
nums = [
    72, 62, 10, 6, 20, 19, 42,
    46, 24, 78, 30, 41, 75, 38,
    23, 28, 66, 55, 12, 17, 9,
    12, 3, 1, 19, 30, 50, 20
];
// console.log(nonAdjacentSum(nums)); // -> 488
// console.log(nonAdjacentSumrecur(nums));
nums = [
    72, 62, 10, 6, 20, 19, 42, 46, 24, 78,
    30, 41, 75, 38, 23, 28, 66, 55, 12, 17,
    83, 80, 56, 68, 6, 22, 56, 96, 77, 98,
    61, 20, 0, 76, 53, 74, 8, 22, 92, 37,
    30, 41, 75, 38, 23, 28, 66, 55, 12, 17,
    72, 62, 10, 6, 20, 19, 42, 46, 24, 78,
    42
];
// console.log(nonAdjacentSum(nums)); // -> 1465
// console.log(nonAdjacentSumrecur(nums));