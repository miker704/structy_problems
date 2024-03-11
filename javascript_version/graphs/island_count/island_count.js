// island count
// Write a function, island_count, that takes in a grid containing Ws and Ls. W represents water and L represents land. 
// The function should return the number of islands on the grid. An island is a vertically or 
// horizontally connected region of land.


const islandCount = (grid) => {
    let count = 0;
    let visited = new Set();
    for (let row = 0; row < grid.length; row++) {
        for (let col = 0; col < grid[0].length; col++) {
            if (hasPath(grid, row, col, visited)) {
                count++;
            }
        }
    }
    return count;
};


const hasPath = (grid, row, col, visited) => {
    let pos = `${row},${col}`;
    let rBound = 0 <= row && row < grid.length;
    let cBound = 0 <= col && col < grid[0].length;
    if (visited.has(pos)) { return false; }
    visited.add(pos);
    if (!rBound || !cBound) { return false; }
    if (grid[row][col] === 'W') { return false; }
    hasPath(grid, row + 1, col, visited);
    hasPath(grid, row - 1, col, visited);
    hasPath(grid, row, col + 1, visited);
    hasPath(grid, row, col - 1, visited);
    return true;
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