// prereqs possible
// Write a function, prereqs_possible, that takes in a number of courses (n) and prerequisites as 
// arguments. Courses have ids ranging from 0 through n - 1. A single prerequisite of (A, B) means
//  that course A must be taken before
//  course B. The function should return a boolean indicating whether or not it is possible 
//  to complete all courses.

const prereqsPossible = (numCourses, prereqs) => {
    // todo
    let graph = buildGraph(numCourses, prereqs);
    let black = new Set();
    for (let course in graph) {
        if (traverseGraph(graph, new Set(), black, course)) {
            return false;
        }
    }

    return true;
};

const traverseGraph = (graph, grey, black, node) => {

    if (grey.has(node)) {
        return true;
    }
    grey.add(node);
    if (black.has(node)) {
        return false;
    }
    for (let course of graph[node]) {
        if (traverseGraph(graph, grey, black, course)) {
            return true;
        }
    }
    grey.delete(node);
    black.add(node);
    return false;
}


const buildGraph = (numCourses, prereqs) => {
    let graph = {};
    for (let i = 0; i < numCourses; i++) {
        graph[i] = [];
    }
    for (let preqs of prereqs) {
        let [x, y] = preqs;
        graph[x].push(y);
    }
    return graph;
}

let numCourses = 6;
let prereqs = [
    [0, 1],
    [2, 3],
    [0, 2],
    [1, 3],
    [4, 5],
];
console.log(prereqsPossible(numCourses, prereqs)); // -> true
numCourses = 6;
prereqs = [
    [0, 1],
    [2, 3],
    [0, 2],
    [1, 3],
    [4, 5],
    [3, 0],
];
console.log(prereqsPossible(numCourses, prereqs)); // -> false
numCourses = 5;
prereqs = [
    [2, 4],
    [1, 0],
    [0, 2],
    [0, 4],
];
console.log(prereqsPossible(numCourses, prereqs)); // -> true
numCourses = 6;
prereqs = [
    [2, 4],
    [1, 0],
    [0, 2],
    [0, 4],
    [5, 3],
    [3, 5],
];
console.log(prereqsPossible(numCourses, prereqs)); // -> false
numCourses = 8;
prereqs = [
    [1, 0],
    [0, 6],
    [2, 0],
    [0, 5],
    [3, 7],
    [4, 3],
];
console.log(prereqsPossible(numCourses, prereqs)); // -> true

numCourses = 8;
prereqs = [
    [1, 0],
    [0, 6],
    [2, 0],
    [0, 5],
    [3, 7],
    [7, 4],
    [4, 3],
];
console.log(prereqsPossible(numCourses, prereqs)); // -> false
numCourses = 42;
prereqs = [[6, 36]];
console.log(prereqsPossible(numCourses, prereqs)); // -> true
