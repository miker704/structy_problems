// linked list find
// Write a function, linkedListFind, that takes in a pointer to the head of a linked list and a target value.
//  The function should return a boolean indicating whether or not the linked list contains the target.


class Node {
    constructor (value) {
        this.value = value;
        this.next = null;
    }
}


const linkedListFind = (head, target) => {

}

const linkedListFindRecur = (head, target) => {

}

const _linkedListFindRecur = (curr, target) => {


}

console.log("iterative method");

const a = new Node("a");
const b = new Node("b");
const c = new Node("c");
const d = new Node("d");

a.next = b;
b.next = c;
c.next = d;

// a -> b -> c -> d

console.log(linkedListFind(a, "c")); // 1 (true)

// const a = new Node("a");
// const b = new Node("b");
// const c = new Node("c");
// const d = new Node("d");

// a.next = b;
// b.next = c;
// c.next = d;

// a -> b -> c -> d

console.log(linkedListFind(a, "d")); // 1 (true)
console.log(linkedListFind(a, "q")); // 0 (false)


console.log("recursion method");
console.log(linkedListFindRecur(a, "c")); // 1 (true)
console.log(linkedListFindRecur(a, "d")); // 1 (true)
console.log(linkedListFindRecur(a, "q")); // 0 (false)

const node1 = new Node("jason");
const node2 = new Node("leneli");

node1.next = node2;

// jason -> leneli
console.log("iterative method");

console.log(linkedListFind(node1, "jason")); // 1 (true)
console.log("recursion method");
console.log(linkedListFindRecur(node1, "jason")); // 1 (true)

const node3 = new Node(42);

// 42
console.log("iterative method");
console.log(linkedListFind(node3, 42)); // true
console.log("recursion method");
console.log(linkedListFindRecur(node3, 42)); // true



const node10 = new Node(42);

// 42
console.log("iterative method");

console.log(linkedListFind(node10, 100)); // false

console.log("recursion method");
console.log(linkedListFindRecur(node10, 100)); // false

//recursive method 

