// tree min value
// Write a function, treeMinValue, that takes in a pointer to the root of a binary tree that contains number values. 
// The function should return the minimum value within the tree.

// You may assume that the input tree is non-empty.

class Node {
    constructor (val) {
        this.val = val;
        this.left = null;
        this.right = null;
    }
}

const treeMinValueDFS = (root) => {
    // todo
    if (root === null) { return Infinity; }

    let minValue = Infinity;
    let stack = [root];
    while (stack.length !== 0) {
        let curr = stack.pop();
        minValue = Math.min(minValue, curr.val);
        if (curr.left !== null) {
            stack.push(curr.left);
        }
        if (curr.right !== null) {
            stack.push(curr.right);
        }

    }
    return minValue;
};

const treeMinValueBFS = (root) => {
    // todo
    if (root === null) { return Infinity; }
    let queue = [root];
    let minValue = Infinity;
    while (queue.length !== 0) {
        let curr = queue.shift();
        minValue = Math.min(minValue, curr.val);
        if (curr.left !== null) {
            queue.push(curr.left);
        }
        if (curr.right !== null) {
            queue.push(curr.right);
        }
    }
    return minValue;
};


const treeMinValueRecurDFS = (root) => {
    // todo
    if (root === null) { return Infinity; }
    let smallestLeftSubTreeValue = treeMinValueRecurDFS(root.left);
    let smallestrightSubTreeValue = treeMinValueRecurDFS(root.right);
    return Math.min(root.val, smallestLeftSubTreeValue, smallestrightSubTreeValue);
};

const a = new Node(3);
const b = new Node(11);
const c = new Node(4);
const d = new Node(4);
const e = new Node(-2);
const f = new Node(1);

a.left = b;
a.right = c;
b.left = d;
b.right = e;
c.right = f;

//       3
//    /    \
//   11     4
//  / \      \
// 4   -2     1

console.log(treeMinValueDFS(a)); // -> -2
console.log(treeMinValueBFS(a)); // -> -2
console.log(treeMinValueRecurDFS(a)); // -> -2

const a1 = new Node(5);
const b1 = new Node(11);
const c1 = new Node(3);
const d1 = new Node(4);
const e1 = new Node(14);
const f1 = new Node(12);

a1.left = b1;
a1.right = c1;
b1.left = d1;
b1.right = e1;
c1.right = f1;

//       5
//    /    \
//   11     3
//  / \      \
// 4   14     12

console.log(treeMinValueDFS(a1)); // -> 3
console.log(treeMinValueBFS(a1)); // -> 3
console.log(treeMinValueRecurDFS(a1)); // -> 3

const a2 = new Node(-1);
const b2 = new Node(-6);
const c2 = new Node(-5);
const d2 = new Node(-3);
const e2 = new Node(-4);
const f2 = new Node(-13);
const g2 = new Node(-2);
const h2 = new Node(-2);

a2.left = b2;
a2.right = c2;
b2.left = d2;
b2.right = e2;
c2.right = f2;
e2.left = g2;
f2.right = h2;

//        -1
//      /   \
//    -6    -5
//   /  \     \
// -3   -4   -13
//     /       \
//    -2       -2

console.log(treeMinValueDFS(a2)); // -> -13
console.log(treeMinValueBFS(a2)); // -> -13
console.log(treeMinValueRecurDFS(a2)); // -> -13

const a3 = new Node(42);

//        42

console.log(treeMinValueDFS(a3)); // -> 42
console.log(treeMinValueBFS(a3)); // -> 42
console.log(treeMinValueRecurDFS(a3)); // -> 42
