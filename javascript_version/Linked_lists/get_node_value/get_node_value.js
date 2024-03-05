// get node value
// Write a function, getNodeValue, that takes in a pointer to the head of a linked list and an index. 
// The function should return the value of the linked list at the specified index.

// If there is no node at the given index, then return the empty string.
class Node {
    constructor (value) {
        this.value = value;
        this.next = null;
    }
}


const getNodeValue = (head, index) => {
    let curr = head;
    let x = 0;
    while (curr !== null) {
        if (x === index) { return curr.value; }
        curr = curr.next;
        x++;
    }
    return null;
}

const getNodeValueRecur = (head, index) => {
    let curr = head;
    return _getNodeValueRecur(curr, index);
}

const _getNodeValueRecur = (curr, index) => {
    if (curr === null) { return null; }
    if (index === 0) { return curr.value; }
    return _getNodeValueRecur(curr.next, index - 1);
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

console.log(getNodeValue(a, 2)); // "c"
console.log(getNodeValue(a, 3)); // "d"

// a -> b -> c -> d

console.log(getNodeValue(a, 7)); // "" null
console.log("recursion method");
console.log(getNodeValueRecur(a, 2)); // "c"
console.log(getNodeValueRecur(a, 3)); // "d"

// a -> b -> c -> d

console.log(getNodeValueRecur(a, 7)); // "" null

const node1 = new Node("banana");
const node2 = new Node("mango");

node1.next = node2;


// banana -> mango
console.log("iterative method");

console.log(getNodeValue(node1, 0)); // "banana"
// banana -> mango

console.log(getNodeValue(node1, 1)); // "mango"

console.log("recursion method");
console.log(getNodeValueRecur(node1, 0)); // "banana"
// banana -> mango

console.log(getNodeValueRecur(node1, 1)); // "mango"