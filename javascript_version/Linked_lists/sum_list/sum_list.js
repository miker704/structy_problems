// sum list
// Write a function, sumList, that takes in the head of a linked list containing numbers as an argument. 
// The function should return the total sum of all values in the linked list.


class Node {
    constructor (value) {
        this.value = value;
        this.next = null;
    }
}


const sumList = (head) => {
    let sum = 0;
    let curr = head;
    while (curr !== null) {
        sum += curr.value;
        curr = curr.next;
    }
    return sum;
}

const sumListRecur = (head) => {
    let sum = 0;
    let curr = head;
    return _sumListRecur(curr);
}


const _sumListRecur = (curr) => {
    if (curr === null) { return 0; }
    return curr.value + _sumListRecur(curr.next);
}

console.log("iterative method");

const a = new Node(2);
const b = new Node(8);
const c = new Node(3);
const d = new Node(-1);
const e = new Node(7);

a.next = b;
b.next = c;
c.next = d;
d.next = e;

// 2 -> 8 -> 3 -> -1 -> 7

console.log(sumList(a)); // 19


const x = new Node(38);
const y = new Node(4);

x.next = y;

// 38 -> 4

console.log(sumList(x)); // 42

const z = new Node(100);

// 100

console.log(sumList(z)); // 100
console.log(sumList(null)); // 0



console.log("recursion method");
console.log(sumListRecur(a)); // 19
console.log(sumListRecur(x)); // 42
console.log(sumListRecur(z)); // 100
console.log(sumListRecur(null)); // 0