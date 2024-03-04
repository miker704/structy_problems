// intersection
// Write a function,
// intersection, that takes in two vectors, a, b, as arguments.
// The function should return a new vector containing elements that are in both of the two vectors.

// You may assume that each input vector does not contain duplicate elements.

const intersection = (a, b) => {

}

console.log(intersection([4, 2, 1, 6], [3, 6, 9, 2, 10])); // -> [2,6]
console.log(intersection([2, 4, 6], [4, 2])); // -> [2,4]
console.log(intersection([4, 2, 1], [1, 2, 4, 6])); // -> [1,2,4]
console.log(intersection([0, 1, 2], [10, 11])); // -> []
const a = [];
const b = [];
for (let i = 0; i < 50000; i += 1) {
    a.push(i);
    b.push(i);
}
console.log(intersection(a, b)); // -> [0,1,2,3,..., 49999]