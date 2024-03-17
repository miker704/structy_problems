// linked list cycle
// Write a function, linked_list_cycle, that takes
//  in the head of a linked list as an argument.
//   The function should return a boolean indicating whether
//    or not the linked list contains a cycle.

class Node {
    constructor (val) {
        this.val = val;
        this.next = null;
    }
}
// # n = number of nodes
// # Time: O(n)
// # Space: O(n)
const linkedListCycleSet = (head) => {
    // todo
    if (head === null) { return false; }
    let set = new Set();
    let curr = head;
    while (curr !== null) {
        if (set.has(curr)) { return true; }
        set.add(curr);
        curr = curr.next;
    }
    return false;
};




// # n = number of nodes
// # Time: O(n)
// # Space: O(1)

const linkedListCycleDualPointers = (head) => {
    // todo
    if (head === null) { return false; }
    let slow = head;
    let fast = head;
    let firstLoopBack = true;
    while (fast !== null && fast.next !== null) {
        if (fast === slow && firstLoopBack === false) { return true; }
        slow = slow.next;
        fast = fast.next.next;
        firstLoopBack = false;
    }
    return false;
};

const a = new Node('a');
const b = new Node('b');
const c = new Node('c');
const d = new Node('d');

a.next = b;
b.next = c;
c.next = d;
d.next = b; // cycle

//         _______
//       /        \
// a -> b -> c -> d 

console.log(linkedListCycleSet(a));  // true
console.log(linkedListCycleDualPointers(a));  // true

const q = new Node('q');
const r = new Node('r');
const s = new Node('s');
const t = new Node('t');
const u = new Node('u');

q.next = r;
r.next = s;
s.next = t;
t.next = u;
u.next = q; // cycle

//    ________________
//  /                 \
// q -> r -> s -> t -> u 

console.log(linkedListCycleSet(q));  // true
console.log(linkedListCycleDualPointers(q));  // true

// const a = new Node('a');
// const b = new Node('b');
// const c = new Node('c');
// const d = new Node('d');

a.next = b;
b.next = c;
c.next = d;
d.next = null;
// a -> b -> c -> d 

console.log(linkedListCycleSet(a));  // false
console.log(linkedListCycleDualPointers(a));  // false

// const q = new Node('q');
// const r = new Node('r');
// const s = new Node('s');
// const t = new Node('t');
// const u = new Node('u');




q.next = r;
r.next = s;
s.next = t;
t.next = u;
u.next = t; // cycle

//                   __
//                 /   \
// q -> r -> s -> t -> u 

console.log(linkedListCycleSet(q));  // true
console.log(linkedListCycleDualPointers(q));  // true

const p = new Node('p');

// p

console.log(linkedListCycleSet(p)); // false
console.log(linkedListCycleDualPointers(p)); // false

console.log(linkedListCycleSet(null)); // false
console.log(linkedListCycleDualPointers(null)); // false

