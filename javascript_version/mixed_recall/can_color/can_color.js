// can color
// Write a function, can_color, that takes in a dictionary representing the adjacency 
// list of an undirected graph. The function should return a boolean indicating whether 
// or not it is possible to color nodes of the graph using two colors in such a way 
// that adjacent nodes are always different colors.

// For example, given this graph:

// x-y-z

// It is possible to color the nodes by using red for x and z, 
// then use blue for y. So the answer is True.

// For example, given this graph:

//     q
//    / \
//   s - r

// It is not possible to color the nodes without making two 
// adjacent nodes the same color. So the answer is False.


const canColor = (graph) => {
    // todo

};


const parseGraph = (graph, colorMapping, node, currColor) => {
    
}


console.log(canColor({
    x: ["y"],
    y: ["x", "z"],
    z: ["y"]
})); // -> true
console.log(canColor({
    q: ["r", "s"],
    r: ["q", "s"],
    s: ["r", "q"]
})); // -> false
console.log(canColor({
    a: ["b", "c", "d"],
    b: ["a"],
    c: ["a"],
    d: ["a"],
})); // -> true
console.log(canColor({
    a: ["b", "c", "d"],
    b: ["a"],
    c: ["a", "d"],
    d: ["a", "c"],
})); // -> false
console.log(canColor({
    h: ["i", "k"],
    i: ["h", "j"],
    j: ["i", "k"],
    k: ["h", "j"],
})); // -> true
console.log(canColor({
    z: []
})); // -> true

console.log(canColor({
    h: ["i", "k"],
    i: ["h", "j"],
    j: ["i", "k"],
    k: ["h", "j"],
    q: ["r", "s"],
    r: ["q", "s"],
    s: ["r", "q"]
})); // -> false