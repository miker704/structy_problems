// has cycle
// Write a function, hasCycle, that takes in an unordered map representing the adjacency 
// list of a directed graph. The function should return a boolean indicating whether 
// or not the graph contains a cycle.




const hasCycle = (graph) => {


};


const _hasCycle = (graph, grey, black, node) => {


}

console.log(hasCycle({
    a: ["b"],
    b: ["c"],
    c: ["a"],
})); // -> true
console.log(hasCycle({
    a: ["b", "c"],
    b: ["c"],
    c: ["d"],
    d: [],
})); // -> false
console.log(hasCycle({
    a: ["b", "c"],
    b: [],
    c: [],
    e: ["f"],
    f: ["e"],
})); // -> true
console.log(hasCycle({
    q: ["r", "s"],
    r: ["t", "u"],
    s: [],
    t: [],
    u: [],
    v: ["w"],
    w: [],
    x: ["w"],
})); // -> false
console.log(hasCycle({
    a: ["b"],
    b: ["c"],
    c: ["a"],
    g: [],
})); // -> true
console.log(hasCycle({
    a: ["b"],
    b: ["c"],
    c: ["d"],
    d: ["b"],
})); // -> true