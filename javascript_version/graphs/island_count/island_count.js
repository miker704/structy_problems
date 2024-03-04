// island count
// Write a function, island_count, that takes in a grid containing Ws and Ls. W represents water and L represents land. 
// The function should return the number of islands on the grid. An island is a vertically or 
// horizontally connected region of land.


const islandCount = (grid) => {

};


const hasPath = (grid, row, col, visited) => {


}



let grid = [
    ['W', 'L', 'W', 'W', 'W'],
    ['W', 'L', 'W', 'W', 'W'],
    ['W', 'W', 'W', 'L', 'W'],
    ['W', 'W', 'L', 'L', 'W'],
    ['L', 'W', 'W', 'L', 'L'],
    ['L', 'L', 'W', 'W', 'W'],
];

console.log(islandCount(grid)); // -> 3
grid = [
    ['L', 'W', 'W', 'L', 'W'],
    ['L', 'W', 'W', 'L', 'L'],
    ['W', 'L', 'W', 'L', 'W'],
    ['W', 'W', 'W', 'W', 'W'],
    ['W', 'W', 'L', 'L', 'L'],
];

console.log(islandCount(grid)); // -> 4

grid = [
    ['L', 'L', 'L'],
    ['L', 'L', 'L'],
    ['L', 'L', 'L'],
];

console.log(islandCount(grid)); // -> 1

grid = [
    ['W', 'W'],
    ['W', 'W'],
    ['W', 'W'],
];

console.log(islandCount(grid)); // -> 0