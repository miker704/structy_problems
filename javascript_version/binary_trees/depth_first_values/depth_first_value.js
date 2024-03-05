// depth first values
// Write a function, depthFirstValues, that takes in a pointer to the root of a binary tree.
//  The function should return a vector containing all values of the tree in depth-first order.

// Hey. This is our first binary tree problem, so you should be liberal with 
// watching the Approach and Walkthrough. Be productive, not stubborn. -AZ
class Node {
    constructor (val) {
        this.val = val;
        this.left = null;
        this.right = null;
    }
}

// const depthFirstValues = (root) => {
//     // todo
//     if (root === null) { return []; }
//     let array = new Array();
//     let treeNodes = new Array();
//     let curr = root;
//     array.unshift(root);
//     while (array.length !== 0) {
//         while (curr !== null) {
//             array.unshift(curr);
//             treeNodes.push(curr.val);
//             curr = curr.left;
//         }
//         curr = array.shift();
//         curr = curr.right;

//     }
//     return treeNodes;
// };

//alternative way
const depthFirstValues = (root) => {
    if (root === null) { return []; }
    let array = new Array();
    let treeNodes = new Array();
    array.push(root);

    while (array.length !== 0) {
        let currNode = array.pop();
        treeNodes.push(currNode.val);
        if (currNode.right !== null) {
            array.push(currNode.right);
        }
        if (currNode.left !== null) {
            array.push(currNode.left);
        }
    }
    return treeNodes;
};

// const depthFirstValuesRecur = (root) => {
//     // todo
//     let array = new Array();
//     return _depthFirstValuesRecur(root, array);
// };

// const _depthFirstValuesRecur = (root, array) => {
//     // todo
//     if (root !== null) {
//         array.push(root.val);
//         _depthFirstValuesRecur(root.left, array);
//         _depthFirstValuesRecur(root.right, array);

//     }
//     return array;
// };
//alternative way using javascripts unique built in functionalities
const depthFirstValuesRecur = (root) => {
    if (root === null) { return []; }
    let left = depthFirstValuesRecur(root.left);
    let right = depthFirstValuesRecur(root.right);
    return [root.val, ...left, ...right];
};



const printDFS = (array) => {
    for (let i of array) {
        console.log(`${i}`);
    }
    console.log("-----");
}




const a = new Node('a');
const b = new Node('b');
const c = new Node('c');
const d = new Node('d');
const e = new Node('e');
const f = new Node('f');

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

printDFS(depthFirstValues(a));
printDFS(depthFirstValuesRecur(a));

//    -> ['a', 'b', 'd', 'e', 'c', 'f']
const a1 = new Node('a');
const b1 = new Node('b');
const c1 = new Node('c');
const d1 = new Node('d');
const e1 = new Node('e');
const f1 = new Node('f');
const g1 = new Node('g');

a1.left = b1;
a1.right = c1;
b1.left = d1;
b1.right = e1;
c1.right = f1;
e1.left = g1;

//      a
//    /   \
//   b     c
//  / \     \
// d   e     f
//    /
//   g
printDFS(depthFirstValues(a1));
printDFS(depthFirstValuesRecur(a1));
//   depthFirstValues(a1); 
//    -> ['a', 'b', 'd', 'e', 'g', 'c', 'f']
const a2 = new Node('a');
//      a
//   depthFirstValues(a2); 
printDFS(depthFirstValues(a2));
printDFS(depthFirstValuesRecur(a2));
//    -> ['a']
const a3 = new Node('a');
const b3 = new Node('b');
const c3 = new Node('c');
const d3 = new Node('d');
const e3 = new Node('e');

a3.right = b3;
b3.left = c3;
c3.right = d3;
d3.right = e3;

//      a
//       \
//        b
//       /
//      c
//       \
//        d
//         \
//          e
printDFS(depthFirstValues(a3));
printDFS(depthFirstValuesRecur(a3));
//   depthFirstValues(a3); 
//    -> ['a', 'b', 'c', 'd', 'e']
printDFS(depthFirstValues(null));
printDFS(depthFirstValuesRecur(null));
//   depthFirstValues(null);
//    -> []