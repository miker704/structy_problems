// longest streak
// Write a function, longest_streak, that takes in the head of a linked list as an argument. 
// The function should return the length of the longest consecutive 
// streak of the same value within the list.


class Node {
    constructor (val) {
        this.val = val;
        this.next = null;
    }
}

const longestStreak = (head) => {
    // todo


};





const a = new Node(5);
const b = new Node(5);
const c = new Node(7);
const d = new Node(7);
const e = new Node(7);
const f = new Node(6);

a.next = b;
b.next = c;
c.next = d;
d.next = e;
e.next = f;

// 5 -> 5 -> 7 -> 7 -> 7 -> 6

console.log(longestStreak(a)); // 3

const a1 = new Node(3);
const b1 = new Node(3);
const c1 = new Node(3);
const d1 = new Node(3);
const e1 = new Node(9);
const f1 = new Node(9);

a1.next = b1;
b1.next = c1;
c1.next = d1;
d1.next = e1;
e1.next = f1;

// 3 -> 3 -> 3 -> 3 -> 9 -> 9

console.log(longestStreak(a1)); // 4

const a2 = new Node(9);
const b2 = new Node(9);
const c2 = new Node(1);
const d2 = new Node(9);
const e2 = new Node(9);
const f2 = new Node(9);

a2.next = b2;
b2.next = c2;
c2.next = d2;
d2.next = e2;
e2.next = f2;

// 9 -> 9 -> 1 -> 9 -> 9 -> 9

console.log(longestStreak(a2)); // 3

const a3 = new Node(5);
const b3 = new Node(5);

a3.next = b3;

// 5 -> 5

console.log(longestStreak(a3)); // 2

const a4 = new Node(4);

// 4

console.log(longestStreak(a4)); // 1

console.log(longestStreak(null)); // 0
