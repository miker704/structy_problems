// tolerant teams
// # Write a function, tolerantTeams, that takes in a vector of rivalries 
// # as an argument. A rivalry is a pair of people who should not be placed 
// #  on the same team. The function should return a boolean indicating whether or not it is possible to
// #  separate people into two teams, without rivals being on the same team. 
// #  The two teams formed do not have to be the same size.

const tolerantTeams = (rivalries) => {
    // todo
    let colorMapping = {};
    let graph = buildTeams(rivalries);
    for (let team in graph) {
        if (!(team in colorMapping) && parseTeams(graph, colorMapping, team, true) === false) {
            return false;
        }
    }
    return true;
};


const parseTeams = (graph, colorMapping, node, currColor) => {
    if (node in colorMapping) { return colorMapping[node] === currColor; }
    colorMapping[node] = currColor;
    for (let currNode of graph[node]) {
        if (parseTeams(graph, colorMapping, currNode, !colorMapping[node]) === false) {
            return false;
        }
    }
    return true;
}


const buildTeams = (rivalries) => {
    let graph = {};
    for (let pair of rivalries) {
        let [x, y] = pair;
        if (!(x in graph)) { graph[x] = []; }
        if (!(y in graph)) { graph[y] = []; }
        graph[x].push(y);
        graph[y].push(x);
    }
    return graph;
}

console.log(tolerantTeams([
    ['philip', 'seb'],
    ['raj', 'nader']
])); // -> true
console.log(tolerantTeams([
    ['philip', 'seb'],
    ['raj', 'nader'],
    ['raj', 'philip'],
    ['seb', 'raj']
])); // -> false
console.log(tolerantTeams([
    ['cindy', 'anj'],
    ['alex', 'matt'],
    ['alex', 'cindy'],
    ['anj', 'matt'],
    ['brando', 'matt']
])); // -> true
console.log(tolerantTeams([
    ['alex', 'anj'],
    ['alex', 'matt'],
    ['alex', 'cindy'],
    ['anj', 'matt'],
    ['brando', 'matt']
])); // -> false
console.log(tolerantTeams([
    ['alan', 'jj'],
    ['betty', 'richard'],
    ['jj', 'simcha'],
    ['richard', 'christine']
])); // -> true
console.log(tolerantTeams([
    ['alan', 'jj'],
    ['betty', 'richard'],
    ['jj', 'simcha'],
    ['richard', 'christine']
])); // -> true
console.log(tolerantTeams([
    ['alan', 'jj'],
    ['jj', 'richard'],
    ['betty', 'richard'],
    ['jj', 'simcha'],
    ['richard', 'christine']
])); // -> true
console.log(tolerantTeams([
    ['alan', 'jj'],
    ['betty', 'richard'],
    ['betty', 'christine'],
    ['jj', 'simcha'],
    ['richard', 'christine']
])); // -> false