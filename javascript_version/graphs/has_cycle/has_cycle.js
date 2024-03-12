// has cycle
// Write a function, hasCycle, that takes in an unordered map representing the adjacency 
// list of a directed graph. The function should return a boolean indicating whether 
// or not the graph contains a cycle.




const hasCycle = (graph) => {
    let black = new Set();
    let result = false;
    for (let node in graph) {
        if (_hasCycle(graph, new Set(), black, node) === true) {
            return true;
        }
    }

    return result;
};


const _hasCycle = (graph, grey, black, node) => {


    if (grey.has(node) === true) {
        return true;
    }
    grey.add(node);
    if (black.has(node) === true) {
        return false;
    }

    for (let pos of graph[node]) {
        if (_hasCycle(graph, grey, black, pos) === true) {
            return true;
        }
    }
    grey.delete(node);
    black.add(node);
    return false;
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