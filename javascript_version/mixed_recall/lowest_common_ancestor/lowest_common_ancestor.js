// lowest common ancestor
// Write a function, lowestCommonAncestor, that takes in the root of 
// a binary tree and two values. The function should return the value 
// of the lowest common ancestor of the two values in the tree.

// You may assume that the tree values are unique and the tree is non-empty.

// Note that a node may be considered an ancestor of itself.


class Node {
    constructor (val) {
        this.val = val;
        this.left = null;
        this.right = null;
    }
}

const lowestCommonAncestor = (root, val1, val2) => {
    // todo


};


const getPath = (root, val) => {


}


//   example tree
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
console.log(lowestCommonAncestor(a, 'd', 'h')); // b
console.log(lowestCommonAncestor(a, 'd', 'g')); // b
console.log(lowestCommonAncestor(a, 'g', 'c')); // a
console.log(lowestCommonAncestor(a, 'b', 'g')); // b
console.log(lowestCommonAncestor(a, 'f', 'c')); // c
//   example tree
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
console.log(lowestCommonAncestor(l, 'r', 'p')); // n
console.log(lowestCommonAncestor(l, 'm', 'o')); // l
console.log(lowestCommonAncestor(l, 't', 'q')); // n
console.log(lowestCommonAncestor(l, 's', 'p')); // p