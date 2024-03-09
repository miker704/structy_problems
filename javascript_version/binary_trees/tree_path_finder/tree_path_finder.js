// tree path finder
// Write a function, pathFinder, that takes in a pointer to the root of a binary tree 
// and a target value. The function should return a pointer to a vector representing 
// a path to the target value.

// Be sure to dynamically allocate the vector with new.

// If the target value is not present in the tree, then return nullptr;

// You may assume that the tree contains unique values.
class Node {
    constructor (val) {
        this.val = val;
        this.left = null;
        this.right = null;
    }
}

const pathFinder = (root, target) => {
    // todo
    let vec = _pathFinder(root, target);
    return vec === null ? null : vec.reverse();
};
const _pathFinder = (root, target) => {
    // todo
    if (root === null) { return null; }
    if (root.val === target) { return [root.val]; }
    let leftSide = _pathFinder(root.left, target);
    if (leftSide !== null) { 
        leftSide.push(root.val);
        return leftSide;
    }
    let rightSide = _pathFinder(root.right, target);
    if (rightSide !== null) { 
        rightSide.push(root.val);
        return rightSide;
     }
    return null;
};

const a = new Node("a");
const b = new Node("b");
const c = new Node("c");
const d = new Node("d");
const e = new Node("e");
const f = new Node("f");

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

console.log(pathFinder(a, 'e')); // -> [ 'a', 'b', 'e' ]
// const a = new Node("a");
// const b = new Node("b");
// const c = new Node("c");
// const d = new Node("d");
// const e = new Node("e");
// const f = new Node("f");

// a.left = b;
// a.right = c;
// b.left = d;
// b.right = e;
// c.right = f;

//      a
//    /   \
//   b     c
//  / \     \
// d   e     f

console.log(pathFinder(a, 'p')); // -> null

// const a = new Node("a");
// const b = new Node("b");
// const c = new Node("c");
// const d = new Node("d");
// const e = new Node("e");
// const f = new Node("f");
const g = new Node("g");
const h = new Node("h");

a.left = b;
a.right = c;
b.left = d;
b.right = e;
c.right = f;
e.left = g;
f.right = h;

//      a
//    /   \
//   b     c
//  / \     \
// d   e     f
//    /       \
//   g         h

console.log(pathFinder(a, "c")); // -> ['a', 'c']
// const a = new Node("a");
// const b = new Node("b");
// const c = new Node("c");
// const d = new Node("d");
// const e = new Node("e");
// const f = new Node("f");
// const g = new Node("g");
// const h = new Node("h");

a.left = b;
a.right = c;
b.left = d;
b.right = e;
c.right = f;
e.left = g;
f.right = h;

//      a
//    /   \
//   b     c
//  / \     \
// d   e     f
//    /       \
//   g         h

console.log(pathFinder(a, "h")); // -> ['a', 'c', 'f', 'h']
const x = new Node("x");

//      x

console.log(pathFinder(x, "x")); // -> ['x']
console.log(pathFinder(null, "x")); // -> null
const root = new Node(0);
let curr = root;
for (let i = 1; i <= 6000; i += 1) {
    curr.right = new Node(i);
    curr = curr.right;
}

//      0
//       \
//        1
//         \
//          2
//           \
//            3
//             .
//              .
//               .
//              5999
//                \
//                6000

console.log(pathFinder(root, 3451)); // -> [0, 1, 2, 3, ..., 3450, 3451]