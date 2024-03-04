// zipper lists
// Write a function, zipperLists, that takes in pointers to the heads of two linked lists. 
// The function should zipper the two lists together into single linked list by alternating nodes. 
// If one of the linked lists is longer than the other, the resulting list should terminate with the remaining nodes.
//  The function should return a pointer to the head of the zippered linked list.

// Do this in-place, by mutating the original Nodes.

// You may assume that both input lists are non-empty.


class Node {
    constructor (value) {
        this.value = value;
        this.next = null;
    }
}

const zipperLists = (head1, head2) => {


}
const zipperListsRecur = (head1, head2) => { }
const _zipperListsRecur = (head1, head2) => { }

const printList = (head) => {

    let curr = head;
    while (curr !== null) {
        console.log(`[${curr.value}|next] -->`);
        curr = curr.next;
    }
}


const a = new Node("a");
const b = new Node("b");
const c = new Node("c");
a.next = b;
b.next = c;
// a -> b -> c

const x = new Node("x");
const y = new Node("y");
const z = new Node("z");
x.next = y;
y.next = z;
// x -> y -> z
console.log("iterative method");
console.log("list 1 :");
printList(a);
console.log("list 2 :");
printList(x);
console.log("resulting zipped list :");
printList(zipperLists(a, x));

// a -> x -> b -> y -> c -> z
// console.log("recursion method");
// console.log(zipperListsRecur(one, w));

const a1 = new Node("a");
const b1 = new Node("b");
const c1 = new Node("c");
const d1 = new Node("d");
const e1 = new Node("e");
const f1 = new Node("f");
a1.next = b1;
b1.next = c1;
c1.next = d1;
d1.next = e1;
e1.next = f1;
// a -> b -> c -> d -> e -> f

const x1 = new Node("x");
const y1 = new Node("y");
const z1 = new Node("z");

x1.next = y1;
y1.next = z1;
// x -> y -> z

console.log("iterative method");
console.log("list 1 :");
printList(a1);
console.log("list 2 :");
printList(x1);
console.log("resulting zipped list :");
printList(zipperLists(a1, x1));
// a -> x -> b -> y -> c -> z -> d -> e -> f

// console.log("recursion method");
// console.log(zipperListsRecur(one, w));



const s = new Node("s");
const t = new Node("t");
s.next = t;
// // s -> t

const one = new Node(1);
const two = new Node(2);
const three = new Node(3);
const four = new Node(4);
one.next = two;
two.next = three;
three.next = four;
// 1 -> 2 -> 3 -> 4

console.log("iterative method");
console.log("list 1 :");
printList(s);
console.log("list 2 :");
printList(one);
console.log("resulting zipped list :");
printList(zipperLists(s, one));
// // s -> 1 -> t -> 2 -> 3 -> 4
// console.log("recursion method");
// console.log(zipperListsRecur(one, w));



const w1 = new Node("w");

// w

const one_1 = new Node(1);
const two_1 = new Node(2);
const three_1 = new Node(3);
one_1.next = two_1;
two_1.next = three_1;
// 1 -> 2 -> 3 

console.log("iterative method");
console.log("list 1 :");
printList(w1);
console.log("list 2 :");
printList(one_1);
console.log("resulting zipped list :");
printList(zipperLists(w1, one_1));
// printList(zipperLists(one_1,w1));

console.log("recursion method");
// console.log(zipperListsRecur(one, w));

// w -> 1 -> 2 -> 3
const one_one = new Node(1);
const two_two = new Node(2);
const three_three = new Node(3);
one_one.next = two_two;
two_two.next = three_three;
// 1 -> 2 -> 3 

const w_w = new Node("w");
// w
console.log("iterative method");
console.log("list 1 :");
printList(w_w);
console.log("list 2 :");
printList(one_one);
console.log("resulting zipped list :");
printList(zipperLists(one_one,w_w));
console.log("recursion method");
// console.log(zipperLists(one, w));
// // 1 -> w -> 2 -> 3

// console.log("recursion method");
// console.log(zipperListsRecur(one, w));
