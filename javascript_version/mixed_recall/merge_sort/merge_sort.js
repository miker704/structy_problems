// merge sort
// Write a function, mergeSort, that takes in an array of numbers as an argument.
//  The function should return a new array containing elements
//  of the original array sorted in ascending order. Your function must implement 
//  the merge sort algorithm.
//  https://en.wikipedia.org/wiki/Merge_sort


// const mergeSort = (nums) => {
//     // todo
//     if (nums.length <= 1) {
//         return nums;
//     }
//     let mid = Math.floor(nums.length / 2);
//     let left = mergeSort(nums.slice(0, mid));
//     let right = mergeSort(nums.slice(mid));
//     // console.log(`left = ${left}`);
//     // console.log(`right = ${right}`);
//     return merge(left, right);
// };


// const merge = (left, right) => {
//     // console.log(`left = ${left}`);
//     // console.log(`right = ${right}`);
//     result = [];
//     while (left.length > 0 && right.length > 0) {
//         if (left[0] > right[0]) {
//             result.push(right.shift());

//         }
//         else if (left[0] == right[0]) {
//             result.push(left.shift());
//         }
//         else if (left[0] < right[0]) {
//             result.push(left.shift());

//         }
//     }
//     // console.log(`result = ${result}`);
//     result = result.concat(left);
//     result = result.concat(right);
//     return result;
// }

// more optimized version


const mergeSort = (nums) => {

}

const merge = (left, right) => {

}



let numbers = [10, 4, 42, 5, 8, 100, 5, 6, 12, 40];
console.log(mergeSort(numbers));
// -> [ 4, 5, 5, 6, 8, 10, 12, 40, 42, 100 ]
numbers = [7, -30, -4, -1, 12, 0, 20];
console.log(mergeSort(numbers));
// -> [ -30, -4, -1, 0, 7, 12, 20 ] 
numbers = [8, 7, 6, 5, 4, 3, 2, 1, 0];
console.log(mergeSort(numbers));
// -> [ 0, 1, 2, 3, 4, 5, 6, 7, 8 ] 
numbers = [
    72, 42, 16, 81, 84, 17, 2, 81, 22, 79, 86, 38,
    77, 80, 81, 70, 81, 80, 35, 21, 89, 38, 57, 28,
    4, 17, 50, 38, 68, 82, 22, 76, 45, 40, 67, 94,
    37, 27, 81, 53, 36, 18, 28, 60, 45, 74, 40, 29,
    18, 6, 28, 57, 42, 60, 64, 12, 78, 97, 96, 1,
    20, 20, 61, 67, 82, 10, 63, 71, 39, 52, 37, 69,
    37, 24, 66, 74, 15, 92, 49, 31, 56, 67, 50, 57,
    79, 0, 21, 56, 82, 22, 4, 20, 91, 72, 58, 93,
    99, 14, 42, 91
];
console.log(mergeSort(numbers));
// -> [ 
//    0,  1,  2,  4,  4,  6, 10, 12, 14, 15, 16, 17, 
//   17, 18, 18, 20, 20, 20, 21, 21, 22, 22, 22, 24, 
//   27, 28, 28, 28, 29, 31, 35, 36, 37, 37, 37, 38, 
//   38, 38, 39, 40, 40, 42, 42, 42, 45, 45, 49, 50, 
//   50, 52, 53, 56, 56, 57, 57, 57, 58, 60, 60, 61, 
//   63, 64, 66, 67, 67, 67, 68, 69, 70, 71, 72, 72, 
//   74, 74, 76, 77, 78, 79, 79, 80, 80, 81, 81, 81, 
//   81, 81, 82, 82, 82, 84, 86, 89, 91, 91, 92, 93, 
//   94, 96, 97, 99 
// ]
numbers = new Array(95000).fill(7);
console.log(mergeSort(numbers));
// -> [7, 7, 7, 7, 7, ...]
numbers = new Array(120000).fill(7);
console.log(mergeSort(numbers));
// -> [7, 7, 7, 7, 7, ...]