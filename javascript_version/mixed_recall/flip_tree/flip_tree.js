// flip tree
// Write a function, flipTree, that takes in the root of a binary tree.
//  The function should flip the binary tree, turning left subtrees into right
//  subtrees and vice-versa. This flipping should occur in-place by modifying 
//  the original tree. The function should return the root of the tree.

class Node {
    constructor (val) {
        this.val = val;
        this.left = null;
        this.right = null;
    }
}

const flipTree = (root) => {
    // todo
    if (root === null) { return null; }
    return inorderPrint(_flipTree(root));
};

const _flipTree = (root) => {
    if (root === null) { return null; }
    let leftSubtree = _flipTree(root.left);
    let rightSubtree = _flipTree(root.right);
    root.left = rightSubtree;
    root.right = leftSubtree;
    return root;
}

const inorderPrint = (root) => {
    if (root == null) {
        return [];
    }
    let left = inorderPrint(root.left);
    let right = inorderPrint(root.right);
    return [root.val, ...left, ...right];
}

const a = new Node("a");
const b = new Node("b");
const c = new Node("c");
const d = new Node("d");
const e = new Node("e");
const f = new Node("f");
const g = new Node("g");
const h = new Node("h");

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

console.log(flipTree(a));

//       a
//    /    \
//   c      b
//  /     /   \
// f     e    d
//     /  \
//    h    g
const u = new Node("u");
const t = new Node("t");
const s = new Node("s");
const r = new Node("r");
const q = new Node("q");
const p = new Node("p");

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

console.log(flipTree(u));

//           u
//        /    \
//       s      t
//      /
//     r
//    / \
//   p  q
const l1 = new Node("l");
const m1 = new Node("m");
const n1 = new Node("n");
const o1 = new Node("o");
const p1 = new Node("p");
const q1 = new Node("q");
const r1 = new Node("r");
const s1 = new Node("s");
const t1 = new Node("t");

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

console.log(flipTree(l1));

//             l
//         /      \
//        n        m
//      /  \
//    p     o
//  / \    / \
// t   s  r   q
const n2 = new Node("n");
const y1 = new Node("y");
const c1 = new Node("c");

n2.left = y1;
n2.right = c1;

//       n
//     /   \
//    y     c

console.log(flipTree(n2));

//       n
//     /   \
//    c     y