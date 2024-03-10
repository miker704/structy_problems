// largest component
// Write a function, largestComponent, that takes in an unordered_map representing the adjacency
//  list of an undirected graph.
//  The function should return the size of the largest connected component in the graph.

const largestComponent = (graph) => {
  // todo
  let maxCount = 0;
  for (let currNode in graph) {
    maxCount = Math.max(hasPath(graph, currNode, new Set()), maxCount);
  }
  return maxCount;
};

const hasPath = (graph, currNode, visitedNodes) => {
  if (visitedNodes.has(String(currNode))) {
    return 0;
  }
  visitedNodes.add(String(currNode));
  for (let curr of graph[currNode]) {
    hasPath(graph, curr, visitedNodes);
  }
  return visitedNodes.size;
}


console.log(largestComponent({
  0: ['8', '1', '5'],
  1: ['0'],
  5: ['0', '8'],
  8: ['0', '5'],
  2: ['3', '4'],
  3: ['2', '4'],
  4: ['3', '2']
})); // -> 4
console.log(largestComponent({
  1: ['2'],
  2: ['1', '8'],
  6: ['7'],
  9: ['8'],
  7: ['6', '8'],
  8: ['9', '7', '2']
})); // -> 6
console.log(largestComponent({
  3: [],
  4: ['6'],
  6: ['4', '5', '7', '8'],
  8: ['6'],
  7: ['6'],
  5: ['6'],
  1: ['2'],
  2: ['1']
}));// -> 5
console.log(largestComponent({}));// -> 0
console.log(largestComponent({
  0: ['4', '7'],
  1: [],
  2: [],
  3: ['6'],
  4: ['0'],
  6: ['3'],
  7: ['0'],
  8: []
}));// -> 3
