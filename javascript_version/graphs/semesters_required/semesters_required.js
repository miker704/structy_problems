// semesters required
// Write a function, semestersRequired, that takes in a number of courses (n) 
// and a list of prerequisites as arguments. Courses have ids ranging from 0 through n - 1.
//  A single prerequisite of {A, B} means that course A must be taken before course B. Return 
//  the minimum number of semesters required to complete all n courses. There is no limit on how 
//  many courses you can take in a single semester, as long the prerequisites of a course are 
//  satisfied before taking it.

// Note that given prerequisite {A, B}, you cannot take course A and course B concurrently in the same 
// semester. You must take A in some semester before B.

// You can assume that it is possible to eventually complete all courses.


const semestersRequired = (numCourses, prereqs) => {
    // todo
    let graph = buildGraph(numCourses, prereqs);
    let numberOfSemesters = 0;
    let minSemesters = 0;
    let semesterHash = {};
    for (let course in graph) {
        if (graph[course].length === 0) { semesterHash[course] = 1; }
    }

    for (let courseId in graph) {
        numberOfSemesters = _semestersRequired(graph, semesterHash, courseId);
        minSemesters = Math.max(minSemesters, numberOfSemesters);
    }

    return minSemesters;
};

const _semestersRequired = (graph, semesterHash, courseId) => {
    if (courseId in semesterHash) {
        return semesterHash[courseId];
    }
    let num = 0;
    for (let course of graph[courseId]) {
        let dist = _semestersRequired(graph, semesterHash, course);
        if (dist > num) { num = dist; }
    }
    semesterHash[courseId] = num + 1;
    return semesterHash[courseId];
};




const buildGraph = (numCourses, prereqs) => {
    let graph = {};
    for (let i = 0; i < numCourses; i++) {
        graph[i] = [];
    }
    for (let course of prereqs) {
        let [x, y] = [course[0], course[1]];
        graph[x].push(y);
    }
    return graph;
}


let numCourses = 6;
let prereqs = [
    [1, 2],
    [2, 4],
    [3, 5],
    [0, 5],
];
console.log(semestersRequired(numCourses, prereqs)); // -> 3
numCourses = 7;
prereqs = [
    [4, 3],
    [3, 2],
    [2, 1],
    [1, 0],
    [5, 2],
    [5, 6],
];
console.log(semestersRequired(numCourses, prereqs)); // -> 5
numCourses = 5;
prereqs = [
    [1, 0],
    [3, 4],
    [1, 2],
    [3, 2],
];
console.log(semestersRequired(numCourses, prereqs)); // -> 2
numCourses = 12;
prereqs = [];
console.log(semestersRequired(numCourses, prereqs)); // -> 1
numCourses = 3;
prereqs = [
    [0, 2],
    [0, 1],
    [1, 2],
];
console.log(semestersRequired(numCourses, prereqs)); // -> 3
numCourses = 6;
prereqs = [
    [3, 4],
    [3, 0],
    [3, 1],
    [3, 2],
    [3, 5],
];
console.log(semestersRequired(numCourses, prereqs)); // -> 2