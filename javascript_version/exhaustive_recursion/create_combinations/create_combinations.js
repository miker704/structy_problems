// create subCombinations
// Write a function, createCombinations, that takes in an vector and a size as arguments.
//  The function should return a 2D vector representing all of the subCombinations of the specifized size.

// The items within the subCombinations and the subCombinations themselves may be returned in any order.

// You may assume that the input vector contains unique elements and 1 <= k <= items.size()



const createCombinations = (items, k) => {
    // todo
    if (items.length < k) { return []; }
    if (k === 0) { return [[]]; }
    let first = items[0];
    let subCombinations = createCombinations(items.slice(1), k - 1);
    let result = [];
    for (let sub of subCombinations) {
        result.push([first, ...sub]);
    }
    let combinations = createCombinations(items.slice(1), k);
    return [...result, ...combinations];
};



console.log(createCombinations(["a", "b", "c"], 2)); // ->
// [
//   [ 'a', 'b' ],
//   [ 'a', 'c' ],
//   [ 'b', 'c' ]
// ]
console.log(createCombinations(["q", "r", "s", "t"], 2)); // ->
// [
//   [ 'q', 'r' ],
//   [ 'q', 's' ],
//   [ 'q', 't' ],
//   [ 'r', 's' ],
//   [ 'r', 't' ],
//   [ 's', 't' ]
// ]
console.log(createCombinations(['q', 'r', 's', 't'], 3)); // ->
// [
//   [ 'q', 'r', 's' ],
//   [ 'q', 'r', 't' ],
//   [ 'q', 's', 't' ],
//   [ 'r', 's', 't' ]
// ]
console.log(createCombinations([1, 28, 94], 3)); // ->
// [
//   [ 1, 28, 94 ]
// ]