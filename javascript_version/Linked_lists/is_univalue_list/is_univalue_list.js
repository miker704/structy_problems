// is univalue list
// Write a function, isUnivalueList, that takes in a pointer to the head of a linked list as an argument.
//  The function should return a boolean indicating whether or not the linked list 
//  contains exactly one unique value.

// You may assume that the input list is non-empty.

class Node {
    constructor (val) {
        this.val = val;
        this.next = null;
    }
}

const isUnivalueList = (head) => {

};
const isUnivalueListRecur = (head) => {
    // todo

};


const isUnivalueListRecurExe = (curr, head) => {

};
const a = new Node(7);
const b = new Node(7);
const c = new Node(7);

a.next = b;
b.next = c;

// 7 -> 7 -> 7

console.log(isUnivalueList(a)); // true
console.log(isUnivalueListRecur(a)); // true

const a1 = new Node(7);
const b1 = new Node(7);
const c1 = new Node(4);

a1.next = b1;
b1.next = c1;

// 7 -> 7 -> 4

console.log(isUnivalueList(a1)); // false
console.log(isUnivalueListRecur(a1)); // false

const u = new Node(2);
const v = new Node(2);
const w = new Node(2);
const x = new Node(2);
const y = new Node(2);

u.next = v;
v.next = w;
w.next = x;
x.next = y;

// 2 -> 2 -> 2 -> 2 -> 2

console.log(isUnivalueList(u)); // true
console.log(isUnivalueListRecur(u)); // true



const u1 = new Node(2);
const v1 = new Node(2);
const w1 = new Node(3);
const x1 = new Node(3);
const y1 = new Node(2);

u1.next = v1;
v1.next = w1;
w1.next = x1;
x1.next = y1;

// 2 -> 2 -> 3 -> 3 -> 2

console.log(isUnivalueList(u1)); // false
console.log(isUnivalueListRecur(u1)); // false

const z = new Node('z');

// z

console.log(isUnivalueList(z)); // true
console.log(isUnivalueListRecur(z)); // true

