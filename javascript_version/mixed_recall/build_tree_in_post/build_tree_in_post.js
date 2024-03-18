// build tree in post
// Write a function, build_tree_in_post, 
// that takes in a list of in-ordered values and a list
//  of post-ordered values for a binary tree. The function should build
//   a binary tree that has the given in-order and post-order traversal 
//   structure. The function should return the root of this tree.

// You can assume that the values of inorder and postorder are unique.

class Node {
    constructor (val) {
        this.val = val;
        this.left = null;
        this.right = null;
    }
}

const buildTreeInPost = (inOrder, postOrder) => {
    // todo
    if (inOrder.length === 0) {
        return null;
    }
    let value = postOrder[postOrder.length - 1];
    let root = new Node(value);
    let mid = inOrder.indexOf(value);
    let inOrderLeft = inOrder.slice(0, mid);
    let inOrderRight = inOrder.slice(mid + 1);
    let postOrderLeft = postOrder.slice(0, inOrderLeft.length);
    let postOrderRight = postOrder.slice(inOrderLeft.length, postOrder.length - 1);
    root.left = buildTreeInPost(inOrderLeft, postOrderLeft);
    root.right = buildTreeInPost(inOrderRight, postOrderRight);
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


console.log(printInorder(buildTreeInPost(
    ['y', 'x', 'z'],
    ['y', 'z', 'x']
)));
//       x
//    /    \
//   y      z
console.log(printInorder(buildTreeInPost(
    ['d', 'b', 'e', 'a', 'f', 'c', 'g'],
    ['d', 'e', 'b', 'f', 'g', 'c', 'a']
)));
//      a
//    /    \
//   b      c
//  / \    / \
// d   e  f   g
console.log(printInorder(buildTreeInPost(
    ['d', 'b', 'g', 'e', 'h', 'a', 'c', 'f'],
    ['d', 'g', 'h', 'e', 'b', 'f', 'c', 'a']
)));
//      a
//    /    \
//   b      c
//  / \      \
// d   e      f
//    / \
//    g  h
console.log(printInorder(buildTreeInPost(
    ['m', 'n'],
    ['m', 'n']
)));
//       n
//     /
//    m
console.log(printInorder(buildTreeInPost(
    ['n', 'm'],
    ['m', 'n']
)));
//     n
//      \
//       m