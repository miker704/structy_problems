// reverse list
// Write a function, reverseList, that takes in a pointer to the head of a linked list as an argument. 
// The function should reverse the order of the nodes in the linked list 
// in-place and return the new head of the reversed linked list.
class Node {
    constructor (value) {
        this.value = value;
        this.next = null;
    }
}

const reverseList = (head) => {



}

const reverseListRecur = (head) => {

}

const _reverseListRecur = (head,curr,prev) => {


    

 }

 const _reverseListRecur2 = (head,curr,prev) => {



 }


const printList = (head) => {
    let curr = head;
    while (curr !== null) {
        console.log(`[${curr.value}|next] -->`);
        curr = curr.next;
    }
}


console.log("iterative method");

const a = new Node("a");
const b = new Node("b");
const c = new Node("c");
const d = new Node("d");
const e = new Node("e");
const f = new Node("f");

a.next = b;
b.next = c;
c.next = d;
d.next = e;
e.next = f;

// a -> b -> c -> d -> e -> f

// console.log(reverseList(a)); // f -> e -> d -> c -> b -> a
console.log("list before : ");
printList(a);
console.log("list after being reversed : ");
printList(reverseList(a));
console.log("recursion method");
console.log("list before : ");
printList(f);
console.log("list after being reversed : ");
printList(reverseListRecur(f));
// console.log(reverseListRecur(a)); // f -> e -> d -> c -> b -> a
console.log("linked list after : ");
printList(a);

const x = new Node("x");
const y = new Node("y");

x.next = y;


// x -> y
console.log("iterative method");
console.log("list before : ");
printList(x);
console.log("list after being reversed : ");
printList(reverseList(x));

// console.log(reverseList(x)); // y -> x
console.log("recursion method");
console.log("list before : ");
printList(y);
console.log("list after being reversed : ");
// console.log(reverseListRecur(x)); // y -> x
printList(reverseListRecur(y));
console.log("linked list after : ");
printList(x);
const p = new Node("p");

// p
console.log("iterative method");
console.log("list before : ");
printList(p);
console.log("list after being reversed : ");
printList(reverseList(p));
// console.log(reverseList(p)); // p

console.log("recursion method");
console.log("list before : ");
printList(p);
console.log("list after being reversed : ");
// console.log(reverseListRecur(p)); // p
printList(reverseListRecur(p));
console.log("linked list after : ");
printList(p);
