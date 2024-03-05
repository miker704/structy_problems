// insert node
// Write a function, insertNode, that takes in a pointer to the head of a linked list, 
// a value, and an index. The function should insert a new node with the value into the 
// list at the specified index. Consider the head of the linked list as index 0. The 
// function should return the head of the resulting linked list.

// Do this in-place and be sure to dynamically allocate the new node in memory using new.

// You may assume that the input list is non-empty and the index is not greater
//  than the length of the input list.


class Node {
    constructor (val) {
        this.val = val;
        this.next = null;
    }
}

const insertNode = (head, value, index) => {


    if (index === 0) {
        let newNode = new Node(value);
        newNode.next = head;
        head = newNode;
        return head;
    }

    let counter = 0;
    let curr = head;

    while (curr !== null) {
        if (counter === index - 1) {
            let newNode = new Node(value);
            let nextNode = curr.next;
            curr.next = newNode;
            newNode.next = nextNode;
            break;
        }

        counter++;
        curr = curr.next;
    }

    return head;

};



const insertNodeRecur = (head, value, index) => {

    if (index === 0) {
        let newNode = new Node(value);
        newNode.next = head;
        return newNode;
    }

    head.next = insertNodeRecur(head.next, value, index - 1);
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

a.next = b;
b.next = c;
c.next = d;

// a -> b -> c -> d

printList(insertNode(a, 'x', 2));
a.next = b;
b.next = c;
c.next = d;
printList(insertNodeRecur(a, 'x', 2));

// a -> b -> x -> c -> d
// const a = new Node("a");
// const b = new Node("b");
// const c = new Node("c");
// const d = new Node("d");

a.next = b;
b.next = c;
c.next = d;

// a -> b -> c -> d

printList(insertNode(a, 'v', 3));
a.next = b;
b.next = c;
c.next = d;
printList(insertNodeRecur(a, 'v', 3));

// a -> b -> c -> v -> d
// const a = new Node("a");
// const b = new Node("b");
// const c = new Node("c");
// const d = new Node("d");

a.next = b;
b.next = c;
c.next = d;

// a -> b -> c -> d

printList(insertNode(a, 'm', 4));
const a1 = new Node("a");
const b1 = new Node("b");
const c1 = new Node("c");
const d1 = new Node("d");
a1.next = b1;
b1.next = c1;
c1.next = d1;
printList(insertNodeRecur(a1, 'm', 4));

// a -> b -> c -> d -> m
// const a = new Node("a");
// const b = new Node("b");

a.next = b;
b.next = null;
// a -> b

printList(insertNode(a, 'z', 0));
a.next = b;
b.next = null;
printList(insertNodeRecur(a, 'z', 0));

// z -> a -> b 