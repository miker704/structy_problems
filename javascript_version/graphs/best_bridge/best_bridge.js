// best bridge
// Write a function, bestBridge, that takes in a grid as an argument. 
// The grid contains water (W) and land (L). 
// There are exactly two islands in the grid. An island is a vertically or 
// horizontally connected region of land.
//  Return the minimum length bridge needed to connect the two islands. 
//  A bridge does not need to form a straight line.


/*game plan 

write a function to get one of the islands

in that function keep iterating till all sequences 
return w or out of bounds;

take that island then using said positions in the
island exclude
pos
that violate col and row bounds of  + 1 
iterate on that poisitons
on another function pasing in

row col, currisland, visitied

if(pos === w)
increment +1
if pos === l && is not in currisland
return path size;

*/

const bestBridge = (grid) => {





}

const isMapBound = (grid, row, col) => {

}


const getIsland = (grid, row, col, islandSet) => {


}





let grid = [
    ["W", "W", "W", "L", "L"],
    ["L", "L", "W", "W", "L"],
    ["L", "L", "L", "W", "L"],
    ["W", "L", "W", "W", "W"],
    ["W", "W", "W", "W", "W"],
    ["W", "W", "W", "W", "W"],
];
console.log(bestBridge(grid)); // -> 1
// ┌─────────┬─────┬─────┬─────┬─────┬─────┐
// │ (index) │  0  │  1  │  2  │  3  │  4  │
// ├─────────┼─────┼─────┼─────┼─────┼─────┤
// │    0    │ 'W' │ 'W' │ 'W' │ 'L' │ 'L' │
// │    1    │ 'L' │ 'L' │ 'W' │ 'W' │ 'L' │
// │    2    │ 'L' │ 'L' │ 'L' │ 'W' │ 'L' │
// │    3    │ 'W' │ 'L' │ 'W' │ 'W' │ 'W' │
// │    4    │ 'W' │ 'W' │ 'W' │ 'W' │ 'W' │
// │    5    │ 'W' │ 'W' │ 'W' │ 'W' │ 'W' │
// └─────────┴─────┴─────┴─────┴─────┴─────┘
// mainisland
// ┌─────────┬─────┬─────┬─────┬─────┬─────┐
// │ (index) │  0  │  1  │  2  │  3  │  4  │
// ├─────────┼─────┼─────┼─────┼─────┼─────┤
// │    0    │ 'X' │ 'X' │ 'X' │ 'L' │ 'L' │
// │    1    │ 'X' │ 'X' │ 'X' │ 'X' │ 'L' │
// │    2    │ 'X' │ 'X' │ 'X' │ 'X' │ 'L' │
// │    3    │ 'X' │ 'X' │ 'X' │ 'X' │ 'W' │
// │    4    │ 'X' │ 'X' │ 'X' │ 'X' │ 'W' │
// │    5    │ 'X' │ 'X' │ 'X' │ 'W' │ 'W' │
// └─────────┴─────┴─────┴─────┴─────┴─────┘

/*
┌───────────────────┬────────┐
│ (iteration index) │ Values │
├───────────────────┼────────┤
│         0         │ '3,1'  │
│         1         │ '2,1'  │
│         2         │ '1,1'  │
│         3         │ '1,0'  │
│         4         │ '2,0'  │
│         5         │ '2,2'  │
└───────────────────┴────────┘

*/
grid = [
    ["W", "W", "W", "W", "W"],
    ["W", "W", "W", "W", "W"],
    ["L", "L", "W", "W", "L"],
    ["W", "L", "W", "W", "L"],
    ["W", "W", "W", "L", "L"],
    ["W", "W", "W", "W", "W"],
];
console.log(bestBridge(grid)); // -> 2
grid = [
    ["W", "W", "W", "W", "W"],
    ["W", "W", "W", "L", "W"],
    ["L", "W", "W", "W", "W"],
];
console.log(bestBridge(grid)); // -> 3
grid = [
    ["W", "W", "W", "W", "W", "W", "W", "W"],
    ["W", "W", "W", "W", "W", "W", "W", "W"],
    ["W", "W", "W", "W", "W", "W", "W", "W"],
    ["W", "W", "W", "W", "W", "L", "W", "W"],
    ["W", "W", "W", "W", "L", "L", "W", "W"],
    ["W", "W", "W", "W", "L", "L", "L", "W"],
    ["W", "W", "W", "W", "W", "L", "L", "L"],
    ["L", "W", "W", "W", "W", "L", "L", "L"],
    ["L", "L", "L", "W", "W", "W", "W", "W"],
    ["W", "W", "W", "W", "W", "W", "W", "W"],
];
console.log(bestBridge(grid)); // -> 3
grid = [
    ["L", "L", "L", "L", "L", "L", "L", "L"],
    ["L", "W", "W", "W", "W", "W", "W", "L"],
    ["L", "W", "W", "W", "W", "W", "W", "L"],
    ["L", "W", "W", "W", "W", "W", "W", "L"],
    ["L", "W", "W", "W", "W", "W", "W", "L"],
    ["L", "W", "W", "W", "W", "W", "W", "L"],
    ["L", "W", "W", "L", "W", "W", "W", "L"],
    ["L", "W", "W", "W", "W", "W", "W", "L"],
    ["L", "W", "W", "W", "W", "W", "W", "L"],
    ["L", "W", "W", "W", "W", "W", "W", "L"],
    ["L", "W", "W", "W", "W", "W", "W", "L"],
    ["L", "L", "L", "L", "L", "L", "L", "L"],
];
console.log(bestBridge(grid)); // -> 2
grid = [
    ["W", "L", "W", "W", "W", "W", "W", "W"],
    ["W", "L", "W", "W", "W", "W", "W", "W"],
    ["W", "W", "W", "W", "W", "W", "W", "W"],
    ["W", "W", "W", "W", "W", "W", "W", "W"],
    ["W", "W", "W", "W", "W", "W", "W", "W"],
    ["W", "W", "W", "W", "W", "W", "L", "W"],
    ["W", "W", "W", "W", "W", "W", "L", "L"],
    ["W", "W", "W", "W", "W", "W", "W", "L"],
];
console.log(bestBridge(grid)); // -> 8