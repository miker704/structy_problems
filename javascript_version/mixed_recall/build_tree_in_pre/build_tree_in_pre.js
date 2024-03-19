// build tree in pre
// Write a function, buildTreeInPre, that takes in a vector of in-ordered values
//  and a vector of pre-ordered values for a binary tree. The function should build 
//  a binary tree that has the given in-order and pre-order traversal structure.
//  The function should return the root of this tree.

// You can assume that the values of inorder and preorder are unique.

// Be sure to allocate the nodes of your tree dynamically with the new keyword.


class Node {
    constructor (val) {
        this.val = val;
        this.left = null;
        this.right = null;
    }
}

const buildTreeInPre = (inOrder, preOrder) => {
    // todo
    if (inOrder.length === 0) { return null; }
    let value = preOrder[0];
    let root = new Node(value);
    let mid = inOrder.indexOf(value);
    let inOrderLeft = inOrder.slice(0, mid);
    let inOrderRight = inOrder.slice(mid + 1);
    let preOrderLeft = preOrder.slice(1, inOrderLeft.length + 1);
    let preOrderRight = preOrder.slice(inOrderLeft.length + 1);
    root.left = buildTreeInPre(inOrderLeft, preOrderLeft);
    root.right = buildTreeInPre(inOrderRight, preOrderRight);
    return root;

};
const printInorder = (root) => {
    if (root === null) {
        return [];
    }
    let left = printInorder(root.left);
    let right = printInorder(root.right);
    return [...left, root.val, ...right];

}

console.log(printInorder(buildTreeInPre(
    ['z', 'y', 'x'],
    ['y', 'z', 'x']
)));
//       y
//    /    \
//   z      x
console.log(printInorder(buildTreeInPre(
    ['y', 'z', 'x'],
    ['y', 'x', 'z']
)));
//       y
//        \
//         x
//        / 
//       z
console.log(printInorder(buildTreeInPre(
    ['d', 'b', 'g', 'e', 'h', 'a', 'c', 'f'],
    ['a', 'b', 'd', 'e', 'g', 'h', 'c', 'f']
)));
//       a
//    /    \
//   b      c
//  / \      \
// d   e      f
//    / \
//    g  h
console.log(printInorder(buildTreeInPre(
    ['t', 'u', 's', 'q', 'r', 'p'],
    ['u', 't', 's', 'r', 'q', 'p']
)));
//     u
//  /    \
// t      s
//         \
//         r
//        / \
//        q  p
console.log(printInorder(buildTreeInPre(
    ['m', 'l', 'q', 'o', 'r', 'n', 's', 'p', 't'],
    ['l', 'm', 'n', 'o', 'q', 'r', 'p', 's', 't']
)));
//        l
//     /     \
//    m       n
//         /    \
//         o     p
//        / \   / \
//       q   r s   t