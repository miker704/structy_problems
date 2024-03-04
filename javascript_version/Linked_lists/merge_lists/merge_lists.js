// merge lists
// Write a function, mergeLists, that takes in pointers to the heads of two sorted linked lists.
//  The function should merge the two lists together into single sorted linked list. 
//  The function should return a pointer to the head of the merged linked list.

// Do this in-place, by mutating the original Nodes.

// You may assume that both input lists are non-empty and contain increasing sorted numbers.


class Node {
    constructor (val) {
        this.val = val;
        this.next = null;
    }
}

const mergeLists = (head1, head2) => {
    // todo

};
const mergeListsRecur = (head1, head2) => {
    // todo


};
const printList = (head) => {

    let curr = head;
    while (curr !== null) {
        console.log(`[${curr.val}|next] -->`);
        curr = curr.next;
    }
}


const a = new Node(5);
const b = new Node(7);
const c = new Node(10);
const d = new Node(12);
const e = new Node(20);
const f = new Node(28);
a.next = b;
b.next = c;
c.next = d;
d.next = e;
e.next = f;
// 5 -> 7 -> 10 -> 12 -> 20 -> 28

const q = new Node(6);
const r = new Node(8);
const s = new Node(9);
const t = new Node(25);
q.next = r;
r.next = s;
s.next = t;
// 6 -> 8 -> 9 -> 25

printList(mergeLists(a, q));
a.next = b;
b.next = c;
c.next = d;
d.next = e;
e.next = f;
f.next = null;

q.next = r;
r.next = s;
s.next = t;
t.next = null;

printList(mergeListsRecur(a, q));

// 5 -> 6 -> 7 -> 8 -> 9 -> 10 -> 12 -> 20 -> 25 -> 28 
const a1 = new Node(5);
const b1 = new Node(7);
const c1 = new Node(10);
const d1 = new Node(12);
const e1 = new Node(20);
const f1 = new Node(28);
a1.next = b1;
b1.next = c1;
c1.next = d1;
d1.next = e1;
e1.next = f1;
// 5 -> 7 -> 10 -> 12 -> 20 -> 28

const q1 = new Node(1);
const r1 = new Node(8);
const s1 = new Node(9);
const t1 = new Node(10);
q1.next = r1;
r1.next = s1;
s1.next = t1;
// 1 -> 8 -> 9 -> 10

printList(mergeLists(a1, q1));
a1.next = b1;
b1.next = c1;
c1.next = d1;
d1.next = e1;
e1.next = f1;
f1.next = null;

q1.next = r1;
r1.next = s1;
s1.next = t1;
t1.next = null;

printList(mergeListsRecur(a1, q1));

// 1 -> 5 -> 7 -> 8 -> 9 -> 10 -> 10 -> 12 -> 20 -> 28 
const h = new Node(30);
// 30

const p = new Node(15);
const q2 = new Node(67);
p.next = q2;
// 15 -> 67

printList(mergeLists(h, p));
h.next = null;
p.next = q2;
printList(mergeListsRecur(h, p));

// 15 -> 30 -> 67