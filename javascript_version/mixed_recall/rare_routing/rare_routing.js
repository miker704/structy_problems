// rare routing
// Write a function, rareRouting, that takes in a number of cities (n) 
// and a two dimensional 
// array where each subarray represents a direct road that connects a pair of cities.
//  The function should return a boolean indicating whether or not there exists a unique
//   route for every pair of cities. A route is a sequence of roads that does not
//    visit a city more than once.

// Cities will be numbered 0 to n - 1.

// You can assume that all roads are two-way roads. This means if there is a road between A and B, 
// then you can use that road to go from A to B or go from B to A.

// For example, given these roads:

// 0 --- 1
// | \
// |  \
// |   \
// 2    3

// There is a unique route for between every pair of cities.
// So the answer is true.


// For example, given these roads:

// 0 --- 1
// | \
// |  \
// |   \
// 2 -- 3

// There are two routes that can be used to travel from city 1 to city 2:
// - first route:  1, 0, 2
// - second route: 1, 0, 3, 2 
// The answer is false, because routes should be unique.


const rareRouting = (n, roads) => {
    let visited = new Set();
    let graph = buildGraph(n, roads);
    let check = roadPathCheck(graph, visited, 0, -1);
    return check && visited.size === n;
};

const buildGraph = (n, roads) => {
    let graph = {};
    for (let i = 0; i < n; i++) {
        graph[i] = [];
    }
    for (let road of roads) {
        graph[road[0]].push(road[1]);
        graph[road[1]].push(road[0]);
    }
    return graph;
};


const roadPathCheck = (graph, visited, node, previousNode) => {
    if (visited.has(node)) { return false; }
    visited.add(node);
    for (let currRoad of graph[node]) {
        if (previousNode !== currRoad)

            if (roadPathCheck(graph, visited, currRoad, node) === false) { return false; }
    }
    return true;
};


console.log(rareRouting(4, [
    [0, 1],
    [0, 2],
    [0, 3]
])); // -> true
console.log(rareRouting(4, [
    [0, 1],
    [0, 2],
    [0, 3],
    [3, 2]
])); // -> false
console.log(rareRouting(6, [
    [1, 2],
    [5, 4],
    [3, 0],
    [0, 1],
    [0, 4],
])); // -> true
console.log(rareRouting(6, [
    [1, 2],
    [4, 1],
    [5, 4],
    [3, 0],
    [0, 1],
    [0, 4],
])); // -> false
console.log(rareRouting(4, [
    [0, 1],
    [3, 2],
])); // -> false