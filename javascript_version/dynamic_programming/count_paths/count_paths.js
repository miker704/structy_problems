// count paths
// Write a function, countPaths, that takes in a grid as an argument. 
// In the grid, 'X' represents walls and 'O' represents open spaces.
// You may only move down or to the right and cannot pass through walls. 
// The function should return the number 
// of ways possible to travel from the top-left corner of the grid to the bottom-right corner.
//example
// std::vector<std::vector<char>> grid {
//     {'O', 'O'},
//     {'O', 'O'}
//   };
//   countPaths(grid); // -> 2 ([0][0] -> right [0][1] -> down [1][1]) 
//&& ([0][0]->down[1][0] -> right [1],[1])

/*

for([0])


directions possible  = {right and down only}

[+1,0] [0,+1] []

*/

//unoptimized method running at O(n^r+c) exponential time
// can solve larger data sequences in a reasonable time but can be speed up using memoization
//space complexity O(r+c)

// const countPaths = (grid, currRow = 0, currCol = 0, hash = {}) => {

//     if(currCol === grid[0].length || currRow === grid.length || grid[currRow][currCol] === 'X'){
//         return 0;
//     }

//     if(currCol === grid[0].length-1 && currRow === grid.length-1){
//         return 1;
//     }

//    return countPaths(grid,currRow+1,currCol,hash) + countPaths(grid,currRow,currCol+1,hash);


// }

// one way to solve it using memoization runs at O(r*c) space complexity O(r*c)
const countPaths2 = (grid, currRow = 0, currCol = 0, hash = {}) => {

  let pos = `${currRow},${currCol}}`;
  let rBound = 0 <= currRow && currRow < grid.length;
  let cBound = 0 <= currCol && currCol < grid[0].length;
  if (pos in hash) { return hash[pos]; }
  if (!rBound || !cBound) { return 0; }
  if (grid[currRow][currCol] === "X") { return 0; }
  if (grid[currRow][currCol] === "O" && currRow === grid.length - 1 && currCol === grid[0].length - 1) {
    return 1;
  }
  let dist = 0;
  dist += countPaths(grid, currRow + 1, currCol, hash);
  dist += countPaths(grid, currRow, currCol + 1, hash);
  hash[pos] = dist;
  return hash[pos];
}

//optimized method using memoization runs at O(r*c) space complexity O(r*c)
// no excess code no conditonal checking
const countPaths = (grid, currRow = 0, currCol = 0, hash = {}) => {

  let pos = `${currRow},${currCol}}`;
  if (pos in hash) { return hash[pos]; }
  if (currRow === grid.length || currCol === grid[0].length || grid[currRow][currCol] === "X") { return 0; }
  if (currRow === grid.length - 1 && currCol === grid[0].length - 1) {return 1;}
  return hash[pos] = countPaths(grid, currRow + 1, currCol, hash) + countPaths(grid, currRow, currCol + 1, hash);;
}

let grid = [
  ["O", "O"],
  ["O", "O"],
];
console.log(countPaths(grid)); // -> 2

grid = [
  ["O", "O", "X"],
  ["O", "O", "O"],
  ["O", "O", "O"],
];
console.log(countPaths(grid)); // -> 5


grid = [
  ["O", "O", "O"],
  ["O", "O", "X"],
  ["O", "O", "O"],
];
console.log(countPaths(grid)); // -> 3


grid = [
  ["O", "O", "O"],
  ["O", "X", "X"],
  ["O", "O", "O"],
];
console.log(countPaths(grid)); // -> 1

grid = [
  ["O", "O", "X", "O", "O", "O"],
  ["O", "O", "X", "O", "O", "O"],
  ["X", "O", "X", "O", "O", "O"],
  ["X", "X", "X", "O", "O", "O"],
  ["O", "O", "O", "O", "O", "O"],
];
console.log(countPaths(grid)); // -> 0

grid = [
  ["O", "O", "X", "O", "O", "O"],
  ["O", "O", "O", "O", "O", "X"],
  ["X", "O", "O", "O", "O", "O"],
  ["X", "X", "X", "O", "O", "O"],
  ["O", "O", "O", "O", "O", "O"],
];
console.log(countPaths(grid)); // -> 42

grid = [
  ["O", "O", "X", "O", "O", "O"],
  ["O", "O", "O", "O", "O", "X"],
  ["X", "O", "O", "O", "O", "O"],
  ["X", "X", "X", "O", "O", "O"],
  ["O", "O", "O", "O", "O", "X"],
];
console.log(countPaths(grid)); // -> 0

grid = [
  ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
  ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
  ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
  ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
  ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
  ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
  ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
  ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
  ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
  ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
  ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
  ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
  ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
  ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
  ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
];
console.log(countPaths(grid)); // -> 40116600

grid = [
  ["O", "O", "X", "X", "O", "O", "O", "X", "O", "O", "O", "O", "O", "O", "O"],
  ["O", "O", "X", "X", "O", "O", "O", "X", "O", "O", "O", "O", "O", "O", "O"],
  ["O", "O", "O", "X", "O", "O", "O", "X", "O", "O", "O", "O", "O", "O", "O"],
  ["X", "O", "O", "O", "O", "O", "O", "X", "O", "O", "O", "O", "O", "O", "O"],
  ["X", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
  ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "X", "X", "O"],
  ["O", "O", "O", "O", "O", "O", "O", "X", "O", "O", "O", "O", "O", "X", "O"],
  ["O", "O", "O", "O", "O", "O", "O", "O", "X", "O", "O", "O", "O", "O", "O"],
  ["X", "X", "X", "O", "O", "O", "O", "O", "O", "X", "O", "O", "O", "O", "O"],
  ["O", "O", "O", "O", "X", "X", "O", "O", "O", "O", "X", "O", "O", "O", "O"],
  ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
  ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
  ["O", "O", "O", "O", "X", "X", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
  ["O", "O", "O", "O", "O", "O", "O", "O", "X", "O", "O", "O", "O", "O", "O"],
  ["O", "O", "O", "O", "O", "O", "O", "O", "X", "O", "O", "O", "O", "O", "O"],
];
console.log(countPaths(grid)); // -> 3190434
