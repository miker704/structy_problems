// binary search
// Write a function, binarySearch, that takes in a sorted array of numbers and a target. 
// The function should return the index where the target can be found within the array. 
// If the target is not found in the array, then return -1.

// You may assume that the input array contains unique numbers sorted in increasing order.

// Your function must implement the binary search algorithm.
// https://en.wikipedia.org/wiki/Binary_search_algorithm


const binarySearch = (numbers, target) => {
    // todo
    let first = 0;
    let last = numbers.length - 1;
    let mid = Math.floor((first + last) / 2);

    while (first <= last) {

        if (numbers[mid] > target) {
            last = mid - 1;
        }
        else if (numbers[mid] === target) {
            return mid;
        }
        else if (numbers[mid] < target) {
            first = mid + 1;
        }
        mid = Math.floor((first + last) / 2);
    }

    return -1;
};


const recursiveBinarySearch = (numbers, target) => {
    if (numbers.length === 0) { return -1; }
    let mid = Math.floor((numbers.length - 1) / 2);
    if (numbers[mid] === target) { return mid; }
    if (numbers[mid] > target) { return recursiveBinarySearch(numbers.slice(0, mid), target); }
    if (numbers[mid] < target) {
        let result = recursiveBinarySearch(numbers.slice(mid + 1), target);
        if (result === -1) { return -1; }
        return mid + 1 + result;
    }


};
console.log(binarySearch([0, 1, 2, 3, 4, 5, 6, 7, 8], 6)); // -> 6
console.log(binarySearch([0, 6, 8, 12, 16, 19, 20, 24, 28], 27)); // -> -1
console.log(binarySearch([0, 6, 8, 12, 16, 19, 20, 28], 8)); // -> 2
console.log(binarySearch([0, 6, 8, 12, 16, 19, 20, 24, 28], 28)); // -> 8
console.log(binarySearch([7, 9], 7)); // -> 0
console.log(binarySearch([7, 9], 9)); // -> 1
console.log(binarySearch([7, 9], 12)); // -> -1
console.log(binarySearch([7], 7)); // -> 0
console.log(binarySearch([], 7)); // -> -1


console.log("RBS");
console.log(recursiveBinarySearch([0, 1, 2, 3, 4, 5, 6, 7, 8], 6)); // -> 6
console.log(recursiveBinarySearch([0, 6, 8, 12, 16, 19, 20, 24, 28], 27)); // -> -1
console.log(recursiveBinarySearch([0, 6, 8, 12, 16, 19, 20, 28], 8)); // -> 2
console.log(recursiveBinarySearch([0, 6, 8, 12, 16, 19, 20, 24, 28], 28)); // -> 8
console.log(recursiveBinarySearch([7, 9], 7)); // -> 0
console.log(recursiveBinarySearch([7, 9], 9)); // -> 1
console.log(recursiveBinarySearch([7, 9], 12)); // -> -1
console.log(recursiveBinarySearch([7], 7)); // -> 0
console.log(recursiveBinarySearch([], 7)); // -> -1