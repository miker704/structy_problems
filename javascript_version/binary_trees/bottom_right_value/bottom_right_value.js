// bottom right value
// Write a function, bottomRightValue, that takes in a pointer to the root of a binary tree. 
// The function should return the right-most value in the bottom-most level of the tree.

// You may assume that the input tree is non-empty.


class Node {
    constructor (val) {
        this.val = val;
        this.left = null;
        this.right = null;
    }
}

const bottomRightValue = (root) => {

    if (root.right === null && root.left === null) {
        return root.val;
    }
    let queue = [root];
    let bottomRValue = queue[0].val;
    while (queue.length !== 0) {
        let curr = queue.shift();
        bottomRValue = curr.val;
        if (curr.left !== null) {
            queue.push(curr.left);
        }
        if (curr.right !== null) {
            queue.push(curr.right);
        }

    }
    return bottomRValue;
};



const a = new Node(3);
const b = new Node(11);
const c = new Node(10);
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
//   11     10
//  / \      \
// 4   -2     1

console.log(bottomRightValue(a)); // -> 1
const a1 = new Node(-1);
const b1 = new Node(-6);
const c1 = new Node(-5);
const d1 = new Node(-3);
const e1 = new Node(-4);
const f1 = new Node(-13);
const g1 = new Node(-2);
const h1 = new Node(6);

a1.left = b1;
a1.right = c1;
b1.left = d1;
b1.right = e1;
c1.right = f1;
e1.left = g1;
e1.right = h1;

//        -1
//      /   \
//    -6    -5
//   /  \     \
// -3   -4   -13
//     / \       
//    -2  6

console.log(bottomRightValue(a1)); // -> 6

const i1 = new Node(7);



f1.left = i1;

//        -1
//      /   \
//    -6    -5
//   /  \     \
// -3   -4   -13
//     / \    /   
//    -2  6  7 

console.log(bottomRightValue(a1)); // -> 7
const a2 = new Node('a');
const b2 = new Node('b');
const c2 = new Node('c');
const d2 = new Node('d');
const e2 = new Node('e');
const f2 = new Node('f');

a2.left = b2;
a2.right = c2;
b2.right = d2;
d2.left = e2;
e2.right = f2;

//      a
//    /   \ 
//   b     c
//    \
//     d
//    /
//   e
//  /
// f

console.log(bottomRightValue(a2)); // -> 'f'
const a3 = new Node(42);
const a4 = new Node(12);
const a5 = new Node(2);
const a6 = new Node(222);
const a7 = new Node(4);

//      42

console.log(bottomRightValue(a3)); // -> 42

// a3.left = a4;
// a4.left = a5;
// a5.left = a6;
// a6.left = a7;

// console.log(bottomRightValue(a3)); // -> 42
