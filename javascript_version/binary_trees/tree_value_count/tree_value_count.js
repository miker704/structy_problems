
// tree value count
// Write a function, treeValueCount, that takes in the root of a binary tree and a target value. 
// The function should return the number of times that the target occurs in the tree.

class Node {
    constructor (val) {
        this.val = val;
        this.left = null;
        this.right = null;
    }
}

const treeValueCount = (root, target) => {
    // todo
    if (root === null) { return 0; }
    let match = root.val === target ? 1 : 0;
    return match + treeValueCount(root.left, target) + treeValueCount(root.right, target);
};

const treeValueCountBreadth = (root, target) => {
    // todo
    if (root === null) { return 0; }
    let count = 0;
    let queue = [root];
    while (queue.length !== 0) {
        let curr = queue.shift();
        if (curr.val === target) { count++; }
        if (curr.left !== null) {
            queue.push(curr.left);
        }
        if (curr.right !== null) {
            queue.push(curr.right);
        }
    }
    return count;
};

const a = new Node(12);
const b = new Node(6);
const c = new Node(6);
const d = new Node(4);
const e = new Node(6);
const f = new Node(12);

a.left = b;
a.right = c;
b.left = d;
b.right = e;
c.right = f;

//      12
//    /   \
//   6     6
//  / \     \
// 4   6     12

console.log(treeValueCount(a, 6)); // -> 3
console.log(treeValueCountBreadth(a, 6)); // -> 3

// const a = new Node(12);
// const b = new Node(6);
// const c = new Node(6);
// const d = new Node(4);
// const e = new Node(6);
// const f = new Node(12);

// a.left = b;
// a.right = c;
// b.left = d;
// b.right = e;
// c.right = f;

//      12
//    /   \
//   6     6
//  / \     \
// 4  6     12

console.log(treeValueCount(a, 12)); // -> 2
console.log(treeValueCountBreadth(a, 12)); // -> 2

const a1 = new Node(7);
const b1 = new Node(5);
const c1 = new Node(1);
const d1 = new Node(1);
const e1 = new Node(8);
const f1 = new Node(7);
const g1 = new Node(1);
const h1 = new Node(1);

a1.left = b1;
a1.right = c1;
b1.left = d1;
b1.right = e1;
c1.right = f1;
e1.left = g1;
f1.right = h1;

//      7
//    /   \
//   5     1
//  / \     \
// 1   8     7
//    /       \
//   1         1
console.log(treeValueCount(a1, 1)); // -> 4
console.log(treeValueCountBreadth(a1, 1)); // -> 4

// const a = new Node(7);
// const b = new Node(5);
// const c = new Node(1);
// const d = new Node(1);
// const e = new Node(8);
// const f = new Node(7);
// const g = new Node(1);
// const h = new Node(1);

// a.left = b;
// a.right = c;
// b.left = d;
// b.right = e;
// c.right = f;
// e.left = g;
// f.right = h;

//      7
//    /   \
//   5     1
//  / \     \
// 1   8     7
//    /       \
//   1         1

console.log(treeValueCount(a1, 9)); // -> 0
console.log(treeValueCountBreadth(a1, 9)); // -> 0

console.log(treeValueCount(null, 42)); // -> 0
console.log(treeValueCountBreadth(null, 42)); // -> 0
