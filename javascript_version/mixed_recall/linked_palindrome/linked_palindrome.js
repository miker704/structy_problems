// linked palindrome
// Write a function, linked_palindrome, that takes in the head of a linked list as an argument.
//  The function should return a boolean indicating whether 
// or not the linked list is a palindrome. A palindrome is a sequence that is the same both forwards and backwards.


class Node {
    constructor (val) {
        this.val = val;
        this.next = null;
    }
}

const linkedPalindrome = (head) => {
    // todo

};


const isPalindrome = (array) => {
}




const a = new Node(3);
const b = new Node(2);
const c = new Node(7);
const d = new Node(7);
const e = new Node(2);
const f = new Node(3);

a.next = b;
b.next = c;
c.next = d;
d.next = e;
e.next = f;

// 3 -> 2 -> 7 -> 7 -> 2 -> 3
console.log(linkedPalindrome(a)); // true
const a1 = new Node(3);
const b1 = new Node(2);
const c1 = new Node(4);

a1.next = b1;
b1.next = c1;

// 3 -> 2 -> 4
console.log(linkedPalindrome(a1)); // false
const a2 = new Node(3);
const b2 = new Node(2);
const c2 = new Node(3);

a2.next = b2;
b2.next = c2;

// 3 -> 2 -> 3
console.log(linkedPalindrome(a2)); // true
const a3 = new Node(0);
const b3 = new Node(1);
const c3 = new Node(0);
const d3 = new Node(1);
const e3 = new Node(0);

a3.next = b3;
b3.next = c3;
c3.next = d3;
d3.next = e3;

// 0 -> 1 -> 0 -> 1 -> 0
console.log(linkedPalindrome(a3)); // true
const a4 = new Node(0);
const b4 = new Node(1);
const c4 = new Node(0);
const d4 = new Node(1);
const e4 = new Node(1);

a4.next = b4;
b4.next = c4;
c4.next = d4;
d4.next = e4;

// 0 -> 1 -> 0 -> 1 -> 1
console.log(linkedPalindrome(a4)); // false
const a5 = new Node(5);

// 5
console.log(linkedPalindrome(a5)); // true
console.log(linkedPalindrome(null)); // true