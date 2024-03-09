// all tree paths
// Write a function, all_tree_paths, that takes in the root of a binary tree.
//  The function should return a 2-Dimensional list where each subarray represents a 
//  root-to-leaf path in the tree.

// The order within an individual path must start at the root and end at the leaf, 
// but the relative order among paths in the outer list does not matter.

class Node {
    constructor (val) {
        this.val = val;
        this.left = null;
        this.right = null;
    }
}

const allTreePaths = (root) => {
    if (root === null) { return []; }
    if (root.left === null && root.right === null) { return [[root.val]]; }
    let result = [];
    let left = allTreePaths(root.left);
    for (let subarray of left) {
        result.push([root.val, ...subarray]);
    }
    let right = allTreePaths(root.right);
    for (let subarray of right) {
        result.push([root.val, ...subarray]);
    }
    return result;
};


const a = new Node('a');
const b = new Node('b');
const c = new Node('c');
const d = new Node('d');
const e = new Node('e');
const f = new Node('f');

a.left = b;
a.right = c;
b.left = d;
b.right = e;
c.right = f;

//      a
//    /   \
//   b     c
//  / \     \
// d   e     f

console.table(allTreePaths(a)); // ->
// [ 
//   [ 'a', 'b', 'd' ], 
//   [ 'a', 'b', 'e' ], 
//   [ 'a', 'c', 'f' ] 
// ] 
//   const a = new Node('a');
//   const b = new Node('b');
//   const c = new Node('c');
//   const d = new Node('d');
//   const e = new Node('e');
//   const f = new Node('f');
const g = new Node('g');
const h = new Node('h');
const i = new Node('i');

a.left = b;
a.right = c;
b.left = d;
b.right = e;
c.right = f;
e.left = g;
e.right = h;
f.left = i;

//         a
//      /    \
//     b      c
//   /  \      \
//  d    e      f
//      / \    /   
//     g  h   i 

console.table(allTreePaths(a)); // ->
// [ 
//   [ 'a', 'b', 'd' ], 
//   [ 'a', 'b', 'e', 'g' ], 
//   [ 'a', 'b', 'e', 'h' ], 
//   [ 'a', 'c', 'f', 'i' ] 
// ] 
const q = new Node('q');
const r = new Node('r');
const s = new Node('s');
const t = new Node('t');
const u = new Node('u');
const v = new Node('v');

q.left = r;
q.right = s;
r.right = t;
t.left = u;
u.right = v;

//      q
//    /   \ 
//   r     s
//    \
//     t
//    /
//   u
//  /
// v

console.table(allTreePaths(q)); // ->
// [ 
//   [ 'q', 'r', 't', 'u', 'v' ], 
//   [ 'q', 's' ] 
// ] 
const z = new Node('z');

//      z

console.table(allTreePaths(z)); // -> 
// [
//   ['z']
// ]