// minimum island
// Write a function, minimumIsland, that takes in a grid containing Ws and Ls.
//  W represents water and L represents land. The function should return the size of the smallest 
//  island. An island is a vertically or horizontally connected region of land.

// You may assume that the grid contains at least one island.


//dp only

const minimumIsland = (grid) => {
    let minLen = Infinity;
    let visited = new Set();
    for (let row = 0; row < grid.length; row++) {
        for (let col = 0; col < grid[0].length; col++) {
            let temp = hasPath(grid, row, col, visited);
            if (temp > 0 && temp < minLen) { minLen = temp; }
        }
    }
    return minLen;
};


const hasPath = (grid, row, col, visited) => {
    let rBound = 0 <= row && row < grid.length;
    let cBound = 0 <= col && col < grid[0].length;
    let pos = `${row},${col}`;
    if (visited.has(pos)) { return 0; }
    visited.add(pos);
    if (!rBound || !cBound) { return 0; }
    if (grid[row][col] === "W") { return 0; }
    let size = 1;
    size += hasPath(grid, row + 1, col, visited);
    size += hasPath(grid, row - 1, col, visited);
    size += hasPath(grid, row, col + 1, visited);
    size += hasPath(grid, row, col - 1, visited);
    return size;
}



let grid = [
    ['W', 'L', 'W', 'W', 'W'],
    ['W', 'L', 'W', 'W', 'W'],
    ['W', 'W', 'W', 'L', 'W'],
    ['W', 'W', 'L', 'L', 'W'],
    ['L', 'W', 'W', 'L', 'L'],
    ['L', 'L', 'W', 'W', 'W'],
];

console.log(minimumIsland(grid)); // -> 2
grid = [
    ['L', 'W', 'W', 'L', 'W'],
    ['L', 'W', 'W', 'L', 'L'],
    ['W', 'L', 'W', 'L', 'W'],
    ['W', 'W', 'W', 'W', 'W'],
    ['W', 'W', 'L', 'L', 'L'],
];

console.log(minimumIsland(grid)); // -> 1
grid = [
    ['L', 'L', 'L'],
    ['L', 'L', 'L'],
    ['L', 'L', 'L'],
];

console.log(minimumIsland(grid)); // -> 9
grid = [
    ['W', 'W'],
    ['L', 'L'],
    ['W', 'W'],
    ['W', 'L']
];

console.log(minimumIsland(grid)); // -> 1