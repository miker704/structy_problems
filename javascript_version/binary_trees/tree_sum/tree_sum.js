// tree sum
// Write a function, treeSum, that takes in a pointer to the root of a binary tree 
// that contains number values. The function should return the total sum of all values in the tree.

class Node {
    constructor(val) {
      this.val = val;
      this.left = null;
      this.right = null;
    }
  }
  
  const treeSum = (root) => {
      // todo

    };
    
    const treeSumRecur = (root) => {

    };
  
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
  
  console.log(treeSum(a)); // -> 21
  console.log(treeSumRecur(a)); // -> 21
  
  const a1 = new Node(1);
  const b1 = new Node(6);
  const c1 = new Node(0);
  const d1 = new Node(3);
  const e1 = new Node(-6);
  const f1 = new Node(2);
  const g1 = new Node(2);
  const h1 = new Node(2);
  
  a1.left = b1;
  a1.right = c1;
  b1.left = d1;
  b1.right = e1;
  c1.right = f1;
  e1.left = g1;
  f1.right = h1;
  
  //      1
  //    /   \
  //   6     0
  //  / \     \
  // 3   -6    2
  //    /       \
  //   2         2
  
  console.log(treeSum(a1)); // -> 10
  console.log(treeSumRecur(a1)); // -> 10
  
  console.log(treeSum(null)); // -> 0
  console.log(treeSumRecur(null)); // -> 0
  