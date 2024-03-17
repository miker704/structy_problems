// middle value
// Write a function, middleValue, 
// that takes in the head of a linked list as an argument. 
// The function should return the value of the middle node in the linked list. 
// If the linked list has an even number of nodes, then return the value of the second middle node.

// You may assume that the input list is non-empty.


class Node {
    constructor (val) {
        this.val = val;
        this.next = null;
    }
}

/*
n = number of nodes
Time: O(n)
Space: O(n)*/
const middleValueArray = (head) => {
    let result = [];
    let curr = head;
    while (curr !== null) {
        result.push(curr.val);
        curr = curr.next;
    }
    return result[Math.floor(result.length / 2)];
};

/*n = number of nodes
Time: O(n)
Space: O(1)*/
const middleValueDualPointers = (head) => {
    let slow = head;
    let fast = head;
    while (fast !== null && fast.next !== null) {
        slow = slow.next;
        fast = fast.next.next;
    }
    return slow.val;
};


const a = new Node('a');
const b = new Node('b');
const c = new Node('c');
const d = new Node('d');
const e = new Node('e');

a.next = b;
b.next = c;
c.next = d;
d.next = e;

// a -> b -> c -> d -> e
console.log(middleValueArray(a)); // c
console.log(middleValueDualPointers(a)); // c

// const a = new Node('a');
// const b = new Node('b');
// const c = new Node('c');
// const d = new Node('d');
// const e = new Node('e');
const f = new Node('f');

a.next = b;
b.next = c;
c.next = d;
d.next = e;
e.next = f;

// a -> b -> c -> d -> e -> f
console.log(middleValueArray(a)); // d
console.log(middleValueDualPointers(a)); // d

const x = new Node('x');
const y = new Node('y');
const z = new Node('z');

x.next = y;
y.next = z;

// x -> y -> z
console.log(middleValueArray(x)); // y
console.log(middleValueDualPointers(x)); // y

// const x = new Node('x');
// const y = new Node('y');

x.next = y;
y.next = null;
// x -> y 
console.log(middleValueArray(x)); // y
console.log(middleValueDualPointers(x)); // y

const q = new Node('q');

// q
console.log(middleValueArray(q)); // q
console.log(middleValueDualPointers(q)); // q


