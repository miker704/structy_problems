// string search
// Write a function, stringSearch, that takes in) a grid of 
// letters and a string as arguments. The function should return 
// a boolean indicating whether or not the string can be found in 
// the grid as a path by connecting horizontal or vertical positions. 
// The path can begin at any position, but you cannot reuse a position more than once in the path.

// You can assume that all letters are lowercase and alphabetic.

const stringSearch = (grid, s) => {

};


const parseGraph = (grid, s, row, col, iter) => {
    // console.log("grid pre :");
    // console.table(grid);


}

let grid = [
    ['e', 'y', 'h', 'i', 'j'],
    ['q', 'x', 'e', 'r', 'p'],
    ['r', 'o', 'l', 'l', 'n'],
    ['p', 'r', 'x', 'o', 'h'],
    ['a', 'a', 'm', 'c', 'm']
];
console.log(stringSearch(grid, 'hello')); // -> true
grid = [
    ['e', 'y', 'h', 'i', 'j'],
    ['q', 'x', 'e', 'r', 'p'],
    ['r', 'o', 'l', 'l', 'n'],
    ['p', 'r', 'x', 'o', 'h'],
    ['a', 'a', 'm', 'c', 'm']
];
console.log(stringSearch(grid, 'proxy')); // -> true

grid = [
    ['e', 'y', 'h', 'i', 'j'],
    ['q', 'x', 'e', 'r', 'p'],
    ['r', 'o', 'l', 'l', 'n'],
    ['p', 'r', 'x', 'o', 'h'],
    ['a', 'a', 'm', 'c', 'm']
];
console.log(stringSearch(grid, 'rolling')); // -> false
grid = [
    ['e', 'y', 'h', 'i', 'j'],
    ['q', 'x', 'e', 'r', 'p'],
    ['r', 'o', 'l', 'l', 'n'],
    ['p', 'r', 'x', 'o', 'h'],
    ['a', 'a', 'm', 'z', 'm']
];
console.log(stringSearch(grid, 'zoo'));// -> false
grid = [
    ['q', 'w', 'h', 'i', 'j'],
    ['q', 'e', 'r', 'o', 'p'],
    ['h', 'y', 't', 'x', 'z'],
    ['k', 'o', 'm', 'o', 'p']
];
console.log(stringSearch(grid, 'qwerty')); // -> true
grid = [
    ['f', 'd', 'i', 'e', 'l', 'u', 'j', 't', 'q', 'v', 'o', 'p'],
    ['o', 'p', 'b', 'e', 'm', 'w', 'm', 'l', 'h', 'j', 's', 'v'],
    ['g', 'b', 's', 'm', 'i', 'w', 'w', 'h', 'l', 'm', 'l', 'n'],
    ['a', 'l', 's', 'k', 'p', 'c', 't', 'u', 'v', 'b', 'c', 'm'],
    ['m', 't', 'c', 'k', 'e', 'n', 'r', 'b', 'a', 'z', 'l', 'c'],
    ['q', 'm', 'a', 'p', 'a', 'p', 'i', 'i', 'u', 't', 'z', 'z'],
    ['d', 'u', 'z', 'o', 'e', 'r', 'a', 't', 't', 'c', 'q', 'k'],
    ['f', 'u', 'z', 'g', 'c', 'i', 'k', 'v', 'o', 'f', 's', 'w'],
    ['p', 'h', 'u', 'i', 'k', 'c', 'v', 'v', 'h', 'q', 'v', 'i'],
    ['l', 'q', 'w', 'f', 'y', 'g', 'w', 'f', 'a', 'u', 'x', 'q']
];
console.log(stringSearch(grid, 'paprika')); // -> true
grid = [
    ['s', 's', 's', 's', 's', 's', 's', 's', 's', 's', 's'],
    ['s', 's', 's', 's', 's', 's', 's', 's', 's', 's', 's'],
    ['s', 's', 's', 's', 's', 's', 's', 's', 's', 's', 's'],
    ['s', 's', 's', 's', 's', 's', 's', 's', 's', 's', 's'],
    ['s', 's', 's', 's', 's', 's', 's', 's', 's', 's', 's'],
    ['s', 's', 's', 's', 's', 's', 's', 's', 's', 's', 's'],
    ['s', 's', 's', 's', 's', 's', 's', 's', 's', 's', 's'],
    ['s', 's', 's', 's', 's', 's', 's', 's', 's', 'x', 'x'],
    ['s', 's', 's', 's', 's', 's', 's', 's', 's', 'x', 'h'],
];
console.log(stringSearch(grid, 'sssssssh')); // -> false
grid = [
    ['a', 'b', 'a'],
    ['t', 'x', 'x'],
    ['x', 'x', 'x'],
];
console.log(stringSearch(grid, 'abat')); // -> true