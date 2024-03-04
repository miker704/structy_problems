// binary search tree includes
// Write a function, binarySearchTreeIncludes, that takes in the root of a binary search tree 
// containing numbers and a target value. The function should return a boolean indicating whether
//  or not the target is found within the tree.

// A Binary Search Tree is a binary tree where all values within a node's left subtree are smaller
//  than the node's value and all values in a node's right subtree are greater than or equal to the node's value.
// https://en.wikipedia.org/wiki/Binary_search_tree
// Your solution should have a best case runtime of O(log(n)).


class Node {
    constructor (val) {
        this.val = val;
        this.left = null;
        this.right = null;
    }
}

const binarySearchTreeIncludes = (root, target) => {

};

const a = new Node(12);
const b = new Node(5);
const c = new Node(18);
const d = new Node(3);
const e = new Node(9);
const f = new Node(19);

a.left = b;
a.right = c;
b.left = d;
b.right = e;
c.right = f;

//      12
//    /   \
//   5     18
//  / \     \
// 3   9     19
console.log(binarySearchTreeIncludes(a, 9)); // -> true
console.log(binarySearchTreeIncludes(a, 15)); // -> false
console.log(binarySearchTreeIncludes(a, 1)); // -> false
console.log(binarySearchTreeIncludes(a, 12)); // -> true
// tree q
const q = new Node(54);
const r = new Node(42);
const s = new Node(70);
const t = new Node(31);
const u = new Node(50);
const v = new Node(72);
const w = new Node(47);
const x = new Node(90);

q.left = r;
q.right = s;
r.left = t;
r.right = u;
s.right = v;
u.left = w;
v.right = x;

//       54
//     /    \
//    42     70
//   / \      \
// 31   50     72
//     /        \
//    47         90
console.log(binarySearchTreeIncludes(q, 55)); // -> false
console.log(binarySearchTreeIncludes(q, 47)); // -> true
console.log(binarySearchTreeIncludes(q, 49)); // -> false
console.log(binarySearchTreeIncludes(q, 70)); // -> true
console.log(binarySearchTreeIncludes(q, 100)); // -> false