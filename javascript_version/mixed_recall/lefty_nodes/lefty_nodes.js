// lefty nodes
// Write a function, console.log(leftyNodes, that takes in the root of a binary tree.
//  The function should return an vector containing the left-most value on every 
//  level of the tree. The vector must be ordered in a top-down fashion where the
//   root is the first element.

// Note that the left-most node on a level may not necessarily be a left child.

class Node {
    constructor (val) {
        this.val = val;
        this.left = null;
        this.right = null;
    }
}

const leftyNodes = (root) => {
    // todo
    if (root === null) { return []; }
    let leftNodes = grabLeftyNodes(root, 0, []);
    return leftNodes;
};


const grabLeftyNodes = (root, level, leftValues) => {
    if (root === null) { return []; }
    if (leftValues.length === level) { leftValues.push(root.val); }
    grabLeftyNodes(root.left, level + 1, leftValues);
    grabLeftyNodes(root.right, level + 1, leftValues);
    return leftValues;

}


const _leftyNodes = (root) => {
    // todo



};
const preorderPrint = (root) => {
    if (root === null) { return null; }
    console.log(`${root.val}`);
    preorderPrint(root.left);
    preorderPrint(root.right);

}
const inorder = (root) => {
    if (root === null) { return null; }
    inorder(root.left);
    console.log(`${root.val}`);
    inorder(root.right);
}
const inorderPrint = (root) => {
    if (root === null) { return []; }
    let left = inorderPrint(root.left);
    let right = inorderPrint(root.right);
    return [root.val, ...left, ...right];
}


const a = new Node('a');
const b = new Node('b');
const c = new Node('c');
const d = new Node('d');
const e = new Node('e');
const f = new Node('f');
const g = new Node('g');
const h = new Node('h');

a.left = b;
a.right = c;
b.left = d;
b.right = e;
c.right = f;
e.left = g;
e.right = h;

//      a
//    /    \
//   b      c
//  / \      \
// d   e      f
//    / \
//    g  h

console.log(leftyNodes(a)); // [ 'a', 'b', 'd', 'g' ]
const u = new Node('u');
const t = new Node('t');
const s = new Node('s');
const r = new Node('r');
const q = new Node('q');
const p = new Node('p');

u.left = t;
u.right = s;
s.right = r;
r.left = q;
r.right = p;

//     u
//  /    \
// t      s
//         \
//         r
//        / \
//        q  p

console.log(leftyNodes(u)); // [ 'u', 't', 'r', 'q' ]
const l1 = new Node('l');
const m1 = new Node('m');
const n1 = new Node('n');
const o1 = new Node('o');
const p1 = new Node('p');
const q1 = new Node('q');
const r1 = new Node('r');
const s1 = new Node('s');
const t1 = new Node('t');

l1.left = m1;
l1.right = n1;
n1.left = o1;
n1.right = p1;
o1.left = q1;
o1.right = r1;
p1.left = s1;
p1.right = t1;

//        l
//     /     \
//    m       n
//         /    \
//         o     p
//        / \   / \
//       q   r s   t

console.log(leftyNodes(l1)); // [ 'l', 'm', 'o', 'q' ]
const n2 = new Node('n');
const y2 = new Node('y');
const c2 = new Node('c');

n2.left = y2;
n2.right = c2;

//       n
//     /   \
//    y     c

console.log(leftyNodes(n2)); // [ 'n', 'y' ]
const i3 = new Node('i');
const n3 = new Node('n');
const s3 = new Node('s');
const t3 = new Node('t');

i3.right = n3;
n3.left = s3;
n3.right = t3;

//       i
//        \
//         n
//        / \
//       s   t

console.log(leftyNodes(i3)); // [ 'i', 'n', 's' ]
console.log(leftyNodes(null)); // [ ]