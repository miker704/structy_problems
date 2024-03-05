// remove node
// Write a function, removeNode, that takes in a pointer to the head of a linked list and a target value as arguments.
//  The function should delete the node containing the target value from the linked list 
//  and return the head of the resulting linked list. If the target appears multiple times
//   in the linked list, only remove the first instance of the target in the list.

// Do this in-place. You do not need to dynamically deallocate the memory with delete, 
// just reassign next pointers correctly.

// You may assume that the input list is non-empty.

// You may assume that the input list contains the target.

class Node {
    constructor (val) {
        this.val = val;
        this.next = null;
    }
}

const removeNode = (head, targetVal) => {
    // todo
    if (head === null) { return null; }

    if (head.val === targetVal && head.next === null) {
        head = null;
        return null;
    }

    if (head.val === targetVal && head.next !== null) {
        let curr = head;
        head = head.next;
        curr.next = null;
        return head;
    }

    let curr = head;
    let prev = null;
    while (curr !== null) {
        if (curr.val === targetVal) {
            prev.next = curr.next;
            curr.next = null;
            break;
        }
        prev = curr;
        curr = curr.next;
    }

    return head;

};

const removeNodeRecur = (head, targetVal) => {

    if (head === null) {
        return null;
    }
    if (head.val === targetVal) {
        return head.next;
    }
    head.next = removeNodeRecur(head.next, targetVal);
    return head;
};

const printList = (head) => {

    let curr = head;
    while (curr !== null) {
        console.log(`[${curr.val}|next] -->`);
        curr = curr.next;
    }
}

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

printList(removeNode(a, "c"));
a.next = b;
b.next = c;
c.next = d;
d.next = e;
e.next = f;
printList(removeNodeRecur(a, "c"));

// // a -> b -> d -> e -> f
const x = new Node("x");
const y = new Node("y");
const z = new Node("z");

x.next = y;
y.next = z;

// // x -> y -> z

printList(removeNode(x, "z"));
x.next = y;
y.next = z;
printList(removeNodeRecur(x, "z"));

// // x -> y
const q = new Node("q");
const r = new Node("r");
const s = new Node("s");

q.next = r;
r.next = s;

// // q -> r -> s

printList(removeNode(q, "q"));
q.next = r;
r.next = s;

printList(removeNodeRecur(q, "q"));

// // r -> s
const node1 = new Node("h");
const node2 = new Node("i");
const node3 = new Node("j");
const node4 = new Node("i");

node1.next = node2;
node2.next = node3;
node3.next = node4;

// // h -> i -> j -> i

printList(removeNode(node1, "i"));
node1.next = node2;
node2.next = node3;
node3.next = node4;
printList(removeNodeRecur(node1, "i"));

// // h -> j -> i
const t = new Node("t");

// // t

printList(removeNode(t, "t"));
printList(removeNodeRecur(t, "t"));

// // null

