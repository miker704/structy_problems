// array stepper
// Write a function, arrayStepper, that takes in an array of numbers as an argument. 
// You start at the first position of the array. The function should return a boolean indicating 
// whether or not it is possible to reach the last position of the array. When situated at some position 
// of the array, you may take a maximum number of steps based on the number at that position.

// For example, given:

//     idx =  0  1  2  3  4  5
// numbers = [2, 4, 2, 0, 0, 1]

// The answer is true.
// We start at idx 0, we could take 1 step or 2 steps forward.
// The correct choice is to take 1 step to idx 1.
// Then take 4 steps forward to the end at idx 5.



// const arrayStepper = (nums, idx = 0, hash = {}) => {

//   let pos = `${nums[idx]},${nums[idx + 1]}`;
//   // console.log(`pos = ${pos}`);

//   // console.log(`nums[idx=${idx}]}`);
//   if (pos in hash) { return hash[pos]; }
//   if (nums[idx] === 0 && idx !== nums.length) {
//       // console.log(`${nums[idx]} ===0 && ${idx} !== ${nums.length}`);

//       return false;

//   }

//   if (idx >= nums.length) {
//       // console.log("idx >= nums.length")
//       // console.log(`${idx} >= ${nums.length}`);

//       return false;
//   }


//   if (nums[idx] >= nums.length - 1 || nums[idx] + idx >= nums.length - 1) {
//       // console.log("nums[idx] >= nums.length || nums[idx] + idx >=nums.length")
//       // console.log(`${nums[idx]} >= ${nums.length} || ${nums[idx]} + ${idx} >= ${nums.length}`);

//       return true;
//   }
//   let x = false;
//   for (let i = 0; i < nums[idx]; i++) {
//       // console.log(`nums[idx=${idx}] === ${nums[idx]}, i = ${i}`);
//       x = arrayStepper(nums, idx + 1, hash);
//       // if(arrayStepper(nums,idx+1)){
//       hash[pos] = x;
//       // }

//   }



//   return x;
// }






const arrayStepper = (nums, idx = 0, hash = {}) => {
    if(idx in hash){return hash[idx];}
    if (idx === nums.length-1) { return true; }
    for (let i = 1; i <= nums[idx]; i++) {
        if(arrayStepper(nums, idx + i, hash)){
            hash[idx] = true;
            return true;
        }
    }
    hash[idx] = false;
    return false;
}



console.log(arrayStepper([2, 4, 2, 0, 0, 1])); // -> true
console.log(arrayStepper([2, 3, 2, 0, 0, 1])); // -> false
console.log(arrayStepper([3, 1, 3, 1, 0, 1])); // -> true
console.log(arrayStepper([4, 1, 5, 1, 1, 1, 0, 4])); // -> true
console.log(arrayStepper([4, 1, 2, 1, 1, 1, 0, 4])); // -> false
console.log(arrayStepper([1, 1, 1, 1, 1, 0])); // -> true
console.log(arrayStepper([1, 1, 1, 1, 0, 0])); // -> false
console.log(arrayStepper([
    31, 30, 29, 28, 27,
    26, 25, 24, 23, 22,
    21, 20, 19, 18, 17,
    16, 15, 14, 13, 12,
    11, 10, 9, 8, 7, 6,
    5, 3, 2, 1, 0, 0, 0
])); // -> false