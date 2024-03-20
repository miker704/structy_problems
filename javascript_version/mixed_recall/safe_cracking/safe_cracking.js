// safe cracking
// Oh-no! You forgot the number combination that unlocks your safe.
//  Luckily, you knew that you'd be forgetful so you previously wrote
//   down a bunch of hints that can be used to determine the correct combination. Each hint is a pair 
//   of numbers "x, y" that indicates you must enter digit "x" before "y" (but not necessarily immediately before y).

// The keypad on the safe has digits 0-9. You can assume that the hints
//  will generate exactly one working combination and that a digit can occur zero or one time in the answer.

// Write a function, safeCracking, that takes in an array of hints as
//  an argument and determines the combination that will unlock the safe. 
//  The function should return a string representing the combination.


const buildGraph = (hints) => {
    let graph = {};
    for (let hint of hints) {
        let [hintA, hintB] = hint;
        if (!(hintA in graph)) { graph[hintA] = []; }
        if (!(hintB in graph)) { graph[hintB] = []; }
        graph[hintA].push(hintB);
    }
    return graph;
}

const safeCracking = (hints) => {
    let graph = buildGraph(hints);
    let parentCount = {};
    let result = [];
    let order = '';

    for (let node in graph) { parentCount[node] = 0; }

    for (let parentNode in graph) {
        for (let childNode of graph[parentNode]) {
            parentCount[childNode] += 1;
        }
    }

    for (let node in parentCount) {
        if (parentCount[node] === 0) { result.push(node); }
    }
    while (result.length !== 0) {
        let node = result.pop();
        order += node;
        for (let childNode of graph[node]) {
            parentCount[childNode] -= 1;
            if (parentCount[childNode] === 0) {
                result.push(childNode);
            }
        }
    }
    return order;
};


console.log(safeCracking([
    [7, 1],
    [1, 8],
    [7, 8],
])); // -> '718'
console.log(safeCracking([
    [3, 1],
    [4, 7],
    [5, 9],
    [4, 3],
    [7, 3],
    [3, 5],
    [9, 1],
])); // -> '473591'
console.log(safeCracking([
    [2, 5],
    [8, 6],
    [0, 6],
    [6, 2],
    [0, 8],
    [2, 3],
    [3, 5],
    [6, 5],
])); // -> '086235'
console.log(safeCracking([
    [0, 1],
    [6, 0],
    [1, 8],
])); // -> '6018'
console.log(safeCracking([
    [8, 9],
    [4, 2],
    [8, 2],
    [3, 8],
    [2, 9],
    [4, 9],
    [8, 4],
])); // -> '38429'




// const safeCracking = (hints) => {
//     let graph = buildGraph(hints);
//     let combination = [];
//     let result = [];
//     let parentCount = {}
//     console.log(`hints:`);
//     console.table(hints);
//     console.log(`graph:`);

//     console.table(graph);
//     for (let node in graph) {
//         parentCount[node] = 0;
//     }
//     console.log(`parentCount:`);

//     console.table(parentCount);
//     for (let node in graph) {
//         for (let child of graph[node]) {
//             parentCount[child] += 1;
//         }
//     }
//     console.log(`parentCount after:`);

//     console.table(parentCount);

//     for (let node in parentCount) {
//         if (parentCount[node] === 0) {
//             result.push(node);
//         }
//     }
//     console.log(`result :`);
//     console.table(result);
//     while (result.length !== 0) {
//         let node = result.pop();
//         combination.push(node);
//         for (let child of graph[node]) {
//             parentCount[child] -= 1;
//             if (parentCount[child] === 0) {
//                 result.push(child);
//             }
//         }
//     }
//     console.table(`combination`);
//     console.table(combination);
//     return combination.join("");
// };