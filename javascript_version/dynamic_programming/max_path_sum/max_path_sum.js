// max path sum
// Write a function, maxPathSum, that takes in a 
// grid as an argument. The function should return the maximum sum 
// possible by traveling a path from the top-left corner to the bottom-right corner. 
// You may only travel through the grid by moving down or right.

// You can assume that all numbers are non-negative.


// const maxPathSum = (grid, row = 0, col = 0, curr = 0, max = 0) => {


//     if (row === grid.length || col === grid[0].length) {
//         return 0;
//     }

//     if (row === grid.length - 1 && col === grid[0].length - 1) {
//         curr += grid[row][col];

//         if(max<curr){
//             max = curr;
//             curr=0;
//             // return max;
//         }
//         else{
//             curr=0;
//             // return max;
//         }

//         // return curr;
//         // return grid[row][col];
//         // return max;
//     }

//     curr += grid[row][col];
//     console.log("curr = ",curr);
//     // console.log("row = ",row);
//     // console.log("col = ",col);
//     // console.log("grid = ",grid[row][col]);
//     console.log("max = ",max);
//     console.log(`grid[row= ${row}][col = ${col}] = ${grid[row][col]}`);

//     // if(max<curr){
//     //     max = curr;
//     // }
//     // else{
//     //     curr=0;
//     //     return max;
//     // }

//     return maxPathSum(grid,row+1,col,curr,max) + maxPathSum(grid,row,col+1,curr,max);



// }
// const maxPathSum = (grid, row = 0, col = 0) => {


//     if(row === grid.length || col === grid[0].length){
//         return 0;
//     }

//     let maxSum = 0;

//     if(row <= grid.length-1 && col <= grid[0].length-1){
//         let currentSum = Math.max(maxPathSum(grid,row+1,col), maxPathSum(grid,row,col+1));
//         // console.log("current sum =  ",currentSum)
//         maxSum += grid[row][col] + currentSum;
//     }

//     return maxSum

// }

//unoptimized method running at O(2^(r+c)) where 2 is the number of branches right and down directions
// r is the number of rows and c is the number of columns in the 2d array space complixity is O(r+c)

// const maxPathSum = (grid, row = 0, col = 0) => {
//     if (row === grid.length || col === grid[0].length) {
//         return -Infinity;
//     }
//     if (row === grid.length - 1 && col === grid[0].length - 1) {
//         return grid[row][col];
//     }

//     let maxSum = 0;
//     let down = maxPathSum(grid, row + 1, col);
//     let right = maxPathSum(grid, row, col + 1);
//     let currSum = down > right ? down : right;
//     // console.log(`(down ${down} , right ${right}) currSum ${currSum} pre-maxSum ${maxSum} post-maxSum = ${maxSum + currSum + grid[row][col]}`);
//     maxSum += currSum + grid[row][col]

//     return maxSum
// }

//using memoization more optimized method
//running at O(r*c) where 2 is the number of branches right and down directions
// r is the number of rows and c is the number of columns in the 2d array space complixity is O(r*c)

const maxPathSum = (grid, row = 0, col = 0, hash = {}) => {

    
}



let grid = [
    [1, 3, 12],
    [5, 1, 1],
    [3, 6, 1],
];
console.log(maxPathSum(grid)); // -> 18


grid = [
    [1, 2, 8, 1],
    [3, 1, 12, 10],
    [4, 0, 6, 3],
];
console.log(maxPathSum(grid)); // -> 36


grid = [
    [1, 2, 8, 1],
    [3, 10, 12, 10],
    [4, 0, 6, 3],
];
console.log(maxPathSum(grid)); // -> 39



grid = [
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
];
console.log(maxPathSum(grid)); // -> 27


grid = [
    [1, 1, 3, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 2, 1, 1, 6, 1, 1, 5, 1, 1, 0, 0, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 5, 1, 1, 1, 1, 0, 1, 1, 1, 1],
    [2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [2, 1, 1, 1, 1, 8, 1, 1, 1, 1, 1, 1, 1],
    [2, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 9, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 8, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
];
console.log(maxPathSum(grid)); // -> 56