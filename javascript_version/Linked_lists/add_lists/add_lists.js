// add lists
// Write a function, add_lists, that takes in the head of two linked lists, each representing a number.
//  The nodes of the linked lists contain digits as values. The nodes in the input lists are reversed; 
//  this means that the least significant digit of the number is the head. The function should return 
// the head of a new linked listed representing the sum of the input lists. The output list should have its 
// digits reversed as well.


// Say we wanted to compute 621 + 354 normally. The sum is 975:

//    621
//  + 354
//  -----
//    975

// Then, the reversed linked list format of this problem would appear as:

//     1 -> 2 -> 6
//  +  4 -> 5 -> 3
//  --------------
//     5 -> 7 -> 9


class Node {
    constructor (val) {
        this.val = val;
        this.next = null;
    }
}

const addLists = (head1, head2) => {
    // todo

    let curr1 = head1;
    let curr2 = head2;
    let dead_node = new Node(0);
    let tail = dead_node;
    let carryOver = 0;


    while (curr1 !== null || curr2 !== null || carryOver !== 0) {
        let value1 = curr1 === null ? 0 : curr1.val;
        let value2 = curr2 === null ? 0 : curr2.val;
        let sum = value1 + value2 + carryOver;
        carryOver = sum > 9 ? 1 : 0;

        let digit = sum % 10;
        let newNode = new Node(digit);
        tail.next = newNode;
        tail = tail.next;

        if (curr1 !== null) {
            curr1 = curr1.next;
        }
        if (curr2 !== null) {
            curr2 = curr2.next;
        }

    }

    return dead_node.next;
};



const addListsRecur = (head1, head2) => {
    // todo
    return addListsRecurExe(head1, head2, 0);
};
const addListsRecurExe = (head1, head2, carryOver) => {
    // todo

    if (head1 === null && head2 === null && carryOver === 0) {
        return null;
    }
    let value1 = head1 === null ? 0 : head1.val;
    let value2 = head2 === null ? 0 : head2.val;
    let sum = value1 + value2 + carryOver;
    carryOver = sum > 9 ? 1 : 0;
    let digit = sum % 10;
    let tail = new Node(digit);

    let next1 = head1 === null ? null : head1.next;
    let next2 = head2 === null ? null : head2.next;
    tail.next = addListsRecurExe(next1, next2, carryOver);
    return tail;
};

const printList = (head) => {

    let curr = head;
    while (curr !== null) {
        console.log(`[${curr.val}|next] -->`);
        curr = curr.next;
    }
}


//   621
// + 354
// -----
//   975

const a1 = new Node(1);
const a2 = new Node(2);
const a3 = new Node(6);
a1.next = a2;
a2.next = a3;
// 1 -> 2 -> 6

const b1 = new Node(4);
const b2 = new Node(5);
const b3 = new Node(3);
b1.next = b2;
b2.next = b3;
// 4 -> 5 -> 3

printList(addLists(a1, b1));
a1.next = a2;
a2.next = a3;
a3.next = null;
b1.next = b2;
b2.next = b3;
b3.next = null;
printList(addListsRecur(a1, b1));

// 5 -> 7 -> 9
//  7541
// +  32
// -----
//  7573

const c1 = new Node(1);
const c2 = new Node(4);
const c3 = new Node(5);
const c4 = new Node(7);
c1.next = c2;
c2.next = c3;
c3.next = c4;
// 1 -> 4 -> 5 -> 7

const d1 = new Node(2);
const d2 = new Node(3);
d1.next = d2;
// 2 -> 3 

printList(addLists(c1, d1));
c1.next = c2;
c2.next = c3;
c3.next = c4;
c4.next = null;
d1.next = d2;
d2.next = null;
printList(addListsRecur(c1, d1));

// 3 -> 7 -> 5 -> 7
//   39
// + 47
// ----
//   86

const e1 = new Node(9);
const e2 = new Node(3);
e1.next = e2;
// 9 -> 3

const f1 = new Node(7);
const f2 = new Node(4);
f1.next = f2;
// 7 -> 4

printList(addLists(e1, f1));
e1.next = e2;
f1.next = f2;

printList(addListsRecur(e1, f1));

// 6 -> 8
//   89
// + 47
// ----
//  136

const g1 = new Node(9);
const g2 = new Node(8);
g1.next = g2;
// 9 -> 8

const h1 = new Node(7);
const h2 = new Node(4);
h1.next = h2;
// 7 -> 4

printList(addLists(g1, h1));
g1.next = g2;
h1.next = h2;

printList(addListsRecur(g1, h1));

// 6 -> 3 -> 1
//   999
//  +  6
//  ----
//  1005

const i1 = new Node(9);
const i2 = new Node(9);
const i3 = new Node(9);
i1.next = i2;
i2.next = i3;
// 9 -> 9 -> 9

const j1 = new Node(6);
// 6

printList(addLists(i1, j1));
i1.next = i2;
i2.next = i3;
printList(addListsRecur(i1, j1));

// 5 -> 0 -> 0 -> 1



