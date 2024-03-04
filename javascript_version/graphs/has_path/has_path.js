// has path
//     Write a function,
//     hasPath, that takes in an unordered map representing the adjacency list of a directed acyclic graph and two nodes(src, dst).
//The function should return a boolean indicating whether or not there exists a directed path
// between the source and destination nodes.

//                                                                                                                                                                                                                                                    Hey.This is our first graph problem,
//     so you should be liberal with watching the
//     Approach and Walkthrough.Be productive,
//     not stubborn.- AZ
//dfs bfs

// const hasPathDFS = (graph, src, dst) => {

//     if (src === dst) {
//         return true;
//     }
//     if (graph[src] === []) {
//         console.log(`graph[src]=[]`);
//         return false;
//     }

//     let curr = graph[src];
//     for (let i of curr) {
//         console.log(`${i} graph of i = ${graph[i]} `);
//         if (hasPathDFS(graph, i, dst)) {
//             return true;
//         }
//     }
//     return false;
// };
const hasPathDFS = (graph, src, dst) => {


};

const hasPathBFS = (graph, src, dst) => {
    // todo

};


let graph = {
    f: ['g', 'i'],
    g: ['h'],
    h: [],
    i: ['g', 'k'],
    j: ['i'],
    k: []
};

console.log("dfs");
console.log(hasPathDFS(graph, 'f', 'k')); // true
console.log("bfs");
console.log(hasPathBFS(graph, 'f', 'k')); // true

graph = {
    f: ['g', 'i'],
    g: ['h'],
    h: [],
    i: ['g', 'k'],
    j: ['i'],
    k: []
};

console.log("dfs");
console.log(hasPathDFS(graph, 'f', 'j')); // false
console.log("bfs");
console.log(hasPathBFS(graph, 'f', 'j')); // false

graph = {
    f: ['g', 'i'],
    g: ['h'],
    h: [],
    i: ['g', 'k'],
    j: ['i'],
    k: []
};

console.log("dfs");
console.log(hasPathDFS(graph, 'i', 'h')); // true
console.log("bfs");
console.log(hasPathBFS(graph, 'i', 'h')); // true

graph = {
    v: ['x', 'w'],
    w: [],
    x: [],
    y: ['z'],
    z: [],
};

console.log("dfs");
console.log(hasPathDFS(graph, 'v', 'w')); // true
console.log("bfs");
console.log(hasPathBFS(graph, 'v', 'w')); // true

graph = {
    v: ['x', 'w'],
    w: [],
    x: [],
    y: ['z'],
    z: [],
};
console.log("dfs");
console.log(hasPathDFS(graph, 'v', 'z')); // false
console.log("bfs");
console.log(hasPathBFS(graph, 'v', 'z')); // false
