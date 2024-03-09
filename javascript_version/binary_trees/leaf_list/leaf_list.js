// leaf list
// Write a function, leafList, that takes in the root of a binary tree 
// and returns an array containing the values of all leaf nodes in left-to-right order.

class Node {
    constructor (val) {
        this.val = val;
        this.left = null;
        this.right = null;
    }
}

const leafList = (root) => {
    // todo
    if (root === null) { return []; }
    return _leafList(root, []);
};

const _leafList = (root, vec) => {
    if (root === null) { return []; }
    if (root.right === null && root.left === null) {
        vec.push(root.val);
    }
    _leafList(root.left, vec);
    _leafList(root.right, vec);
    return vec;
};



const leafListDepthFirstIter = (root) => {
    if (root === null) { return []; }
    let stack = [root];
    let result = [];
    while (stack.length !== 0) {
        let curr = stack.pop();
        if (curr.left === null && curr.right === null) {
            result.push(curr.val);
        }
        if (curr.right !== null) {
            stack.push(curr.right);
        }
        if (curr.left !== null) {
            stack.push(curr.left);
        }
    }
    return result;
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

console.log(leafList(a)); // -> [ 'd', 'e', 'f' ] 
console.log(leafListDepthFirstIter(a)); // -> [ 'd', 'e', 'f' ] 

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

console.log(leafList(a)); // -> [ 'd', 'g', 'h' ]
console.log(leafListDepthFirstIter(a)); // -> [ 'd', 'g', 'h' ]

const a1 = new Node(5);
const b1 = new Node(11);
const c1 = new Node(54);
const d1 = new Node(20);
const e1 = new Node(15);
const f1 = new Node(1);
const g1 = new Node(3);

a1.left = b1;
a1.right = c1;
b1.left = d1;
b1.right = e1;
e1.left = f1;
e1.right = g1;

//        5
//     /    \
//    11    54
//  /   \
// 20   15
//      / \
//     1  3

console.log(leafList(a1)); // -> [ 20, 1, 3, 54 ]
console.log(leafListDepthFirstIter(a1)); // -> [ 20, 1, 3, 54 ]

const x = new Node('x');

//      x

console.log(leafList(x)); // -> [ 'x' ]
console.log(leafListDepthFirstIter(x)); // -> [ 'x' ]

console.log(leafList(null)); // -> [ ]
console.log(leafListDepthFirstIter(null)); // -> [ ]
