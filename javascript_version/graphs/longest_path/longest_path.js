// longest path
// Write a function, longestPath, that takes in an adjacency list for a 
// directed acyclic graph. The function should return the length of the 
// longest path within the graph.
//  A path may start and end at any two nodes. The length of a path is considered 
//  the number of edges in the path, not the number of nodes.


const longestPath = (graph) => {
    // todo

    let maxPath = 0;
    let hash = {};
    for (let node in graph) {
        if (graph[node].length === 0) {
            hash[node] = 0;
        }
    }
    for (let node in graph) {
        maxPath = Math.max(hasPath(graph, hash, node), maxPath);
    }
    return maxPath;
};

const hasPath = (graph, hash, node) => {
    if (node in hash) { return hash[node]; }
    let size = 0;
    for (let currNode of graph[node]) {

        let curr = hasPath(graph, hash, currNode);
        if (curr > size) { size = curr; }

    }
    hash[node] = size + 1;
    return hash[node];
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