// closest carrot
// Write a function, closestCarrot, that takes in a grid, a starting row, and a
//  starting column. In the grid, 'X's are walls, 'O's are open spaces, and 'C's are 
//  carrots. The function should return a number representing the length of the shortest 
//  path from the starting position to a carrot. 
// You may move up, down, left, or right, but cannot pass through walls (X). If there is 
// no possible path to a carrot, then return -1.


/*
game plan 

using breadth first search as we are looking for the shortest path
start at start pos (startRow and startCol)

*/

// const closestCarrot = (grid, startRow, startCol) => {
//     let visited = new Set([startRow + ',' + startCol]);
//     let queue = [[startRow, startCol, 0]];
//     while (queue.length !== 0) {
//         let [prevRow, prevCol, count] = queue.shift();
//         let validPos = [[0, 1], [0, -1], [1, 0], [-1, 0]];
//         if (grid[prevRow][prevCol] === "C") {
//             return count;
//         }
//         for (let move of validPos) {

//             let posStr = `${prevRow + move[0]},${prevCol + move[1]}`;
//             let pos = [prevRow + move[0], prevCol + move[1]];

//             let rowBound = 0 <= prevRow + move[0] && prevRow + move[0] < grid.length;
//             let colBound = 0 <= prevCol + move[1] && prevCol + move[1] < grid[0].length;
//             if (rowBound === false || colBound === false) {
//                 continue;
//             }

//             if (visited.has(posStr) === true) {
//                 continue;
//             }
//             visited.add(posStr);
//             if (grid[pos[0]][pos[1]] === 'C') {
//                 queue.push([pos[0], pos[1], count + 1]);
//             }
//             if (grid[pos[0]][pos[1]] === 'X') {
//                 continue;
//             }
//             if (grid[pos[0]][pos[1]] === 'O') {
//                 queue.push([pos[0], pos[1], count + 1]);
//             }
//         }
//     }
//     return -1;
// };

//refactored
const closestCarrot = (grid, startRow, startCol) => {

};






let grid = [
    ['O', 'O', 'O', 'O', 'O'],
    ['O', 'X', 'O', 'O', 'O'],
    ['O', 'X', 'X', 'O', 'O'],
    ['O', 'X', 'C', 'O', 'O'],
    ['O', 'X', 'X', 'O', 'O'],
    ['C', 'O', 'O', 'O', 'O'],
];

console.log(closestCarrot(grid, 1, 2)); // -> 4
grid = [
    ['O', 'O', 'O', 'O', 'O'],
    ['O', 'X', 'O', 'O', 'O'],
    ['O', 'X', 'X', 'O', 'O'],
    ['O', 'X', 'C', 'O', 'O'],
    ['O', 'X', 'X', 'O', 'O'],
    ['C', 'O', 'O', 'O', 'O'],
];

console.log(closestCarrot(grid, 0, 0)); // -> 5
grid = [
    ['O', 'O', 'X', 'X', 'X'],
    ['O', 'X', 'X', 'X', 'C'],
    ['O', 'X', 'O', 'X', 'X'],
    ['O', 'O', 'O', 'O', 'O'],
    ['O', 'X', 'X', 'X', 'X'],
    ['O', 'O', 'O', 'O', 'O'],
    ['O', 'O', 'C', 'O', 'O'],
    ['O', 'O', 'O', 'O', 'O'],
];

console.log(closestCarrot(grid, 3, 4)); // -> 9
grid = [
    ['O', 'O', 'X', 'O', 'O'],
    ['O', 'X', 'X', 'X', 'O'],
    ['O', 'X', 'C', 'C', 'O'],
];

console.log(closestCarrot(grid, 1, 4)); // -> 2
grid = [
    ['O', 'O', 'X', 'O', 'O'],
    ['O', 'X', 'X', 'X', 'O'],
    ['O', 'X', 'C', 'C', 'O'],
];

console.log(closestCarrot(grid, 2, 0)); // -> -1
grid = [
    ['O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'],
    ['O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'],
    ['O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'],
    ['O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'],
    ['O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'],
    ['O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'],
    ['O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'],
    ['O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'],
    ['O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'],
    ['O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'],
    ['O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'X', 'X'],
    ['O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'X', 'C'],
];

console.log(closestCarrot(grid, 0, 0)); // -> -1
grid = [
    ['O', 'O', 'X', 'C', 'O'],
    ['O', 'X', 'X', 'X', 'O'],
    ['C', 'X', 'O', 'O', 'O'],
];

console.log(closestCarrot(grid, 2, 2)); // -> 5