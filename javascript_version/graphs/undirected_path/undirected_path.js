// undirected path
// Write a function, undirectedPath, that takes in a vector of edges for an undirected graph and two nodes (nodeA, nodeB).
//  The function should return a boolean indicating whether or not there exists a path between nodeA and nodeB.

//dfs method


//we have to build the graph first undirected graphs follow the proof of if
//pair of verties (x,y) exist so does the reverse of this pair (y,x)
// they have no set direction in from x to y  we can move between x and y 
// by doing x to y or y to x there is no arrow indicated the only direction between the two
//points so it is drawn as x-y or x<->y

//this is recursive dfs 
const undirectedPath = (edges, nodeA, nodeB) => {

  };
  
  
  const undirectedPathDFSIter = (edges, nodeA, nodeB) => {


    
  }
  
  const hasPath = (graph, nodeA, nodeB, visited) => {

  }
  
  
  const undirectedPathBFS = (edges, nodeA, nodeB) => {
  
  }
  
  
  const buildUndirectedGraph = (edges) => {
  
    
  }
  
  
  let edges = [
    ['i', 'j'],
    ['k', 'i'],
    ['m', 'k'],
    ['k', 'l'],
    ['o', 'n']
  ];
  
  // console.table(buildUndirectedGraph(edges));
  console.log(undirectedPath(edges, 'j', 'm')); // -> true
  // console.log(undirectedPathDFSIter(edges, 'j', 'm')); // -> true
  // console.log(undirectedPathBFS(edges, 'j', 'm')); // -> true
  
  edges = [
    ['i', 'j'],
    ['k', 'i'],
    ['m', 'k'],
    ['k', 'l'],
    ['o', 'n']
  ];
  console.log(undirectedPath(edges, 'm', 'j'));// -> true
  // console.log(undirectedPathDFSIter(edges, 'm', 'j'));// -> true
  // console.log(undirectedPathBFS(edges, 'm', 'j'));// -> true
  
  edges = [
    ['i', 'j'],
    ['k', 'i'],
    ['m', 'k'],
    ['k', 'l'],
    ['o', 'n']
  ];
  console.log(undirectedPath(edges, 'l', 'j'));// -> true
  // console.log(undirectedPathDFSIter(edges, 'l', 'j'));// -> true
  // console.log(undirectedPathBFS(edges, 'l', 'j'));// -> true
  
  edges = [
    ['i', 'j'],
    ['k', 'i'],
    ['m', 'k'],
    ['k', 'l'],
    ['o', 'n']
  ];
  console.log(undirectedPath(edges, 'k', 'o'));// -> false
  // console.log(undirectedPathDFSIter(edges, 'k', 'o'));// -> false
  // console.log(undirectedPathBFS(edges, 'k', 'o'));// -> false
  
  edges = [
    ['i', 'j'],
    ['k', 'i'],
    ['m', 'k'],
    ['k', 'l'],
    ['o', 'n']
  ];
  console.log(undirectedPath(edges, 'i', 'o'));// -> false
  // console.log(undirectedPathDFSIter(edges, 'i', 'o'));// -> false
  // console.log(undirectedPathBFS(edges, 'i', 'o'));// -> false
  
  edges = [
    ['b', 'a'],
    ['c', 'a'],
    ['b', 'c'],
    ['q', 'r'],
    ['q', 's'],
    ['q', 'u'],
    ['q', 't'],
  ];
  
  console.log(undirectedPath(edges, 'a', 'b'));// -> true
  // console.log(undirectedPathDFSIter(edges, 'a', 'b'));// -> true
  // console.log(undirectedPathBFS(edges, 'a', 'b'));// -> true
  
  edges = [
    ['b', 'a'],
    ['c', 'a'],
    ['b', 'c'],
    ['q', 'r'],
    ['q', 's'],
    ['q', 'u'],
    ['q', 't'],
  ];
  
  console.log(undirectedPath(edges, 'a', 'c'));  // -> true
  // console.log(undirectedPathDFSIter(edges, 'a', 'c'));  // -> true
  // console.log(undirectedPathBFS(edges, 'a', 'c'));  // -> true
  
  edges = [
    ['b', 'a'],
    ['c', 'a'],
    ['b', 'c'],
    ['q', 'r'],
    ['q', 's'],
    ['q', 'u'],
    ['q', 't'],
  ];
  console.log(undirectedPath(edges, 'r', 't'));// -> true
  // console.log(undirectedPathDFSIter(edges, 'r', 't'));// -> true
  // console.log(undirectedPathBFS(edges, 'r', 't'));// -> true
  
  edges = [
    ['b', 'a'],
    ['c', 'a'],
    ['b', 'c'],
    ['q', 'r'],
    ['q', 's'],
    ['q', 'u'],
    ['q', 't'],
  ];
  console.log(undirectedPath(edges, 'r', 'b'));// -> false
  // console.log(undirectedPathDFSIter(edges, 'r', 'b'));// -> false
  // console.log(undirectedPathBFS(edges, 'r', 'b'));// -> false
  
  edges = [
    ['s', 'r'],
    ['t', 'q'],
    ['q', 'r'],
  ];
  console.log(undirectedPath(edges, 'r', 't'));// -> true
  // console.log(undirectedPathDFSIter(edges, 'r', 't'));// -> true
  // console.log(undirectedPathBFS(edges, 'r', 't'));// -> true
  
  