// post order
// Write a function, postOrder, that takes in the root of a binary tree.
//  The function should return an array containing the post-ordered values of the tree.

// Post-order traversal is when nodes
//  are recursively visited in the order: left child, right child, self.
//  https://en.wikipedia.org/wiki/Tree_traversal#Post-order,_LRN

class Node {
    constructor (val) {
        this.val = val;
        this.left = null;
        this.right = null;
    }
}

const postOrder = (root) => {
    // todo
    if (root === null) { return []; }
    let left = postOrder(root.left);
    let right = postOrder(root.right);
    return [...left, ...right, root.val];
};


const x = new Node('x');
const y = new Node('y');
const z = new Node('z');

x.left = y;
x.right = z;

//       x
//    /    \
//   y      z

console.log(postOrder(x));
// ['y', 'z', 'x']
const a = new Node('a');
const b = new Node('b');
const c = new Node('c');
const d = new Node('d');
const e = new Node('e');
const f = new Node('f');
const g = new Node('g');

a.left = b;
a.right = c;
b.left = d;
b.right = e;
c.left = f;
c.right = g;

//      a
//    /    \
//   b      c
//  / \    / \
// d   e  f   g

console.log(postOrder(a));
// [ 'd', 'e', 'b', 'f', 'g', 'c', 'a' ] 
// const a = new Node('a');
// const b = new Node('b');
// const c = new Node('c');
// const d = new Node('d');
// const e = new Node('e');
// const f = new Node('f');
// const g = new Node('g');
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

console.log(postOrder(a));
// [ 'd', 'g', 'h', 'e', 'b', 'f', 'c', 'a' ] 
const l = new Node('l');
const m = new Node('m');
const n = new Node('n');
const o = new Node('o');
const p = new Node('p');
const q = new Node('q');
const r = new Node('r');
const s = new Node('s');
const t = new Node('t');

l.left = m;
l.right = n;
n.left = o;
n.right = p;
o.left = q;
o.right = r;
p.left = s;
p.right = t;

//        l
//     /     \
//    m       n
//         /    \
//         o     p
//        / \   / \
//       q   r s   t

console.log(postOrder(l));
// [ 'm', 'q', 'r', 'o', 's', 't', 'p', 'n', 'l' ] 
console.log(postOrder(null));
// []