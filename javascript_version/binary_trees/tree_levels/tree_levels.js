// tree levels
// Write a function, 
// treeLevels, that takes in a pointer to the root of a binary tree. 
// The function should return a 2-Dimensional vector where each subvector represents a level of the tree.


class Node {
    constructor (val) {
        this.val = val;
        this.left = null;
        this.right = null;
    }
}

const treeLevels = (root) => {
    // todo


};


const _treeLevels = (root, levels, levelNum) => {
    // todo


};
// const treeLevelsBreadth = (root) => {
//     //      a
//     //    /   \
//     //   b     c
//     //  / \     \
//     // d   e     f

//     if (root === null) {
//         return [];
//     }
//     let result = [];
//     let queue = [{ node: root, level: 0 }];
//     let prevLvl = 0;
//     let sub = [];
//     while (queue.length !== 0) {
//         let nodeInfo = queue.shift();
//         let curr = nodeInfo.node;
//         let currlvl = nodeInfo.level;

//         if (prevLvl === currlvl) {
//             sub.push(curr.val)
//         }
//         else {
//             result.push(sub);
//             prevLvl = currlvl
//             sub = [curr.val];
//         }
//         if (curr.left !== null) {
//             queue.push({ node: curr.left, level: currlvl + 1 });
//         }
//         if (curr.right !== null) {
//             queue.push({ node: curr.right, level: currlvl + 1 });
//         }
//     }
//     result.push(sub);
//     return result;
// };
//optimized version
const treeLevelsBreadth = (root) => {
    //      a
    //    /   \
    //   b     c
    //  / \     \
    // d   e     f



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

console.table(treeLevels(a)); // ->
console.table(treeLevelsBreadth(a)); // ->

// [
//   ['a'],
//   ['b', 'c'],
//   ['d', 'e', 'f']
// ]
// const a = new Node("a");
// const b = new Node("b");
// const c = new Node("c");
// const d = new Node("d");
// const e = new Node("e");
// const f = new Node("f");
const g = new Node("g");
const h = new Node("h");
const i = new Node("i");

a.left = b;
a.right = c;
b.left = d;
b.right = e;
c.right = f;
e.left = g;
e.right = h;
f.left = i;

//         a
//      /    \
//     b      c
//   /  \      \
//  d    e      f
//      / \    /
//     g  h   i

console.table(treeLevels(a)); // ->
console.table(treeLevelsBreadth(a)); // ->

// [
//   ['a'],
//   ['b', 'c'],
//   ['d', 'e', 'f'],
//   ['g', 'h', 'i']
// ]
const q = new Node("q");
const r = new Node("r");
const s = new Node("s");
const t = new Node("t");
const u = new Node("u");
const v = new Node("v");

q.left = r;
q.right = s;
r.right = t;
t.left = u;
u.right = v;

//      q
//    /   \
//   r     s
//    \
//     t
//    /
//   u
//  /
// v

console.table(treeLevels(q)); //->
console.table(treeLevelsBreadth(q)); //->

// [
//   ['q'],
//   ['r', 's'],
//   ['t'],
//   ['u'],
//   ['v']
// ]
console.table(treeLevels(null)); // -> []
console.table(treeLevelsBreadth(null)); // -> []
