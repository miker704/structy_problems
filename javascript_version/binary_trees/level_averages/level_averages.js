// level averages
// Write a function, 
// levelAverages, that takes in a pointer to the root of a binary tree that
//  contains number values. The function should return a vector containing the average
//   value of each level.



class Node {
    constructor (val) {
        this.val = val;
        this.left = null;
        this.right = null;
    }
}

const levelAverages = (root) => {
    // todo

};


const _levelAverages = (root, levels, levelNum) => {
    
}

const calcAvg = (subLevels) => {

}

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

console.log(levelAverages(a)); // -> [ 3, 7.5, 1 ] 
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

console.log(levelAverages(a1)); // -> [ 5, 32.5, 17.5, 2 ] 
const a2 = new Node(-1);
const b2 = new Node(-6);
const c2 = new Node(-5);
const d2 = new Node(-3);
const e2 = new Node(0);
const f2 = new Node(45);
const g2 = new Node(-1);
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
// -3   0     45
//     /       \
//    -1       -2

console.log(levelAverages(a2)); // -> [ -1, -5.5, 14, -1.5 ]
const q = new Node(13);
const r = new Node(4);
const s = new Node(2);
const t = new Node(9);
const u = new Node(2);
const v = new Node(42);

q.left = r;
q.right = s;
r.right = t;
t.left = u;
u.right = v;

//        13
//      /   \
//     4     2
//      \
//       9
//      /
//     2
//    /
//   42

console.log(levelAverages(q)); // -> [ 13, 3, 9, 2, 42 ]
console.log(levelAverages(null)); // -> [ ]