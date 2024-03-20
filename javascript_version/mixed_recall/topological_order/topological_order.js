// topological order
// Write a function, topologicalOrder, that takes in an 
// object representing the adjacency list for a directed-acyclic graph.
//  The function should return an array containing the topological-order of the graph.
//  https://en.wikipedia.org/wiki/Topological_sorting
// The topological ordering of a graph is a sequence where "parent nodes"
//  appear before their "children" within the sequence.

const topologicalOrder = (graph) => {
    // todo

    let parentCount = {};
    for (let node in graph) {
        parentCount[node] = 0;
    }
    //warning does not work unless using node compliation via terminal
    // const parentCount = Object.fromEntries(Object.keys(graph).map((key) => [key, 0]));
    for (let parentNode in graph) {
        for (let childNode of graph[parentNode]) {
            parentCount[childNode] += 1;
        }
    }
    // console.table(parentCount)

    //add parent only nodes (nodes with no parents) to a hash
    let result = [];
    let order = [];
    for (let parentNode in parentCount) {
        if (parentCount[parentNode] === 0) { result.push(parentNode); }
    }
    while (result.length !== 0) {
        let node = result.pop();
        order.push(node);
        for (let nextNode of graph[node]) {
            parentCount[nextNode] -= 1;
            if (parentCount[nextNode] === 0) {
                result.push(nextNode);
            }
        }
    }

    return order;
};

console.log(topologicalOrder({
    a: ["f"],
    b: ["d"],
    c: ["a", "f"],
    d: ["e"],
    e: [],
    f: ["b", "e"],
})); // -> ['c', 'a', 'f', 'b', 'd', 'e']
console.log(topologicalOrder({
    h: ["l", "m"],
    i: ["k"],
    j: ["k", "i"],
    k: ["h", "m"],
    l: ["m"],
    m: [],
})); // -> ['j', 'i', 'k', 'h', 'l', 'm']
console.log(topologicalOrder({
    q: [],
    r: ["q"],
    s: ["r"],
    t: ["s"],
})); // -> ['t', 's', 'r', 'q']
console.log(topologicalOrder({
    v: ["z", "w"],
    w: [],
    x: ["w", "v", "z"],
    y: ["x"],
    z: ["w"],
})); // -> ['y', 'x', 'v', 'z', 'w']