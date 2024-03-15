// permutations
// Write a function, permutations, that takes in a list an argument. The function should 
// return a 2D list where each sublist represents one of the possible permutations of the list.

// The sublists may be returned in any order.

// You may assume that the input list contains unique items.


const permutations = (items) => {
    // todo
    if (items.length === 0) { return [[]]; }
    return _permutations(items);
};
const _permutations = (items) => {
    if (items.length === 0) { return [[]]; }
    let first = items[0];
    let result = [];
    for (let perm of _permutations(items.slice(1))) {
        for (let i = 0; i <= perm.length; i++) {
            result.push([...perm.slice(0, i), first, ...perm.slice(i)]);
        }
    }
    return result;
};



console.log(permutations(['a', 'b', 'c'])); // -> 
// [
//   [ 'a', 'b', 'c' ], 
//   [ 'b', 'a', 'c' ], 
//   [ 'b', 'c', 'a' ], 
//   [ 'a', 'c', 'b' ], 
//   [ 'c', 'a', 'b' ], 
//   [ 'c', 'b', 'a' ] 
// ] 
console.log(permutations(['red', 'blue'])); // ->
// [ 
//   [ 'red', 'blue' ], 
//   [ 'blue', 'red' ] 
// ]
console.log(permutations([8, 2, 1, 4])); // ->
// [ 
//   [ 8, 2, 1, 4 ], [ 2, 8, 1, 4 ], 
//   [ 2, 1, 8, 4 ], [ 2, 1, 4, 8 ], 
//   [ 8, 1, 2, 4 ], [ 1, 8, 2, 4 ], 
//   [ 1, 2, 8, 4 ], [ 1, 2, 4, 8 ], 
//   [ 8, 1, 4, 2 ], [ 1, 8, 4, 2 ], 
//   [ 1, 4, 8, 2 ], [ 1, 4, 2, 8 ], 
//   [ 8, 2, 4, 1 ], [ 2, 8, 4, 1 ], 
//   [ 2, 4, 8, 1 ], [ 2, 4, 1, 8 ], 
//   [ 8, 4, 2, 1 ], [ 4, 8, 2, 1 ], 
//   [ 4, 2, 8, 1 ], [ 4, 2, 1, 8 ], 
//   [ 8, 4, 1, 2 ], [ 4, 8, 1, 2 ], 
//   [ 4, 1, 8, 2 ], [ 4, 1, 2, 8 ] 
// ] 
console.log(permutations([])); // ->
// [
//  [ ]
// ]