// longest path
// Write a function, longestPath, that takes in an adjacency list for a 
// directed acyclic graph. The function should return the length of the 
// longest path within the graph.
//  A path may start and end at any two nodes. The length of a path is considered 
//  the number of edges in the path, not the number of nodes.


const longestPath = (graph) => {
    // todo


};

const hasPath = (graph, hash, node) => {

}



let graph = {
    a: ['c', 'b'],
    b: ['c'],
    c: []
};

console.log(longestPath(graph)); // -> 2
graph = {
    a: ['c', 'b'],
    b: ['c'],
    c: [],
    q: ['r'],
    r: ['s', 'u', 't'],
    s: ['t'],
    t: ['u'],
    u: []
};

console.log(longestPath(graph)); // -> 4
graph = {
    h: ['i', 'j', 'k'],
    g: ['h'],
    i: [],
    j: [],
    k: [],
    x: ['y'],
    y: []
};

console.log(longestPath(graph)); // -> 2
graph = {
    a: ['b'],
    b: ['c'],
    c: [],
    e: ['f'],
    f: ['g'],
    g: ['h'],
    h: []
};

console.log(longestPath(graph)); // -> 3