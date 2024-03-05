
// create linked list
// Write a function, createLinkedList, that takes in an array of values as an argument.
//  The function should create a
//  linked list containing each element of the array as the values of the nodes. The function 
//  should return the head of the linked list.

class Node {
    constructor (val) {
        this.val = val;
        this.next = null;
    }
}

const createLinkedList = (values) => {
    // todo
    if (values.length === 0) { return null; }
    let head = new Node(values[0]);
    let curr = head;
    for (let i = 1; i < values.length; i++) {
        let newNode = new Node(values[i]);
        curr.next = newNode;
        curr = newNode;
    }
    return head;
};
const createLinkedListRecur = (values) => {
    // todo
    return createLinkedListRecurExe(values, 0);
};
const createLinkedListRecurExe = (values, idx) => {
    if (idx === values.length) { return null; }
    let newNode = new Node(values[idx]);
    newNode.next = createLinkedListRecurExe(values, idx + 1);
    return newNode;
};

const printList = (head) => {

    let curr = head;
    while (curr !== null) {
        console.log(`[${curr.val}|next] -->`);
        curr = curr.next;
    }
}

printList(createLinkedList(["h", "e", "y"]));
printList(createLinkedListRecur(["h", "e", "y"]));

// h -> e -> y
printList(createLinkedList([1, 7, 1, 8]));
printList(createLinkedListRecur([1, 7, 1, 8]));

// 1 -> 7 -> 1 -> 8
printList(createLinkedList(["a"]));
printList(createLinkedListRecur(["a"]));

// a
printList(createLinkedList([]));
printList(createLinkedListRecur([]));

// null