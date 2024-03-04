// shortest path
// Write a function, shortest_path, that takes in a list of edges for an undirected graph and
// two nodes (node_A, node_B). The function should return the length of the shortest path between A and B. Consider
//  the length as
//  the number of edges in the path, not the number of nodes. If there is no path between A and B, then return -1.

//using breadth first search since we are looking for the shortest path

const shortestPath = (edges, nodeA, nodeB) => {
    
};


const buildGraph = (edges) => {
    
}



let edges = [
    ['w', 'x'],
    ['x', 'y'],
    ['z', 'y'],
    ['z', 'v'],
    ['w', 'v']
];

console.log(shortestPath(edges, 'w', 'z')); // -> 2
edges = [
    ['w', 'x'],
    ['x', 'y'],
    ['z', 'y'],
    ['z', 'v'],
    ['w', 'v']
];

console.log(shortestPath(edges, 'y', 'x')); // -> 1
edges = [
    ['a', 'c'],
    ['a', 'b'],
    ['c', 'b'],
    ['c', 'd'],
    ['b', 'd'],
    ['e', 'd'],
    ['g', 'f']
];

console.log(shortestPath(edges, 'a', 'e')); // -> 3

edges = [
    ['a', 'c'],
    ['a', 'b'],
    ['c', 'b'],
    ['c', 'd'],
    ['b', 'd'],
    ['e', 'd'],
    ['g', 'f']
];

console.log(shortestPath(edges, 'e', 'c')); // -> 2

edges = [
    ['a', 'c'],
    ['a', 'b'],
    ['c', 'b'],
    ['c', 'd'],
    ['b', 'd'],
    ['e', 'd'],
    ['g', 'f']
];

console.log(shortestPath(edges, 'b', 'g')); // -> -1

edges = [
    ['c', 'n'],
    ['c', 'e'],
    ['c', 's'],
    ['c', 'w'],
    ['w', 'e'],
];

console.log(shortestPath(edges, 'w', 'e')); // -> 1

edges = [
    ['c', 'n'],
    ['c', 'e'],
    ['c', 's'],
    ['c', 'w'],
    ['w', 'e'],
];

console.log(shortestPath(edges, 'n', 'e')); // -> 2

edges = [
    ['m', 'n'],
    ['n', 'o'],
    ['o', 'p'],
    ['p', 'q'],
    ['t', 'o'],
    ['r', 'q'],
    ['r', 's']
];

console.log(shortestPath(edges, 'm', 's')); // -> 6