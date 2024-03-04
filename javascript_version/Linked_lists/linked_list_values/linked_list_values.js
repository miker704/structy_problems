// linked list values
// Write a function, linkedListValues, that takes
//  in a pointer to the head of a linked list as an argument.
//  The function should return an array containing all values of the nodes in the linked list.

// Hey. This is our first linked list problem, so you should be liberal with watching the
//  Approach and Walkthrough. Be productive, not stubborn. -AZ



class Node {
    constructor (value) {
        this.value = value;
        this.next = null;
    }
}

const linkedListValues = (head) => {

}




const linkedListValuesRecur = (head) => {

}
const _linkedListValuesRecur = (currNode,array) => {

}

const a = new Node("a");
const b = new Node("b");
const c = new Node("c");
const d = new Node("d");

a.next = b;
b.next = c;
c.next = d;

// a -> b -> c -> d

console.log(linkedListValues(a)); // -> [ 'a', 'b', 'c', 'd' ]
console.log(linkedListValuesRecur(a)); // -> [ 'a', 'b', 'c', 'd' ]

const x = new Node("x");
const y = new Node("y");

x.next = y;

// x -> y

console.log(linkedListValues(x)); // -> [ 'x', 'y' ]
console.log(linkedListValuesRecur(x)); // -> [ 'x', 'y' ]

const q = new Node("q");

// q

console.log(linkedListValues(q)); // -> [ 'q' ]
console.log(linkedListValuesRecur(q)); // -> [ 'q' ]


console.log(linkedListValues(null)); // -> [ ]
console.log(linkedListValuesRecur(null)); // -> [ ]
